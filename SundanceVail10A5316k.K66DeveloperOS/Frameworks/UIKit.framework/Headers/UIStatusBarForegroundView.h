/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIView.h"
#import "UIKit-Structs.h"

@class UIStatusBarLayoutManager, UIStatusBarComposedData;

__attribute__((visibility("hidden")))
@interface UIStatusBarForegroundView : UIView {
@private
	int _foregroundStyle;	// 84 = 0x54
	BOOL _itemIsEnabled[23];	// 88 = 0x58
	UIStatusBarLayoutManager *_layoutManagers[3];	// 112 = 0x70
	int _ignoreDataLevel;	// 124 = 0x7c
	UIStatusBarComposedData *_pendedData;	// 128 = 0x80
	int _pendedActions;	// 132 = 0x84
}
@property(readonly, assign, nonatomic) int foregroundStyle;	// G=0x300ae6f9; @synthesize=_foregroundStyle
- (id)initWithFrame:(CGRect)frame foregroundStyle:(int)style;	// 0x300bddf1
- (void)_cleanUpAfterDataChange;	// 0x3009e6b9
- (void)_cleanUpAfterSimpleReflow;	// 0x300bff65
- (id)_computeVisibleItemsPreservingHistory:(BOOL)history;	// 0x30381339
- (void)_reflowItemViewsCrossfadingCenterWithDuration:(double)duration;	// 0x30380b79
- (void)_reflowItemViewsWithDuration:(double)duration suppressCenterAnimation:(BOOL)animation preserveHistory:(BOOL)history;	// 0x303811ed
- (BOOL)_tryToPlaceItem:(id)placeItem inItemArray:(id)itemArray layoutManager:(id)manager roomRemaining:(float *)remaining allowSwap:(BOOL)swap swappedItem:(id *)item;	// 0x301c3f69
- (void)dealloc;	// 0x301e2149
// declared property getter: - (int)foregroundStyle;	// 0x300ae6f9
- (BOOL)ignoringData;	// 0x3009cb55
- (void)reflowItemViews:(BOOL)views suppressCenterAnimation:(BOOL)animation;	// 0x300bff09
- (void)reflowItemViewsCrossfadingCenter:(id)center duration:(double)duration;	// 0x30380909
- (void)reflowItemViewsForgettingEitherSideItemHistory;	// 0x30381199
- (void)setStatusBarData:(id)data actions:(int)actions animated:(BOOL)animated;	// 0x3009c8c1
- (void)startIgnoringData;	// 0x3009cb71
- (void)stopIgnoringData:(BOOL)data;	// 0x3009f2a5
@end

