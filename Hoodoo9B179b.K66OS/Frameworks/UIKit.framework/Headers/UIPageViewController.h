/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIViewController.h"

@class UIPanGestureRecognizer, _UIPageCurl, NSArray, NSMutableArray, UITapGestureRecognizer;
@protocol UIPageViewControllerDelegate, UIPageViewControllerDataSource;

@interface UIPageViewController : UIViewController <UIGestureRecognizerDelegate> {
@private
	id<UIPageViewControllerDelegate> _delegate;	// 156 = 0x9c
	id<UIPageViewControllerDataSource> _dataSource;	// 160 = 0xa0
	int _transitionStyle;	// 164 = 0xa4
	int _navigationOrientation;	// 168 = 0xa8
	int _spineLocation;	// 172 = 0xac
	BOOL _doubleSided;	// 176 = 0xb0
	NSArray *_viewControllers;	// 180 = 0xb4
	_UIPageCurl *_pageCurl;	// 184 = 0xb8
	UIPanGestureRecognizer *_panGestureRecognizer;	// 188 = 0xbc
	UITapGestureRecognizer *_tapGestureRecognizer;	// 192 = 0xc0
	BOOL _stashingViewControllersForRotation;	// 196 = 0xc4
	NSArray *_viewControllersStashedForRotation;	// 200 = 0xc8
	BOOL _rotatingInterface;	// 204 = 0xcc
	NSMutableArray *_rotationSnapshotViews;	// 208 = 0xd0
	int _spineLocationPriorToInterfaceRotation;	// 212 = 0xd4
	UIEdgeInsets _tapRegionInsets;	// 216 = 0xd8
	CGSize _tapRegionBreadths;	// 232 = 0xe8
	UIEdgeInsets _effectiveTapRegionInsets;	// 240 = 0xf0
	CGSize _effectiveTapRegionBreadths;	// 256 = 0x100
	CGRect *_tapRegions;	// 264 = 0x108
	NSArray *_viewControllersStashedFromDataSource;	// 268 = 0x10c
	struct {
		unsigned isShowingMoreItem : 1;
		unsigned needsToRebuildItems : 1;
		unsigned isBarHidden : 1;
		unsigned editButtonOnLeft : 1;
	} _delegateFlags;	// 272 = 0x110
}
@property(retain, nonatomic, setter=_setViewControllers:) NSArray *_viewControllers;	// G=0x332507cd; S=0x332507dd; @synthesize
@property(retain, nonatomic, setter=_setViewControllersStashedForRotation:) NSArray *_viewControllersStashedForRotation;	// G=0x33250801; S=0x33250811; @synthesize
@property(assign, nonatomic) id<UIPageViewControllerDataSource> dataSource;	// G=0x3324c37d; S=0x3324c38d; 
@property(assign, nonatomic) id<UIPageViewControllerDelegate> delegate;	// G=0x3324c2e1; S=0x3324c2f1; 
@property(assign, nonatomic, getter=isDoubleSided) BOOL doubleSided;	// G=0x3324c49d; S=0x3324c4ad; 
@property(readonly, assign, nonatomic) NSArray *gestureRecognizers;	// G=0x3324c545; 
@property(readonly, assign, nonatomic) int navigationOrientation;	// G=0x3324c429; 
@property(readonly, assign, nonatomic) int spineLocation;	// G=0x3324c48d; 
@property(readonly, assign, nonatomic) int transitionStyle;	// G=0x3324c419; 
@property(readonly, assign, nonatomic) NSArray *viewControllers;	// G=0x3324c591; 
+ (BOOL)_isNavigationOrientation:(int)orientation supportedForTransitionStyle:(int)transitionStyle;	// 0x3324ba49
+ (BOOL)_isSpineLocation:(int)location supportedForTransitionStyle:(int)transitionStyle;	// 0x3324ba59
+ (BOOL)_isSupportedTransitionStyle:(int)style;	// 0x3324ba3d
+ (id)stringForSpineLocation:(int)spineLocation;	// 0x3324cfa1
- (id)initWithCoder:(id)coder;	// 0x3324be89
- (id)initWithNibName:(id)nibName bundle:(id)bundle;	// 0x3324bcc1
- (id)initWithTransitionStyle:(int)transitionStyle navigationOrientation:(int)orientation options:(id)options;	// 0x3324ba71
- (BOOL)_canHandleGestures;	// 0x3324e369
- (void)_contentViewFrameDidChange;	// 0x3324e21d
- (CGSize)_effectiveTapRegionBreadths;	// 0x3324c9dd
- (UIEdgeInsets)_effectiveTapRegionInsets;	// 0x3324c685
- (BOOL)_gestureRecognizerShouldBegin:(id)_gestureRecognizer;	// 0x33250119
- (void)_handlePanGesture:(id)gesture;	// 0x33250399
- (void)_handleTapGesture:(id)gesture;	// 0x33250639
- (id)_incomingViewControllersForGestureDrivenCurlInDirection:(int)direction;	// 0x3324f8cd
- (void)_invalidateEffectiveTapRegions;	// 0x3324c60d
- (void)_invalidateViewControllersStashedFromDataSource;	// 0x3324e769
- (BOOL)_isCurrentViewControllerStateValid;	// 0x3324e2b9
- (int)_navigationEndDirectionInResponseToPanGestureRecognizer:(id)panGestureRecognizer suggestedVelocity:(float *)velocity;	// 0x33250201
- (void)_populateLeftAndRightViewControllersInMap:(id)map withViewControllers:(id)viewControllers forCurlInDirection:(int)direction;	// 0x3324e69d
- (void)_setSpineLocation:(int)location;	// 0x3324c439
- (void)_setTapRegionBreadths:(CGSize)breadths;	// 0x3324cc15
- (void)_setTapRegionInsets:(UIEdgeInsets)insets;	// 0x3324c951
// declared property setter: - (void)_setViewControllers:(id)controllers;	// 0x332507dd
- (void)_setViewControllers:(id)controllers withCurlOfType:(int)type fromLocation:(CGPoint)location direction:(int)direction animated:(BOOL)animated completion:(id)completion;	// 0x3324e795
// declared property setter: - (void)_setViewControllersStashedForRotation:(id)rotation;	// 0x33250811
- (BOOL)_shouldBeginNavigationInDirection:(int *)direction inResponseToPanGestureRecognizer:(id)panGestureRecognizer;	// 0x3324fff1
- (BOOL)_shouldCompleteManualCurlWithSuggestedVelocity:(float *)suggestedVelocity;	// 0x33250329
- (BOOL)_shouldNavigateInDirection:(int *)direction inResponseToTapGestureRecognizer:(id)tapGestureRecognizer;	// 0x3324fe49
- (BOOL)_shouldNavigateInDirection:(int *)direction inResponseToVelocity:(float *)velocity ofGestureRecognizedByPanGestureRecognizer:(id)gestureRecognizedByPanGestureRecognizer;	// 0x3324ff15
- (BOOL)_shouldPersistViewWhenCoding;	// 0x3324bce5
- (CGSize)_tapRegionBreadths;	// 0x3324cbf5
- (UIEdgeInsets)_tapRegionInsets;	// 0x3324c92d
- (CGRect *)_tapRegions;	// 0x3324fac5
- (id)_validatedViewControllersForCurlWithViewControllers:(id)viewControllers;	// 0x3324e319
- (id)_viewControllerAfterViewController:(id)controller;	// 0x3324e481
- (id)_viewControllerBefore:(BOOL)before viewController:(id)controller;	// 0x3324e399
- (id)_viewControllerBeforeViewController:(id)controller;	// 0x3324e46d
// declared property getter: - (id)_viewControllers;	// 0x332507cd
- (id)_viewControllersForCurlWithViewControllers:(id)viewControllers direction:(int)direction;	// 0x3324e495
- (id)_viewControllersForPendingSpineLocation:(int)pendingSpineLocation;	// 0x3324cfe9
// declared property getter: - (id)_viewControllersStashedForRotation;	// 0x33250801
// declared property getter: - (id)dataSource;	// 0x3324c37d
- (void)dealloc;	// 0x3324c13d
// declared property getter: - (id)delegate;	// 0x3324c2e1
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;	// 0x3324e1dd
- (void)encodeWithCoder:(id)coder;	// 0x3324bce9
// declared property getter: - (id)gestureRecognizers;	// 0x3324c545
// declared property getter: - (BOOL)isDoubleSided;	// 0x3324c49d
- (void)loadView;	// 0x3324cc69
// declared property getter: - (int)navigationOrientation;	// 0x3324c429
// declared property setter: - (void)setDataSource:(id)source;	// 0x3324c38d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3324c2f1
// declared property setter: - (void)setDoubleSided:(BOOL)sided;	// 0x3324c4ad
- (void)setViewControllers:(id)controllers direction:(int)direction animated:(BOOL)animated completion:(id)completion;	// 0x3324f869
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x3324ce25
// declared property getter: - (int)spineLocation;	// 0x3324c48d
// declared property getter: - (int)transitionStyle;	// 0x3324c419
// declared property getter: - (id)viewControllers;	// 0x3324c591
- (void)viewWillUnload;	// 0x3324cdf9
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x3324d689
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x3324d0d5
@end

