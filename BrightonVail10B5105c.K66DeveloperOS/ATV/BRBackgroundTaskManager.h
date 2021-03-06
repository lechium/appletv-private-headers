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
	int _numberOfCurrentBackgroundProcesses;	// 4 = 0x4
	double _lastUserActivity;	// 8 = 0x8
	NSTimer *_backgroundProcessSuppressionTimer;	// 16 = 0x10
	NSTimer *_heavyBackgroundProcessSuppresionTimer;	// 20 = 0x14
}
+ (BOOL)backgroundTasksRunning;	// 0x364ec1
+ (void)finishedBackgroundProcessing;	// 0x364e99
+ (void)holdOffBackgroundTasks;	// 0x364e21
+ (BOOL)okToDoBackgroundProcessing;	// 0x364e49
+ (void)setSingleton:(id)singleton;	// 0x364f21
+ (id)singleton;	// 0x364f11
+ (void)startingBackgroundProcessing;	// 0x364e71
+ (double)timeSinceLastUserAction;	// 0x364ee9
- (id)init;	// 0x364f31
- (BOOL)_backgroundTasksRunning;	// 0x365405
- (void)_finishedBackgroundProcessing;	// 0x3653f1
- (void)_holdOffBackgroundTasks;	// 0x365041
- (void)_holdOffHeavyBackgroundTasks;	// 0x365119
- (BOOL)_okToDoBackgroundProcessing;	// 0x3652a5
- (void)_sendResumeBackgroundProcessingNotification;	// 0x365305
- (void)_sendResumeHeavyBackgroundProcessingNotification;	// 0x365395
- (void)_sendStopBackgroundProcessingNotification;	// 0x3652bd
- (void)_sendStopHeavyBackgroundProcessingNotification;	// 0x36534d
- (void)_setOKToDoBackgroundProcessing:(id)doBackgroundProcessing;	// 0x3651f1
- (void)_setOKToDoHeavyBackgroundProcessing:(id)doHeavyBackgroundProcessing;	// 0x36522d
- (void)_startingBackgroundProcessing;	// 0x3653dd
- (double)_timeSinceLastUserAction;	// 0x36541d
- (void)_updateActivity:(id)activity;	// 0x365461
- (void)dealloc;	// 0x364fe5
@end

