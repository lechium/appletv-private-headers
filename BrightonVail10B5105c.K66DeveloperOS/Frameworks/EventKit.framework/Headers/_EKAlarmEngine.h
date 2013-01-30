/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <NSObject.h> // Unknown library
#import "CLLocationManagerDelegate.h"

@class PCPersistentTimer, NSTimer, NSDateFormatter, NSDate, CLLocationManager;
@protocol OS_dispatch_queue;

@interface _EKAlarmEngine : NSObject <CLLocationManagerDelegate> {
	int _lastDBSequence;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
	NSDate *_nextFireDate;	// 12 = 0xc
	double _lastCheckpoint;	// 16 = 0x10
	PCPersistentTimer *_timer;	// 24 = 0x18
	BOOL _populating;	// 28 = 0x1c
	double _populateStart;	// 32 = 0x20
	NSTimer *_syncTimer;	// 40 = 0x28
	BOOL _pendingChanges;	// 44 = 0x2c
	BOOL _shouldUpdateWithForceForAlarmTable;	// 45 = 0x2d
	BOOL _shouldUpdateWithForceForFences;	// 46 = 0x2e
	BOOL _abortedLastAttemptToAdjustFences;	// 47 = 0x2f
	NSDateFormatter *_dateFormatter;	// 48 = 0x30
	CLLocationManager *_locationManager;	// 52 = 0x34
	double _defaultRadius;	// 56 = 0x38
	NSDate *_tomorrow;	// 64 = 0x40
}
+ (id)sharedInstance;	// 0x35b71a65
- (void)_adjustFences:(id)fences;	// 0x35b745f5
- (void)_databaseChanged;	// 0x35b723e5
- (id)_dateFormatter;	// 0x35b73169
- (BOOL)_haveAlarmsChanged:(id)changed;	// 0x35b7244d
- (BOOL)_isDataProtected;	// 0x35b72155
- (void)_killSyncTimer;	// 0x35b74121
- (void)_killTimer;	// 0x35b73105
- (void)_locationDaemonDidLaunch;	// 0x35b743c5
- (void)_notifyAlarmsFired:(id)fired;	// 0x35b735d1
- (BOOL)_populateAlarmTable:(id)table;	// 0x35b729f1
- (void)_populateFinished;	// 0x35b72ffd
- (void)_protectedDataDidBecomeAvailable;	// 0x35b7211d
- (void)_protectedDataWillBecomeUnavailable;	// 0x35b72119
- (void)_proximityAlertTriggered:(id)triggered entered:(BOOL)entered;	// 0x35b75061
- (void)_removeAllFences;	// 0x35b7442d
- (void)_rescheduleTimer;	// 0x35b731e1
- (void)_resetSyncTimer;	// 0x35b73fe9
- (BOOL)_shouldAdjustFencesWithStatus:(int)status;	// 0x35b745d1
- (void)_storeAlarms:(id)alarms nextScheduleLimit:(double)limit eventStore:(id)store;	// 0x35b725ad
- (id)_stringForAuthorizationStatus:(int)authorizationStatus;	// 0x35b74591
- (void)_syncDidEnd;	// 0x35b74225
- (void)_syncDidStart;	// 0x35b741c1
- (void)_syncTimerFired:(id)fired;	// 0x35b7415d
- (void)_timeDidChangeSignificantly;	// 0x35b742d1
- (void)_timeZoneChanged:(id)changed;	// 0x35b72545
- (void)_timerFired:(id)fired;	// 0x35b73811
- (void)_updateWithForce:(BOOL)force;	// 0x35b723d1
- (void)_updateWithForceForAlarmTable:(BOOL)alarmTable forFences:(BOOL)fences;	// 0x35b72159
- (void)dealloc;	// 0x35b71ae5
- (void)locationManager:(id)manager didChangeAuthorizationStatus:(int)status;	// 0x35b75719
- (void)locationManager:(id)manager didEnterRegion:(id)region;	// 0x35b75521
- (void)locationManager:(id)manager didExitRegion:(id)region;	// 0x35b755b5
- (void)locationManager:(id)manager didFailWithError:(id)error;	// 0x35b75649
- (void)locationManager:(id)manager monitoringDidFailForRegion:(id)monitoring withError:(id)error;	// 0x35b756a1
- (void)reschedule;	// 0x35b720b5
- (void)start;	// 0x35b71b95
- (void)stop;	// 0x35b72001
@end
