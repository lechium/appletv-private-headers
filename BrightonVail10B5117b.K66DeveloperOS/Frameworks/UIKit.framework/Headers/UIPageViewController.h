/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "_UIQueuingScrollViewDelegate.h"
#import "_UIQueuingScrollViewDataSource.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIViewController.h"

@class NSMutableDictionary, _UIQueuingScrollView, NSArray, NSDictionary, UITapGestureRecognizer, _UIPageCurl, NSMutableArray, UIPanGestureRecognizer, _UIPageViewControllerContentView;
@protocol UIPageViewControllerDelegate, UIPageViewControllerDataSource;

@interface UIPageViewController : UIViewController <UIGestureRecognizerDelegate, _UIQueuingScrollViewDelegate, _UIQueuingScrollViewDataSource> {
	id<UIPageViewControllerDelegate> _delegate;	// 196 = 0xc4
	id<UIPageViewControllerDataSource> _dataSource;	// 200 = 0xc8
	int _transitionStyle;	// 204 = 0xcc
	int _navigationOrientation;	// 208 = 0xd0
	int _spineLocation;	// 212 = 0xd4
	BOOL _doubleSided;	// 216 = 0xd8
	BOOL _pageControlRequiresValidation;	// 217 = 0xd9
	NSArray *_viewControllers;	// 220 = 0xdc
	_UIPageCurl *_pageCurl;	// 224 = 0xe0
	UIPanGestureRecognizer *_panGestureRecognizer;	// 228 = 0xe4
	UITapGestureRecognizer *_tapGestureRecognizer;	// 232 = 0xe8
	BOOL _stashingViewControllersForRotation;	// 236 = 0xec
	NSArray *_viewControllersStashedForRotation;	// 240 = 0xf0
	BOOL _interfaceRotating;	// 244 = 0xf4
	NSMutableArray *_rotationSnapshotViews;	// 248 = 0xf8
	int _spineLocationPriorToInterfaceRotation;	// 252 = 0xfc
	UIEdgeInsets _tapRegionInsets;	// 256 = 0x100
	CGSize _tapRegionBreadths;	// 272 = 0x110
	UIEdgeInsets _effectiveTapRegionInsets;	// 280 = 0x118
	CGSize _effectiveTapRegionBreadths;	// 296 = 0x128
	CGRect *_tapRegions;	// 304 = 0x130
	float _pageSpacing;	// 308 = 0x134
	NSMutableDictionary *_cachedViewControllersForCurl;	// 312 = 0x138
	NSMutableArray *_cachedViewControllersForScroll;	// 316 = 0x13c
	NSDictionary *_incomingAndOutgoingViewControllersForManualTransition;	// 320 = 0x140
	int _lastKnownNavigationDirection;	// 324 = 0x144
	int _disableAutorotationCount;	// 328 = 0x148
	struct {
		unsigned delegateWantsTransitionWillBegin : 1;
		unsigned delegateWantsTransitionCompleted : 1;
		unsigned delegateCustomizesSpineLocationForInterfaceOrientation : 1;
		unsigned dataSourceSuppliesBeforeViewController : 1;
		unsigned dataSourceSuppliesAfterViewController : 1;
		unsigned dataSourceSuppliesPageCount : 1;
		unsigned dataSourceSuppliesPageNumber : 1;
	} _delegateFlags;	// 332 = 0x14c
}
@property(readonly, assign, nonatomic) _UIPageViewControllerContentView *_contentView;	// G=0x33033be1; 
@property(readonly, assign, nonatomic, getter=_isInterfaceRotating) BOOL _interfaceRotating;	// G=0x3303acc9; @synthesize
@property(readonly, assign, nonatomic) int _navigationOrientation;	// G=0x33033291; 
@property(readonly, assign, nonatomic, getter=_isPageControlVisible) BOOL _pageControlVisible;	// G=0x33033c41; 
@property(assign, nonatomic, setter=_setPageSpacing:) float _pageSpacing;	// G=0x33033cfd; S=0x33033d0d; 
@property(readonly, assign, nonatomic) _UIQueuingScrollView *_scrollView;	// G=0x33033c19; 
@property(readonly, assign, nonatomic) int _transitionStyle;	// G=0x33033271; 
@property(retain, nonatomic, setter=_setViewControllers:) NSArray *_viewControllers;	// G=0x3303ac89; S=0x3303ac99; @synthesize
@property(retain, nonatomic, setter=_setViewControllersStashedForRotation:) NSArray *_viewControllersStashedForRotation;	// G=0x3303aca9; S=0x3303acb9; @synthesize
@property(assign, nonatomic) id<UIPageViewControllerDataSource> dataSource;	// G=0x330330c9; S=0x330330d9; 
@property(assign, nonatomic) id<UIPageViewControllerDelegate> delegate;	// G=0x33032fe1; S=0x33032ff1; 
@property(assign, nonatomic, getter=isDoubleSided) BOOL doubleSided;	// G=0x33033311; S=0x33033321; 
@property(readonly, assign, nonatomic) NSArray *gestureRecognizers;	// G=0x330333ad; 
@property(readonly, assign, nonatomic) int navigationOrientation;	// G=0x330332a1; 
@property(readonly, assign, nonatomic) int spineLocation;	// G=0x33033301; 
@property(readonly, assign, nonatomic) int transitionStyle;	// G=0x33033281; 
@property(readonly, assign, nonatomic) NSArray *viewControllers;	// G=0x330333f9; 
+ (id)_incomingViewControllerKeys;	// 0x33036e59
+ (BOOL)_isNavigationOrientation:(int)orientation supportedForTransitionStyle:(int)transitionStyle;	// 0x33032635
+ (BOOL)_isSpineLocation:(int)location supportedForTransitionStyle:(int)transitionStyle;	// 0x33032649
+ (BOOL)_isSupportedTransitionStyle:(int)style;	// 0x33032621
+ (id)_outgoingViewControllerKeys;	// 0x33036df9
+ (id)stringForSpineLocation:(int)spineLocation;	// 0x330348a9
- (id)initWithCoder:(id)coder;	// 0x33032b65
- (id)initWithNibName:(id)nibName bundle:(id)bundle;	// 0x33032975
- (id)initWithTransitionStyle:(int)transitionStyle navigationOrientation:(int)orientation options:(id)options;	// 0x3303266d
- (void)_beginDisablingInterfaceAutorotation;	// 0x33036eb9
- (void)_cacheViewControllerForScroll:(id)scroll;	// 0x33038381
- (BOOL)_canHandleGestures;	// 0x33036941
- (void)_child:(id)child beginAppearanceTransition:(BOOL)transition animated:(BOOL)animated;	// 0x33034041
- (void)_child:(id)child beginAppearanceTransitionIfPossible:(BOOL)possible animated:(BOOL)animated;	// 0x3303410d
- (BOOL)_child:(id)child canBeginAppearanceTransition:(BOOL)transition;	// 0x33034091
- (void)_child:(id)child didRotateFromInterfaceOrientation:(int)interfaceOrientation;	// 0x330342e9
- (void)_child:(id)child endAppearanceTransitionIfPossible:(BOOL)possible;	// 0x330341dd
- (void)_child:(id)child willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x330342a5
- (void)_child:(id)child willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x33034261
- (BOOL)_childCanEndAppearanceTransition:(id)transition;	// 0x33034185
- (void)_childEndAppearanceTransition:(id)transition;	// 0x33034151
- (CGSize)_contentSizeForSize:(CGSize)size;	// 0x33033cad
// declared property getter: - (id)_contentView;	// 0x33033be1
- (void)_contentViewFrameOrBoundsDidChange;	// 0x33036545
- (CGRect)_disabledScrollingRegion;	// 0x33033b21
- (CGSize)_effectiveTapRegionBreadths;	// 0x33033891
- (UIEdgeInsets)_effectiveTapRegionInsets;	// 0x33033549
- (void)_endDisablingInterfaceAutorotation;	// 0x33036f1d
- (void)_flushViewController:(id)controller animated:(BOOL)animated;	// 0x3303a7a1
- (BOOL)_gestureRecognizerShouldBegin:(id)_gestureRecognizer;	// 0x33038fd5
- (void)_handlePanGesture:(id)gesture;	// 0x33039265
- (void)_handleTapGesture:(id)gesture;	// 0x33039941
- (id)_incomingViewControllersForGestureDrivenCurlInDirection:(int)direction;	// 0x3303877d
- (void)_invalidateEffectiveTapRegions;	// 0x330334d5
- (void)_invalidatePageCurl;	// 0x33034ac1
- (void)_invalidateViewControllersStashedForCurlFromDataSource;	// 0x33036dd9
- (BOOL)_isCurrentViewControllerStateValid;	// 0x33036705
// declared property getter: - (BOOL)_isInterfaceRotating;	// 0x3303acc9
// declared property getter: - (BOOL)_isPageControlVisible;	// 0x33033c41
- (int)_navigationEndDirectionInResponseToPanGestureRecognizer:(id)panGestureRecognizer suggestedVelocity:(float *)velocity;	// 0x330390d9
// declared property getter: - (int)_navigationOrientation;	// 0x33033291
- (id)_pageControl;	// 0x33033c85
- (void)_pageControlValueChanged:(id)changed;	// 0x3303aa55
// declared property getter: - (float)_pageSpacing;	// 0x33033cfd
- (void)_populateIncomingViewControllersInMap:(id)map withViewControllers:(id)viewControllers forCurlInDirection:(int)direction;	// 0x33036cdd
- (void)_populateOutgoingViewControllersInMap:(id)map;	// 0x33036c0d
- (id)_queuingScrollView:(id)view viewBefore:(BOOL)before view:(id)view3;	// 0x3303a699
- (int)_requestSpineLocationForInterfaceOrientationAndUpdateStashedViewControllers:(int)interfaceOrientationAndUpdateStashedViewControllers;	// 0x33034b01
// declared property getter: - (id)_scrollView;	// 0x33033c19
- (void)_sendChildViewWill:(BOOL)_sendChildView appear:(BOOL)appear animated:(BOOL)animated;	// 0x33034321
- (void)_setDisabledScrollingRegion:(CGRect)region;	// 0x33033b89
// declared property setter: - (void)_setPageSpacing:(float)spacing;	// 0x33033d0d
- (void)_setSpineLocation:(int)location;	// 0x330332b1
- (void)_setTapRegionBreadths:(CGSize)breadths;	// 0x33033ac9
- (void)_setTapRegionInsets:(UIEdgeInsets)insets;	// 0x33033801
// declared property setter: - (void)_setViewControllers:(id)controllers;	// 0x3303ac99
- (void)_setViewControllers:(id)controllers withCurlOfType:(int)type fromLocation:(CGPoint)location direction:(int)direction animated:(BOOL)animated notifyDelegate:(BOOL)delegate completion:(id)completion;	// 0x33036f99
- (void)_setViewControllers:(id)controllers withScrollInDirection:(int)direction animated:(BOOL)animated completion:(id)completion;	// 0x330383ed
// declared property setter: - (void)_setViewControllersStashedForRotation:(id)rotation;	// 0x3303acb9
- (BOOL)_shouldBeginNavigationInDirection:(int *)direction inResponseToPanGestureRecognizer:(id)panGestureRecognizer;	// 0x33038eb5
- (BOOL)_shouldCompleteManualCurlWithSuggestedVelocity:(float *)suggestedVelocity;	// 0x330391f5
- (BOOL)_shouldNavigateInDirection:(int *)direction inResponseToTapGestureRecognizer:(id)tapGestureRecognizer;	// 0x33038d1d
- (BOOL)_shouldNavigateInDirection:(int *)direction inResponseToVelocity:(float *)velocity ofGestureRecognizedByPanGestureRecognizer:(id)gestureRecognizedByPanGestureRecognizer;	// 0x33038de1
- (BOOL)_shouldPersistViewWhenCoding;	// 0x33032999
- (BOOL)_shouldSynthesizeSupportedOrientations;	// 0x330347bd
- (CGSize)_tapRegionBreadths;	// 0x33033aa9
- (UIEdgeInsets)_tapRegionInsets;	// 0x330337dd
- (CGRect *)_tapRegions;	// 0x330389c9
// declared property getter: - (int)_transitionStyle;	// 0x33033271
- (void)_updatePageControlViaDataSourceIfNecessary;	// 0x330399e9
- (NSRange)_validRangeForPresentationOfViewControllersWithSpineLocation:(int)spineLocation;	// 0x3303491d
- (id)_validatedViewControllersForPresentationOfViewControllers:(id)viewControllers validRange:(NSRange)range;	// 0x33034931
- (id)_validatedViewControllersForTransitionWithViewControllers:(id)viewControllers animated:(BOOL)animated;	// 0x33036769
- (id)_viewControllerAfterViewController:(id)controller;	// 0x330369e9
- (id)_viewControllerBefore:(BOOL)before viewController:(id)controller;	// 0x33036975
- (id)_viewControllerBeforeViewController:(id)controller;	// 0x330369d5
// declared property getter: - (id)_viewControllers;	// 0x3303ac89
- (id)_viewControllersForCurlWithViewControllers:(id)viewControllers direction:(int)direction;	// 0x330369fd
- (id)_viewControllersForPendingSpineLocation:(int)pendingSpineLocation;	// 0x33034995
// declared property getter: - (id)_viewControllersStashedForRotation;	// 0x3303aca9
// declared property getter: - (id)dataSource;	// 0x330330c9
- (void)dealloc;	// 0x33032e31
// declared property getter: - (id)delegate;	// 0x33032fe1
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;	// 0x330362b5
- (void)encodeWithCoder:(id)coder;	// 0x3303299d
// declared property getter: - (id)gestureRecognizers;	// 0x330333ad
// declared property getter: - (BOOL)isDoubleSided;	// 0x33033311
- (void)loadView;	// 0x33033dbd
// declared property getter: - (int)navigationOrientation;	// 0x330332a1
- (void)queuingScrollView:(id)view didBailoutOfScrollAndRevealedView:(id)scrollAndRevealedView;	// 0x3303a561
- (void)queuingScrollView:(id)view didCommitManualScroll:(BOOL)scroll toRevealView:(id)revealView concealView:(id)view4 direction:(int)direction animated:(BOOL)animated canComplete:(BOOL)complete;	// 0x33039e6d
- (void)queuingScrollView:(id)view didEndManualScroll:(BOOL)scroll toRevealView:(id)revealView direction:(int)direction animated:(BOOL)animated didFinish:(BOOL)finish didComplete:(BOOL)complete;	// 0x3303a251
- (void)queuingScrollView:(id)view didFlushView:(id)view2 animated:(BOOL)animated;	// 0x3303a9f9
- (id)queuingScrollView:(id)view viewAfterView:(id)view2;	// 0x3303a781
- (id)queuingScrollView:(id)view viewBeforeView:(id)view2;	// 0x3303a761
- (void)queuingScrollView:(id)view willManuallyScroll:(BOOL)scroll toRevealView:(id)revealView concealView:(id)view4 animated:(BOOL)animated;	// 0x33039aed
- (BOOL)queuingScrollViewShouldLayoutSubviews:(id)queuingScrollView;	// 0x3303aa3d
// declared property setter: - (void)setDataSource:(id)source;	// 0x330330d9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x33032ff1
// declared property setter: - (void)setDoubleSided:(BOOL)sided;	// 0x33033321
- (void)setViewControllers:(id)controllers direction:(int)direction animated:(BOOL)animated completion:(id)completion;	// 0x3303864d
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;	// 0x33034039
- (BOOL)shouldAutomaticallyForwardRotationMethods;	// 0x3303403d
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x3303464d
// declared property getter: - (int)spineLocation;	// 0x33033301
// declared property getter: - (int)transitionStyle;	// 0x33033281
// declared property getter: - (id)viewControllers;	// 0x330333f9
- (void)viewDidAppear:(BOOL)view;	// 0x33034575
- (void)viewDidDisappear:(BOOL)view;	// 0x33034605
- (void)viewWillAppear:(BOOL)view;	// 0x33034461
- (void)viewWillDisappear:(BOOL)view;	// 0x330345bd
- (void)viewWillUnload;	// 0x33034011
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x33035661
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x33034e61
@end

