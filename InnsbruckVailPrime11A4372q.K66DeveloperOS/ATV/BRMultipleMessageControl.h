/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"
#import "ATVAutoDismissable.h"

@class ATVMessage, NSString, BRListView, BRGridView, BRHeaderControl;

__attribute__((visibility("hidden")))
@interface BRMultipleMessageControl : BRControl <ATVAutoDismissable> {
	NSString *_identifier;	// 84 = 0x54
	BRHeaderControl *_headerControl;	// 88 = 0x58
	BRGridView *_grid;	// 92 = 0x5c
	ATVMessage *_message;	// 96 = 0x60
	BRListView *_buttonList;	// 100 = 0x64
	long _gridConfig_NumberOfColumns;	// 104 = 0x68
	long _gridConfig_NumberOfItems;	// 108 = 0x6c
}
- (id)initWithIdentifier:(id)identifier message:(id)message;	// 0x1c2ffd
- (void).cxx_destruct;	// 0x1c375d
- (void)_configureGrid:(id)grid;	// 0x1c2ded
- (void)_handleWindowMaxBoundsChanged;	// 0x1c3341
- (BOOL)autoDismiss;	// 0x1c3309
- (void)dealloc;	// 0x1c3299
- (id)grid:(id)grid itemAtIndex:(long)index;	// 0x1c35a1
- (void)layoutSubcontrols;	// 0x1c33ad
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x1c36d5
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x1c3759
- (long)numberOfColumnsInGrid:(id)grid;	// 0x1c3591
- (long)numberOfItemsInGrid:(id)grid;	// 0x1c3581
- (void)setAllowAutoDismiss:(BOOL)dismiss withResult:(int)result;	// 0x1c3305
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x1c3351
@end

