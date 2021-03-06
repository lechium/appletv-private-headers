/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"

@class NSDictionary, BRMediaMenuView, NSArray;

__attribute__((visibility("hidden")))
@interface SettingsStoreFrontViewController : BRViewController {
	BRMediaMenuView *_menu;	// 104 = 0x68
	NSArray *_sortedStoreFronts;	// 108 = 0x6c
	NSDictionary *_currentStoreFront;	// 112 = 0x70
	unsigned _currentIndex;	// 116 = 0x74
	unsigned _pendingIndex;	// 120 = 0x78
}
- (id)init;	// 0x9e03d
- (void).cxx_destruct;	// 0x9eaed
- (id)_accessibilityLanguageForStoreFront:(id)storeFront;	// 0x9e235
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x9e619
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x9e455
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x9e5f9
- (void)updateBoundCurrentStoreFront;	// 0x9e9a9
- (void)updateBoundStoreFronts;	// 0x9e8ad
@end

