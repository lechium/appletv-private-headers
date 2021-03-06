/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIViewController.h"

@class UINavigationBar, UINavigationTransitionView, UIToolbar, UIView, NSArray;
@protocol UINavigationControllerDelegate;

@interface UINavigationController : UIViewController {
@private
	UIView *_containerView;	// 156 = 0x9c
	UINavigationBar *_navigationBar;	// 160 = 0xa0
	Class _navigationBarClass;	// 164 = 0xa4
	UIToolbar *_toolbar;	// 168 = 0xa8
	UIView *_navigationTransitionView;	// 172 = 0xac
	UIEdgeInsets _currentScrollContentInsetDelta;	// 176 = 0xb0
	UIEdgeInsets _previousScrollContentInsetDelta;	// 192 = 0xc0
	float _previousScrollContentOffsetDelta;	// 208 = 0xd0
	float _bottomInsetDelta;	// 212 = 0xd4
	UIViewController *_disappearingViewController;	// 216 = 0xd8
	id<UINavigationControllerDelegate> _delegate;	// 220 = 0xdc
	int _savedNavBarStyleBeforeSheet;	// 224 = 0xe0
	int _savedToolBarStyleBeforeSheet;	// 228 = 0xe4
	struct {
		unsigned isAppearingAnimated : 1;
		unsigned isAlreadyPoppingNavigationItem : 1;
		unsigned isNavigationBarHidden : 1;
		unsigned isToolbarShown : 1;
		unsigned needsDeferredTransition : 1;
		unsigned isTransitioning : 1;
		unsigned lastOperation : 4;
		unsigned lastOperationAnimated : 1;
		unsigned deferredTransition : 8;
		unsigned didPreloadKeyboardAnimation : 1;
		unsigned didHideBottomBar : 1;
		unsigned isChangingOrientationForPop : 1;
		unsigned pretendNavBarHidden : 1;
		unsigned avoidMovingNavBarOffscreenBeforeUnhiding : 1;
		unsigned searchBarHidNavBar : 1;
		unsigned useSystemPopoverBarAppearance : 1;
	} _navigationControllerFlags;	// 232 = 0xe8
	Class _toolbarClass;	// 236 = 0xec
}
@property(assign, nonatomic, setter=_setToolbarClass:) Class _toolbarClass;	// G=0x32e60c99; S=0x32e5e709; @synthesize
@property(assign, nonatomic) BOOL avoidMovingNavBarOffscreenBeforeUnhiding;	// G=0x32e5ebc1; S=0x32e5ebd5; 
@property(readonly, assign, nonatomic) UIViewController *bottomViewController;	// G=0x32d0c489; 
@property(assign) CGSize contentSizeForViewInPopover;	// G=0x32e603a5; S=0x32e60341; converted property
@property(assign, nonatomic) id<UINavigationControllerDelegate> delegate;	// G=0x32cd3171; S=0x32caf315; @synthesize=_delegate
@property(retain) UIViewController *detailViewController;	// G=0x32e60cad; S=0x32e60ca9; 
@property(retain, nonatomic) UIViewController *disappearingViewController;	// G=0x32cb96c9; S=0x32cd4ee9; @synthesize=_disappearingViewController
@property(assign) BOOL isExpanded;	// G=0x32e60cb1; S=0x32e60cb5; 
@property(readonly, assign, nonatomic) UINavigationBar *navigationBar;	// G=0x32cafbb1; 
@property(assign) Class navigationBarClass;	// G=0x32e5eb1d; S=0x32d4772d; converted property
@property(assign, nonatomic, getter=isNavigationBarHidden) BOOL navigationBarHidden;	// G=0x32cb1591; S=0x32d397b1; 
@property(readonly, assign, nonatomic) UINavigationTransitionView *navigationTransitionView;	// G=0x32cd29f1; 
@property(assign, nonatomic) BOOL needsDeferredTransition;	// G=0x32cb8975; S=0x32cb4a09; 
@property(assign, nonatomic) BOOL pretendNavBarHidden;	// G=0x32e5eb55; S=0x32e5eb69; 
@property(readonly, assign, nonatomic) UIViewController *previousViewController;	// G=0x32d0668d; 
@property(assign) BOOL searchBarHidNavBar;	// G=0x32e5eb81; S=0x32e5eb99; converted property
@property(readonly, assign, nonatomic) UIToolbar *toolbar;	// G=0x32d237a9; 
@property(assign, nonatomic, getter=isToolbarHidden) BOOL toolbarHidden;	// G=0x32cb46a9; S=0x32d2339d; 
@property(readonly, assign, nonatomic) UIViewController *topViewController;	// G=0x32cb4dd1; 
@property(copy, nonatomic) NSArray *viewControllers;	// G=0x32ca3621; S=0x32db78dd; 
@property(readonly, assign, nonatomic) UIViewController *visibleViewController;	// G=0x32cba585; 
- (id)initWithCoder:(id)coder;	// 0x32e5e82d
- (id)initWithNavigationBarClass:(Class)navigationBarClass toolbarClass:(Class)aClass;	// 0x32e5e7e1
- (id)initWithNibName:(id)nibName bundle:(id)bundle;	// 0x32caf289
- (id)initWithRootViewController:(id)rootViewController;	// 0x32d0baad
- (void)__viewWillLayoutSubviews;	// 0x32cbae49
- (CGSize)_adjustedContentSizeForPopover:(CGSize)popover;	// 0x32e60175
- (BOOL)_allowsAutorotation;	// 0x32d24019
- (BOOL)_animationParametersForHidingNavigationBar:(BOOL)hidingNavigationBar lastOperation:(int)operation edge:(int *)edge duration:(double *)duration;	// 0x32e0fde1
- (void)_applyScrollContentInsetDelta:(UIEdgeInsets)delta toScrollView:(id)scrollView;	// 0x32cd25a5
- (void)_applyScrollContentOffsetDelta:(float)delta toScrollView:(id)scrollView;	// 0x32dc8681
- (void)_clearLastOperation;	// 0x32cd4ead
- (void)_computeAndApplyScrollContentInsetDeltaForViewController:(id)viewController;	// 0x32cbba85
- (void)_configureToolbar;	// 0x32d239dd
- (int)_deferredTransition;	// 0x32e5efa9
- (void)_didBecomeContentViewControllerOfPopover:(id)popover;	// 0x32e609b5
- (void)_didResignContentViewControllerOfPopover:(id)popover;	// 0x32e60a91
- (BOOL)_doesTopViewControllerSupportInterfaceOrientation:(int)orientation;	// 0x32cb97f1
- (id)_existingToolbar;	// 0x32cb9629
- (CGRect)_frameForContainerViewInSheetForBounds:(CGRect)bounds displayingTopView:(BOOL)view andBottomView:(BOOL)view3;	// 0x32e60465
- (CGRect)_frameForViewController:(id)viewController;	// 0x32cd2739
- (void)_getRotationContentSettings:(XXStruct_tXAZTC *)settings;	// 0x32df4fe5
- (BOOL)_hasTranslucentNavigationBarIncludingViewController:(id)controller;	// 0x32cd2419
- (void)_hideOrShowBottomBarIfNeededWithTransition:(int)transition;	// 0x32cb4a59
- (void)_hideShowNavigationBarDidStop:(id)_hideShowNavigationBar finished:(id)finished context:(void *)context;	// 0x32d39c51
- (void)_hideShowToolbarDidStop:(id)_hideShowToolbar finished:(id)finished context:(void *)context;	// 0x32d49091
- (BOOL)_isNavigationBarVisible;	// 0x32cd2a85
- (BOOL)_isPresentationContextByDefault;	// 0x32caf311
- (BOOL)_isSupportedInterfaceOrientation:(int)orientation;	// 0x32cb9725
- (BOOL)_isTransitioning;	// 0x32e5eef5
- (void)_layoutTopViewController;	// 0x32cb9639
- (void)_layoutTopViewControllerInSheet;	// 0x32e5fab5
- (void)_layoutTopViewControllerInSheetWithPopoverView:(id)popoverView;	// 0x32e5fb05
- (void)_layoutTopViewControllerOutOfSheet;	// 0x32e5ff55
- (void)_layoutViewController:(id)controller;	// 0x32cbb96d
- (id)_moreListTitle;	// 0x32e60bf9
- (id)_navigationItems;	// 0x32d39d49
- (int)_navigationTransitionForUITransition:(int)uitransition;	// 0x32cd31dd
- (void)_popViewControllerAndUpdateInterfaceOrientationAnimated:(BOOL)animated;	// 0x32e5f0f9
- (id)_popViewControllerWithTransition:(int)transition allowPoppingLast:(BOOL)last;	// 0x32d06479
- (void)_positionNavigationBarHidden:(BOOL)hidden;	// 0x32cb15a5
- (void)_positionNavigationBarHidden:(BOOL)hidden edge:(int)edge;	// 0x32cb15b9
- (void)_positionToolbarHidden:(BOOL)hidden;	// 0x32cb946d
- (void)_positionToolbarHidden:(BOOL)hidden edge:(int)edge;	// 0x32cb9481
- (void)_prepareForDismissalInPopover:(id)popover;	// 0x32e60589
- (void)_prepareForPresentationInPopover:(id)popover;	// 0x32e6064d
- (BOOL)_reallyWantsFullScreenLayout;	// 0x32cafb09
- (void)_releaseContainerViews;	// 0x32d4101d
- (void)_resetBottomBarHiddenState;	// 0x32d11ea9
- (void)_restoreOriginalInsetAndOffsetToScrollView:(id)scrollView;	// 0x32dc8701
- (float)_scrollViewBottomContentInset;	// 0x32cd24ed
- (void)_sendNavigationBarToBack;	// 0x32e5ebed
- (void)_setNavigationBarHidden:(BOOL)hidden edge:(int)edge duration:(double)duration;	// 0x32d39809
- (void)_setNavigationBarHidden:(BOOL)hidden edgeIfNotNavigating:(int)navigating duration:(double)duration;	// 0x32db4119
// declared property setter: - (void)_setToolbarClass:(Class)aClass;	// 0x32e5e709
- (void)_setToolbarHidden:(BOOL)hidden edge:(int)edge duration:(double)duration;	// 0x32d233f9
- (void)_setViewControllers:(id)controllers transition:(int)transition;	// 0x32db7945
- (BOOL)_shouldBottomBarBeHidden;	// 0x32cb4cd1
- (BOOL)_shouldChildViewControllerUseFullScreenLayout:(id)layout;	// 0x32d41f4d
- (BOOL)_shouldNavigationBarInsetViewController:(id)controller;	// 0x32cd2a01
- (BOOL)_shouldPersistViewWhenCoding;	// 0x32e5e9bd
- (BOOL)_shouldPopFromLandscapeToPortraitOrientation;	// 0x32d065dd
- (BOOL)_shouldUseOnePartRotation;	// 0x32d23fd1
- (id)_snapshotView;	// 0x32e5efbd
- (void)_startDeferredTransitionIfNeeded;	// 0x32cbae59
- (void)_startTransition:(int)transition fromViewController:(id)viewController toViewController:(id)viewController3;	// 0x32cbb01d
- (void)_tabBarControllerDidFinishShowingTabBar:(id)_tabBarController;	// 0x32de31d1
// declared property getter: - (Class)_toolbarClass;	// 0x32e60c99
- (int)_transitionForOldViewControllers:(id)oldViewControllers newViewControllers:(id)controllers;	// 0x32e5eacd
- (void)_updateBarsForCurrentInterfaceOrientation;	// 0x32cb9405
- (void)_updateBottomBarHiddenState;	// 0x32d11ed1
- (void)_updateLayoutForStatusBarAndInterfaceOrientation;	// 0x32cb93f5
- (void)_updateToolbarItemsFromViewController:(id)viewController animated:(BOOL)animated;	// 0x32d23d15
- (id)_viewForContentInPopover;	// 0x32e607d9
- (void)_willBecomeContentViewControllerOfPopover:(id)popover;	// 0x32e607e9
// declared property getter: - (BOOL)avoidMovingNavBarOffscreenBeforeUnhiding;	// 0x32e5ebc1
// declared property getter: - (id)bottomViewController;	// 0x32d0c489
// converted property getter: - (CGSize)contentSizeForViewInPopover;	// 0x32e603a5
- (void)dealloc;	// 0x32d40f51
- (id)defaultFirstResponder;	// 0x32d5b0ad
- (id)defaultPNGName;	// 0x32e5fa45
// declared property getter: - (id)delegate;	// 0x32cd3171
// declared property getter: - (id)detailViewController;	// 0x32e60cad
- (void)didAnimateFirstHalfOfRotationToInterfaceOrientation:(int)interfaceOrientation;	// 0x32e5f8f1
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;	// 0x32df9951
- (void)didShowViewController:(id)controller animated:(BOOL)animated;	// 0x32cd4f0d
// declared property getter: - (id)disappearingViewController;	// 0x32cb96c9
- (BOOL)editing;	// 0x32e5eecd
- (void)encodeWithCoder:(id)coder;	// 0x32e5e9c1
// declared property getter: - (BOOL)isExpanded;	// 0x32e60cb1
- (BOOL)isModalInPopover;	// 0x32e60709
// declared property getter: - (BOOL)isNavigationBarHidden;	// 0x32cb1591
- (BOOL)isShown;	// 0x32e5ed69
// declared property getter: - (BOOL)isToolbarHidden;	// 0x32cb46a9
- (int)lastOperation;	// 0x32d139d5
- (void)loadView;	// 0x32caf82d
- (void)makeModalViewControllerTopViewController;	// 0x32e5f4c5
- (int)modalTransitionStyle;	// 0x32d5743d
- (id)moreListImage;	// 0x32e60c21
- (id)moreListSelectedImage;	// 0x32e60c49
- (id)moreListTableCell;	// 0x32e60c71
// declared property getter: - (id)navigationBar;	// 0x32cafbb1
- (void)navigationBar:(id)bar buttonClicked:(int)clicked;	// 0x32e5f985
- (BOOL)navigationBar:(id)bar shouldPopItem:(id)item;	// 0x32d06a99
// converted property getter: - (Class)navigationBarClass;	// 0x32e5eb1d
- (void)navigationBarDidChangeOpacity:(id)navigationBar;	// 0x32d40e6d
- (void)navigationBarDidResizeForPrompt:(id)navigationBar;	// 0x32df4515
// declared property getter: - (id)navigationTransitionView;	// 0x32cd29f1
- (void)navigationTransitionView:(id)view didEndTransition:(int)transition fromView:(id)view3 toView:(id)view4;	// 0x32cd4a79
- (void)navigationTransitionView:(id)view didStartTransition:(int)transition;	// 0x32cd3ab9
- (double)navigationTransitionView:(id)view durationForTransition:(int)transition;	// 0x32d55331
// declared property getter: - (BOOL)needsDeferredTransition;	// 0x32cb8975
- (id)popToRootViewControllerAnimated:(BOOL)rootViewControllerAnimated;	// 0x32d50339
- (id)popToRootViewControllerWithTransition:(int)transition;	// 0x32d50355
- (id)popToViewController:(id)viewController animated:(BOOL)animated;	// 0x32cea589
- (id)popToViewController:(id)viewController transition:(int)transition;	// 0x32cea5a9
- (id)popToViewControllerWithSnapbackIdentifier:(id)snapbackIdentifier animated:(BOOL)animated;	// 0x32e12ae1
- (id)popViewControllerAnimated:(BOOL)animated;	// 0x32d55059
- (id)popViewControllerWithAnimationTransition:(int)animationTransition duration:(double)duration curve:(int)curve;	// 0x32e5f3f1
- (id)popViewControllerWithTransition:(int)transition;	// 0x32d06465
// declared property getter: - (BOOL)pretendNavBarHidden;	// 0x32e5eb55
// declared property getter: - (id)previousViewController;	// 0x32d0668d
- (void)purgeMemoryForReason:(int)reason;	// 0x32e5edb9
- (void)pushViewController:(id)controller animated:(BOOL)animated;	// 0x32caf325
- (void)pushViewController:(id)controller transition:(int)transition;	// 0x32cebfa1
- (void)pushViewController:(id)controller transition:(int)transition forceImmediate:(BOOL)immediate;	// 0x32caf34d
- (id)rotatingFooterView;	// 0x32e5f865
- (id)rotatingHeaderView;	// 0x32df4ec9
// converted property getter: - (BOOL)searchBarHidNavBar;	// 0x32e5eb81
// declared property setter: - (void)setAvoidMovingNavBarOffscreenBeforeUnhiding:(BOOL)unhiding;	// 0x32e5ebd5
// converted property setter: - (void)setContentSizeForViewInPopover:(CGSize)popover;	// 0x32e60341
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x32caf315
// declared property setter: - (void)setDetailViewController:(id)controller;	// 0x32e60ca9
// declared property setter: - (void)setDisappearingViewController:(id)controller;	// 0x32cd4ee9
- (void)setEditing:(BOOL)editing animated:(BOOL)animated;	// 0x32e5ee9d
// declared property setter: - (void)setIsExpanded:(BOOL)expanded;	// 0x32e60cb5
- (void)setNavigationBar:(id)bar;	// 0x32cb10b9
// converted property setter: - (void)setNavigationBarClass:(Class)aClass;	// 0x32d4772d
// declared property setter: - (void)setNavigationBarHidden:(BOOL)hidden;	// 0x32d397b1
- (void)setNavigationBarHidden:(BOOL)hidden animated:(BOOL)animated;	// 0x32d397c5
- (void)setNeedsDeferredTransition;	// 0x32cb49f5
// declared property setter: - (void)setNeedsDeferredTransition:(BOOL)transition;	// 0x32cb4a09
// declared property setter: - (void)setPretendNavBarHidden:(BOOL)hidden;	// 0x32e5eb69
// converted property setter: - (void)setSearchBarHidNavBar:(BOOL)bar;	// 0x32e5eb99
- (void)setToolbar:(id)toolbar;	// 0x32e5ec39
// declared property setter: - (void)setToolbarHidden:(BOOL)hidden;	// 0x32d2339d
- (void)setToolbarHidden:(BOOL)hidden animated:(BOOL)animated;	// 0x32d233b1
// declared property setter: - (void)setViewControllers:(id)controllers;	// 0x32db78dd
- (void)setViewControllers:(id)controllers animated:(BOOL)animated;	// 0x32db78f1
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x32cb97d9
- (id)tabBarItem;	// 0x32d0c299
// declared property getter: - (id)toolbar;	// 0x32d237a9
// declared property getter: - (id)topViewController;	// 0x32cb4dd1
- (void)updateTabBarItemForViewController:(id)viewController;	// 0x32e5fa6d
- (void)updateTitleForViewController:(id)viewController;	// 0x32cced21
// declared property getter: - (id)viewControllers;	// 0x32ca3621
- (void)viewDidAppear:(BOOL)view;	// 0x32ce61d5
- (void)viewDidDisappear:(BOOL)view;	// 0x32ceaa95
- (void)viewDidMoveToWindow:(id)view shouldAppearOrDisappear:(BOOL)disappear;	// 0x32cb8a5d
- (void)viewDidUnload;	// 0x32e5ee8d
- (void)viewWillAppear:(BOOL)view;	// 0x32cb87a1
- (void)viewWillDisappear:(BOOL)view;	// 0x32cea991
// declared property getter: - (id)visibleViewController;	// 0x32cba585
- (BOOL)wasLastOperationAnimated;	// 0x32d2a461
- (void)willAnimateFirstHalfOfRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x32e5f8b9
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x32df826d
- (void)willAnimateSecondHalfOfRotationFromInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x32e5f94d
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x32df5541
- (void)willShowViewController:(id)controller animated:(BOOL)animated;	// 0x32cd3181
@end

