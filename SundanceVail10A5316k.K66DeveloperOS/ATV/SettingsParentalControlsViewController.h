/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"

@class NSInvocation, NSArray;

__attribute__((visibility("hidden")))
@interface SettingsParentalControlsViewController : BRViewController {
	BOOL _correctPIN;	// 100 = 0x64
	NSInvocation *_correctPINAction;	// 104 = 0x68
	NSArray *_pcMerchants;	// 108 = 0x6c
}
- (id)init;	// 0x8ebcd
- (void).cxx_destruct;	// 0x8f0d9
- (void)_askForPINWithCorrectPINAction:(SEL)correctPINAction;	// 0x910f9
- (void)_askForPINWithCorrectPINAction:(SEL)correctPINAction argument:(void *)argument;	// 0x9110d
- (id)_buildPasscodeControllerWithMode:(int)mode;	// 0x907bd
- (void)_changePIN;	// 0x8fb0d
- (id)_controlledMerchants;	// 0x8f99d
- (void)_handlePCEnabledSectionSelectionForRow:(long)row;	// 0x8f911
- (void)_handlePCStoreSectionSelectionForRow:(long)row;	// 0x8f93d
- (void)_iterateRatingThresholdForMediaType:(id)mediaType;	// 0x90bf5
- (id)_nameKeyForRatingSystemID:(int)ratingSystemID;	// 0x91371
- (id)_ratingThresholdStringForMediaType:(id)mediaType;	// 0x90891
- (void)_reloadMenuItems;	// 0x8fab5
- (void)_setTextForPCApplicationsSectionMenuItem:(id)pcapplicationsSectionMenuItem atRow:(long)row;	// 0x8f241
- (void)_setTextForPCMatchSectionMenuItem:(id)pcmatchSectionMenuItem atRow:(long)row;	// 0x8f10d
- (void)_setTextForPCStoreSectionMenuItem:(id)pcstoreSectionMenuItem atRow:(long)row;	// 0x8f46d
- (void)_successfulPINEntry:(id)entry;	// 0x912d5
- (void)_toggleExplicitContentMode;	// 0x90541
- (void)_toggleITunesMatchMode;	// 0x8fc0d
- (void)_toggleMerchantModeForIndex:(long)index;	// 0x8fec9
- (void)_toggleParentalControls;	// 0x8fdd9
- (void)_togglePurchaseRentalMode;	// 0x9019d
- (void)_toggleRatingSystem;	// 0x90259
- (void)_toggleRestrictMoviesMode;	// 0x90441
- (void)_toggleRestrictTVShowsMode;	// 0x904c1
- (void)dealloc;	// 0x8ed29
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x8f035
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x8ed95
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x8ef75
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x8ef39
- (long)numberOfSectionsInList:(id)list;	// 0x8ef35
@end
