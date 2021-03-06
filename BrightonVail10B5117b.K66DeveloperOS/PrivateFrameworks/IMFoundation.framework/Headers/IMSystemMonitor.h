/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <NSObject.h> // Unknown library

@class NSTimer, NSDate, NSString, NSMutableArray;

@interface IMSystemMonitor : NSObject {
	BOOL _watchesDataProtectionLockState;	// 4 = 0x4
	BOOL _watchesScreenLightState;	// 5 = 0x5
	BOOL _receivesMemoryWarnings;	// 6 = 0x6
	BOOL _willSleep;	// 7 = 0x7
	BOOL _screenLocked;	// 8 = 0x8
	BOOL _screensaverActive;	// 9 = 0x9
	BOOL _watchesSystemLockState;	// 10 = 0xa
	int _dataProtectionState;	// 12 = 0xc
	BOOL _underFirstLock;	// 16 = 0x10
	BOOL _active;	// 17 = 0x11
	BOOL _backingUp;	// 18 = 0x12
	BOOL _switchedOut;	// 19 = 0x13
	NSMutableArray *_listeners;	// 20 = 0x14
	NSDate *_idleStart;	// 24 = 0x18
	NSTimer *_timer;	// 28 = 0x1c
	BOOL _screenLit;	// 32 = 0x20
	NSDate *_dateScreenLightLastChanged;	// 36 = 0x24
	NSDate *_dateSystemLockLastChanged;	// 40 = 0x28
	BOOL _systemLocked;	// 44 = 0x2c
	NSString *_userID;	// 48 = 0x30
	double _delayTime;	// 52 = 0x34
	BOOL _idleOverride;	// 60 = 0x3c
	NSMutableArray *_earlyListeners;	// 64 = 0x40
	BOOL _usesPowerNotifications;	// 68 = 0x44
	BOOL _usesSystemIdleState;	// 69 = 0x45
	BOOL _inBackground;	// 70 = 0x46
}
@property(assign, nonatomic) int _dataProtectionState;	// G=0x34388831; S=0x34388841; @synthesize
@property(assign, nonatomic) double _delayTime;	// G=0x34388981; S=0x34388999; @synthesize
@property(retain, nonatomic) NSMutableArray *_earlyListeners;	// G=0x343889cd; S=0x343889dd; @synthesize
@property(assign, nonatomic) BOOL _idleOverride;	// G=0x343889ad; S=0x343889bd; @synthesize
@property(retain, nonatomic) NSDate *_idleStart;	// G=0x343888e1; S=0x343888f1; @synthesize
@property(retain, nonatomic) NSMutableArray *_listeners;	// G=0x343888c1; S=0x343888d1; @synthesize
@property(retain, nonatomic) NSTimer *_timer;	// G=0x34388901; S=0x34388911; @synthesize
@property(assign, nonatomic) BOOL _underFirstLock;	// G=0x34388851; S=0x34388861; @synthesize
@property(retain, nonatomic) NSString *_userID;	// G=0x34388961; S=0x34388971; @synthesize
@property(readonly, assign, nonatomic) NSDate *dateScreenLightLastChanged;	// G=0x34388931; @synthesize=_dateScreenLightLastChanged
@property(readonly, assign, nonatomic) NSDate *dateSystemLockLastChanged;	// G=0x34388941; @synthesize=_dateSystemLockLastChanged
@property(assign, nonatomic, setter=setActive:) BOOL isActive;	// G=0x34388871; S=0x34388881; @synthesize=_active
@property(readonly, assign, nonatomic) BOOL isBackingUp;	// G=0x34388891; @synthesize=_backingUp
@property(assign, nonatomic) BOOL isFastUserSwitched;	// G=0x343888a1; S=0x343888b1; @synthesize=_switchedOut
@property(readonly, assign, nonatomic) BOOL isInBackground;	// G=0x34388a0d; @synthesize=_inBackground
@property(readonly, assign, nonatomic) BOOL isScreenLit;	// G=0x34388921; @synthesize=_screenLit
@property(readonly, assign, nonatomic) BOOL isScreenLocked;	// G=0x34388801; @synthesize=_screenLocked
@property(readonly, assign, nonatomic) BOOL isScreenSaverActive;	// G=0x34388811; @synthesize=_screensaverActive
@property(readonly, assign, nonatomic) BOOL isSetup;	// G=0x343885ad; 
@property(readonly, assign, nonatomic) BOOL isSystemIdle;	// G=0x34387d99; 
@property(readonly, assign, nonatomic) BOOL isSystemLocked;	// G=0x34388951; @synthesize=_systemLocked
@property(readonly, assign, nonatomic) BOOL isUnderDataProtectionLock;	// G=0x34387409; 
@property(readonly, assign, nonatomic) BOOL isUnderFirstDataProtectionLock;	// G=0x34387425; 
@property(assign, nonatomic) BOOL receivesMemoryWarnings;	// G=0x343887e1; S=0x34388671; @synthesize=_receivesMemoryWarnings
@property(readonly, assign, nonatomic) double systemIdleTime;	// G=0x34387dc9; 
@property(readonly, assign, nonatomic) BOOL systemIsShuttingDown;	// G=0x34387e21; 
@property(readonly, assign, nonatomic) BOOL systemIsSleeping;	// G=0x343887f1; @synthesize=_willSleep
@property(assign, nonatomic) BOOL usesPowerNotifications;	// G=0x343889ed; S=0x343876dd; @synthesize=_usesPowerNotifications
@property(assign, nonatomic) BOOL usesSystemIdleState;	// G=0x343889fd; S=0x343879a9; @synthesize=_usesSystemIdleState
@property(assign, nonatomic) BOOL watchesDataProtectionLockState;	// G=0x343887c1; S=0x34387435; @synthesize=_watchesDataProtectionLockState
@property(assign, nonatomic) BOOL watchesScreenLightState;	// G=0x343887d1; S=0x3438760d; @synthesize=_watchesScreenLightState
@property(assign, nonatomic) BOOL watchesSystemLockState;	// G=0x34388821; S=0x34387551; @synthesize=_watchesSystemLockState
+ (id)sharedInstance;	// 0x34385f91
- (id)init;	// 0x3438603d
- (void)_addEarlyListener:(id)listener;	// 0x34387e4d
- (void)_applicationDidBecomeActive:(id)_application;	// 0x34386cd9
- (void)_applicationDidEnterBackground:(id)_application;	// 0x34387175
- (void)_applicationDidRemoveDeactivationReason:(id)_application;	// 0x34387291
- (void)_applicationWillAddDeactivationReason:(id)_application;	// 0x343871f9
- (void)_applicationWillEnterForeground:(id)_application;	// 0x343870f1
- (void)_applicationWillResignActive:(id)_application;	// 0x34386c39
- (void)_checkRestoredFromBackup;	// 0x343881b5
// declared property getter: - (int)_dataProtectionState;	// 0x34388831
// declared property getter: - (double)_delayTime;	// 0x34388981
- (void)_deliverNotificationSelector:(SEL)selector;	// 0x34386725
// declared property getter: - (id)_earlyListeners;	// 0x343889cd
- (void)_handleLoginWindowNotification:(id)notification;	// 0x3438860d
// declared property getter: - (BOOL)_idleOverride;	// 0x343889ad
// declared property getter: - (id)_idleStart;	// 0x343888e1
// declared property getter: - (id)_listeners;	// 0x343888c1
- (void)_notificationCenterDidDisappear:(id)_notificationCenter;	// 0x34386f35
- (void)_notificationCenterWillAppear:(id)_notificationCenter;	// 0x34386edd
- (void)_overrideAndDisableIdleTimer:(BOOL)timer;	// 0x34387bf9
- (void)_postScreenLocked;	// 0x34386ad5
- (void)_postScreenSaverStarted;	// 0x34386f8d
- (void)_receivedMemoryNotification;	// 0x34388619
- (void)_registerForLoginWindowNotifications;	// 0x34388611
- (void)_registerForRestoreNotifications;	// 0x343883a5
- (void)_removeEarlyListener:(id)listener;	// 0x34387f39
- (void)_restoreDidStart;	// 0x34388261
- (void)_restoreDidStop;	// 0x34388291
- (void)_resume:(id)resume;	// 0x34386e85
- (void)_resumeEventsOnly:(id)only;	// 0x34386dd5
- (void)_screenLocked:(id)locked;	// 0x34386b49
- (void)_screenSaverStarted:(id)started;	// 0x34387075
- (void)_screenSaverStopped:(id)stopped;	// 0x34387001
- (void)_screenUnlocked:(id)unlocked;	// 0x34386bc5
- (void)_setDataProtectionLockState:(int)state;	// 0x34387329
- (void)_setIdleState:(BOOL)state;	// 0x34387ae9
- (void)_setSystemLockState:(BOOL)state;	// 0x34387855
- (void)_setSystemScreenState:(BOOL)state;	// 0x34387701
- (void)_setupStateChanged;	// 0x34388321
- (void)_suspend:(id)suspend;	// 0x34386e2d
- (void)_suspendEventsOnly:(id)only;	// 0x34386d7d
- (void)_systemDidWake;	// 0x34386a75
- (void)_systemWillShutdown;	// 0x34387e31
- (void)_systemWillSleep;	// 0x34386aa5
// declared property getter: - (id)_timer;	// 0x34388901
// declared property getter: - (BOOL)_underFirstLock;	// 0x34388851
- (void)_unregisterForLoginWindowNotifications;	// 0x34388615
- (void)_unregisterForRestoreNotifications;	// 0x34388549
// declared property getter: - (id)_userID;	// 0x34388961
- (void)addListener:(id)listener;	// 0x34388001
// declared property getter: - (id)dateScreenLightLastChanged;	// 0x34388931
// declared property getter: - (id)dateSystemLockLastChanged;	// 0x34388941
- (void)dealloc;	// 0x3438651d
// declared property getter: - (BOOL)isActive;	// 0x34388871
// declared property getter: - (BOOL)isBackingUp;	// 0x34388891
// declared property getter: - (BOOL)isFastUserSwitched;	// 0x343888a1
// declared property getter: - (BOOL)isInBackground;	// 0x34388a0d
// declared property getter: - (BOOL)isScreenLit;	// 0x34388921
// declared property getter: - (BOOL)isScreenLocked;	// 0x34388801
// declared property getter: - (BOOL)isScreenSaverActive;	// 0x34388811
// declared property getter: - (BOOL)isSetup;	// 0x343885ad
// declared property getter: - (BOOL)isSystemIdle;	// 0x34387d99
// declared property getter: - (BOOL)isSystemLocked;	// 0x34388951
// declared property getter: - (BOOL)isUnderDataProtectionLock;	// 0x34387409
// declared property getter: - (BOOL)isUnderFirstDataProtectionLock;	// 0x34387425
// declared property getter: - (BOOL)receivesMemoryWarnings;	// 0x343887e1
- (void)removeListener:(id)listener;	// 0x343880ed
// declared property setter: - (void)setActive:(BOOL)active;	// 0x34388881
// declared property setter: - (void)setIsFastUserSwitched:(BOOL)switched;	// 0x343888b1
// declared property setter: - (void)setReceivesMemoryWarnings:(BOOL)warnings;	// 0x34388671
// declared property setter: - (void)setUsesPowerNotifications:(BOOL)notifications;	// 0x343876dd
// declared property setter: - (void)setUsesSystemIdleState:(BOOL)state;	// 0x343879a9
// declared property setter: - (void)setWatchesDataProtectionLockState:(BOOL)state;	// 0x34387435
// declared property setter: - (void)setWatchesScreenLightState:(BOOL)state;	// 0x3438760d
// declared property setter: - (void)setWatchesSystemLockState:(BOOL)state;	// 0x34387551
// declared property setter: - (void)set_dataProtectionState:(int)state;	// 0x34388841
// declared property setter: - (void)set_delayTime:(double)time;	// 0x34388999
// declared property setter: - (void)set_earlyListeners:(id)listeners;	// 0x343889dd
// declared property setter: - (void)set_idleOverride:(BOOL)override;	// 0x343889bd
// declared property setter: - (void)set_idleStart:(id)start;	// 0x343888f1
// declared property setter: - (void)set_listeners:(id)listeners;	// 0x343888d1
// declared property setter: - (void)set_timer:(id)timer;	// 0x34388911
// declared property setter: - (void)set_underFirstLock:(BOOL)lock;	// 0x34388861
// declared property setter: - (void)set_userID:(id)anId;	// 0x34388971
// declared property getter: - (double)systemIdleTime;	// 0x34387dc9
// declared property getter: - (BOOL)systemIsShuttingDown;	// 0x34387e21
// declared property getter: - (BOOL)systemIsSleeping;	// 0x343887f1
// declared property getter: - (BOOL)usesPowerNotifications;	// 0x343889ed
// declared property getter: - (BOOL)usesSystemIdleState;	// 0x343889fd
// declared property getter: - (BOOL)watchesDataProtectionLockState;	// 0x343887c1
// declared property getter: - (BOOL)watchesScreenLightState;	// 0x343887d1
// declared property getter: - (BOOL)watchesSystemLockState;	// 0x34388821
@end

