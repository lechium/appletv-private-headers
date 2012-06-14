/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "AddressBookUI-Structs.h"
#import "ABPersonTabsLayoutManager.h"
#import <UIView.h> // Unknown library

@class UIImageView, UISegmentedControl, ABPersonTableViewDataSource, ABPersonTableView, ABPersonOverlayingContainerView, UIScrollView;
@protocol ABPersonTabsScrollView;

@interface ABPersonContainerView : UIView <ABPersonTabsLayoutManager> {
	UISegmentedControl *_contentSwitchingTabs;	// 84 = 0x54
@private
	UIView *_nonScrollableHeaderView;	// 88 = 0x58
	ABPersonTableView *_tableView;	// 92 = 0x5c
	ABPersonTableViewDataSource *_dataSource;	// 96 = 0x60
	ABPersonOverlayingContainerView *_overlayingContainerView;	// 100 = 0x64
	UIImageView *_contentSwitchingTabsPocketShadow;	// 104 = 0x68
	UIImageView *_contentSwitchingTabsBorder;	// 108 = 0x6c
	BOOL _hidesContentSwitchingTabs;	// 112 = 0x70
}
@property(retain, nonatomic) UISegmentedControl *contentSwitchingTabs;	// G=0x34cc9045; S=0x34cc818d; @synthesize=_contentSwitchingTabs
@property(retain, nonatomic) UIImageView *contentSwitchingTabsBorder;	// G=0x34cc9065; S=0x34cc8395; @synthesize=_contentSwitchingTabsBorder
@property(retain, nonatomic) UIImageView *contentSwitchingTabsPocketShadow;	// G=0x34cc9055; S=0x34cc8291; @synthesize=_contentSwitchingTabsPocketShadow
@property(readonly, assign, nonatomic) UIScrollView<ABPersonTabsScrollView> *currentScrollView;	// G=0x34cc8585; 
@property(assign, nonatomic) ABPersonTableViewDataSource *dataSource;	// G=0x34cc9025; S=0x34c6afa5; @synthesize=_dataSource
@property(assign, nonatomic) BOOL hidesContentSwitchingTabs;	// G=0x34cc9075; S=0x34cc8499; @synthesize=_hidesContentSwitchingTabs
@property(retain, nonatomic) UIView *nonScrollableHeaderView;	// G=0x34cc9005; S=0x34cc87a9; @synthesize=_nonScrollableHeaderView
@property(retain, nonatomic) ABPersonOverlayingContainerView *overlayingContainerView;	// G=0x34cc9035; S=0x34cc85ad; @synthesize=_overlayingContainerView
@property(retain, nonatomic) ABPersonTableView *tableView;	// G=0x34cc9015; S=0x34cc80a9; @synthesize=_tableView
// declared property getter: - (id)contentSwitchingTabs;	// 0x34cc9045
// declared property getter: - (id)contentSwitchingTabsBorder;	// 0x34cc9065
// declared property getter: - (id)contentSwitchingTabsPocketShadow;	// 0x34cc9055
// declared property getter: - (id)currentScrollView;	// 0x34cc8585
// declared property getter: - (id)dataSource;	// 0x34cc9025
- (void)dealloc;	// 0x34cc8009
- (void)didChangeContentOffset:(CGPoint)offset inScrollView:(id)scrollView;	// 0x34cc8ca1
- (float)heightForHeaderAndContentSwitchingTabs;	// 0x34cc88c9
- (float)heightNeededForContentSwitchingTabs;	// 0x34cc8845
// declared property getter: - (BOOL)hidesContentSwitchingTabs;	// 0x34cc9075
- (void)layoutSubviews;	// 0x34cc8f01
- (void)moveContentSwitchingTabsAboveView:(id)view inScrollView:(id)scrollView;	// 0x34cc8941
// declared property getter: - (id)nonScrollableHeaderView;	// 0x34cc9005
// declared property getter: - (id)overlayingContainerView;	// 0x34cc9035
- (id)prepareToRestoreTabsPosition;	// 0x34cc8d11
- (void)repositionContentSwitchingTabs;	// 0x34cc89e1
- (void)restoreTabsPosition:(id)position;	// 0x34cc8da1
// declared property setter: - (void)setContentSwitchingTabs:(id)tabs;	// 0x34cc818d
// declared property setter: - (void)setContentSwitchingTabsBorder:(id)border;	// 0x34cc8395
// declared property setter: - (void)setContentSwitchingTabsPocketShadow:(id)shadow;	// 0x34cc8291
// declared property setter: - (void)setDataSource:(id)source;	// 0x34c6afa5
- (void)setFrame:(CGRect)frame;	// 0x34c60275
// declared property setter: - (void)setHidesContentSwitchingTabs:(BOOL)tabs;	// 0x34cc8499
// declared property setter: - (void)setNonScrollableHeaderView:(id)view;	// 0x34cc87a9
// declared property setter: - (void)setOverlayingContainerView:(id)view;	// 0x34cc85ad
// declared property setter: - (void)setTableView:(id)view;	// 0x34cc80a9
// declared property getter: - (id)tableView;	// 0x34cc9015
- (id)viewContainingHeaderView;	// 0x34cc8159
@end

