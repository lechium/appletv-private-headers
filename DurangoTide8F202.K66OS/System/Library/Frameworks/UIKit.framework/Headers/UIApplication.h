/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIActionSheetDelegate.h"
#import "UIResponder.h"

@class NSMutableSet, NSArray, NSTimer, UIStatusBar, UIEvent, UIWindow, UIStatusBarWindow;
@protocol UIApplicationDelegate;

@interface UIApplication : UIResponder <UIActionSheetDelegate> {
@private
	id<UIApplicationDelegate> _delegate;	// 4 = 0x4
	CFDictionaryRef _touchMap;	// 8 = 0x8
	NSMutableSet *_exclusiveTouchWindows;	// 12 = 0xc
	UIEvent *_event;	// 16 = 0x10
	UIEvent *_touchesEvent;	// 20 = 0x14
	UIEvent *_motionEvent;	// 24 = 0x18
	UIEvent *_remoteControlEvent;	// 28 = 0x1c
	int _remoteControlEventObservers;	// 32 = 0x20
	NSArray *_topLevelNibObjects;	// 36 = 0x24
	int _networkResourcesCurrentlyLoadingCount;	// 40 = 0x28
	NSTimer *_hideNetworkActivityIndicatorTimer;	// 44 = 0x2c
	id _editAlertView;	// 48 = 0x30
	UIStatusBar *_statusBar;	// 52 = 0x34
	UIStatusBarWindow *_statusBarWindow;	// 56 = 0x38
	struct {
		unsigned isActive : 1;
		unsigned isSuspended : 1;
		unsigned isSuspendedEventsOnly : 1;
		unsigned isLaunchedSuspended : 1;
		unsigned calledNonSuspendedLaunchDelegate : 1;
		unsigned isHandlingURL : 1;
		unsigned isHandlingRemoteNotification : 1;
		unsigned isHandlingLocalNotification : 1;
		unsigned statusBarShowsProgress : 1;
		unsigned statusBarRequestedStyle : 4;
		unsigned statusBarHidden : 1;
		unsigned blockInteractionEvents : 4;
		unsigned receivesMemoryWarnings : 1;
		unsigned showingProgress : 1;
		unsigned receivesPowerMessages : 1;
		unsigned launchEventReceived : 1;
		unsigned isAnimatingSuspensionOrResumption : 1;
		unsigned isResuming : 1;
		unsigned isSuspendedUnderLock : 1;
		unsigned isRunningInTaskSwitcher : 1;
		unsigned shouldExitAfterSendSuspend : 1;
		unsigned shouldExitAfterTaskCompletion : 1;
		unsigned terminating : 1;
		unsigned isHandlingShortCutURL : 1;
		unsigned idleTimerDisabled : 1;
		unsigned deviceOrientation : 3;
		unsigned delegateShouldBeReleasedUponSet : 1;
		unsigned delegateHandleOpenURL : 1;
		unsigned delegateOpenURL : 1;
		unsigned delegateDidReceiveMemoryWarning : 1;
		unsigned delegateWillTerminate : 1;
		unsigned delegateSignificantTimeChange : 1;
		unsigned delegateWillChangeInterfaceOrientation : 1;
		unsigned delegateDidChangeInterfaceOrientation : 1;
		unsigned delegateWillChangeStatusBarFrame : 1;
		unsigned delegateDidChangeStatusBarFrame : 1;
		unsigned delegateDeviceAccelerated : 1;
		unsigned delegateDeviceChangedOrientation : 1;
		unsigned delegateDidBecomeActive : 1;
		unsigned delegateWillResignActive : 1;
		unsigned delegateDidEnterBackground : 1;
		unsigned delegateWillEnterForeground : 1;
		unsigned delegateWillSuspend : 1;
		unsigned delegateDidResume : 1;
		unsigned userDefaultsSyncDisabled : 1;
		unsigned headsetButtonClickCount : 4;
		unsigned isHeadsetButtonDown : 1;
		unsigned isFastForwardActive : 1;
		unsigned isRewindActive : 1;
		unsigned disableViewGroupOpacity : 1;
		unsigned disableViewEdgeAntialiasing : 1;
		unsigned shakeToEdit : 1;
		unsigned isClassic : 1;
		unsigned zoomInClassicMode : 1;
		unsigned ignoreHeadsetClicks : 1;
		unsigned touchRotationDisabled : 1;
		unsigned taskSuspendingUnsupported : 1;
		unsigned isUnitTests : 1;
		unsigned requiresHighResolution : 1;
		unsigned disableViewContentScaling : 1;
		unsigned singleUseLaunchOrientation : 3;
		unsigned defaultInterfaceOrientation : 3;
	} _applicationFlags;	// 60 = 0x3c
}
@property(assign, nonatomic) int applicationIconBadgeNumber;	// G=0x306e7a21; S=0x3061a1a1; 
@property(readonly, assign, nonatomic) int applicationState;	// G=0x305fb071; 
@property(assign, nonatomic) BOOL applicationSupportsShakeToEdit;	// G=0x306e4c4d; S=0x305bb5ad; 
@property(readonly, assign, nonatomic) double backgroundTimeRemaining;	// G=0x306e8151; 
@property(assign) float backlightLevel;	// G=0x306e7ab9; S=0x306e7aad; converted property
@property(assign, nonatomic) id<UIApplicationDelegate> delegate;	// G=0x305b305d; S=0x305bc86d; 
@property(assign) int doubleHeightMode;	// G=0x306e68f5; S=0x306e6195; converted property
@property(assign, nonatomic, getter=isIdleTimerDisabled) BOOL idleTimerDisabled;	// G=0x306e4b49; S=0x30616ca9; 
@property(assign) BOOL ignoresInteractionEvents;	// G=0x30658d61; S=0x30600ce9; converted property
@property(readonly, assign, nonatomic) UIWindow *keyWindow;	// G=0x30672f39; 
@property(assign, nonatomic, getter=isNetworkActivityIndicatorVisible) BOOL networkActivityIndicatorVisible;	// G=0x306e4b61; S=0x3060d251; 
@property(readonly, assign, nonatomic, getter=isProtectedDataAvailable) BOOL protectedDataAvailable;	// G=0x306e6af5; 
@property(assign, nonatomic, getter=isProximitySensingEnabled) BOOL proximitySensingEnabled;	// G=0x306e4e59; S=0x306e4e89; 
@property(assign, getter=isRunningInTaskSwitcher) BOOL runningInTaskSwitcher;	// G=0x3060d2a5; S=0x305f9345; converted property
@property(retain) id scheduledLocalNotifications;	// G=0x3060d231; S=0x306e5089; converted property
@property(assign) unsigned simpleRemoteRoutingPriority;	// G=0x306e7029; S=0x30618451; converted property
@property(readonly, retain) UIStatusBar *statusBar;	// G=0x305a2db5; converted property
@property(readonly, assign, nonatomic) CGRect statusBarFrame;	// G=0x3062a9c5; 
@property(assign, nonatomic, getter=isStatusBarHidden) BOOL statusBarHidden;	// G=0x305c62b5; S=0x305fb119; 
@property(assign, nonatomic) int statusBarOrientation;	// G=0x305a2445; S=0x306e626d; 
@property(readonly, assign, nonatomic) double statusBarOrientationAnimationDuration;	// G=0x3063b5e5; 
@property(assign, nonatomic) int statusBarStyle;	// G=0x30608a5d; S=0x306e62e1; 
@property(readonly, retain) UIStatusBarWindow *statusBarWindow;	// G=0x306e4b7d; converted property
@property(assign) BOOL usesBackgroundNetwork;	// G=0x306e74a1; S=0x306e748d; converted property
@property(readonly, assign, nonatomic) NSArray *windows;	// G=0x3060e669; 
+ (void)_startWindowServerIfNecessary;	// 0x305bade1
+ (int)interfaceOrientationForString:(id)string;	// 0x305bbefd
+ (BOOL)isRunningEventPump;	// 0x305bad71
+ (BOOL)isRunningInStoreDemoMode;	// 0x30617f5d
+ (BOOL)registerForSystemEvents;	// 0x305bad41
+ (BOOL)rendersLocally;	// 0x305baf8d
+ (id)sharedApplication;	// 0x305a2439
+ (BOOL)shouldMakeUIForDefaultPNG;	// 0x305cf129
+ (int)statusBarStyleForString:(id)string;	// 0x305bbe2d
+ (id)stringForInterfaceOrientation:(int)interfaceOrientation;	// 0x306e4c91
+ (id)stringForStatusBarStyle:(int)statusBarStyle;	// 0x306e4c65
- (id)init;	// 0x305bb101
- (BOOL)_accessibilityApplicationIsSystemWideServer;	// 0x305bcffd
- (Class)_accessibilityBundlePrincipalClass;	// 0x306bb401
- (BOOL)_accessibilityCaptureSimulatorEvent:(GSEventRef)event;	// 0x305a79c5
- (void)_accessibilityInit;	// 0x305bce19
- (id)_accessibilitySettingsBundle;	// 0x305bcf85
- (BOOL)_accessibilitySettingsLoaderPresent;	// 0x305bced9
- (void)_accessibilityStatusChanged:(id)changed;	// 0x306bb3ed
- (void)_addRecorder:(id)recorder;	// 0x306e5379
- (void)_alertSheetStackChanged;	// 0x306a08f1
- (BOOL)_alertWindowShouldRotate;	// 0x306e4cf5
- (void)_applicationOpenURL:(id)url event:(GSEventRef)event;	// 0x306e5bc1
- (void)_applicationOpenURL:(id)url payload:(id)payload;	// 0x306e5be1
- (id)_backgroundModes;	// 0x306e4eb9
- (void)_beginShowingNetworkActivityIndicator;	// 0x306e4fe5
- (void)_callApplicationResumeHandlersForURL:(id)url payload:(id)payload;	// 0x306e5205
- (void)_callInitializationDelegatesForURL:(id)url payload:(id)payload suspended:(BOOL)suspended;	// 0x305c351d
- (BOOL)_canOpenURL:(id)url publicURLsOnly:(BOOL)only;	// 0x306e737d
- (void)_cancelAllTouches;	// 0x305f9461
- (void)_cancelCurrentTouchEvent;	// 0x306e4d39
- (void)_cancelEvent:(id)event;	// 0x306e70a1
- (void)_cancelEvent:(id)event forWindow:(id)window;	// 0x306e714d
- (void)_cancelGestureRecognizers:(id)recognizers;	// 0x305a9fa1
- (void)_cancelGestureRecognizersForView:(id)view;	// 0x305b5cd5
- (void)_cancelTouches:(id)touches withEvent:(id)event sendingTouchesCancelled:(BOOL)cancelled includingGestures:(BOOL)gestures;	// 0x305f94b5
- (void)_clearTouchesForView:(id)view;	// 0x305ae7b9
- (CGImageRef)_createDefaultImageSnapshot;	// 0x306e7565
- (void)_createStatusBarWithRequestedStyle:(int)requestedStyle orientation:(int)orientation hidden:(BOOL)hidden;	// 0x305bdd09
- (int)_currentExpectedInterfaceOrientation;	// 0x305d1741
- (id)_currentTests;	// 0x305ee1d1
- (void)_dumpScreenContents:(GSEventRef)contents;	// 0x306e7bcd
- (void)_dumpUIHierarchy:(GSEventRef)hierarchy;	// 0x306e7b05
- (void)_endShowingNetworkActivityIndicator;	// 0x306e4f4d
- (id)_event;	// 0x305920fd
- (id)_exclusiveTouchWindows;	// 0x305aa43d
- (BOOL)_executableWasLinkedWithUIKit;	// 0x306e4dc5
- (id)_extendLaunchTest;	// 0x30617d15
- (void)_fetchInfoPlistFlags;	// 0x305bb5c9
- (int)_frontMostAppOrientation;	// 0x3061add5
- (unsigned)_frontmostApplicationPort;	// 0x306e4bcd
- (int)_getSpringBoardOrientation;	// 0x306e5725
- (void *)_getSymbol:(id)symbol forFramework:(id)framework;	// 0x3069af35
- (void)_handleAccessoryKeyStateChanged:(GSEventRef)changed;	// 0x306e6e19
- (void)_handleApplicationResumeEvent:(GSEventRef)event;	// 0x306e839d
- (void)_handleApplicationSuspend:(GSEventRef)suspend eventInfo:(void *)info;	// 0x305f8b0d
- (void)_handleHeadsetButtonClick;	// 0x306e5e4d
- (void)_handleHeadsetButtonDoubleClick;	// 0x306e5db1
- (void)_handleHeadsetButtonDown:(GSEventRef)down;	// 0x306e6055
- (void)_handleHeadsetButtonTripleClick;	// 0x306e5d55
- (void)_handleHeadsetButtonUp:(GSEventRef)up;	// 0x306e5edd
- (void)_handleKeyEvent:(GSEventRef)event;	// 0x3067e459
- (void)_handleUserDefaultsDidChange:(id)_handleUserDefaults;	// 0x305b0159
- (void)_hideNetworkActivityIndicator;	// 0x306e5071
- (void)_installAutoreleasePoolsIfNecessaryForMode:(CFStringRef)mode;	// 0x305bd40d
- (BOOL)_isActivated;	// 0x305fb0c1
- (BOOL)_isClassic;	// 0x305a7c81
- (BOOL)_isInteractionEvent:(GSEventRef)event;	// 0x305ee3bd
- (BOOL)_isLaunchedSuspended;	// 0x306e4bb9
- (BOOL)_isMotionEvent:(GSEventRef)event;	// 0x305920e5
- (BOOL)_isResuming;	// 0x306e4ba5
- (BOOL)_isTouchEvent:(GSEventRef)event;	// 0x30592089
- (BOOL)_isTrackingAnyTouch;	// 0x306e7a6d
- (BOOL)_isViewContentScalingDisabled;	// 0x306e4d59
- (BOOL)_isViewEdgeAntialiasingDisabled;	// 0x305bf14d
- (BOOL)_isViewGroupOpacityDisabled;	// 0x305c3b6d
- (BOOL)_isWindowServerHostingManaged;	// 0x305bf189
- (id)_launchTestName;	// 0x305ee569
- (void)_leak;	// 0x30718439
- (void)_loadMainNibFile;	// 0x305c346d
- (id)_localCachesDirectory;	// 0x306e74c5
- (id)_motionEvent;	// 0x306e4cd5
- (void)_noteAnimationFinished:(id)finished;	// 0x30717b49
- (void)_noteAnimationStarted:(id)started;	// 0x30717c65
- (void)_notifyDidChangeStatusBarFrame:(CGRect)_notify;	// 0x30692a91
- (void)_notifySpringBoardOfStatusBarOrientationChangeAndFenceWithAnimationDuration:(double)animationDuration;	// 0x306928cd
- (void)_notifyWillChangeStatusBarFrame:(CGRect)_notify;	// 0x306927d1
- (id)_pathForFrameworkName:(id)frameworkName inPrivate:(BOOL)aPrivate;	// 0x3069b015
- (void)_performMemoryWarning;	// 0x306e7331
- (void)_playbackEvents:(id)events atPlaybackRate:(float)playbackRate messageWhenDone:(id)done withSelector:(SEL)selector;	// 0x3062dcbd
- (void)_playbackTimerCallback:(id)callback;	// 0x3062df39
- (void)_postSimpleRemoteNotificationForAction:(int)action andContext:(int)context;	// 0x306e6081
- (void)_processScriptEvent:(GSEventRef)event;	// 0x3062dc0d
- (void)_purgeSharedInstances;	// 0x305fa325
- (CFMessagePortRef)_purplePPTServerPort;	// 0x305f7acd
- (void)_receivedMemoryNotification;	// 0x306e7d05
- (void)_registerForAlertItemStateChangeNotification;	// 0x305bd249
- (void)_registerForKeyBagLockStatusNotification;	// 0x305bd289
- (void)_registerForLanguageChangedNotification;	// 0x305bd185
- (void)_registerForLocaleChangedNotification;	// 0x305bd205
- (void)_registerForLocaleWillChangeNotification;	// 0x305bd1c5
- (void)_registerForSignificantTimeChangeNotification;	// 0x305bd145
- (void)_registerForUserDefaultsChanges;	// 0x305bd0f1
- (id)_remoteControlEvent;	// 0x306e4ce5
- (void)_removeRecorder:(id)recorder;	// 0x306e5359
- (void)_removeSnapshotImage;	// 0x306e5b35
- (void)_reportAppLaunchFinished;	// 0x305d2905
- (void)_reportResults:(id)results;	// 0x305f7841
- (BOOL)_requiresHighResolution;	// 0x306e4d5d
- (BOOL)_rotationDisabledDuringTouch;	// 0x305aa44d
- (void)_run;	// 0x305bcbd5
- (void)_runWithURL:(id)url payload:(id)payload launchOrientation:(int)orientation statusBarStyle:(int)style statusBarHidden:(BOOL)hidden;	// 0x305bda55
- (BOOL)_saveSnapshotWithName:(id)name;	// 0x305f9c3d
- (void)_sendMotionBegan:(int)began;	// 0x306e5ae5
- (void)_sendMotionCancelled:(int)cancelled;	// 0x306e5a45
- (void)_sendMotionEnded:(int)ended;	// 0x306e5a95
- (void)_sendOrderedOutContexts;	// 0x305ee2a9
- (void)_sendRemoteControlEvent:(int)event;	// 0x306e59f9
- (void)_setActivated:(BOOL)activated;	// 0x305d20b5
- (void)_setDelegate:(id)delegate assumeOwnership:(BOOL)ownership;	// 0x30617f29
- (void)_setHandlingURL:(BOOL)url url:(id)url2;	// 0x306e5b51
- (void)_setIgnoreHeadsetClicks:(BOOL)clicks;	// 0x306e4d75
- (void)_setIsClassic:(BOOL)classic;	// 0x305bd5b5
- (void)_setRotationDisabledDuringTouch:(BOOL)touch;	// 0x306e4cf9
- (void)_setShouldZoom:(BOOL)_set;	// 0x305bd689
- (void)_setStatusBarMode:(int)mode;	// 0x306e66cd
- (void)_setStatusBarShowsProgress:(BOOL)progress;	// 0x3060d291
- (void)_setSuspended:(BOOL)suspended;	// 0x305f93f9
- (void)_setSuspendedEventsOnly:(BOOL)only;	// 0x306e6149
- (void)_setSuspendedUnderLock:(BOOL)lock;	// 0x305f936d
- (void)_setTouchMap:(CFDictionaryRef)map;	// 0x305a9341
- (void)_setUserDefaultsSyncEnabled:(BOOL)enabled;	// 0x306266d5
- (void)_sheetWithRemoteIdentifierDidDismiss:(id)_sheetWithRemoteIdentifier;	// 0x307bed9d
- (BOOL)_shouldHandleTestURL:(id)url;	// 0x305f7b55
- (BOOL)_shouldIgnoreHeadsetClicks;	// 0x306e4d91
- (BOOL)_shouldUseDefaultFirstResponder;	// 0x305d202d
- (BOOL)_shouldUseKeyWindowStack;	// 0x305b0051
- (BOOL)_shouldUseNextFirstResponder;	// 0x305b0029
- (BOOL)_shouldZoom;	// 0x306e4d45
- (void)_showEditAlertView;	// 0x306e58f5
- (void)_startPlaybackTimer;	// 0x3062dea5
- (void)_stopPlayback;	// 0x306e53cd
- (BOOL)_supportsShakesWhenNotActive;	// 0x305f9941
- (void)_terminateWithStatus:(int)status;	// 0x305fae71
- (CFDictionaryRef)_touchMap;	// 0x3059216d
- (id)_touchesEvent;	// 0x305a79c9
- (void)_unregisterForLanguageChangedNotification;	// 0x306e6b55
- (void)_unregisterForLocaleChangedNotification;	// 0x306e6b31
- (void)_unregisterForSignificantTimeChangeNotification;	// 0x306e6b79
- (void)_unregisterForTimeChangedNotification;	// 0x306e6b09
- (void)_unregisterForUserDefaultsChanges;	// 0x306e55b1
- (void)_updateAccessibilityItunesSettings;	// 0x307a649d
- (void)_updateAccessibilitySettingsLoader;	// 0x305bcf21
- (void)_updateApplicationAccessibility;	// 0x305bd041
- (BOOL)_updateDefaultImage;	// 0x305f9b81
- (void)_updateLargeTextNotification;	// 0x305bd0ad
- (void)_updateOrientation;	// 0x305ee40d
- (BOOL)_usesEmoji;	// 0x306e4d15
- (BOOL)_usesPreMTAlertBehavior;	// 0x306a0c55
- (int)_validateStatusBarStyle:(int)style;	// 0x305b0819
- (void)_wakeTimerFired;	// 0x306e8349
- (void)_writeApplicationDefaultPNGSnapshot;	// 0x306e76f5
- (void)acceleratedInX:(float)x Y:(float)y Z:(float)z;	// 0x306e4c15
- (void)accessoryKeyStateChanged:(GSEventRef)changed;	// 0x306e4c1d
- (int)activeInterfaceOrientation;	// 0x306e7a91
- (void)addStatusBarImageNamed:(id)named;	// 0x306e67bd
- (void)addStatusBarImageNamed:(id)named removeOnExit:(BOOL)exit;	// 0x306e6795
- (void)addStatusBarItem:(int)item;	// 0x3068c0cd
- (void)addStatusBarItem:(int)item removeOnExit:(BOOL)exit;	// 0x306e66e1
- (void)addStatusBarStyleOverrides:(int)overrides;	// 0x306e622d
- (void)addWebClipToHomeScreen:(id)homeScreen;	// 0x306e7a3d
- (int)alertOrientation;	// 0x3064641d
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;	// 0x306e5835
- (void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;	// 0x306e57d9
- (void)alertViewCancel:(id)cancel;	// 0x306e577d
- (void)anotherApplicationFinishedLaunching:(GSEventRef)launching;	// 0x306e4be1
- (void)applicationDidBeginSuspendAnimation;	// 0x305f8b09
- (void)applicationDidEndResumeAnimation;	// 0x306e4b95
- (void)applicationDidOrderOutContext:(unsigned)application;	// 0x305bf519
- (void)applicationDidResume;	// 0x306e4b9d
- (void)applicationDidResumeForEventsOnly;	// 0x306e4ba1
- (void)applicationDidResumeFromUnderLock;	// 0x306e4b99
- (void)applicationExited:(GSEventRef)exited;	// 0x306e4bd9
// declared property getter: - (int)applicationIconBadgeNumber;	// 0x306e7a21
- (void)applicationOpenToShortCut:(id)shortCut;	// 0x306e4c2d
- (void)applicationOpenURL:(id)url;	// 0x306e4c31
- (void)applicationResume:(GSEventRef)resume;	// 0x306e5d1d
- (CGRect)applicationSnapshotRectForOrientation:(int)orientation;	// 0x305fa105
// declared property getter: - (int)applicationState;	// 0x305fb071
// declared property getter: - (BOOL)applicationSupportsShakeToEdit;	// 0x306e4c4d
- (void)applicationSuspend:(GSEventRef)suspend;	// 0x305f9b69
- (void)applicationSuspended:(GSEventRef)suspended;	// 0x306e4bd1
- (void)applicationSuspendedSettingsUpdated:(GSEventRef)updated;	// 0x306e4bd5
- (void)applicationWillOrderInContext:(unsigned)application windowLevel:(float)level windowOutput:(int)output;	// 0x305bf18d
- (void)applicationWillSuspend;	// 0x305f98e9
- (void)applicationWillSuspendForEventsOnly;	// 0x306e4b8d
- (void)applicationWillSuspendUnderLock;	// 0x306e4b91
- (void)applicationWillTerminate;	// 0x3060ec29
// declared property getter: - (double)backgroundTimeRemaining;	// 0x306e8151
// converted property getter: - (float)backlightLevel;	// 0x306e7ab9
- (void)batteryStatusDidChange:(id)batteryStatus;	// 0x306e4d35
- (unsigned)beginBackgroundTaskWithExpirationHandler:(id)expirationHandler;	// 0x3060d7f5
- (void)beginIgnoringInteractionEvents;	// 0x305b1545
- (void)beginReceivingRemoteControlEvents;	// 0x3060d149
- (void)beginRemoteSheet:(id)sheet delegate:(id)delegate didEndSelector:(SEL)selector contextInfo:(void *)info;	// 0x307befb5
- (void)beginRemoteSheet:(id)sheet delegate:(id)delegate didEndSelector:(SEL)selector contextInfo:(void *)info requireTopApplication:(BOOL)application;	// 0x307bef79
- (void)beginRemoteSheet:(id)sheet delegate:(id)delegate didEndSelector:(SEL)selector contextInfo:(void *)info requireTopApplication:(BOOL)application opaque:(BOOL)opaque presentAnimated:(BOOL)animated;	// 0x307befe9
- (void)beginRemoteSheet:(id)sheet delegate:(id)delegate didEndSelector:(SEL)selector contextInfo:(void *)info requireTopApplication:(BOOL)application presentAnimated:(BOOL)animated;	// 0x307bef35
- (unsigned)blockInteractionEventsCount;	// 0x306e4d19
- (BOOL)canOpenURL:(id)url;	// 0x306e5d05
- (BOOL)canShowAlerts;	// 0x305d2031
- (void)cancelAllLocalNotifications;	// 0x306e50a9
- (void)cancelLocalNotification:(id)notification;	// 0x306e50c9
- (void)clearKeepAliveTimeout;	// 0x306e8249
- (void)dealloc;	// 0x306e8955
- (id)defaultFirstResponder;	// 0x306e51d9
- (double)defaultImageSnapshotExpiration;	// 0x305f9319
// declared property getter: - (id)delegate;	// 0x305b305d
- (void)didDismissMiniAlert;	// 0x306a68c9
- (void)didReceiveMemoryWarning;	// 0x306e555d
- (void)didReceiveUrgentMemoryWarningSuspendedAndWillTerminate;	// 0x306e5545
- (id)displayIDForURLScheme:(id)urlscheme isPublic:(BOOL)aPublic;	// 0x306e8001
- (id)displayIdentifier;	// 0x305b9461
// converted property getter: - (int)doubleHeightMode;	// 0x306e68f5
- (void)enableFramebufferStatisticsGathering;	// 0x3069ade5
- (int)enabledRemoteNotificationTypes;	// 0x306e51b9
- (void)endBackgroundTask:(unsigned)task;	// 0x3060d98d
- (void)endIgnoringInteractionEvents;	// 0x305aa6cd
- (void)endReceivingRemoteControlEvents;	// 0x3068c7ad
- (void)endRemoteSheet:(id)sheet;	// 0x307bef1d
- (void)endRemoteSheet:(id)sheet returnCode:(int)code;	// 0x307beef9
- (void)endRemoteSheet:(id)sheet returnCode:(int)code dismissAnimated:(BOOL)animated;	// 0x307bf1f9
- (void)failedTest:(id)test;	// 0x30717a41
- (void)failedTest:(id)test withResults:(id)results;	// 0x30717931
- (void)finishedSubTest:(id)test forTest:(id)test2;	// 0x30717ff5
- (void)finishedTest:(id)test;	// 0x30717a59
- (void)finishedTest:(id)test extraResults:(id)results;	// 0x305ee575
- (BOOL)firstLaunchAfterBoot;	// 0x306e4b39
- (BOOL)handleDoubleHeightStatusBarTap:(int)tap;	// 0x306e4b79
- (BOOL)handleEvent:(GSEventRef)event;	// 0x306e51ed
- (BOOL)handleEvent:(GSEventRef)event withNewEvent:(id)newEvent;	// 0x3059237d
- (void)handleKeyEvent:(GSEventRef)event;	// 0x3067e3f5
- (BOOL)handleTestURL:(id)url;	// 0x305f7bc1
- (void)headsetAvailabilityChanged:(GSEventRef)changed;	// 0x306e4bf5
- (void)headsetButtonDown:(GSEventRef)down;	// 0x306e4bed
- (void)headsetButtonUp:(GSEventRef)up;	// 0x306e4bf1
- (BOOL)homeScreenCanAddIcons;	// 0x306a8159
// converted property getter: - (BOOL)ignoresInteractionEvents;	// 0x30658d61
- (int)interfaceOrientation;	// 0x305fa0f1
- (BOOL)isAnimatingSuspensionOrResumption;	// 0x305921a1
- (BOOL)isHandlingOpenShortCut;	// 0x306e4c35
- (BOOL)isHandlingURL;	// 0x305c3b85
// declared property getter: - (BOOL)isIdleTimerDisabled;	// 0x306e4b49
- (BOOL)isIgnoringInteractionEvents;	// 0x3059217d
- (BOOL)isLocked;	// 0x306a474d
// declared property getter: - (BOOL)isNetworkActivityIndicatorVisible;	// 0x306e4b61
- (BOOL)isPasscodeRequiredToUnlock;	// 0x306e7fb5
// declared property getter: - (BOOL)isProtectedDataAvailable;	// 0x306e6af5
// declared property getter: - (BOOL)isProximitySensingEnabled;	// 0x306e4e59
// converted property getter: - (BOOL)isRunningInTaskSwitcher;	// 0x3060d2a5
- (BOOL)isRunningQuitTest;	// 0x305fab8d
- (BOOL)isRunningSuspendTest;	// 0x305fabe5
- (BOOL)isRunningTest;	// 0x30717b09
- (BOOL)isRunningTest:(id)test;	// 0x30717ae1
// declared property getter: - (BOOL)isStatusBarHidden;	// 0x305c62b5
- (BOOL)isSuspended;	// 0x305bdcc5
- (BOOL)isSuspendedEventsOnly;	// 0x3062a89d
- (BOOL)isSuspendedUnderLock;	// 0x30616f0d
// declared property getter: - (id)keyWindow;	// 0x30672f39
- (BOOL)launchApplicationWithIdentifier:(id)identifier suspended:(BOOL)suspended;	// 0x306b1df5
- (BOOL)launchedToTest;	// 0x305ba559
- (void)lockButtonDown:(GSEventRef)down;	// 0x306e4be5
- (void)lockButtonUp:(GSEventRef)up;	// 0x306e4be9
- (void)lockDevice:(GSEventRef)device;	// 0x306e4c21
- (void)mediaKeyDown:(GSEventRef)down;	// 0x306e6dd5
- (void)mediaKeyUp:(GSEventRef)up;	// 0x306e4bdd
- (void)menuButtonDown:(GSEventRef)down;	// 0x306e4bf9
- (void)menuButtonUp:(GSEventRef)up;	// 0x306e4bfd
- (void)motionEnded:(int)ended withEvent:(id)event;	// 0x306e5739
- (id)nameOfDefaultImageToUpdateAtSuspension;	// 0x3060dbb9
- (BOOL)openURL:(id)url;	// 0x306e73d5
- (int)orientation;	// 0x30617a3d
- (id)pathToDefaultImageNamed:(id)defaultImageNamed;	// 0x306286e5
- (void)performDisablingStatusBarStyleValidation:(id)validation;	// 0x306026e9
- (void)popRunLoopMode:(id)mode;	// 0x30636aa1
- (void)prepareForDefaultImageSnapshot;	// 0x305fa069
- (void)presentLocalNotificationNow:(id)now;	// 0x306e5109
- (void)proximityStateChanged:(BOOL)changed;	// 0x306e4c19
- (void)pushRunLoopMode:(id)mode;	// 0x306332f1
- (void)quitTopApplication:(GSEventRef)application;	// 0x306e4c25
- (void)registerForRemoteNotificationTypes:(int)remoteNotificationTypes;	// 0x306e5199
- (void)removeDefaultImage:(id)image;	// 0x306286bd
- (void)removeStatusBarImageNamed:(id)named;	// 0x306e6711
- (void)removeStatusBarItem:(int)item;	// 0x3068c6d9
- (void)removeStatusBarStyleOverrides:(int)overrides;	// 0x306e61ed
- (BOOL)reportApplicationSuspended;	// 0x305fac3d
- (void)requestDeviceUnlock;	// 0x306e7ff1
- (void)resetIdleTimerAndUndim;	// 0x306e4c29
- (id)resultsForTest:(id)test;	// 0x30717a71
- (void)ringerChanged:(int)changed;	// 0x306e4c0d
- (id)roleID;	// 0x305f930d
- (BOOL)rotateIfNeeded:(int)needed;	// 0x307177e5
- (void)runModal:(id)modal;	// 0x306e8071
- (void)runTest:(id)test forAnimation:(id)animation;	// 0x30717b2d
- (BOOL)runTest:(id)test options:(id)options;	// 0x305f8315
- (void)runTest:(id)test startingBeforeAnimation:(id)animation stoppingAfterAnimation:(id)animation3;	// 0x30717cd5
- (void)scheduleLocalNotification:(id)notification;	// 0x306e50e9
// converted property getter: - (id)scheduledLocalNotifications;	// 0x3060d231
- (void)sendAction:(SEL)action fromSender:(id)sender toTarget:(id)target forEvent:(GSEventRef)event;	// 0x30668a45
- (BOOL)sendAction:(SEL)action to:(id)to from:(id)from forEvent:(id)event;	// 0x305aae75
- (BOOL)sendAction:(SEL)action toTarget:(id)target fromSender:(id)sender forEvent:(id)event;	// 0x305aae49
- (void)sendEvent:(id)event;	// 0x305921e9
- (void)setApplicationBadgeString:(id)string;	// 0x306e79f1
// declared property setter: - (void)setApplicationIconBadgeNumber:(int)number;	// 0x3061a1a1
// declared property setter: - (void)setApplicationSupportsShakeToEdit:(BOOL)edit;	// 0x305bb5ad
// converted property setter: - (void)setBacklightLevel:(float)level;	// 0x306e7aad
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x305bc86d
- (void)setDeviceOrientation:(int)orientation;	// 0x30718499
// converted property setter: - (void)setDoubleHeightMode:(int)mode;	// 0x306e6195
- (void)setDoubleHeightMode:(int)mode glowAnimationEnabled:(BOOL)enabled;	// 0x306e6909
- (void)setDoubleHeightPrefixText:(id)text;	// 0x306e68e1
- (void)setDoubleHeightStatusText:(id)text;	// 0x306e6841
- (void)setDoubleHeightStatusText:(id)text forStyle:(int)style;	// 0x306e61ad
- (void)setExpectsFaceContact:(BOOL)contact;	// 0x306e7fa1
- (void)setGlowAnimationEnabled:(BOOL)enabled forStyle:(int)style;	// 0x306e61cd
- (void)setHardwareKeyboardLayoutName:(id)name;	// 0x3066c751
- (void)setHardwareVolumeControlEnabled:(BOOL)enabled;	// 0x306e7af1
- (void)setHasMiniAlerts:(BOOL)alerts;	// 0x306a08dd
// declared property setter: - (void)setIdleTimerDisabled:(BOOL)disabled;	// 0x30616ca9
// converted property setter: - (void)setIgnoresInteractionEvents:(BOOL)events;	// 0x30600ce9
- (BOOL)setKeepAliveTimeout:(double)timeout handler:(id)handler;	// 0x306e8281
// declared property setter: - (void)setNetworkActivityIndicatorVisible:(BOOL)visible;	// 0x3060d251
// declared property setter: - (void)setProximitySensingEnabled:(BOOL)enabled;	// 0x306e4e89
- (void)setProximitySensorEnabled:(BOOL)enabled;	// 0x306e4d41
- (void)setReceivesMemoryWarnings:(BOOL)warnings;	// 0x305c33b5
// converted property setter: - (void)setRunningInTaskSwitcher:(BOOL)taskSwitcher;	// 0x305f9345
// converted property setter: - (void)setScheduledLocalNotifications:(id)notifications;	// 0x306e5089
// converted property setter: - (void)setSimpleRemoteRoutingPriority:(unsigned)priority;	// 0x30618451
// declared property setter: - (void)setStatusBarHidden:(BOOL)hidden;	// 0x305fb119
- (void)setStatusBarHidden:(BOOL)hidden animated:(BOOL)animated;	// 0x306e4e39
- (void)setStatusBarHidden:(BOOL)hidden animationParameters:(id)parameters;	// 0x305fb1b9
- (void)setStatusBarHidden:(BOOL)hidden animationParameters:(id)parameters changeApplicationFlag:(BOOL)flag;	// 0x305fb1dd
- (void)setStatusBarHidden:(BOOL)hidden duration:(double)duration;	// 0x3068ed6d
- (void)setStatusBarHidden:(BOOL)hidden duration:(double)duration changeApplicationFlag:(BOOL)flag;	// 0x3068eda1
- (void)setStatusBarHidden:(BOOL)hidden withAnimation:(int)animation;	// 0x305fb131
- (void)setStatusBarMode:(int)mode duration:(float)duration;	// 0x30617f8d
- (void)setStatusBarMode:(int)mode orientation:(int)orientation duration:(float)duration;	// 0x30617fcd
- (void)setStatusBarMode:(int)mode orientation:(int)orientation duration:(float)duration fenceID:(int)anId;	// 0x30617ff9
- (void)setStatusBarMode:(int)mode orientation:(int)orientation duration:(float)duration fenceID:(int)anId animation:(int)animation;	// 0x30618035
- (void)setStatusBarMode:(int)mode orientation:(int)orientation duration:(float)duration fenceID:(int)anId animation:(int)animation startTime:(double)time;	// 0x30618079
// declared property setter: - (void)setStatusBarOrientation:(int)orientation;	// 0x306e626d
- (void)setStatusBarOrientation:(int)orientation animated:(BOOL)animated;	// 0x306e6285
- (void)setStatusBarOrientation:(int)orientation animation:(int)animation duration:(double)duration;	// 0x3069232d
- (void)setStatusBarOrientation:(int)orientation animationParameters:(id)parameters;	// 0x306923d5
- (void)setStatusBarShowsProgress:(BOOL)progress;	// 0x306978c5
// declared property setter: - (void)setStatusBarStyle:(int)style;	// 0x306e62e1
- (void)setStatusBarStyle:(int)style animated:(BOOL)animated;	// 0x305b06d1
- (void)setStatusBarStyle:(int)style animation:(int)animation;	// 0x306e62f9
- (void)setStatusBarStyle:(int)style animation:(int)animation startTime:(double)time duration:(double)duration curve:(int)curve;	// 0x306e6371
- (void)setStatusBarStyle:(int)style animationParameters:(id)parameters;	// 0x305b072d
- (void)setStatusBarStyle:(int)style duration:(double)duration;	// 0x30602709
- (void)setSuspensionAnimationDelay:(double)delay;	// 0x306e7ad9
- (void)setSystemVolumeHUDEnabled:(BOOL)enabled;	// 0x306e5599
- (void)setSystemVolumeHUDEnabled:(BOOL)enabled forAudioCategory:(id)audioCategory;	// 0x3068b971
// converted property setter: - (void)setUsesBackgroundNetwork:(BOOL)network;	// 0x306e748d
- (BOOL)shouldFenceStatusBarRotation;	// 0x306e4da9
- (BOOL)shouldLaunchSafe;	// 0x30618ce9
- (void)showNetworkPromptsIfNecessary:(BOOL)necessary;	// 0x306e7479
- (void)showTTYPromptForNumber:(id)number withID:(int)anId;	// 0x306e7445
- (void)significantTimeChange;	// 0x306e55f9
// converted property getter: - (unsigned)simpleRemoteRoutingPriority;	// 0x306e7029
- (void)startCHUDRecording:(id)recording;	// 0x307182d5
- (void)startLeaking;	// 0x30717885
- (void)startedSubTest:(id)test forTest:(id)test2;	// 0x30718211
- (void)startedTest:(id)test;	// 0x305bd6a5
// converted property getter: - (id)statusBar;	// 0x305a2db5
- (void)statusBar:(id)bar didAnimateFromHeight:(float)height toHeight:(float)height3 animation:(int)animation;	// 0x306e6b9d
- (int)statusBar:(id)bar styleForRequestedStyle:(int)requestedStyle overrides:(int)overrides;	// 0x305b0c85
- (void)statusBar:(id)bar willAnimateFromHeight:(float)height toHeight:(float)height3 duration:(double)duration animation:(int)animation;	// 0x306e6c05
// declared property getter: - (CGRect)statusBarFrame;	// 0x3062a9c5
- (CGRect)statusBarFrameForOrientation:(int)orientation;	// 0x3062a9f9
- (float)statusBarHeight;	// 0x305c6279
- (float)statusBarHeightForOrientation:(int)orientation;	// 0x305d3765
- (float)statusBarHeightForOrientation:(int)orientation ignoreHidden:(BOOL)hidden;	// 0x3061671d
- (int)statusBarMode;	// 0x305fa2ad
- (void)statusBarMouseDown:(GSEventRef)down;	// 0x306e4c01
- (void)statusBarMouseUp:(GSEventRef)up;	// 0x306e4c05
// declared property getter: - (int)statusBarOrientation;	// 0x305a2445
// declared property getter: - (double)statusBarOrientationAnimationDuration;	// 0x3063b5e5
- (void)statusBarReturnActionTap:(GSEventRef)tap;	// 0x306e4c09
// declared property getter: - (int)statusBarStyle;	// 0x30608a5d
// converted property getter: - (id)statusBarWindow;	// 0x306e4b7d
- (void)stopCHUDRecording;	// 0x30717f8d
- (void)stopLeaking;	// 0x30717851
- (void)stopModal;	// 0x306e80ed
- (void)suspend;	// 0x306e6131
- (void)suspendReturningToLastApp:(BOOL)lastApp;	// 0x306e6dc1
- (void)terminateWithSuccess;	// 0x30617f11
- (void)testPrep:(id)prep options:(id)options;	// 0x307177e1
- (void)unregisterForRemoteNotifications;	// 0x306e5179
- (void)updateSuspendedSettings:(id)settings;	// 0x3060d671
- (id)userCachesDirectory;	// 0x306e7515
- (void)userDefaultsDidChange:(id)userDefaults;	// 0x305b01d5
- (id)userHomeDirectory;	// 0x3069788d
- (id)userLibraryDirectory;	// 0x30612829
// converted property getter: - (BOOL)usesBackgroundNetwork;	// 0x306e74a1
- (void)vibrateForDuration:(int)duration;	// 0x306e4d3d
- (void)volumeChanged:(GSEventRef)changed;	// 0x306e4c11
- (void)willDismissMiniAlert:(int *)alert andShowAnother:(BOOL)another;	// 0x306a61c5
- (void)willDisplayMiniAlert:(int *)alert;	// 0x306a4f39
- (double)windowRotationDuration;	// 0x30617dc5
// declared property getter: - (id)windows;	// 0x3060e669
@end

