/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"

@class NSTimer;

__attribute__((visibility("hidden")))
@interface BRBackgroundTaskManager : BRSingleton {
	double _lastUserActivity;	// 4 = 0x4
	NSTimer *_backgroundProcessSuppressionTimer;	// 12 = 0xc
	NSTimer *_heavyBackgroundProcessSuppresionTimer;	// 16 = 0x10
}
+ (void)holdOffBackgroundTasks;	// 0x3eb479
+ (BOOL)okToDoBackgroundProcessing;	// 0x3eb4a1
+ (void)setSingleton:(id)singleton;	// 0x3eb501
+ (id)singleton;	// 0x3eb4f1
+ (double)timeSinceLastUserAction;	// 0x3eb4c9
- (id)init;	// 0x3eb511
- (void)_holdOffBackgroundTasks;	// 0x3eb659
- (void)_holdOffHeavyBackgroundTasks;	// 0x3eb751
- (BOOL)_okToDoBackgroundProcessing;	// 0x3eb8dd
- (void)_sendResumeBackgroundProcessingNotification;	// 0x3eb96d
- (void)_sendResumeHeavyBackgroundProcessingNotification;	// 0x3eba81
- (void)_sendStopBackgroundProcessingNotification;	// 0x3eb8f5
- (void)_sendStopHeavyBackgroundProcessingNotification;	// 0x3eba09
- (void)_setOKToDoBackgroundProcessing:(id)doBackgroundProcessing;	// 0x3eb829
- (void)_setOKToDoHeavyBackgroundProcessing:(id)doHeavyBackgroundProcessing;	// 0x3eb865
- (void)_timeOrTimeZoneChangeNotification:(id)notification;	// 0x3ebb89
- (double)_timeSinceLastUserAction;	// 0x3ebaf9
- (void)_updateActivity:(id)activity;	// 0x3ebb3d
- (void)dealloc;	// 0x3eb5fd
@end
