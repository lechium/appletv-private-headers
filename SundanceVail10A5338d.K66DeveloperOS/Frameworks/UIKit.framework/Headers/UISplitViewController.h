/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIViewController.h"

@class UIView, UIBarButtonItem, NSArray, UIPopoverController, NSString, UIGestureRecognizer;
@protocol UISplitViewControllerDelegate;

@interface UISplitViewController : UIViewController <UIGestureRecognizerDelegate> {
	id _delegate;	// 184 = 0xb8
	UIBarButtonItem *_barButtonItem;	// 188 = 0xbc
	NSString *_buttonTitle;	// 192 = 0xc0
	UIPopoverController *_hiddenPopoverController;	// 196 = 0xc4
	UIView *_rotationSnapshotView;	// 200 = 0xc8
	float _masterColumnWidth;	// 204 = 0xcc
	float _gutterWidth;	// 208 = 0xd0
	float _cornerRadius;	// 212 = 0xd4
	int _rotatingFromOrientation;	// 216 = 0xd8
	int _lastPresentedOrientation;	// 220 = 0xdc
	CGRect _rotatingFromMasterViewFrame;	// 224 = 0xe0
	CGRect _rotatingToMasterViewFrame;	// 240 = 0xf0
	NSArray *_cornerImageViews;	// 256 = 0x100
	unsigned _slideTransitionCount;	// 260 = 0x104
	UIView *_masterBackgroundView;	// 264 = 0x108
	BOOL _presentsInFadingPopover;	// 268 = 0x10c
	BOOL _presentsWithGesture;	// 269 = 0x10d
	UIGestureRecognizer *_popoverPresentationGestureRecognizer;	// 272 = 0x110
	struct {
		unsigned validDelegateHiddenMasterOrientations : 5;
		unsigned delegateHiddenMasterOrientations : 5;
		unsigned delegateImplementsShouldHide : 1;
		unsigned hidden : 3;
		unsigned delegateHandlesTogglingMaster : 1;
		unsigned delegateProvidesBackgroundView : 1;
		unsigned delegateWantsUnSlideCallback : 1;
		unsigned masterOnSlide : 1;
		unsigned delegateWantsWillShowCallback : 1;
		unsigned delegateWantsWillHideCallback : 1;
		unsigned delegateWantsWillPresentCallback : 1;
		unsigned delegateWantsNavigationRequests : 1;
	} _splitViewControllerFlags;	// 276 = 0x114
}
@property(assign, nonatomic, setter=_setPresentsInFadingPopover:) BOOL _presentsInFadingPopover;	// G=0x30ef646d; S=0x30ef647d; 
@property(assign, nonatomic) id<UISplitViewControllerDelegate> delegate;	// G=0x30ef93d9; S=0x30ef4845; @synthesize=_delegate
@property(assign) float gutterWidth;	// G=0x30ef6425; S=0x30ef6435; converted property
@property(assign) BOOL hidesMasterViewInPortrait;	// G=0x30ef6145; S=0x30ef61cd; converted property
@property(assign) float leftColumnWidth;	// G=0x30ef521d; S=0x30ef522d; converted property
@property(assign) float masterColumnWidth;	// G=0x30ef63dd; S=0x30ef63ed; converted property
@property(assign, nonatomic) BOOL presentsWithGesture;	// G=0x30ef93e9; S=0x30ef93f9; @synthesize=_presentsWithGesture
@property(copy, nonatomic) NSArray *viewControllers;	// G=0x30ef5a99; S=0x30ef5aa9; 
+ (BOOL)_forcePresentsInSlidingPopover;	// 0x30ef3aa1
+ (BOOL)_forcePresentsWithGesture;	// 0x30ef3b6d
+ (BOOL)_optsOutOfPopoverControllerHierarchyCheck;	// 0x30ef69c1
- (id)initWithCoder:(id)coder;	// 0x30ef3d9d
- (id)initWithNibName:(id)nibName bundle:(id)bundle;	// 0x30ef3d59
- (void)__viewWillLayoutSubviews;	// 0x30ef90c1
- (void)_addOrRemovePopoverPresentationGestureRecognizer;	// 0x30ef4729
- (void)_calculateDelegateHiddenMasterOrientations;	// 0x30ef4581
- (BOOL)_canDisplayHostedMaster;	// 0x30ef5289
- (BOOL)_canSlideMaster;	// 0x30ef530d
- (void)_commonInit;	// 0x30ef3c31
- (CGSize)_contentSizeForChildViewController:(id)childViewController inPopoverController:(id)popoverController;	// 0x30ef6cc9
- (BOOL)_delegateUsesLegacySlideSPI;	// 0x30ef5265
- (CGRect)_detailViewFrame;	// 0x30ef4acd
- (void)_dismissMasterViewController;	// 0x30ef6b29
- (BOOL)_effectivePresentsWithGesture;	// 0x30ef6531
- (void)_getRotationContentSettings:(XXStruct_tXAZTC *)settings;	// 0x30ef93d1
- (void)_invalidateHidesMasterViewInOrientation:(int)orientation;	// 0x30ef70f5
- (BOOL)_isHidesMasterInLandscapeValid;	// 0x30ef456d
- (BOOL)_isHidesMasterInPortraitValid;	// 0x30ef4559
- (BOOL)_isLandscape;	// 0x30ef4335
- (BOOL)_isMasterViewShown;	// 0x30ef44bd
- (BOOL)_isMasterViewShownByDefault;	// 0x30ef4465
- (BOOL)_isRotating;	// 0x30ef6f75
- (void)_loadNewSubviews:(id)subviews;	// 0x30ef3f71
- (CGRect)_masterViewFrame;	// 0x30ef4a25
- (void)_presentGestureAttemptedWithPresentedPopoverController:(id)presentedPopoverController;	// 0x30ef6d3d
- (void)_presentMasterViewController;	// 0x30ef69c5
// declared property getter: - (BOOL)_presentsInFadingPopover;	// 0x30ef646d
- (void)_removeRoundedCorners;	// 0x30ef4f39
// declared property setter: - (void)_setPresentsInFadingPopover:(BOOL)fadingPopover;	// 0x30ef647d
- (void)_setupRoundedCorners;	// 0x30ef4b7d
- (BOOL)_shouldPersistViewWhenCoding;	// 0x30ef4239
- (BOOL)_shouldSynthesizeSupportedOrientations;	// 0x30ef6ee9
- (void)_slideIn:(BOOL)anIn viewController:(id)controller animated:(BOOL)animated totalDuration:(double)duration completion:(id)completion;	// 0x30ef5375
- (void)_updateMasterViewControllerFrame;	// 0x30ef88b5
- (void)_viewControllerHiding:(id)hiding;	// 0x30ef501d
- (void)dealloc;	// 0x30ef3e0d
- (void)decodeRestorableStateWithCoder:(id)coder;	// 0x30ef9455
// declared property getter: - (id)delegate;	// 0x30ef93d9
- (id)detailViewController;	// 0x30ef60d5
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;	// 0x30ef7fd9
- (void)encodeRestorableStateWithCoder:(id)coder;	// 0x30ef9409
- (void)encodeWithCoder:(id)coder;	// 0x30ef3de1
// converted property getter: - (float)gutterWidth;	// 0x30ef6425
- (BOOL)hidesMasterViewDuringRotationFromInterfaceOrientation:(int)interfaceOrientation toInterfaceOrientation:(int)interfaceOrientation2;	// 0x30ef706d
- (BOOL)hidesMasterViewInLandscape;	// 0x30ef6189
// converted property getter: - (BOOL)hidesMasterViewInPortrait;	// 0x30ef6145
// converted property getter: - (float)leftColumnWidth;	// 0x30ef521d
- (void)loadSubviews;	// 0x30ef3f6d
- (void)loadView;	// 0x30ef423d
// converted property getter: - (float)masterColumnWidth;	// 0x30ef63dd
- (id)masterViewController;	// 0x30ef6065
- (void)popoverWillAppear:(id)popover;	// 0x30ef6d8d
// declared property getter: - (BOOL)presentsWithGesture;	// 0x30ef93e9
- (void)purgeMemoryForReason:(int)reason;	// 0x30ef68b9
- (BOOL)revealsMasterViewDuringRotationFromInterfaceOrientation:(int)interfaceOrientation toInterfaceOrientation:(int)interfaceOrientation2;	// 0x30ef6f8d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x30ef4845
// converted property setter: - (void)setGutterWidth:(float)width;	// 0x30ef6435
// converted property setter: - (void)setHidesMasterViewInPortrait:(BOOL)portrait;	// 0x30ef61cd
// converted property setter: - (void)setLeftColumnWidth:(float)width;	// 0x30ef522d
// converted property setter: - (void)setMasterColumnWidth:(float)width;	// 0x30ef63ed
// declared property setter: - (void)setPresentsWithGesture:(BOOL)gesture;	// 0x30ef93f9
// declared property setter: - (void)setViewControllers:(id)controllers;	// 0x30ef5aa9
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x30ef6e11
- (void)snapshotAllViews;	// 0x30ef7861
- (void)snapshotForRotationFromInterfaceOrientation:(int)interfaceOrientation toInterfaceOrientation:(int)interfaceOrientation2;	// 0x30ef79dd
- (void)snapshotMasterView;	// 0x30ef75a9
- (void)toggleMasterVisible:(id)visible;	// 0x30ef6c11
- (void)unloadViewForced:(BOOL)forced;	// 0x30ef4379
// declared property getter: - (id)viewControllers;	// 0x30ef5a99
- (void)viewDidAppear:(BOOL)view;	// 0x30ef66e9
- (void)viewDidDisappear:(BOOL)view;	// 0x30ef6829
- (void)viewWillAppear:(BOOL)view;	// 0x30ef65f5
- (void)viewWillDisappear:(BOOL)view;	// 0x30ef6799
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x30ef7e31
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x30ef7129
@end
