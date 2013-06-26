/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIViewController.h"

@class UIPageControl, UIView, UIScrollView, NSMutableArray;
@protocol UIPageControllerDelegate;

@interface UIPageController : UIViewController {
	NSMutableArray *_viewControllers;	// 196 = 0xc4
	UIView *_wrapperViews[3];	// 200 = 0xc8
	int _notificationState[3];	// 212 = 0xd4
	UIScrollView *_scrollView;	// 224 = 0xe0
	UIPageControl *_pageControl;	// 228 = 0xe4
	id<UIPageControllerDelegate> _delegate;	// 232 = 0xe8
	int _pageSpacing;	// 236 = 0xec
	int _visibleIndex;	// 240 = 0xf0
	int _pageCount;	// 244 = 0xf4
	struct {
		unsigned _firstTouchForView : 1;
		unsigned _isTap : 1;
		unsigned _isDelayed : 1;
		unsigned _sentTouchesEnded : 1;
		unsigned _abandonForwardingRecord : 1;
	} _pageControllerFlags;	// 248 = 0xf8
}
@property(assign, nonatomic) id<UIPageControllerDelegate> delegate;	// G=0x32e0670d; S=0x32c6f1bd; @synthesize=_delegate
@property(assign, nonatomic) BOOL displaysPageControl;	// G=0x32e0642d; S=0x32e06479; 
@property(assign, nonatomic) int pageCount;	// G=0x32e062fd; S=0x32c70775; 
@property(assign, nonatomic) float pageSpacing;	// G=0x32e06225; S=0x32c6f11d; 
@property(assign, nonatomic) int visibleIndex;	// G=0x32c72115; S=0x32c70845; 
@property(readonly, assign, nonatomic) UIViewController *visibleViewController;	// G=0x32c72a35; 
@property(assign, nonatomic) BOOL wraps;	// G=0x32e06311; S=0x32e06325; 
- (void)_adjustScrollViewContentInsets;	// 0x32c6fa35
- (BOOL)_allowsAutorotation;	// 0x32e0650d
- (void)_createPageControl;	// 0x32c70525
- (BOOL)_doesVisibleViewControllerSupportInterfaceOrientation:(int)orientation;	// 0x32c72349
- (void)_getRotationContentSettings:(XXStruct_tXAZTC *)settings;	// 0x32e06641
- (BOOL)_hasNextViewController;	// 0x32c702b9
- (BOOL)_hasPreviousViewController;	// 0x32c6fb75
- (BOOL)_hasVisibleViewController;	// 0x32e062bd
- (BOOL)_isSupportedInterfaceOrientation:(int)orientation;	// 0x32e06575
- (BOOL)_isViewControllerBeingUnloaded:(id)unloaded atIndex:(int)index;	// 0x32c70209
- (id)_loadNextViewController;	// 0x32c70395
- (id)_loadPreviousViewController;	// 0x32c6fc55
- (id)_loadVisibleViewControllerAndNotify:(BOOL)notify;	// 0x32c6fe39
- (BOOL)_needToLoadNext;	// 0x32e06281
- (BOOL)_needToLoadPrevious;	// 0x32e06241
- (BOOL)_needToLoadVisible;	// 0x32c70fed
- (id)_nextViewController;	// 0x32c70325
- (int)_nextViewControllerNotificationState;	// 0x32c7363d
- (void)_notifyNextViewController:(int)controller animated:(BOOL)animated;	// 0x32c7585d
- (void)_notifyPreviousViewController:(int)controller animated:(BOOL)animated;	// 0x32c73651
- (void)_notifyViewController:(id)controller ofState:(int)state previousState:(int)state3 animated:(BOOL)animated;	// 0x32c72255
- (void)_notifyVisibleViewController:(int)controller animated:(BOOL)animated;	// 0x32c721c5
- (void)_pageChanged:(id)changed;	// 0x32e06441
- (id)_pageControllerScrollView;	// 0x32c6f269
- (id)_previousViewController;	// 0x32c6fbe1
- (int)_previousViewControllerNotificationState;	// 0x32c73629
- (void)_replaceViewControllerAtIndex:(int)index withViewController:(id)viewController;	// 0x32c6ffa1
- (id)_scrollView;	// 0x32c6f2c9
- (void)_scrollView:(id)view boundsDidChangeToSize:(CGSize)bounds;	// 0x32c6f815
- (void)_scrollViewDidEndPaging;	// 0x32c746c9
- (void)_scrollViewDidScroll:(id)_scrollView forceUpdate:(BOOL)update;	// 0x32c72471
- (CGRect)_scrollViewFrame;	// 0x32c6f635
- (void)_scrollViewWillBeginPaging;	// 0x32c72d75
- (void)_setNextViewController:(id)controller;	// 0x32c7050d
- (void)_setNextViewControllerNotificationState:(int)state;	// 0x32c70fd5
- (void)_setPreviousViewController:(id)controller;	// 0x32c702a5
- (void)_setPreviousViewControllerNotificationState:(int)state;	// 0x32c70fb1
- (void)_setVisibleViewController:(id)controller;	// 0x32c6ff89
- (void)_setVisibleViewControllerNotificationState:(int)state;	// 0x32c70fc1
- (BOOL)_shouldUseOnePartRotation;	// 0x32e06619
- (id)_visibleViewController;	// 0x32c6fdc1
- (int)_visibleViewControllerNotificationState;	// 0x32c72241
- (void)dealloc;	// 0x32c8d2c1
// declared property getter: - (id)delegate;	// 0x32e0670d
- (void)didAnimateFirstHalfOfRotationToInterfaceOrientation:(int)interfaceOrientation;	// 0x32e066a5
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;	// 0x32c763a1
// declared property getter: - (BOOL)displaysPageControl;	// 0x32e0642d
- (int)indexOfViewController:(id)viewController;	// 0x32c7238d
- (void)loadView;	// 0x32c6f2dd
// declared property getter: - (int)pageCount;	// 0x32e062fd
// declared property getter: - (float)pageSpacing;	// 0x32e06225
- (void)reloadViewControllerAtIndex:(int)index;	// 0x32c70ed9
- (id)rotatingFooterView;	// 0x32e065f1
- (id)rotatingHeaderView;	// 0x32e065c9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x32c6f1bd
// declared property setter: - (void)setDisplaysPageControl:(BOOL)control;	// 0x32e06479
// declared property setter: - (void)setPageCount:(int)count;	// 0x32c70775
// declared property setter: - (void)setPageSpacing:(float)spacing;	// 0x32c6f11d
// declared property setter: - (void)setVisibleIndex:(int)index;	// 0x32c70845
- (void)setVisibleIndex:(int)index animated:(BOOL)animated;	// 0x32e062dd
- (void)setVisibleIndex:(int)index preservingLoadedViewControllers:(BOOL)controllers animated:(BOOL)animated;	// 0x32c70865
// declared property setter: - (void)setWraps:(BOOL)wraps;	// 0x32e06325
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x32c7232d
- (void)viewDidAppear:(BOOL)view;	// 0x32c7296d
- (void)viewDidDisappear:(BOOL)view;	// 0x32c8c625
- (void)viewDidUnload;	// 0x32e060e1
- (void)viewWillAppear:(BOOL)view;	// 0x32c7217d
- (void)viewWillDisappear:(BOOL)view;	// 0x32c8c3e5
// declared property getter: - (int)visibleIndex;	// 0x32c72115
// declared property getter: - (id)visibleViewController;	// 0x32c72a35
- (void)willAnimateFirstHalfOfRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x32e0666d
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x32c76065
- (void)willAnimateSecondHalfOfRotationFromInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x32e066d1
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x32c75bad
// declared property getter: - (BOOL)wraps;	// 0x32e06311
@end
