#import <YouTubeHeader/YTSettingsCell.h>
#import <YouTubeHeader/YTSettingsSectionItemManager.h>
#import <YouTubeHeader/YTSettingsPickerViewController.h>
#import <YouTubeHeader/YTSettingsSectionItem.h>
#import <YouTubeHeader/YTSettingsViewController.h>

#define DEMC @"DontEatMyContent"
#define VERSION [NSString stringWithFormat:@"v%@", @(OS_STRINGIFY(TWEAK_VERSION))]
#define LOCALIZED_STRING(s) [bundle localizedStringForKey:s value:nil table:nil]

extern void DEMC_showSnackBar(NSString *text);
extern NSBundle *DEMC_getTweakBundle();
extern CGFloat constant;

// Category for additional functions
@interface YTSettingsSectionItemManager (DontEatMyContent)
- (void)updateDEMCSectionWithEntry:(id)entry;
@end
