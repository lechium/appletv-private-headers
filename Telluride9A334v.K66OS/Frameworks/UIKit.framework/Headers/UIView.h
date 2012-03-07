/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UIResponder.h"
#import "UIAppearance.h"
#import "UIAppearanceContainer.h"
#import "UITextEffectsOrdering.h"

@class CALayer, NSMutableArray, NSString, UIViewController, NSArray;

@interface UIView : UIResponder <UITextEffectsOrdering, NSCoding, UIAppearance, UIAppearanceContainer> {
@private
	CALayer *_layer;	// 4 = 0x4
	id _tapInfo;	// 8 = 0x8
	id _gestureInfo;	// 12 = 0xc
	NSMutableArray *_gestureRecognizers;	// 16 = 0x10
	NSArray *_subviewCache;	// 20 = 0x14
	float _charge;	// 24 = 0x18
	int _tag;	// 28 = 0x1c
	UIViewController *_viewDelegate;	// 32 = 0x20
	NSString *_backgroundColorSystemColorName;	// 36 = 0x24
	struct {
		unsigned userInteractionDisabled : 1;
		unsigned implementsDrawRect : 1;
		unsigned implementsDidScroll : 1;
		unsigned implementsMouseTracking : 1;
		unsigned hasBackgroundColor : 1;
		unsigned isOpaque : 1;
		unsigned becomeFirstResponderWhenCapable : 1;
		unsigned interceptMouseEvent : 1;
		unsigned deallocating : 1;
		unsigned debugFlash : 1;
		unsigned debugSkippedSetNeedsDisplay : 1;
		unsigned debugScheduledDisplayIsRequired : 1;
		unsigned isInAWindow : 1;
		unsigned isAncestorOfFirstResponder : 1;
		unsigned dontAutoresizeSubviews : 1;
		unsigned autoresizeMask : 6;
		unsigned patternBackground : 1;
		unsigned fixedBackgroundPattern : 1;
		unsigned dontAnimate : 1;
		unsigned superLayerIsView : 1;
		unsigned layerKitPatternDrawing : 1;
		unsigned multipleTouchEnabled : 1;
		unsigned exclusiveTouch : 1;
		unsigned hasViewController : 1;
		unsigned needsDidAppearOrDisappear : 1;
		unsigned gesturesEnabled : 1;
		unsigned deliversTouchesForGesturesToSuperview : 1;
		unsigned chargeEnabled : 1;
		unsigned skipsSubviewEnumeration : 1;
		unsigned needsDisplayOnBoundsChange : 1;
		unsigned hasTiledLayer : 1;
		unsigned hasLargeContent : 1;
		unsigned isInAnimatedVCTransition : 1;
		unsigned traversalMark : 1;
		unsigned appearanceIsInvalid : 1;
		unsigned monitorsSubtree : 1;
	} _viewFlags;	// 40 = 0x28
}
@property(assign) float alpha;	// G=0x3002e551; S=0x3002b719; converted property
@property(assign) BOOL autoresizesSubviews;	// G=0x301e9ac1; S=0x300af371; converted property
@property(assign) unsigned autoresizingMask;	// G=0x3006c00d; S=0x30050131; converted property
@property(retain) id backgroundColor;	// G=0x30072f61; S=0x30072789; converted property
@property(retain, nonatomic, getter=_backgroundColorSystemColorName, setter=_setBackgroundColorSystemColorName:) NSString *backgroundColorSystemColorName;	// G=0x30073041; S=0x30072e25; 
@property(assign) CGRect bounds;	// G=0x3002b1fd; S=0x30065911; converted property
@property(readonly, assign, nonatomic, getter=_caretRect) CGRect caretRect;	// G=0x30379435; 
@property(assign) CGPoint center;	// G=0x3004d261; S=0x3004a2e1; converted property
@property(assign) float charge;	// G=0x30042ea9; S=0x300682c9; converted property
@property(assign) BOOL clearsContextBeforeDrawing;	// G=0x301ea715; S=0x30197511; converted property
@property(assign) BOOL clipsToBounds;	// G=0x300f5e95; S=0x3003eaf9; converted property
@property(assign) int contentMode;	// G=0x3004974d; S=0x3004ff41; converted property
@property(assign) float contentScaleFactor;	// G=0x3002da75; S=0x30048771; converted property
@property(assign) CGRect contentStretch;	// G=0x301ea641; S=0x3005fd7d; converted property
@property(assign, nonatomic) BOOL deliversTouchesForGesturesToSuperview;	// G=0x30043a61; S=0x300c7bed; 
@property(assign, getter=isEnabled) BOOL enabled;	// G=0x300ca67d; S=0x300b6d8d; converted property
@property(assign) int enabledGestures;	// G=0x3022bbb5; S=0x3022bb8d; converted property
@property(assign, getter=isExclusiveTouch) BOOL exclusiveTouch;	// G=0x30043331; S=0x300c7c09; converted property
@property(assign) CGRect frame;	// G=0x3002b29d; S=0x3002b595; converted property
@property(assign) CGPoint frameOrigin;	// G=0x300fa9c9; S=0x3002b241; converted property
@property(assign) id gestureDelegate;	// G=0x3022bb69; S=0x300cbad5; converted property
@property(retain) NSMutableArray *gestureRecognizers;	// G=0x3002c00d; S=0x301ebca1; converted property
@property(assign, nonatomic) BOOL gesturesEnabled;	// G=0x3012a2cd; S=0x300447ed; 
@property(assign, getter=isHidden) BOOL hidden;	// G=0x30042201; S=0x3004a09d; converted property
@property(assign, nonatomic, getter=isInAnimatedVCTransition) BOOL inAnimatedVCTransition;	// G=0x3006c2b9; S=0x301eb0d5; 
@property(readonly, assign, nonatomic) CALayer *layer;	// G=0x3002dd61; @synthesize=_layer
@property(assign, nonatomic, getter=_monitorsSubtree, setter=_setMonitorsSubtree:) BOOL monitorsSubtree;	// G=0x301ebc61; S=0x301543a5; 
@property(assign, getter=isMultipleTouchEnabled) BOOL multipleTouchEnabled;	// G=0x301a59a9; S=0x30070865; converted property
@property(assign) BOOL needsDisplayOnBoundsChange;	// G=0x301808d9; S=0x30069b05; converted property
@property(assign, getter=isOpaque) BOOL opaque;	// G=0x3004875d; S=0x30048a45; converted property
@property(assign) CGPoint origin;	// G=0x300fa9a9; S=0x3002b231; converted property
@property(assign) CGPoint position;	// G=0x301ea0fd; S=0x30172069; converted property
@property(assign) CGSize size;	// G=0x3002daed; S=0x300b88fd; converted property
@property(assign, nonatomic) BOOL skipsSubviewEnumeration;	// G=0x301eb97d; S=0x301eb995; 
@property(assign, nonatomic) int tag;	// G=0x300d6205; S=0x300c6da9; @synthesize=_tag
@property(assign) id tapDelegate;	// G=0x301e8df1; S=0x301e8d59; converted property
@property(assign) CGAffineTransform transform;	// G=0x30057825; S=0x3004d291; converted property
@property(assign, nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;	// G=0x300421e9; S=0x3002b739; 
@property(assign, nonatomic, getter=_viewDelegate, setter=_setViewDelegate:) UIViewController *viewDelegate;	// G=0x3002dd4d; S=0x30068699; 
@property(assign, nonatomic) BOOL viewTraversalMark;	// G=0x3002df95; S=0x3002bcf5; 
+ (void)_animateWithDuration:(double)duration delay:(double)delay options:(unsigned)options animations:(id)animations start:(id)start completion:(id)completion;	// 0x3010981d
+ (void)_beginDisablingPromoteDescendantToFirstResponder;	// 0x3010eac1
+ (float)_currentAnimationDuration;	// 0x3004d67d
+ (void)_endDisablingPromoteDescendantToFirstResponder;	// 0x3010ead5
+ (void)_inheritAnimationParameters;	// 0x30157d0d
+ (BOOL)_invalidatesViewUponCreation;	// 0x300b5a51
+ (BOOL)_isInAnimationBlock;	// 0x3002dd71
+ (void)_performCustomizableAppearanceModifications:(id)modifications;	// 0x300c8cad
+ (void)_performWithoutAnimation:(id)animation;	// 0x300515c9
+ (void)_setAnimationAttributes:(id)attributes;	// 0x301ea8f9
+ (void)_setAnimationFilter:(int)filter forView:(id)view;	// 0x301eaa65
+ (void)_setAnimationFilterValue:(float)value;	// 0x301eaaad
+ (void)_setInvalidatesViewUponCreation:(BOOL)creation;	// 0x300b5a61
+ (void)_setIsResponderAncestorOfFirstResponder:(BOOL)firstResponder startingAtFirstResponder:(id)firstResponder2;	// 0x3002eacd
+ (void)_setupAnimationWithDuration:(double)duration delay:(double)delay view:(id)view options:(unsigned)options animations:(id)animations start:(id)start completion:(id)completion;	// 0x3004d315
+ (id)_tintColorForStyle:(int)style;	// 0x301ed381
+ (id)_topMostView:(id)view;	// 0x301aa2d9
+ (void)_transitionFromView:(id)view toView:(id)view2 duration:(double)duration options:(unsigned)options animations:(id)animations completion:(id)completion;	// 0x301eb0fd
+ (void)animateWithDuration:(double)duration animations:(id)animations;	// 0x301eac1d
+ (void)animateWithDuration:(double)duration animations:(id)animations completion:(id)completion;	// 0x300afab5
+ (void)animateWithDuration:(double)duration delay:(double)delay options:(unsigned)options animations:(id)animations completion:(id)completion;	// 0x3004d2d5
+ (id)appearance;	// 0x301e81c9
+ (id)appearanceWhenContainedIn:(Class)anIn;	// 0x301e81e9
+ (BOOL)areAnimationsEnabled;	// 0x3003e441
+ (void)beginAnimations:(id)animations;	// 0x3004e7dd
+ (void)beginAnimations:(id)animations context:(void *)context;	// 0x3003e035
+ (void)commitAnimations;	// 0x3003eca1
+ (void)disableAnimation;	// 0x300515b9
+ (void)enableAnimation;	// 0x300a10d5
+ (void)endAnimations;	// 0x30055ac5
+ (void)flush;	// 0x301824d9
+ (Class)layerClass;	// 0x30048741
+ (void)setAnimationAutoreverses:(BOOL)autoreverses;	// 0x301ea9d5
+ (void)setAnimationBeginsFromCurrentState:(BOOL)currentState;	// 0x3003e199
+ (void)setAnimationCurve:(int)curve;	// 0x3004e825
+ (void)setAnimationDelay:(double)delay;	// 0x3016b245
+ (void)setAnimationDelegate:(id)delegate;	// 0x3003e125
+ (void)setAnimationDidStopSelector:(SEL)stopSelector;	// 0x3003e179
+ (void)setAnimationDuration:(double)duration;	// 0x3003e0fd
+ (void)setAnimationFrameInterval:(double)interval;	// 0x30195711
+ (void)setAnimationFromCurrentState:(BOOL)currentState;	// 0x3015b605
+ (void)setAnimationPosition:(CGPoint)position;	// 0x301ea921
+ (void)setAnimationRepeatAutoreverses:(BOOL)autoreverses;	// 0x301ea9b1
+ (void)setAnimationRepeatCount:(float)count;	// 0x301ea985
+ (void)setAnimationRoundsToInteger:(BOOL)integer;	// 0x3008849d
+ (void)setAnimationStartDate:(id)date;	// 0x301ea945
+ (void)setAnimationStartTime:(double)time;	// 0x3004e7fd
+ (void)setAnimationTransition:(int)transition forView:(id)view;	// 0x301eae91
+ (void)setAnimationTransition:(int)transition forView:(id)view cache:(BOOL)cache;	// 0x301ea9e5
+ (void)setAnimationWillStartSelector:(SEL)startSelector;	// 0x301eaa45
+ (void)setAnimationsEnabled:(BOOL)enabled;	// 0x3003e455
+ (void)throttledFlush;	// 0x301ea8a5
+ (void)transitionFromView:(id)view toView:(id)view2 duration:(double)duration options:(unsigned)options completion:(id)completion;	// 0x301eac91
+ (void)transitionWithView:(id)view duration:(double)duration options:(unsigned)options animations:(id)animations completion:(id)completion;	// 0x301eac51
- (id)init;	// 0x3005d111
- (id)initWithCoder:(id)coder;	// 0x301e82ed
- (id)initWithFrame:(CGRect)frame;	// 0x300480bd
- (id)initWithSize:(CGSize)size;	// 0x3009ed99
- (void)_addSubview:(id)subview positioned:(int)positioned relativeTo:(id)to;	// 0x3002d191
- (BOOL)_alwaysHandleInteractionEvents;	// 0x301eb4c1
- (BOOL)_alwaysHandleScrollerMouseEvent;	// 0x301eb4bd
- (void)_animateToScrollPoint:(CGPoint)scrollPoint;	// 0x3022c9b1
- (void)_animateZoomFailureToWindowPoint:(CGPoint)windowPoint scale:(float)scale duration:(float)duration;	// 0x3022cb11
- (BOOL)_animationIsPaused;	// 0x3005589d
- (id)_appearanceContainer;	// 0x301e82ad
- (BOOL)_appearanceIsInvalid;	// 0x301e9405
- (BOOL)_appliesExclusiveTouchToSubviewTree;	// 0x300433a5
- (id)_asTextSelection;	// 0x30379431
- (BOOL)_associatedViewControllerForwardsAppearanceCallbacks:(id)callbacks performHierarchyCheck:(BOOL)check isRoot:(BOOL)root;	// 0x3006c09d
- (id)_autoresizingDescription;	// 0x301ebe35
- (CGColorRef)_backgroundCGColor;	// 0x30048b01
- (id)_backgroundColor;	// 0x30072f71
// declared property getter: - (id)_backgroundColorSystemColorName;	// 0x30073041
- (BOOL)_becomeFirstResponderWhenPossible;	// 0x3004d125
- (BOOL)_canDrawContent;	// 0x3002da51
- (BOOL)_canHandleStatusBarTouchAtLocation:(CGPoint)location;	// 0x301eb711
- (BOOL)_canStartRotationFromEvent:(GSEventRef)event;	// 0x3022b799
- (BOOL)_canStartZoomFromEvent:(GSEventRef)event;	// 0x3022b1ed
- (BOOL)_cancelTapDelegateTracking;	// 0x301eb6ed
// declared property getter: - (CGRect)_caretRect;	// 0x30379435
- (void)_clearAnimationFilters;	// 0x301eaad9
- (void)_clearBecomeFirstResponderWhenCapable;	// 0x3002c5e1
- (void)_clearBecomeFirstResponderWhenCapableOnSubtree;	// 0x300ab7b5
- (void)_collectKeyViews:(id)views;	// 0x301eb539
- (CGPoint)_constrainedScrollPoint:(CGPoint)point contentSize:(CGSize)size;	// 0x3022c56d
- (BOOL)_containedInAbsoluteResponderChain;	// 0x3002ea1d
- (id)_containerLayoutViewForFastMode;	// 0x301ed3cd
- (int)_containerStyle;	// 0x30109429
- (id)_containingScrollView;	// 0x300846a5
- (BOOL)_controlsOwnScaleFactor;	// 0x301eb3f9
- (CGPoint)_convertOffset:(CGPoint)offset fromView:(id)view;	// 0x301e98e5
- (CGPoint)_convertOffset:(CGPoint)offset toView:(id)view;	// 0x301e9841
- (void *)_createIOSurfaceFromRect:(CGRect)rect padding:(UIEdgeInsets)padding;	// 0x301ab331
- (void *)_createIOSurfaceWithPadding:(UIEdgeInsets)padding;	// 0x301ea839
- (void)_createLayerWithFrame:(CGRect)frame;	// 0x30048461
- (int)_depthFirstCompare:(id)compare;	// 0x30129f99
- (void)_descendent:(id)descendent didMoveFromSuperview:(id)superview toSuperview:(id)superview3;	// 0x301ebc7d
- (void)_descendent:(id)descendent willMoveFromSuperview:(id)superview toSuperview:(id)superview3;	// 0x301ebc79
- (void)_didMoveFromWindow:(id)window toWindow:(id)window2;	// 0x3002cbcd
- (void)_didRemoveSubview:(id)subview;	// 0x3002d169
- (void)_didScroll;	// 0x301eb38d
- (void)_enableLayerKitPatternDrawing:(BOOL)drawing;	// 0x301ea835
- (id)_enclosingScrollableScrollerIncludingSelf;	// 0x301cb4a5
- (id)_enclosingScrollerIncludingSelf;	// 0x301ed41d
- (void)_encodeBackgroundColorWithCoder:(id)coder;	// 0x301ebb11
- (void)_encodeFrameWithCoder:(id)coder;	// 0x301eb9b9
- (id)_findFirstSubviewWantingToBecomeFirstResponder;	// 0x3002b89d
- (id)_firstResponder;	// 0x3002c5f9
- (void)_gestureChanged:(int)changed event:(GSEventRef)event;	// 0x30229d2d
- (void)_gestureEnded:(GSEventRef)ended;	// 0x3002d069
- (id)_gestureInfo;	// 0x300cbafd
- (id)_gestureRecognizers;	// 0x3012a0a1
- (id)_gestureTargetHitTest:(CGPoint)test withEvent:(id)event;	// 0x301ebb7d
- (BOOL)_hasOpaqueBackground;	// 0x30072db5
- (id)_interceptEvent:(id)event;	// 0x301714e9
- (id)_interceptMouseEvent:(GSEventRef)event;	// 0x301eb3b1
- (float)_internalScaleForScale:(float)scale;	// 0x3022a9e5
- (void)_invalidateAppearanceForSubviewsOfClass:(Class)aClass;	// 0x301e9315
- (void)_invalidateLayerContents;	// 0x301eb391
- (void)_invalidateSubviewCache;	// 0x3002c7fd
- (BOOL)_isAncestorOfFirstResponder;	// 0x3002d6f5
- (BOOL)_isChargeEnabled;	// 0x30108439
- (BOOL)_isInAWindow;	// 0x3016b761
- (BOOL)_isInExclusiveTouchSubviewTree;	// 0x30043345
- (BOOL)_isInTransitionBlock;	// 0x3006c3b9
- (BOOL)_isRootForKeyResponderCycle;	// 0x301eb4c5
- (BOOL)_isRubberBanding;	// 0x3022a7a9
- (BOOL)_isScrollingEnabled;	// 0x301ed4c1
- (id)_layer;	// 0x30042dbd
- (void)_makeSubtreePerformSelector:(SEL)selector withObject:(id)object;	// 0x3002c9dd
- (void)_makeSubtreePerformSelector:(SEL)selector withObject:(id)object withObject:(id)object3 copySublayers:(BOOL)sublayers;	// 0x3002c635
- (float)_minimumZoomScaleDelta;	// 0x3022ac19
// declared property getter: - (BOOL)_monitorsSubtree;	// 0x301ebc61
- (void)_mouseDown:(GSEventRef)down;	// 0x301eb645
- (void)_mouseDragged:(GSEventRef)dragged;	// 0x301eb67d
- (void)_mouseUp:(GSEventRef)up;	// 0x301eb6b5
- (void)_movedToFront;	// 0x3002dc2d
- (BOOL)_needsLayoutOnAnimatedBoundsChangeForNewBounds:(CGRect)newBounds;	// 0x301ea095
- (BOOL)_needsLayoutOnAnimatedFrameChangeForNewFrame:(CGRect)newFrame;	// 0x301e9501
- (id)_nextKeyResponder;	// 0x301e9081
- (void)_populateArchivedSubviews:(id)subviews;	// 0x301ebb4d
- (void)_postMovedFromSuperview:(id)superview;	// 0x3002cacd
- (id)_previousKeyResponder;	// 0x301e91bd
- (Class)_printFormatterClass;	// 0x30380785
- (void)_promoteDescendantToFirstResponderIfNecessary;	// 0x3002b849
- (void)_removeAllAnimations:(BOOL)animations;	// 0x3010746d
- (void)_removeFirstResponderFromSubtree;	// 0x3010ad65
- (void)_renderSnapshotWithRect:(CGRect)rect inContext:(CGContextRef)context;	// 0x301eb7d1
- (void)_resetContentStretch;	// 0x301ea5e9
- (void)_resetZoomingWithEvent:(GSEventRef)event;	// 0x3022c16d
- (void)_resizeWithOldSuperviewSize:(CGSize)oldSuperviewSize;	// 0x3006bbfd
- (void)_resizeWithOldSuperviewSize_ancient:(CGSize)oldSuperviewSize_ancient;	// 0x301e9b11
- (id)_rootForKeyResponderCycle;	// 0x301eb4d9
- (void)_rotateFromEvent:(GSEventRef)event;	// 0x3022b8d9
- (void)_rotateToDegrees:(float)degrees duration:(float)duration event:(GSEventRef)event;	// 0x3022b591
- (float)_rubberBandScaleForScale:(float)scale;	// 0x3022ac25
- (void)_rubberbandZoomToEvent:(GSEventRef)event scale:(float)scale;	// 0x3022a6b5
- (float)_scaleForInternalScale:(float)internalScale;	// 0x3022aaf9
- (id)_scriptingInfo;	// 0x30172781
- (CGPoint)_scrollPointForPoint:(CGPoint)point scale:(float)scale constrain:(BOOL)constrain snapToEdge:(BOOL)edge;	// 0x3022a0d5
- (id)_scroller;	// 0x300b8a09
- (CGSize)_scrollerContentSize;	// 0x3022c4ad
- (void)_setAppearanceIsInvalid:(BOOL)invalid;	// 0x301e941d
- (void)_setBackgroundCGColor:(CGColorRef)color;	// 0x301ebc8d
- (void)_setBackgroundCGColor:(CGColorRef)color withSystemColorName:(id)systemColorName;	// 0x300728ad
- (void)_setBackgroundColor:(id)color;	// 0x30072799
// declared property setter: - (void)_setBackgroundColorSystemColorName:(id)name;	// 0x30072e25
- (void)_setChargeEnabled:(BOOL)enabled;	// 0x300ff4a5
- (void)_setContainerLayoutViewForFastMode:(id)fastMode;	// 0x301ed409
- (void)_setContentImage:(id)image;	// 0x3010f4a1
- (void)_setContentStretchInPixels:(CGRect)pixels forContentSize:(CGSize)contentSize shouldTile:(BOOL)tile;	// 0x30049ec1
- (void)_setContentsTransform:(CGAffineTransform)transform;	// 0x301eb78d
- (void)_setGestureInfoZoomScale:(float)scale;	// 0x3022a52d
- (void)_setInterceptMouseEvent:(BOOL)event;	// 0x301049b9
- (void)_setIsAncestorOfFirstResponder:(BOOL)firstResponder;	// 0x3002eb9d
// declared property setter: - (void)_setMonitorsSubtree:(BOOL)subtree;	// 0x301543a5
- (void)_setRotationAnimationProgress:(id)progress;	// 0x3022b70d
- (void)_setShouldRasterize:(BOOL)_set;	// 0x301ea675
// declared property setter: - (void)_setViewDelegate:(id)delegate;	// 0x30068699
- (void)_setZoomAnimationProgress:(id)progress;	// 0x3022a811
- (void)_setZoomScale:(float)scale duration:(double)duration;	// 0x3022bf61
- (BOOL)_shouldAnimatePropertyWithKey:(id)key;	// 0x3004e8a9
- (BOOL)_shouldApplyExclusiveTouch;	// 0x300432ed
- (BOOL)_shouldResignFirstResponderWithInteractionDisabled;	// 0x3004c6b9
- (BOOL)_shouldTryPromoteDescendantToFirstResponder;	// 0x3002d6dd
- (void)_startGesture:(int)gesture event:(GSEventRef)event;	// 0x30229ad1
- (BOOL)_startRotationFromEvent:(GSEventRef)event;	// 0x3022b879
- (BOOL)_startZoomFromEvent:(GSEventRef)event;	// 0x3022b28d
- (void)_stopGesture:(int)gesture event:(GSEventRef)event;	// 0x30229c21
- (void)_stopRotationFromEvent:(GSEventRef)event;	// 0x3022ba4d
- (void)_stopZoomFromEvent:(GSEventRef)event;	// 0x3022b391
- (int)_style;	// 0x3010946d
- (BOOL)_subclassImplementsDrawRect;	// 0x30048421
- (void)_subscribeToScrollNotificationsIfNecessary:(id)scrollNotificationsIfNecessary;	// 0x3002d969
- (id)_superDescription;	// 0x301ec629
- (id)_syntheticTouch;	// 0x3025bfbd
- (id)_syntheticUIEventWithGSEvent:(GSEventRef)gsevent touchPhase:(int)phase;	// 0x3025bfc1
- (int)_topToBottomLeftToRightViewCompare:(id)rightViewCompare;	// 0x301e8e15
- (void)_unsubscribeToScrollNotificationsIfNecessary:(id)scrollNotificationsIfNecessary;	// 0x3002ca01
- (void)_updateNeedsDisplayOnBoundsChange;	// 0x30069b39
- (BOOL)_usesDifferentHitTestForGestures;	// 0x30042e0d
- (id)_viewControllerForAncestor;	// 0x3006c259
// declared property getter: - (id)_viewDelegate;	// 0x3002dd4d
- (id)_viewIndexPath;	// 0x301aa391
- (BOOL)_wantsCornerSnapshotsForScrolling;	// 0x301094ad
- (void)_webCustomViewWasAddedAsSubviewOfView:(id)view;	// 0x301eb3fd
- (void)_webCustomViewWasRemovedFromSuperview:(id)superview;	// 0x301eb481
- (void)_webCustomViewWillBeRemovedFromSuperview;	// 0x301eb449
- (void)_willMoveToWindow:(id)window;	// 0x3002bd19
- (void)_willMoveToWindow:(id)window withAncestorView:(id)ancestorView;	// 0x3002d709
- (id)_window;	// 0x3002ec95
- (float)_zoomAnimationDurationForScale:(float)scale;	// 0x3022c859
- (float)_zoomAnimationProgress;	// 0x3022cbc9
- (float)_zoomScale;	// 0x3022c0f1
- (void)_zoomToEvent:(GSEventRef)event scale:(float)scale animate:(BOOL)animate constrainScrollPoint:(BOOL)point;	// 0x3022a63d
- (void)_zoomToScale:(float)scale event:(GSEventRef)event;	// 0x3022a555
- (void)_zoomToScrollPoint:(CGPoint)scrollPoint scale:(float)scale duration:(float)duration event:(GSEventRef)event;	// 0x3022c635
- (void)_zoomToWindowPoint:(CGPoint)windowPoint scale:(float)scale duration:(float)duration constrainScrollPoint:(BOOL)point event:(GSEventRef)event;	// 0x3022c905
- (BOOL)_zoomWithEvent:(GSEventRef)event;	// 0x3022adf5
- (id)actionForLayer:(id)layer forKey:(id)key;	// 0x3002c84d
- (void)addAnimation:(id)animation forKey:(id)key;	// 0x301eabfd
- (void)addGestureRecognizer:(id)recognizer;	// 0x3007127d
- (void)addSubview:(id)subview;	// 0x3002d16d
// converted property getter: - (float)alpha;	// 0x3002e551
- (void)animator:(id)animator startAnimation:(id)animation;	// 0x301bf845
- (void)animator:(id)animator stopAnimation:(id)animation;	// 0x30229da1
// converted property getter: - (BOOL)autoresizesSubviews;	// 0x301e9ac1
// converted property getter: - (unsigned)autoresizingMask;	// 0x3006c00d
// converted property getter: - (id)backgroundColor;	// 0x30072f61
// converted property getter: - (CGRect)bounds;	// 0x3002b1fd
- (void)bringSubviewToFront:(id)front;	// 0x3002db25
- (BOOL)canHandleGestures;	// 0x3022bb4d
- (BOOL)canHandleSwipes;	// 0x3002d065
- (BOOL)cancelMouseTracking;	// 0x3019913d
- (BOOL)cancelTouchTracking;	// 0x301e92f9
// converted property getter: - (CGPoint)center;	// 0x3004d261
// converted property getter: - (float)charge;	// 0x30042ea9
// converted property getter: - (BOOL)clearsContextBeforeDrawing;	// 0x301ea715
// converted property getter: - (BOOL)clipsToBounds;	// 0x300f5e95
- (int)compareTextEffectsOrdering:(id)ordering;	// 0x300af789
- (BOOL)containsView:(id)view;	// 0x30110631
// converted property getter: - (int)contentMode;	// 0x3004974d
// converted property getter: - (float)contentScaleFactor;	// 0x3002da75
// converted property getter: - (CGRect)contentStretch;	// 0x301ea641
- (CGPoint)convertPoint:(CGPoint)point fromView:(id)view;	// 0x30042421
- (CGPoint)convertPoint:(CGPoint)point toView:(id)view;	// 0x30108235
- (CGRect)convertRect:(CGRect)rect fromView:(id)view;	// 0x30079b71
- (CGRect)convertRect:(CGRect)rect toView:(id)view;	// 0x3006d2d1
- (CGSize)convertSize:(CGSize)size fromView:(id)view;	// 0x301e974d
- (CGSize)convertSize:(CGSize)size toView:(id)view;	// 0x301e9659
- (CGImageRef)createSnapshotWithRect:(CGRect)rect;	// 0x301eb0b1
- (void)dealloc;	// 0x30053a55
- (void)deferredBecomeFirstResponder;	// 0x3011074d
// declared property getter: - (BOOL)deliversTouchesForGesturesToSuperview;	// 0x30043a61
- (id)description;	// 0x301ebfa9
- (void)didAddSubview:(id)subview;	// 0x3002dae9
- (void)didMoveToSuperview;	// 0x3002d165
- (void)didMoveToWindow;	// 0x3002d15d
- (void)drawLayer:(id)layer inContext:(CGContextRef)context;	// 0x30038e65
- (void)drawRect:(CGRect)rect;	// 0x3016c131
- (void)drawRect:(CGRect)rect forViewPrintFormatter:(id)viewPrintFormatter;	// 0x303807f1
// converted property getter: - (int)enabledGestures;	// 0x3022bbb5
- (void)encodeWithCoder:(id)coder;	// 0x301e88dd
- (BOOL)endEditing:(BOOL)editing;	// 0x300fcef1
- (void)exchangeSubviewAtIndex:(int)index withSubviewAtIndex:(int)index2;	// 0x301675cd
- (CGRect)extent;	// 0x301e9441
- (void)forceDisplayIfNeeded;	// 0x301ea815
// converted property getter: - (CGRect)frame;	// 0x3002b29d
// converted property getter: - (CGPoint)frameOrigin;	// 0x300fa9c9
- (void)gestureChanged:(GSEventRef)changed;	// 0x3022c349
// converted property getter: - (id)gestureDelegate;	// 0x3022bb69
- (void)gestureEnded:(GSEventRef)ended;	// 0x3022c465
// converted property getter: - (id)gestureRecognizers;	// 0x3002c00d
- (void)gestureStarted:(GSEventRef)started;	// 0x3022c20d
// declared property getter: - (BOOL)gesturesEnabled;	// 0x3012a2cd
- (CGRect)hitRect;	// 0x3019db21
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x301eaeb5
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x30041c85
- (void)insertSubview:(id)subview above:(id)above;	// 0x300af605
- (void)insertSubview:(id)subview aboveSubview:(id)subview2;	// 0x300556c5
- (void)insertSubview:(id)subview atIndex:(int)index;	// 0x30048b99
- (void)insertSubview:(id)subview below:(id)below;	// 0x300c753d
- (void)insertSubview:(id)subview belowSubview:(id)subview2;	// 0x30048bc1
- (BOOL)isAccessibilityElementByDefault;	// 0x302b5655
- (BOOL)isDescendantOfView:(id)view;	// 0x30043c21
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x302b5659
// converted property getter: - (BOOL)isEnabled;	// 0x300ca67d
// converted property getter: - (BOOL)isExclusiveTouch;	// 0x30043331
// converted property getter: - (BOOL)isHidden;	// 0x30042201
- (BOOL)isHiddenOrHasHiddenAncestor;	// 0x30107895
// declared property getter: - (BOOL)isInAnimatedVCTransition;	// 0x3006c2b9
// converted property getter: - (BOOL)isMultipleTouchEnabled;	// 0x301a59a9
// converted property getter: - (BOOL)isOpaque;	// 0x3004875d
// declared property getter: - (BOOL)isUserInteractionEnabled;	// 0x300421e9
// declared property getter: - (id)layer;	// 0x3002dd61
- (void)layoutBelowIfNeeded;	// 0x3004eced
- (void)layoutIfNeeded;	// 0x3002dc75
- (void)layoutSublayersOfLayer:(id)layer;	// 0x3002dc95
- (void)layoutSubviews;	// 0x3002dd5d
- (void)movedFromSuperview:(id)superview;	// 0x3002d161
- (void)movedFromWindow:(id)window;	// 0x3002d159
- (void)movedToSuperview:(id)superview;	// 0x3002dae5
- (void)movedToWindow:(id)window;	// 0x3002da4d
- (BOOL)needsDisplay;	// 0x301ea6f1
// converted property getter: - (BOOL)needsDisplayOnBoundsChange;	// 0x301808d9
- (BOOL)needsWebDocumentViewEventsDirectly;	// 0x30262dc1
- (CGImageRef)newSnapshotWithRect:(CGRect)rect;	// 0x301ea759
- (id)nextResponder;	// 0x3002e87d
// converted property getter: - (CGPoint)origin;	// 0x300fa9a9
- (BOOL)pointInside:(CGPoint)inside forEvent:(GSEventRef)event;	// 0x301eb089
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x30042225
// converted property getter: - (CGPoint)position;	// 0x301ea0fd
- (id)recursiveDescription;	// 0x301ec655
- (void)recursivelyForceDisplayIfNeeded;	// 0x301d63dd
- (void)reduceWidth:(float)width;	// 0x301cf639
- (void)removeAllGestureRecognizers;	// 0x30053cd1
- (void)removeFromSuperview;	// 0x3002ba99
- (void)removeGestureRecognizer:(id)recognizer;	// 0x30071a49
- (void)resizeForKeyplaneSize:(CGSize)keyplaneSize;	// 0x30398aa9
- (void)resizeSubviewsWithOldSize:(CGSize)oldSize;	// 0x3004c309
- (void)resizeWithOldSuperviewSize:(CGSize)oldSuperviewSize;	// 0x3006bbc1
- (void)rotateToDegrees:(float)degrees;	// 0x3022b531
- (float)rotationDegrees;	// 0x3022bf31
- (id)scriptingInfoWithChildren;	// 0x301725e5
- (void)sendSubviewToBack:(id)back;	// 0x3009709d
// converted property setter: - (void)setAlpha:(float)alpha;	// 0x3002b719
// converted property setter: - (void)setAutoresizesSubviews:(BOOL)subviews;	// 0x300af371
// converted property setter: - (void)setAutoresizingMask:(unsigned)mask;	// 0x30050131
// converted property setter: - (void)setBackgroundColor:(id)color;	// 0x30072789
// converted property setter: - (void)setBounds:(CGRect)bounds;	// 0x30065911
// converted property setter: - (void)setCenter:(CGPoint)center;	// 0x3004a2e1
// converted property setter: - (void)setCharge:(float)charge;	// 0x300682c9
- (void)setClearsContext:(BOOL)context;	// 0x301ea739
// converted property setter: - (void)setClearsContextBeforeDrawing:(BOOL)drawing;	// 0x30197511
- (void)setClipsSubviews:(BOOL)subviews;	// 0x300750a5
// converted property setter: - (void)setClipsToBounds:(BOOL)bounds;	// 0x3003eaf9
// converted property setter: - (void)setContentMode:(int)mode;	// 0x3004ff41
// converted property setter: - (void)setContentScaleFactor:(float)factor;	// 0x30048771
// converted property setter: - (void)setContentStretch:(CGRect)stretch;	// 0x3005fd7d
- (void)setContentsPosition:(int)position;	// 0x30074efd
// declared property setter: - (void)setDeliversTouchesForGesturesToSuperview:(BOOL)superview;	// 0x300c7bed
// converted property setter: - (void)setEnabled:(BOOL)enabled;	// 0x300b6d8d
// converted property setter: - (void)setEnabledGestures:(int)gestures;	// 0x3022bb8d
// converted property setter: - (void)setExclusiveTouch:(BOOL)touch;	// 0x300c7c09
- (void)setFixedBackgroundPattern:(BOOL)pattern;	// 0x300fd11d
// converted property setter: - (void)setFrame:(CGRect)frame;	// 0x3002b595
- (void)setFrame:(CGRect)frame forFields:(int)fields;	// 0x301e9989
// converted property setter: - (void)setFrameOrigin:(CGPoint)origin;	// 0x3002b241
// converted property setter: - (void)setGestureDelegate:(id)delegate;	// 0x300cbad5
// converted property setter: - (void)setGestureRecognizers:(id)recognizers;	// 0x301ebca1
// declared property setter: - (void)setGesturesEnabled:(BOOL)enabled;	// 0x300447ed
// converted property setter: - (void)setHidden:(BOOL)hidden;	// 0x3004a09d
// declared property setter: - (void)setInAnimatedVCTransition:(BOOL)animatedVCTransition;	// 0x301eb0d5
// converted property setter: - (void)setMultipleTouchEnabled:(BOOL)enabled;	// 0x30070865
- (void)setNeedsDisplay;	// 0x3002e189
- (void)setNeedsDisplayInRect:(CGRect)rect;	// 0x30045ad9
// converted property setter: - (void)setNeedsDisplayOnBoundsChange:(BOOL)change;	// 0x30069b05
- (void)setNeedsLayout;	// 0x3002dc55
// converted property setter: - (void)setOpaque:(BOOL)opaque;	// 0x30048a45
// converted property setter: - (void)setOrigin:(CGPoint)origin;	// 0x3002b231
// converted property setter: - (void)setPosition:(CGPoint)position;	// 0x30172069
- (void)setRotationBy:(float)by;	// 0x301e9a15
- (void)setRotationDegrees:(float)degrees duration:(double)duration;	// 0x3022beb1
// converted property setter: - (void)setSize:(CGSize)size;	// 0x300b88fd
// declared property setter: - (void)setSkipsSubviewEnumeration:(BOOL)enumeration;	// 0x301eb995
// declared property setter: - (void)setTag:(int)tag;	// 0x300c6da9
// converted property setter: - (void)setTapDelegate:(id)delegate;	// 0x301e8d59
// converted property setter: - (void)setTransform:(CGAffineTransform)transform;	// 0x3004d291
// declared property setter: - (void)setUserInteractionEnabled:(BOOL)enabled;	// 0x3002b739
- (void)setValue:(id)value forGestureAttribute:(int)gestureAttribute;	// 0x3022bbd9
- (void)setValue:(id)value forKey:(id)key;	// 0x301ebd91
// declared property setter: - (void)setViewTraversalMark:(BOOL)mark;	// 0x3002bcf5
// converted property getter: - (CGSize)size;	// 0x3002daed
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x300f5e5d
- (void)sizeToFit;	// 0x3005771d
// declared property getter: - (BOOL)skipsSubviewEnumeration;	// 0x301eb97d
- (void)startHeartbeat:(SEL)heartbeat inRunLoopMode:(id)runLoopMode;	// 0x301989dd
- (int)stateForGestureType:(int)gestureType;	// 0x3022c121
- (void)stopHeartbeat:(SEL)heartbeat;	// 0x3019f751
- (id)subviews;	// 0x3004224d
- (id)superview;	// 0x3002b1b9
- (int)swipe:(int)swipe withEvent:(GSEventRef)event;	// 0x301e9311
// declared property getter: - (int)tag;	// 0x300d6205
// converted property getter: - (id)tapDelegate;	// 0x301e8df1
- (int)textEffectsVisibilityLevel;	// 0x302b19a5
- (int)textEffectsVisibilityLevelWhenKey;	// 0x302b19ad
- (id)textInputView;	// 0x30121ef1
// converted property getter: - (CGAffineTransform)transform;	// 0x30057825
- (BOOL)useBlockyMagnificationInClassic;	// 0x301ed419
- (id)valueForGestureAttribute:(int)gestureAttribute;	// 0x3022bd3d
- (void)viewDidMoveToSuperview;	// 0x301ea5e5
- (id)viewPrintFormatter;	// 0x303807a1
// declared property getter: - (BOOL)viewTraversalMark;	// 0x3002df95
- (void)viewWillMoveToSuperview:(id)view;	// 0x301ea5e1
- (id)viewWithTag:(int)tag;	// 0x3002e04d
- (CGRect)visibleBounds;	// 0x30089651
- (void)willMoveToSuperview:(id)superview;	// 0x3002bcf1
- (void)willMoveToWindow:(id)window;	// 0x3002c631
- (void)willRemoveSubview:(id)subview;	// 0x3002bced
- (id)window;	// 0x3002bb71
- (void)zoomToScale:(float)scale;	// 0x3022a36d
@end
