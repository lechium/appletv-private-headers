/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIViewController.h"

@class NSMutableArray, UIPageControl, UIScrollView, UIView;
@protocol UIPageControllerDelegate;

@interface UIPageController : UIViewController {
	NSMutableArray *_viewControllers;	// 156 = 0x9c
	UIView *_wrapperViews[3];	// 160 = 0xa0
	int _notificationState[3];	// 172 = 0xac
	UIScrollView *_scrollView;	// 184 = 0xb8
	UIPageControl *_pageControl;	// 188 = 0xbc
	id<UIPageControllerDelegate> _delegate;	// 192 = 0xc0
	int _pageSpacing;	// 196 = 0xc4
	int _visibleIndex;	// 200 = 0xc8
	int _pageCount;	// 204 = 0xcc
	struct {
		unsigned _firstTouchForView : 1;
		unsigned _isTap : 1;
		unsigned _isDelayed : 1;
		unsigned _sentTouchesEnded : 1;
		unsigned _abandonForwardingRecord : 1;
	} _pageControllerFlags;	// 208 = 0xd0
}
@property(assign, nonatomic) id<UIPageControllerDelegate> delegate;	// G=0x3597d4c1; S=0x357f85cd; @synthesize=_delegate
@property(assign, nonatomic) BOOL displaysPageControl;	// G=0x3597d1a5; S=0x3597d1ed; 
@property(assign, nonatomic) int pageCount;	// G=0x3597d07d; S=0x357f9ad1; 
@property(assign, nonatomic) float pageSpacing;	// G=0x3597cfa9; S=0x357f8529; 
@property(assign, nonatomic) int visibleIndex;	// G=0x357fa5d9; S=0x357f9b95; 
@property(readonly, assign, nonatomic) UIViewController *visibleViewController;	// G=0x357faf5d; 
@property(assign, nonatomic) BOOL wraps;	// G=0x3597d08d; S=0x3597d0a1; 
- (void)_adjustScrollViewContentInsets;	// 0x357f8e15
- (BOOL)_allowsAutorotation;	// 0x3597d281
- (void)_createPageControl;	// 0x357f9881
- (BOOL)_doesVisibleViewControllerSupportInterfaceOrientation:(int)orientation;	// 0x357fa845
- (void)_getRotationContentSettings:(XXStruct_tXAZTC *)settings;	// 0x3597d35d
- (BOOL)_hasNextViewController;	// 0x357f9621
- (BOOL)_hasPreviousViewController;	// 0x357f8f25
- (BOOL)_hasVisibleViewController;	// 0x3597d03d
- (BOOL)_isSupportedInterfaceOrientation:(int)orientation;	// 0x357fa7d9
- (BOOL)_isViewControllerBeingUnloaded:(id)unloaded atIndex:(int)index;	// 0x357f9575
- (id)_loadNextViewController;	// 0x357f96f9
- (id)_loadPreviousViewController;	// 0x357f8ff9
- (id)_loadVisibleViewControllerAndNotify:(BOOL)notify;	// 0x357f91d1
- (BOOL)_needToLoadNext;	// 0x3597d001
- (BOOL)_needToLoadPrevious;	// 0x3597cfc5
- (BOOL)_needToLoadVisible;	// 0x357fa355
- (id)_nextViewController;	// 0x357f9689
- (int)_nextViewControllerNotificationState;	// 0x357fc311
- (void)_notifyNextViewController:(int)controller animated:(BOOL)animated;	// 0x357fc335
- (void)_notifyPreviousViewController:(int)controller animated:(BOOL)animated;	// 0x357fcf49
- (void)_notifyViewController:(id)controller ofState:(int)state previousState:(int)state3 animated:(BOOL)animated;	// 0x357fa70d
- (void)_notifyVisibleViewController:(int)controller animated:(BOOL)animated;	// 0x357fa685
- (void)_pageChanged:(id)changed;	// 0x3597d1b9
- (id)_pageControllerScrollView;	// 0x357f8681
- (id)_previousViewController;	// 0x357f8f89
- (int)_previousViewControllerNotificationState;	// 0x357fc325
- (void)_replaceViewControllerAtIndex:(int)index withViewController:(id)viewController;	// 0x357f932d
- (id)_scrollView;	// 0x357f86d9
- (void)_scrollView:(id)view boundsDidChangeToSize:(CGSize)bounds;	// 0x357f8c05
- (void)_scrollViewDidEndPaging;	// 0x357fce69
- (void)_scrollViewDidScroll:(id)_scrollView forceUpdate:(BOOL)update;	// 0x357fa969
- (CGRect)_scrollViewFrame;	// 0x357f8a3d
- (void)_scrollViewWillBeginPaging;	// 0x357fc27d
- (void)_setNextViewController:(id)controller;	// 0x357f986d
- (void)_setNextViewControllerNotificationState:(int)state;	// 0x357fa341
- (void)_setPreviousViewController:(id)controller;	// 0x357f960d
- (void)_setPreviousViewControllerNotificationState:(int)state;	// 0x357fa31d
- (void)_setVisibleViewController:(id)controller;	// 0x357f9319
- (void)_setVisibleViewControllerNotificationState:(int)state;	// 0x357fa32d
- (BOOL)_shouldUseOnePartRotation;	// 0x3597d335
- (id)_visibleViewController;	// 0x357f915d
- (int)_visibleViewControllerNotificationState;	// 0x357fa6f9
- (void)dealloc;	// 0x357fc089
// declared property getter: - (id)delegate;	// 0x3597d4c1
- (void)didAnimateFirstHalfOfRotationToInterfaceOrientation:(int)interfaceOrientation;	// 0x3597d431
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;	// 0x3597d495
// declared property getter: - (BOOL)displaysPageControl;	// 0x3597d1a5
- (int)indexOfViewController:(id)viewController;	// 0x357fa885
- (void)loadView;	// 0x357f86e9
// declared property getter: - (int)pageCount;	// 0x3597d07d
// declared property getter: - (float)pageSpacing;	// 0x3597cfa9
- (void)reloadViewControllerAtIndex:(int)index;	// 0x357fa24d
- (id)rotatingFooterView;	// 0x3597d30d
- (id)rotatingHeaderView;	// 0x3597d2e5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x357f85cd
// declared property setter: - (void)setDisplaysPageControl:(BOOL)control;	// 0x3597d1ed
// declared property setter: - (void)setPageCount:(int)count;	// 0x357f9ad1
// declared property setter: - (void)setPageSpacing:(float)spacing;	// 0x357f8529
// declared property setter: - (void)setVisibleIndex:(int)index;	// 0x357f9b95
- (void)setVisibleIndex:(int)index animated:(BOOL)animated;	// 0x3597d05d
- (void)setVisibleIndex:(int)index preservingLoadedViewControllers:(BOOL)controllers animated:(BOOL)animated;	// 0x357f9bb5
// declared property setter: - (void)setWraps:(BOOL)wraps;	// 0x3597d0a1
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x357fa82d
- (void)viewDidAppear:(BOOL)view;	// 0x357fae95
- (void)viewDidDisappear:(BOOL)view;	// 0x357fb719
- (void)viewDidUnload;	// 0x3597ce81
- (void)viewWillAppear:(BOOL)view;	// 0x357fa63d
- (void)viewWillDisappear:(BOOL)view;	// 0x357fb4ed
// declared property getter: - (int)visibleIndex;	// 0x357fa5d9
// declared property getter: - (id)visibleViewController;	// 0x357faf5d
- (void)willAnimateFirstHalfOfRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x3597d3f9
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x3597d3c1
- (void)willAnimateSecondHalfOfRotationFromInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x3597d45d
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x3597d389
// declared property getter: - (BOOL)wraps;	// 0x3597d08d
@end
