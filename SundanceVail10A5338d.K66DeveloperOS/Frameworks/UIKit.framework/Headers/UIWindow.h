/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"
#import "NSISEngineDelegate.h"

@class NSMutableArray, UIScreen, NSUndoManager, NSMutableSet, UIColor, NSArray, CALayer, UIViewController, NSISEngine, UIResponder;

@interface UIWindow : UIView <NSISEngineDelegate> {
	id _delegate;	// 84 = 0x54
	float _windowLevel;	// 88 = 0x58
	float _windowSublevel;	// 92 = 0x5c
	id _layerContext;	// 96 = 0x60
	UIView *_lastMouseDownView;	// 100 = 0x64
	UIView *_lastMouseEnteredView;	// 104 = 0x68
	UIResponder *_firstResponder;	// 108 = 0x6c
	id _fingerInfo;	// 112 = 0x70
	id _touchData;	// 116 = 0x74
	int _viewOrientation;	// 120 = 0x78
	UIView *_exclusiveTouchView;	// 124 = 0x7c
	NSUndoManager *_undoManager;	// 128 = 0x80
	UIScreen *_screen;	// 132 = 0x84
	CALayer *_transformLayer;	// 136 = 0x88
	NSMutableArray *_rotationViewControllers;	// 140 = 0x8c
	UIViewController *_rootViewController;	// 144 = 0x90
	UIColor *_savedBackgroundColor;	// 148 = 0x94
	NSMutableSet *_subtreeMonitoringViews;	// 152 = 0x98
	NSMutableSet *_tintViews;	// 156 = 0x9c
	id _currentTintView;	// 160 = 0xa0
	struct {
		unsigned delegateWillRotate : 1;
		unsigned delegateDidRotate : 1;
		unsigned delegateWillAnimateFirstHalf : 1;
		unsigned delegateDidAnimationFirstHalf : 1;
		unsigned delegateWillAnimateSecondHalf : 1;
		unsigned autorotatesToPortrait : 1;
		unsigned autorotatesToPortraitUpsideDown : 1;
		unsigned autorotatesToLandscapeLeft : 1;
		unsigned autorotatesToLandscapeRight : 1;
		unsigned dontBecomeKeyOnOrderFront : 1;
		unsigned output : 1;
		unsigned inGesture : 1;
		unsigned bitsPerComponent : 4;
		unsigned autorotates : 1;
		unsigned isRotating : 1;
		unsigned isUsingOnePartRotationAnimation : 1;
		unsigned isHandlingContentRotation : 1;
		unsigned disableAutorotationCount : 4;
		unsigned needsAutorotationWhenReenabled : 1;
		unsigned forceTwoPartRotationAnimation : 1;
		unsigned orderKeyboardInAfterRotating : 1;
		unsigned roundedCorners : 4;
		unsigned resizesToFullScreen : 1;
		unsigned keepContextInBackground : 1;
		unsigned ignoreSetHidden : 1;
		unsigned forceVisibleOnInit : 1;
		unsigned settingFirstResponder : 1;
		unsigned legacyOrientationChecks : 1;
		unsigned addRootViewControllerInAwakeFromNib : 1;
	} _windowFlags;	// 164 = 0xa4
	id _windowController;	// 172 = 0xac
	NSArray *_windowInternalConstraints;	// 176 = 0xb0
	NSISEngine *_layoutEngine;	// 180 = 0xb4
	BOOL __usesLegacySupportedOrientationChecks;	// 184 = 0xb8
}
@property(retain, nonatomic, setter=_setLayoutEngine:) NSISEngine *_layoutEngine;	// G=0x30db667d; S=0x30db668d; @synthesize
@property(readonly, assign, nonatomic) BOOL _usesLegacySupportedOrientationChecks;	// G=0x30db669d; @synthesize=__usesLegacySupportedOrientationChecks
@property(copy, nonatomic, setter=_setWindowInternalConstraints:) NSArray *_windowInternalConstraints;	// G=0x30db6659; S=0x30db666d; @synthesize
@property(assign) BOOL autorotates;	// G=0x30db4e29; S=0x30db4641; converted property
@property(retain) id contentView;	// G=0x30db58f9; S=0x30ca5245; converted property
@property(assign) id delegate;	// G=0x30c4f0b5; S=0x30c36655; converted property
@property(readonly, retain) UIResponder *firstResponder;	// G=0x30c190b1; converted property
@property(assign) BOOL keepContextInBackground;	// G=0x30c7b1ed; S=0x30db6075; converted property
@property(readonly, assign, nonatomic, getter=isKeyWindow) BOOL keyWindow;	// G=0x30c194f9; 
@property(assign) float level;	// G=0x30c3052d; S=0x30d73edd; converted property
@property(assign) BOOL resizesToFullScreen;	// G=0x30db6045; S=0x30db6059; converted property
@property(retain, nonatomic) UIViewController *rootViewController;	// G=0x30c36209; S=0x30db2899; @synthesize=_rootViewController
@property(retain, nonatomic) UIScreen *screen;	// G=0x30c17d5d; S=0x30db527d; 
@property(readonly, retain) NSUndoManager *undoManager;	// G=0x30db598d; converted property
@property(assign, nonatomic) float windowLevel;	// G=0x30c23e29; S=0x30c3626d; 
+ (void)__popKeyWindow:(id)window findNewKeyWindowIfStackEmpty:(BOOL)empty;	// 0x30db56fd
+ (void)_clearKeyWindowStack;	// 0x30db56e5
+ (id)_findWithDisplayPoint:(CGPoint)displayPoint;	// 0x30cdd095
+ (id)_hitTestToPoint:(CGPoint)point pathIndex:(int)index forEvent:(id)event;	// 0x30c231cd
+ (unsigned)_keyWindowStackSize;	// 0x30c9201d
+ (void)_noteStatusBarHeightChanged:(float)changed oldHeight:(float)height;	// 0x30db5a55
+ (void)_popKeyWindow;	// 0x30ce0a91
+ (void)_popKeyWindow:(id)window;	// 0x30db57ed
+ (void)_prepareWindowsForAppResume;	// 0x30cdb985
+ (void)_prepareWindowsForAppSuspend;	// 0x30c7b141
+ (void)_pushKeyWindow:(id)window;	// 0x30d195f9
+ (void)_removeWindowFromStack:(id)stack;	// 0x30db5831
+ (void)_setKeyWindowStackEnabled:(BOOL)enabled;	// 0x30ce6571
+ (void)_synchronizeDrawing;	// 0x30c86331
+ (unsigned)_synchronizeDrawingAcrossProcesses;	// 0x30d7b5f5
+ (void)_synchronizeDrawingAcrossProcessesOverPort:(unsigned)port;	// 0x30db4f29
+ (unsigned)_synchronizeDrawingAcrossProcessesWithPreCommitHandler:(id)preCommitHandler;	// 0x30db4f21
+ (id)_topVisibleWindowPassingTest:(id)test;	// 0x30db5ea5
+ (id)allWindowsIncludingInternalWindows:(BOOL)windows onlyVisibleWindows:(BOOL)windows2;	// 0x30c303fd
+ (CGRect)constrainFrameToScreen:(CGRect)screen;	// 0x30c43729
+ (void *)createIOSurfaceWithContextId:(unsigned)contextId frame:(CGRect)frame;	// 0x30db5b05
+ (void *)createIOSurfaceWithContextIds:(const unsigned *)contextIds count:(unsigned)count frame:(CGRect)frame;	// 0x30db5b45
+ (void *)createIOSurfaceWithContextIds:(const unsigned *)contextIds count:(unsigned)count frame:(CGRect)frame outTransform:(CGAffineTransform *)transform;	// 0x30d9bcf9
+ (void *)createIOSurfaceWithContextIds:(const unsigned *)contextIds count:(unsigned)count frame:(CGRect)frame usePurpleGfx:(BOOL)gfx outTransform:(CGAffineTransform *)transform;	// 0x30d9bd39
+ (void *)createScreenIOSurface;	// 0x30db5cb9
+ (id)keyWindow;	// 0x30c23d89
+ (Class)layerClass;	// 0x30c3eb5d
+ (void)setAllWindowsKeepContextInBackground:(BOOL)background;	// 0x30db2641
- (id)initWithCoder:(id)coder;	// 0x30db2209
- (id)initWithContentRect:(CGRect)contentRect;	// 0x30c436b1
- (id)initWithFrame:(CGRect)frame;	// 0x30c3ea65
- (id)__clientsForRotationCallbacks;	// 0x30db4119
- (void)_addRotationViewController:(id)controller;	// 0x30db427d
- (void)_addTintView:(id)view;	// 0x30db659d
- (BOOL)_affectsTintView;	// 0x30db6021
- (BOOL)_becomeFirstResponderWhenPossible;	// 0x30db5989
- (void)_beginModalSession;	// 0x30db3635
- (BOOL)_canBecomeKeyWindow;	// 0x30db3895
- (BOOL)_canPromoteFromKeyWindowStack;	// 0x30db3899
- (id)_centerExpressionInContainer:(id)container vertical:(BOOL)vertical;	// 0x3102f071
- (BOOL)_clearMouseView;	// 0x30c30541
- (void)_clearPendingKeyboardChanges;	// 0x30db4301
- (id)_clientsForRotation;	// 0x30c4f865
- (void)_commonInit;	// 0x30c3eb91
- (BOOL)_containedInAbsoluteResponderChain;	// 0x30db37e1
- (unsigned)_contextId;	// 0x30c42c21
- (CGPoint)_convertOffset:(CGPoint)offset fromWindow:(id)window;	// 0x30db359d
- (CGPoint)_convertOffset:(CGPoint)offset toWindow:(id)window;	// 0x30db3509
- (void)_createContext;	// 0x30c3f14d
- (id)_currentTintView;	// 0x30db61a1
- (void)_destroyContext;	// 0x30c7b21d
- (BOOL)_disableGroupOpacity;	// 0x30c4395d
- (BOOL)_disableViewScaling;	// 0x30db2829
- (void)_endModalSession;	// 0x30db370d
- (id)_exclusiveTouchView;	// 0x30c25395
- (unsigned)_expectedWindowInternalConstraintsCount;	// 0x3102f19d
- (void)_finishedFirstHalfRotation:(id)rotation finished:(id)finished context:(id)context;	// 0x30db47a9
- (void)_finishedFullRotation:(id)rotation finished:(id)finished context:(id)context;	// 0x30d7b60d
- (void)_finishedFullRotation:(id)rotation finished:(id)finished context:(id)context skipNotification:(BOOL)notification;	// 0x30db4ab5
- (id)_firstResponder;	// 0x30c164dd
- (void)_forceTwoPartRotationAnimation:(BOOL)animation;	// 0x30db467d
- (void)_handleDeviceOrientationChange:(id)change;	// 0x30c50371
- (void)_handleStatusBarOrientationChange:(id)change;	// 0x30d6c0b1
- (BOOL)_hasContext;	// 0x30c86359
- (BOOL)_ignoresHitTest;	// 0x30c23271
- (BOOL)_includeInDefaultImageSnapshot;	// 0x30db5ffd
- (void)_initializeLayoutEngine;	// 0x310268ed
- (void)_invalidateWindowInternalConstraints;	// 0x3102f141
- (BOOL)_isAnyWindowRotating;	// 0x30d6c105
- (BOOL)_isHostedInAnotherProcess;	// 0x30db5e81
- (BOOL)_isLoweringAnchoringConstraints;	// 0x3102f04d
- (BOOL)_isScrollingEnabledForView:(id)view;	// 0x30d913b9
- (BOOL)_isSettingFirstResponder;	// 0x30c19071
- (BOOL)_isStatusBarWindow;	// 0x30db5a51
- (BOOL)_isTextEffectsWindow;	// 0x30e79c61
- (BOOL)_isWindowServerHostingManaged;	// 0x30c35fd1
// declared property getter: - (id)_layoutEngine;	// 0x30db667d
- (id)_layoutEngineConsultingOverride;	// 0x31026ab9
- (id)_layoutEngineCreateIfNecessary;	// 0x31026a01
- (id)_layoutEngineCreateIfNecessaryConsultingOverride;	// 0x31026a99
- (id)_layoutEngineIfAvailable;	// 0x31026a41
- (id)_layoutEngineIfAvailableConsultingOverride;	// 0x31026aa9
- (BOOL)_legacyShouldAutorotateToInterfaceOrientation:(int)_legacy;	// 0x30db4319
- (void)_makeKeyWindowIgnoringOldKeyWindow:(BOOL)window;	// 0x30db5575
- (void)_matchDeviceBounds;	// 0x30e79c65
- (void)_orderContextToFront;	// 0x30db2731
- (void)_orderFrontWithoutMakingKey;	// 0x30c42aa5
- (void)_positionHeaderView:(id)view andFooterView:(id)view2 outsideContentViewForInterfaceOrientation:(int)interfaceOrientation;	// 0x30db3aad
- (void)_rebuildLayoutFromScratch;	// 0x31026ac9
- (id)_redundantConstraints;	// 0x31026b7d
- (void)_registerChargedView:(id)view;	// 0x30c67bc1
- (void)_registerScrollToTopView:(id)topView;	// 0x30c663f5
- (void)_registerSwipeView:(id)view;	// 0x30c66355
- (void)_registerViewForSubtreeMonitoring:(id)subtreeMonitoring;	// 0x30d26b31
- (id)_registeredScrollToTopViews;	// 0x30db5941
- (void)_removeRotationViewController:(id)controller;	// 0x30db42e1
- (void)_removeTintView:(id)view;	// 0x30db661d
- (void)_resignKeyWindowStatus;	// 0x30db54b9
- (id)_rotationViewControllers;	// 0x30c4f311
- (void)_scrollToTopViewsUnderScreenPointIfNecessary:(CGPoint)topViewsUnderScreenPointIfNecessary resultHandler:(id)handler;	// 0x30db2b79
- (void)_sendGesturesForEvent:(id)event;	// 0x30c25861
- (void)_sendTouchesForEvent:(id)event;	// 0x30c25d55
- (void)_setExclusiveTouchView:(id)view;	// 0x30d0b2e9
- (void)_setFirstResponder:(id)responder;	// 0x30c19219
- (void)_setHidden:(BOOL)hidden forced:(BOOL)forced;	// 0x30c35ce1
- (void)_setIsLoweringAnchoringConstraints:(BOOL)constraints;	// 0x3102eff1
- (void)_setIsSettingFirstResponder:(BOOL)responder;	// 0x30c19141
- (void)_setLayerHidden:(BOOL)hidden;	// 0x30c35ef5
// declared property setter: - (void)_setLayoutEngine:(id)engine;	// 0x30db668d
- (void)_setMouseDownView:(id)view withEvent:(GSEventRef)event;	// 0x30c36ad9
- (void)_setMouseEnteredView:(id)view;	// 0x30c305bd
- (void)_setRotatableClient:(id)client toOrientation:(int)orientation duration:(double)duration force:(BOOL)force;	// 0x30db4775
- (void)_setRotatableClient:(id)client toOrientation:(int)orientation updateStatusBar:(BOOL)bar duration:(double)duration force:(BOOL)force;	// 0x30d6de29
- (void)_setRotatableClient:(id)client toOrientation:(int)orientation updateStatusBar:(BOOL)bar duration:(double)duration force:(BOOL)force isRotating:(BOOL)rotating;	// 0x30ce3739
- (void)_setRotatableViewOrientation:(int)orientation duration:(double)duration;	// 0x30db4659
- (void)_setRotatableViewOrientation:(int)orientation duration:(double)duration force:(BOOL)force;	// 0x30d6dd9d
// declared property setter: - (void)_setWindowInternalConstraints:(id)constraints;	// 0x30db666d
- (BOOL)_shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x30c4f539
- (void)_slideFooterFromOrientation:(int)orientation toOrientation:(int)orientation2 startSnapshot:(id)snapshot endSnapshot:(id)snapshot4 duration:(double)duration;	// 0x30db3cf9
- (void)_slideHeaderView:(id)view andFooterView:(id)view2 offScreen:(BOOL)screen forInterfaceOrientation:(int)interfaceOrientation;	// 0x30db389d
- (id)_subtreeMonitorsForView:(id)view;	// 0x30c15b69
- (unsigned)_supportedInterfaceOrientationsForRootViewController;	// 0x30db4455
- (void)_tagAsSpringboardPresentationWindow;	// 0x30db24bd
- (id)_targetForStolenStatusBarTouchesAtPoint:(CGPoint)point withEvent:(id)event excludingWindow:(id)window;	// 0x30d8aba5
- (void)_tintViewDidChangeAppearance:(id)_tintView;	// 0x30db61d1
- (id)_touchData;	// 0x30c24ae5
- (CGPoint)_transformDisplayToWindowCoordinates:(CGPoint)windowCoordinates;	// 0x30cdd801
- (void)_transformLayerShouldMaskToBounds:(BOOL)_transformLayer;	// 0x30db2621
- (id)_uiib_candidateRedundantConstraints;	// 0x31026b55
- (id)_uiib_layoutEngineCreatingIfNecessary;	// 0x31026b45
- (void)_unregisterChargedView:(id)view;	// 0x30ca4299
- (void)_unregisterScrollToTopView:(id)topView;	// 0x30c34b4d
- (void)_unregisterSwipeView:(id)view;	// 0x30c339dd
- (void)_unregisterViewForSubtreeMonitoring:(id)subtreeMonitoring;	// 0x30d28825
- (void)_updateAppTintView;	// 0x30db61b1
- (void)_updateConstraintsAtWindowLevelIfNeeded;	// 0x3102f695
- (void)_updateCurrentTintView;	// 0x30db6239
- (void)_updateCurrentTintViewForPotentialTintView:(id)potentialTintView;	// 0x30db61f5
- (void)_updateInterfaceOrientationFromDeviceOrientation;	// 0x30c36be1
- (void)_updateInterfaceOrientationFromDeviceOrientation:(BOOL)deviceOrientation;	// 0x30c36bf9
- (void)_updateInterfaceOrientationFromDeviceOrientationIfRotationEnabled:(BOOL)deviceOrientationIfRotationEnabled;	// 0x30c503e5
- (void)_updateStatusBarToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x30db4745
- (void)_updateStatusBarToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration fenceID:(int)anId animation:(int)animation;	// 0x30db4695
- (void)_updateToInterfaceOrientation:(int)interfaceOrientation animated:(BOOL)animated;	// 0x30db45d9
- (void)_updateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration force:(BOOL)force;	// 0x30c4fba1
- (void)_updateTransformLayer;	// 0x30c3ecc9
- (void)_updateTransformLayerForClassicPresentation;	// 0x30db24d5
// declared property getter: - (BOOL)_usesLegacySupportedOrientationChecks;	// 0x30db669d
- (BOOL)_usesWindowServerHitTesting;	// 0x30db5e7d
- (id)_window;	// 0x30df633d
// declared property getter: - (id)_windowInternalConstraints;	// 0x30db6659
- (void)_windowInternalConstraints_centerDidChange;	// 0x3102f295
- (void)_windowInternalConstraints_sizeDidChange;	// 0x3102f1bd
- (void)_writeLayerTreeToPath:(id)path;	// 0x30db6101
- (void)addRootViewControllerViewIfPossible;	// 0x30c42ab9
// converted property getter: - (BOOL)autorotates;	// 0x30db4e29
- (void)awakeFromNib;	// 0x30db23fd
- (void)becomeKeyWindow;	// 0x30c36029
- (void)beginDisablingInterfaceAutorotation;	// 0x30c662f5
- (int)bitsPerComponent;	// 0x30db5269
- (BOOL)canPerformAction:(SEL)action withSender:(id)sender;	// 0x30cdcd15
- (void)constraintsDidChangeInEngine:(id)constraints;	// 0x3102e77d
// converted property getter: - (id)contentView;	// 0x30db58f9
- (CGPoint)convertDeviceToWindow:(CGPoint)window;	// 0x30db383d
- (CGPoint)convertPoint:(CGPoint)point fromWindow:(id)window;	// 0x30c24585
- (CGPoint)convertPoint:(CGPoint)point toWindow:(id)window;	// 0x30c28ca9
- (CGRect)convertRect:(CGRect)rect fromWindow:(id)window;	// 0x30c880d1
- (CGRect)convertRect:(CGRect)rect toWindow:(id)window;	// 0x30c4e7b1
- (CGPoint)convertWindowToDevice:(CGPoint)device;	// 0x30db37e5
- (void *)createIOSurface;	// 0x30db5e19
- (void *)createIOSurfaceWithFrame:(CGRect)frame;	// 0x30db5dc1
- (void)dealloc;	// 0x30c3633d
- (id)defaultFirstResponder;	// 0x30c361c5
// converted property getter: - (id)delegate;	// 0x30c4f0b5
- (void)encodeWithCoder:(id)coder;	// 0x30db236d
- (void)endDisablingInterfaceAutorotation;	// 0x30c672dd
- (void)endDisablingInterfaceAutorotationAnimated:(BOOL)animated;	// 0x30c672f5
- (id)engine:(id)engine markerForConstraintToBreakAmongConstraints:(id)breakAmongConstraints;	// 0x3102e78d
- (void)engine:(id)engine willBreakConstraint:(id)constraint dueToMutuallyExclusiveConstraints:(id)mutuallyExclusiveConstraints;	// 0x3102eac1
// converted property getter: - (id)firstResponder;	// 0x30c190b1
- (void)handleStatusBarChangeFromHeight:(float)height toHeight:(float)height2;	// 0x30db5035
- (int)interfaceOrientation;	// 0x30c1b1a1
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x30e7dca5
- (BOOL)isInterfaceAutorotationDisabled;	// 0x30c50439
- (BOOL)isInternalWindow;	// 0x30c7ab65
// declared property getter: - (BOOL)isKeyWindow;	// 0x30c194f9
- (BOOL)isRotating;	// 0x30c4e529
- (BOOL)isUsingOnePartRotationAnimation;	// 0x30cdebd5
// converted property getter: - (BOOL)keepContextInBackground;	// 0x30c7b1ed
- (void)layoutSublayersOfLayer:(id)layer;	// 0x31026c81
// converted property getter: - (float)level;	// 0x30c3052d
- (void)makeKey:(id)key;	// 0x30c35ffd
- (void)makeKeyAndOrderFront:(id)front;	// 0x30cd2095
- (void)makeKeyAndVisible;	// 0x30ca1209
- (void)makeKeyWindow;	// 0x30c36011
- (void)matchDeviceOrientation;	// 0x30d6c17d
- (id)nextResponder;	// 0x30c19ba1
- (void)orderFront:(id)front;	// 0x30c4fde5
- (void)orderOut:(id)anOut;	// 0x30c35cb1
- (void)redo:(id)redo;	// 0x30db5a15
- (void)removeFromSuperview;	// 0x30db60cd
- (id)representation;	// 0x30d443a5
- (void)resignKeyWindow;	// 0x30d196b5
// converted property getter: - (BOOL)resizesToFullScreen;	// 0x30db6045
// declared property getter: - (id)rootViewController;	// 0x30c36209
// declared property getter: - (id)screen;	// 0x30c17d5d
- (void)sendEvent:(id)event;	// 0x30c256d1
// converted property setter: - (void)setAutorotates:(BOOL)autorotates;	// 0x30db4641
- (void)setAutorotates:(BOOL)autorotates forceUpdateInterfaceOrientation:(BOOL)orientation;	// 0x30c367c1
- (void)setBecomeKeyOnOrderFront:(BOOL)front;	// 0x30c86f35
- (void)setBounds:(CGRect)bounds;	// 0x3102f351
- (void)setCenter:(CGPoint)center;	// 0x3102f5bd
// converted property setter: - (void)setContentView:(id)view;	// 0x30ca5245
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x30c36655
- (void)setFrame:(CGRect)frame;	// 0x3102f42d
- (void)setHidden:(BOOL)hidden;	// 0x30c35cc9
// converted property setter: - (void)setKeepContextInBackground:(BOOL)background;	// 0x30db6075
// converted property setter: - (void)setLevel:(float)level;	// 0x30d73edd
// converted property setter: - (void)setResizesToFullScreen:(BOOL)fullScreen;	// 0x30db6059
// declared property setter: - (void)setRootViewController:(id)controller;	// 0x30db2899
// declared property setter: - (void)setScreen:(id)screen;	// 0x30db527d
// declared property setter: - (void)setWindowLevel:(float)level;	// 0x30c3626d
- (void)setupForOrientation:(int)orientation;	// 0x30e78f8d
- (void)synchronizeDrawingWithID:(int)anId;	// 0x30cdebed
- (void)synchronizeDrawingWithID:(int)anId count:(unsigned)count;	// 0x30db5015
- (void)undo:(id)undo;	// 0x30db59dd
// converted property getter: - (id)undoManager;	// 0x30db598d
- (void)updateConstraints;	// 0x3102ec65
- (void)updateConstraintsIfNeeded;	// 0x31026cfd
- (CGPoint)warpPoint:(CGPoint)point;	// 0x30c23fb1
// declared property getter: - (float)windowLevel;	// 0x30c23e29
- (int)windowOutput;	// 0x30c362f1
@end
