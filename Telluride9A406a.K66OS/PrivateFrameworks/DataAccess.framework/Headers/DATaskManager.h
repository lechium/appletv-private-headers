/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <NSObject.h> // Unknown library

@class NSTimer, NSArray, NSMutableSet, DAAccount, NSMutableArray;
@protocol DATask;

@interface DATaskManager : NSObject {
	DAAccount *_account;	// 4 = 0x4
@private
	NSMutableArray *_queuedExclusiveTasks;	// 8 = 0x8
	id<DATask> _activeExclusiveTask;	// 12 = 0xc
	NSMutableSet *_independentTasks;	// 16 = 0x10
	NSMutableSet *_heldIndependentTasks;	// 20 = 0x14
	NSMutableSet *_modalHeldIndependentTasks;	// 24 = 0x18
	NSMutableArray *_queuedTasks;	// 28 = 0x1c
	id<DATask> _activeQueuedTask;	// 32 = 0x20
	id<DATask> _modalHeldActiveQueuedTask;	// 36 = 0x24
	NSMutableArray *_queuedModalTasks;	// 40 = 0x28
	id<DATask> _activeModalTask;	// 44 = 0x2c
	int _state;	// 48 = 0x30
	NSTimer *_managerIdleTimer;	// 52 = 0x34
}
@property(assign) DAAccount *account;	// G=0x3616d0cd; S=0x3616d199; @synthesize=_account
@property(readonly, assign) id<DATask> activeModalTask;	// G=0x3616c8dd; @synthesize=_activeModalTask
@property(readonly, assign) id<DATask> activeQueuedTask;	// G=0x361710fd; @synthesize=_activeQueuedTask
@property(readonly, assign) NSArray *allTasks;	// G=0x3616c549; 
@property(readonly, assign) NSArray *queuedTasks;	// G=0x3617110d; @synthesize=_queuedTasks
- (id)init;	// 0x3615b789
- (id)initWithAccount:(id)account;	// 0x3616c8ed
- (void)_cancelTasksWithReason:(int)reason;	// 0x36170c05
- (id)_getHeldIndependentTasks;	// 0x36170fb5
- (id)_getIndependentTasks;	// 0x36170f65
- (id)_getModalHeldIndependentTasks;	// 0x36171005
- (id)_getQueuedExclusiveTasks;	// 0x36170f15
- (id)_getQueuedModalTasks;	// 0x361710a5
- (id)_getQueuedTasks;	// 0x36171055
- (BOOL)_hasTasksForcingNetworkConnection;	// 0x3616e0c1
- (void)_makeStateTransition;	// 0x3616fdf1
- (void)_performTask:(id)task;	// 0x3616f899
- (void)_populateVersionDescriptions;	// 0x3616cfe5
- (void)_reactivateHeldTasks;	// 0x3616fb89
- (void)_releasePowerAssertionForTask:(id)task;	// 0x36170ea9
- (void)_requestCancelTasksWithReason:(int)reason;	// 0x3616f97d
- (void)_retainPowerAssertionForTask:(id)task;	// 0x36170e15
- (void)_schedulePerformTask:(id)task;	// 0x36170b79
- (void)_scheduleSelector:(SEL)selector withArgument:(id)argument;	// 0x36170ad1
- (void)_scheduleStartModal:(id)modal;	// 0x36170b99
- (void)_startModal:(id)modal;	// 0x3616faa5
- (BOOL)_taskForcesNetworking:(id)networking;	// 0x3616dfd9
- (BOOL)_taskInQueueForcesNetworkConnection:(id)queueForcesNetworkConnection;	// 0x3616e019
- (BOOL)_useFakeDescriptions;	// 0x3616d071
- (void)_useOpportunisticSocketsAgain;	// 0x3616df61
- (id)_version;	// 0x3616d049
// declared property getter: - (id)account;	// 0x3616d0cd
- (id)accountID;	// 0x3616d2a5
- (id)accountPersistentUUID;	// 0x3616d2c5
// declared property getter: - (id)activeModalTask;	// 0x3616c8dd
// declared property getter: - (id)activeQueuedTask;	// 0x361710fd
// declared property getter: - (id)allTasks;	// 0x3616c549
- (void)cancelAllTasks;	// 0x3616db99
- (void)cancelTask:(id)task;	// 0x3616db85
- (void)cancelTask:(id)task withUnderlyingError:(id)underlyingError;	// 0x3616db25
- (void)dealloc;	// 0x3616c9cd
- (id)deviceID;	// 0x3616d0c9
- (id)deviceType;	// 0x3616d075
- (id)identityPersist;	// 0x3616d265
- (id)password;	// 0x3616d221
- (int)port;	// 0x3616d1e1
// declared property getter: - (id)queuedTasks;	// 0x3617110d
- (id)scheme;	// 0x3616d285
- (id)server;	// 0x3616d201
// declared property setter: - (void)setAccount:(id)account;	// 0x3616d199
- (void)shutdown;	// 0x3616dc45
- (id)stateString;	// 0x3616ddad
- (void)submitExclusiveTask:(id)task;	// 0x3616d2e5
- (void)submitExclusiveTask:(id)task toFrontOfQueue:(BOOL)queue;	// 0x3616d2f9
- (void)submitIndependentTask:(id)task;	// 0x3616d60d
- (void)submitQueuedTask:(id)task;	// 0x3616d881
- (void)taskDidFinish:(id)task;	// 0x3616e23d
- (void)taskEndModal:(id)modal;	// 0x3616f585
- (void)taskManagerDidAddTask:(id)taskManager;	// 0x361710f5
- (void)taskManagerWillRemoveTask:(id)taskManager;	// 0x361710f9
- (void)taskRequestModal:(id)modal;	// 0x3616f04d
- (BOOL)useSSL;	// 0x3616d241
- (id)user;	// 0x3616d1c1
- (id)userAgent;	// 0x3616d079
@end

