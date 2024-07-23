// #import <sys/utsname.h>
#import <rootless.h>
// #include <roothide.h>
#import <YouTubeHeader/YTPlayerViewController.h>
#import <YouTubeHeader/YTPlayerView.h>
#import <YouTubeHeader/YTMainAppVideoPlayerOverlayViewController.h>
// #import <YouTubeHeader/MLHAMSBDLSampleBufferRenderingView.h>
#import <YouTubeHeader/YTMainAppEngagementPanelViewController.h>
#import <YouTubeHeader/YTEngagementPanelContainerViewController.h>
#import <YouTubeHeader/YTLabel.h>
#import <YouTubeHeader/YTAlertView.h>
#import <YouTubeHeader/YTHUDMessage.h>
#import <YouTubeHeader/GOOHUDManagerInternal.h>
#import <YouTubeHeader/YTUIUtils.h>

// Keys
#define kTweak @"DEMC_enabled"
#define kColorViews @"DEMC_colorViewsEnabled"
#define kSafeAreaConstant @"DEMC_safeAreaConstant"
#define kDisableAmbientMode @"DEMC_disableAmbientMode"
#define kLimitZoomToFill @"DEMC_limitZoomToFill"
#define kEnableForAllVideos @"DEMC_enableForAllVideos"

#define THRESHOLD 1.97
#define DEFAULT_CONSTANT 21.5
#define IS_ENABLED(k) [[NSUserDefaults standardUserDefaults] boolForKey:k]

void DEMC_showSnackBar(NSString *text);
NSBundle *DEMC_getTweakBundle();
CGFloat constant; // Makes rendering view a bit larger since constraining to safe area leaves a gap between the notch/Dynamic Island and video
