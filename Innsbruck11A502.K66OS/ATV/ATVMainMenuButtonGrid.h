/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRGridView.h"
#import "AppleTV-Structs.h"

@class NSDictionary, NSArray;

__attribute__((visibility("hidden")))
@interface ATVMainMenuButtonGrid : BRGridView {
	BOOL _itemsNeedUpdating;	// 88 = 0x58
	BOOL _focusedItemNeedsUpdating;	// 89 = 0x59
	BOOL _updatingFocusedItem;	// 90 = 0x5a
	NSArray *_items;	// 92 = 0x5c
	NSDictionary *_buttonTemplateInfo;	// 96 = 0x60
	long _numberOfColumns;	// 100 = 0x64
	id _itemTitleBlock;	// 104 = 0x68
	id _itemImageBlock;	// 108 = 0x6c
	id _itemIconBadgeCountBlock;	// 112 = 0x70
	BOOL _shouldAlignCenter;	// 116 = 0x74
	BOOL _allowsReordering;	// 117 = 0x75
	int _navigationalBias;	// 120 = 0x78
}
@property(assign, nonatomic) BOOL allowsReordering;	// G=0xf7049; S=0xf7059; @synthesize=_allowsReordering
@property(readonly, assign, nonatomic) NSDictionary *buttonTemplateInfo;	// G=0xf6ff9; @synthesize=_buttonTemplateInfo
@property(assign, nonatomic) int navigationalBias;	// G=0xf7029; S=0xf7039; @synthesize=_navigationalBias
@property(assign, nonatomic) long numberOfColumns;	// G=0xf6fe9; S=0xf6b65; @synthesize=_numberOfColumns
@property(assign, nonatomic) BOOL shouldAlignCenter;	// G=0xf7009; S=0xf7019; @synthesize=_shouldAlignCenter
- (id)init;	// 0xf6061
- (id)initWithLayout:(id)layout;	// 0xf60a1
- (void)_centerSubcontrols;	// 0xf6249
- (id)_itemIconBadgeCountBlock;	// 0xf6919
- (id)_itemImageBlock;	// 0xf6909
- (id)_itemTitleBlock;	// 0xf68f9
- (float)_rowHeightForControlsInRange:(NSRange)range controls:(id)controls;	// 0xf6861
- (void)_updateFocusedItem;	// 0xf69dd
// declared property getter: - (BOOL)allowsReordering;	// 0xf7049
- (void)bindItemIconBadgeCountWithBlock:(id)block;	// 0xf69a1
- (void)bindItemImageWithBlock:(id)block;	// 0xf6965
- (void)bindItemTitleWithBlock:(id)block;	// 0xf6929
// declared property getter: - (id)buttonTemplateInfo;	// 0xf6ff9
- (BOOL)canMoveItemAtIndex:(long)index;	// 0xf6da5
- (id)dataItemAtIndex:(unsigned)index;	// 0xf6b19
- (id)dataItems;	// 0xf6a91
- (void)dealloc;	// 0xf6149
- (void)didFocusItemAtIndex:(long)index;	// 0xf6f61
- (id)focusedControlForEvent:(id)event focusPoint:(CGPoint *)point;	// 0xf67bd
- (id)initialFocus;	// 0xf66ad
- (id)itemAtIndex:(long)index;	// 0xf6c3d
- (void)layoutSubcontrols;	// 0xf688d
- (BOOL)moveItemAtIndex:(long)index toIndex:(long)index2;	// 0xf6dbd
// declared property getter: - (int)navigationalBias;	// 0xf7029
// declared property getter: - (long)numberOfColumns;	// 0xf6fe9
- (void)populateDataCache:(id)cache;	// 0xf6b8d
- (CGPoint)positionForFocusCandidate:(id)focusCandidate;	// 0xf6469
- (CGPoint)scrollControl:(id)control adjustScrollPosition:(CGPoint)position;	// 0xf64f9
// declared property setter: - (void)setAllowsReordering:(BOOL)reordering;	// 0xf7059
// declared property setter: - (void)setNavigationalBias:(int)bias;	// 0xf7039
// declared property setter: - (void)setNumberOfColumns:(long)columns;	// 0xf6b65
// declared property setter: - (void)setShouldAlignCenter:(BOOL)alignCenter;	// 0xf7019
// declared property getter: - (BOOL)shouldAlignCenter;	// 0xf7009
- (long)targetIndexForMoveFromItemAtIndex:(long)index toProposedIndex:(long)proposedIndex;	// 0xf6ec5
- (void)updateBoundFocusedItem;	// 0xf6229
- (void)updateBoundItems;	// 0xf6209
@end

