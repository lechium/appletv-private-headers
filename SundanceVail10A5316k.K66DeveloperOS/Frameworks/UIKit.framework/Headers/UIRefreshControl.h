/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIControl.h"

@class UIScrollView, _UIRefreshControlContentView, UIColor, NSAttributedString;

@interface UIRefreshControl : UIControl {
@private
	int _style;	// 108 = 0x6c
	_UIRefreshControlContentView *_contentView;	// 112 = 0x70
	UIScrollView *_scrollView;	// 116 = 0x74
	float _refreshControlHeight;	// 120 = 0x78
	float _visibleHeight;	// 124 = 0x7c
	float _snappingHeight;	// 128 = 0x80
	BOOL _insetsApplied;	// 132 = 0x84
	BOOL _adjustingInsets;	// 133 = 0x85
	UIEdgeInsets _appliedInsets;	// 136 = 0x88
	int _refreshControlState;	// 152 = 0x98
}
@property(readonly, assign, nonatomic, getter=_isApplyingInsets) BOOL _applyingInsets;	// G=0x304c6699; 
@property(readonly, assign, nonatomic) float _refreshControlHeight;	// G=0x304c6051; 
@property(readonly, assign, nonatomic) float _snappingHeight;	// G=0x304c6689; 
@property(readonly, assign, nonatomic) float _visibleHeight;	// G=0x304c627d; 
@property(readonly, assign, nonatomic, getter=_appliedInsets) UIEdgeInsets appliedInsets;	// G=0x304c66a9; 
@property(retain, nonatomic) NSAttributedString *attributedTitle;	// G=0x304c5aa5; S=0x304c5a95; 
@property(readonly, assign, nonatomic) int refreshControlState;	// G=0x304c6ee9; @synthesize=_refreshControlState
@property(readonly, assign, nonatomic, getter=isRefreshing) BOOL refreshing;	// G=0x304c5959; 
@property(readonly, assign, nonatomic) int style;	// G=0x304c5f2d; 
@property(retain, nonatomic) UIColor *tintColor;	// G=0x304c5a85; S=0x304c5a75; 
+ (Class)_contentViewClassForStyle:(int)style;	// 0x304c5575
+ (id)_defaultColor;	// 0x304c54e5
- (id)init;	// 0x304c58f9
- (id)initWithCoder:(id)coder;	// 0x304c55fd
- (id)initWithFrame:(CGRect)frame;	// 0x304c58b5
- (id)initWithStyle:(int)style;	// 0x304c5849
- (void)_addInsetHeight:(float)height;	// 0x304c69bd
- (void)_addInsets;	// 0x304c695d
// declared property getter: - (UIEdgeInsets)_appliedInsets;	// 0x304c66a9
- (id)_attributedTitle;	// 0x304c617d
- (id)_contentView;	// 0x304c5f3d
- (void)_didScroll;	// 0x304c6845
// declared property getter: - (BOOL)_isApplyingInsets;	// 0x304c6699
- (CGPoint)_originForContentOffset:(CGPoint)contentOffset;	// 0x304c66cd
- (void)_populateArchivedSubviews:(id)subviews;	// 0x304c57f5
- (int)_recomputeNewState;	// 0x304c628d
// declared property getter: - (float)_refreshControlHeight;	// 0x304c6051
- (void)_removeInsetHeight:(float)height;	// 0x304c6ad1
- (void)_removeInsets;	// 0x304c698d
- (void)_resizeToFitContents;	// 0x304c61bd
- (void)_setAttributedTitle:(id)title;	// 0x304c6139
- (void)_setRefreshControlState:(int)state notify:(BOOL)notify;	// 0x304c6d61
- (void)_setTintColor:(id)color;	// 0x304c6061
- (void)_setVisibleHeight:(float)height;	// 0x304c6505
// declared property getter: - (float)_snappingHeight;	// 0x304c6689
- (id)_tintColor;	// 0x304c60cd
- (void)_update;	// 0x304c6855
- (void)_updateSnappingHeight;	// 0x304c656d
// declared property getter: - (float)_visibleHeight;	// 0x304c627d
- (float)_visibleHeightForContentOffset:(CGPoint)contentOffset origin:(CGPoint)origin;	// 0x304c6789
// declared property getter: - (id)attributedTitle;	// 0x304c5aa5
- (void)beginRefreshing;	// 0x304c6be5
- (void)dealloc;	// 0x304c590d
- (void)didMoveToSuperview;	// 0x304c5da1
- (void)encodeWithCoder:(id)coder;	// 0x304c5711
- (void)endRefreshing;	// 0x304c6bf9
// declared property getter: - (BOOL)isRefreshing;	// 0x304c5959
// declared property getter: - (int)refreshControlState;	// 0x304c6ee9
- (float)revealedFraction;	// 0x304c5971
// declared property setter: - (void)setAttributedTitle:(id)title;	// 0x304c5a95
- (void)setBounds:(CGRect)bounds;	// 0x304c5ba9
- (void)setFrame:(CGRect)frame;	// 0x304c5ab5
- (void)setRefreshControlState:(int)state;	// 0x304c6d4d
// declared property setter: - (void)setTintColor:(id)color;	// 0x304c5a75
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x304c5ca1
- (void)sizeToFit;	// 0x304c5d2d
// declared property getter: - (int)style;	// 0x304c5f2d
// declared property getter: - (id)tintColor;	// 0x304c5a85
- (void)willMoveToSuperview:(id)superview;	// 0x304c5d8d
@end

