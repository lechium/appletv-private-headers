/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"

@class NSArray, BRMediaMenuView, ATVImage;

__attribute__((visibility("hidden")))
@interface MEInternetAddSiteController : BRViewController {
	BRMediaMenuView *_addSiteListViewControl;	// 104 = 0x68
	NSArray *_currentSiteData;	// 108 = 0x6c
	ATVImage *_trashCanImage;	// 112 = 0x70
}
- (id)init;	// 0x19706d
- (void).cxx_destruct;	// 0x197a0d
- (id)createMediaMenuView;	// 0x19721d
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x1978b5
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x1977b1
- (float)list:(id)list heightForSectionHeader:(long)sectionHeader;	// 0x197769
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x1972c1
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x1976ed
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x197715
- (id)list:(id)list willFocusItemAtIndexPath:(id)indexPath;	// 0x1977e9
- (void)loadSiteData;	// 0x1971d9
- (long)numberOfSectionsInList:(id)list;	// 0x1976bd
- (void)wasExhumed;	// 0x19717d
- (void)wasPopped;	// 0x197139
@end

