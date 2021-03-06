/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class UIStatusBarItemView, UIStatusBarForegroundView;

__attribute__((visibility("hidden")))
@interface UIStatusBarLayoutManager : NSObject {
@private
	UIStatusBarForegroundView *_foregroundView;	// 4 = 0x4
	int _region;	// 8 = 0x8
	UIStatusBarItemView *_itemViews[22];	// 12 = 0xc
}
@property(assign, nonatomic) UIStatusBarForegroundView *foregroundView;	// G=0x322080d1; S=0x32071b5d; @synthesize=_foregroundView
- (id)initWithRegion:(int)region foregroundView:(id)view;	// 0x31fa759d
- (id)_createViewForItem:(id)item withData:(XXStruct_LyCp7D *)data actions:(int)actions;	// 0x31f99141
- (CGRect)_frameForItemView:(id)itemView startPosition:(float)position;	// 0x31f9ab75
- (SEL)_itemSortSelector;	// 0x31f8cd65
- (id)_itemViews;	// 0x31f8b615
- (id)_itemViewsSortedForLayout;	// 0x31f8ccb1
- (float)_positionAfterPlacingItemView:(id)view startPosition:(float)position;	// 0x31f8cdf5
- (void)_positionNewItemViewsWithEnabledItems:(BOOL *)enabledItems;	// 0x31f9a95d
- (void)_prepareEnabledItemType:(int)type withEnabledItems:(BOOL *)enabledItems withData:(XXStruct_LyCp7D *)data actions:(int)actions itemAppearing:(BOOL *)appearing itemDisappearing:(BOOL *)disappearing;	// 0x31f8b1bd
- (CGRect)_repositionedNewFrame:(CGRect)frame widthDelta:(float)delta;	// 0x32208359
- (float)_startPosition;	// 0x31f8cc41
- (BOOL)_updateItemView:(id)view withData:(XXStruct_LyCp7D *)data actions:(int)actions animated:(BOOL)animated;	// 0x31f8b671
- (id)_viewForItem:(id)item;	// 0x31f9b601
- (float)_widthNeededForItemView:(id)itemView;	// 0x31f8cf09
- (void)clearOverlapFromItems:(id)items;	// 0x31f9b62d
- (void)dealloc;	// 0x32071b6d
- (float)distributeOverlap:(float)overlap amongItems:(id)items;	// 0x32208179
// declared property getter: - (id)foregroundView;	// 0x322080d1
- (BOOL)itemIsVisible:(id)visible;	// 0x31fa0325
- (void)itemView:(id)view widthChangedBy:(float)by;	// 0x322082b1
- (void)makeVisibleItemsPerformPendedActions;	// 0x31f8d0c1
- (void)positionInvisibleItems;	// 0x31f8cb1d
- (BOOL)prepareDoubleHeightItemWithEnabledItems:(BOOL *)enabledItems;	// 0x32208111
- (BOOL)prepareEnabledItems:(BOOL *)items withData:(XXStruct_LyCp7D *)data actions:(int)actions;	// 0x31f8b10d
- (CGRect)rectForItems:(id)items;	// 0x31f9b4a9
- (void)reflowWithVisibleItems:(id)visibleItems duration:(double)duration;	// 0x31f9b8f9
- (void)removeDisabledItems:(BOOL *)items;	// 0x31f8ca7d
- (float)removeOverlap:(float)overlap fromItems:(id)items;	// 0x31f9b7d9
// declared property setter: - (void)setForegroundView:(id)view;	// 0x32071b5d
- (BOOL)updateDoubleHeightItem;	// 0x322080e1
- (BOOL)updateItemsWithData:(XXStruct_LyCp7D *)data actions:(int)actions animated:(BOOL)animated;	// 0x31f8b541
- (float)widthNeededForItem:(id)item;	// 0x31f9b7ad
- (float)widthNeededForItems:(id)items;	// 0x31f9b6ed
@end

