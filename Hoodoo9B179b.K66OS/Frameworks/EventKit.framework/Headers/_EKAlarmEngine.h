/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "CLLocationManagerDelegate.h"
#import "EventKit-Structs.h"
#import <NSObject.h> // Unknown library

@class PCPersistentTimer, NSTimer, NSDateFormatter, NSDate, CLLocationManager;

@interface _EKAlarmEngine : NSObject <CLLocationManagerDelegate> {
	int _lastDBSequence;	// 4 = 0x4
	dispatch_queue_s *_dispatchQueue;	// 8 = 0x8
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
+ (id)sharedInstance;	// 0x30c48c55
- (void)_adjustFences:(id)fences;	// 0x30c4acd5
- (void)_databaseChanged;	// 0x30c494a1
- (id)_dateFormatter;	// 0x30bf3be9
- (BOOL)_haveAlarmsChanged:(id)changed;	// 0x30c494dd
- (BOOL)_isDataProtected;	// 0x30c49271
- (void)_killSyncTimer;	// 0x30c4a911
- (void)_killTimer;	// 0x30bf3855
- (void)_locationDaemonDidLaunch;	// 0x30c4ab15
- (void)_notifyAlarmsFired:(id)fired;	// 0x30c49fd1
- (BOOL)_populateAlarmTable:(id)table;	// 0x30c49945
- (void)_populateFinished;	// 0x30c49ef1
- (void)_protectedDataDidBecomeAvailable;	// 0x30bf2a75
- (void)_protectedDataWillBecomeUnavailable;	// 0x30c4926d
- (void)_proximityAlertTriggered:(id)triggered entered:(BOOL)entered;	// 0x30c4b661
- (void)_removeAllFences;	// 0x30c4ab55
- (void)_rescheduleTimer;	// 0x30bf2ab5
- (void)_resetSyncTimer;	// 0x30c4a7e9
- (BOOL)_shouldAdjustFencesWithStatus:(int)status;	// 0x30c4acb1
- (void)_storeAlarms:(id)alarms nextScheduleLimit:(double)limit eventStore:(id)store;	// 0x30c495e9
- (id)_stringForAuthorizationStatus:(int)authorizationStatus;	// 0x30c4ac71
- (void)_syncDidEnd;	// 0x30c4a9c9
- (void)_syncDidStart;	// 0x30c4a98d
- (void)_syncTimerFired:(id)fired;	// 0x30c4a951
- (void)_timeDidChangeSignificantly;	// 0x30c4aa49
- (void)_timeZoneChanged:(id)changed;	// 0x30c495a9
- (void)_timerFired:(id)fired;	// 0x30c4a1e5
- (void)_updateWithForce:(BOOL)force;	// 0x30c4948d
- (void)_updateWithForceForAlarmTable:(BOOL)alarmTable forFences:(BOOL)fences;	// 0x30c49275
- (void)dealloc;	// 0x30c48cad
- (void)locationManager:(id)manager didChangeAuthorizationStatus:(int)status;	// 0x30c4ba51
- (void)locationManager:(id)manager didEnterRegion:(id)region;	// 0x30c4b919
- (void)locationManager:(id)manager didExitRegion:(id)region;	// 0x30c4b97d
- (void)locationManager:(id)manager didFailWithError:(id)error;	// 0x30c4b9e1
- (void)locationManager:(id)manager monitoringDidFailForRegion:(id)monitoring withError:(id)error;	// 0x30c4ba0d
- (void)reschedule;	// 0x30c49231
- (void)start;	// 0x30c48d5d
- (void)stop;	// 0x30c49189
@end

