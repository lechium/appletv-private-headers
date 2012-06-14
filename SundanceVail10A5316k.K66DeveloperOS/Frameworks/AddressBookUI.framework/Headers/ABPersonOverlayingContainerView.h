/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "ABPersonTabsScrollView.h"
#import "AddressBookUI-Structs.h"
#import <UIScrollView.h> // Unknown library

@class UIView;
@protocol ABPersonTabsLayoutManager;

@interface ABPersonOverlayingContainerView : UIScrollView <ABPersonTabsScrollView> {
	float _minimumBottomInset;	// 444 = 0x1bc
	UIEdgeInsets _savedContentInset;	// 448 = 0x1c0
@private
	UIView *_backgroundView;	// 464 = 0x1d0
	UIView *_abContentView;	// 468 = 0x1d4
	id<ABPersonTabsLayoutManager> _tabsLayoutManager;	// 472 = 0x1d8
}
@property(retain, nonatomic) UIView *backgroundView;	// G=0x34cc7fc9; S=0x34cc7be1; @synthesize=_backgroundView
@property(retain, nonatomic) UIView *contentView;	// G=0x34cc7fd9; S=0x34cc7c51; @synthesize=_abContentView
@property(assign, nonatomic) float minimumBottomInset;	// G=0x34cc7dfd; S=0x34cc7da5; 
@property(assign, nonatomic) id<ABPersonTabsLayoutManager> tabsLayoutManager;	// G=0x34cc7fe9; S=0x34cc7ff9; @synthesize=_tabsLayoutManager
- (void)_updateContentFrameAndSize;	// 0x34cc7af5
// declared property getter: - (id)backgroundView;	// 0x34cc7fc9
// declared property getter: - (id)contentView;	// 0x34cc7fd9
- (void)dealloc;	// 0x34cc7e85
- (void)layoutSubviews;	// 0x34cc7f7d
// declared property getter: - (float)minimumBottomInset;	// 0x34cc7dfd
// declared property setter: - (void)setBackgroundView:(id)view;	// 0x34cc7be1
- (void)setContentInset:(UIEdgeInsets)inset;	// 0x34cc7e0d
- (void)setContentOffset:(CGPoint)offset;	// 0x34cc7cf5
// declared property setter: - (void)setContentView:(id)view;	// 0x34cc7c51
- (void)setFrame:(CGRect)frame;	// 0x34cc7ee9
// declared property setter: - (void)setMinimumBottomInset:(float)inset;	// 0x34cc7da5
// declared property setter: - (void)setTabsLayoutManager:(id)manager;	// 0x34cc7ff9
// declared property getter: - (id)tabsLayoutManager;	// 0x34cc7fe9
@end

