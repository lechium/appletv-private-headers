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
+ (id)sharedInstance;	// 0x3458b539
- (void)_adjustFences:(id)fences;	// 0x3458d5b9
- (void)_databaseChanged;	// 0x3458bd85
- (id)_dateFormatter;	// 0x34536da9
- (BOOL)_haveAlarmsChanged:(id)changed;	// 0x3458bdc1
- (BOOL)_isDataProtected;	// 0x3458bb55
- (void)_killSyncTimer;	// 0x3458d1f5
- (void)_killTimer;	// 0x34536a15
- (void)_locationDaemonDidLaunch;	// 0x3458d3f9
- (void)_notifyAlarmsFired:(id)fired;	// 0x3458c8b5
- (BOOL)_populateAlarmTable:(id)table;	// 0x3458c229
- (void)_populateFinished;	// 0x3458c7d5
- (void)_protectedDataDidBecomeAvailable;	// 0x34535c35
- (void)_protectedDataWillBecomeUnavailable;	// 0x3458bb51
- (void)_proximityAlertTriggered:(id)triggered entered:(BOOL)entered;	// 0x3458df45
- (void)_removeAllFences;	// 0x3458d439
- (void)_rescheduleTimer;	// 0x34535c75
- (void)_resetSyncTimer;	// 0x3458d0cd
- (BOOL)_shouldAdjustFencesWithStatus:(int)status;	// 0x3458d595
- (void)_storeAlarms:(id)alarms nextScheduleLimit:(double)limit eventStore:(id)store;	// 0x3458becd
- (id)_stringForAuthorizationStatus:(int)authorizationStatus;	// 0x3458d555
- (void)_syncDidEnd;	// 0x3458d2ad
- (void)_syncDidStart;	// 0x3458d271
- (void)_syncTimerFired:(id)fired;	// 0x3458d235
- (void)_timeDidChangeSignificantly;	// 0x3458d32d
- (void)_timeZoneChanged:(id)changed;	// 0x3458be8d
- (void)_timerFired:(id)fired;	// 0x3458cac9
- (void)_updateWithForce:(BOOL)force;	// 0x3458bd71
- (void)_updateWithForceForAlarmTable:(BOOL)alarmTable forFences:(BOOL)fences;	// 0x3458bb59
- (void)dealloc;	// 0x3458b591
- (void)locationManager:(id)manager didChangeAuthorizationStatus:(int)status;	// 0x3458e335
- (void)locationManager:(id)manager didEnterRegion:(id)region;	// 0x3458e1fd
- (void)locationManager:(id)manager didExitRegion:(id)region;	// 0x3458e261
- (void)locationManager:(id)manager didFailWithError:(id)error;	// 0x3458e2c5
- (void)locationManager:(id)manager monitoringDidFailForRegion:(id)monitoring withError:(id)error;	// 0x3458e2f1
- (void)reschedule;	// 0x3458bb15
- (void)start;	// 0x3458b641
- (void)stop;	// 0x3458ba6d
@end
