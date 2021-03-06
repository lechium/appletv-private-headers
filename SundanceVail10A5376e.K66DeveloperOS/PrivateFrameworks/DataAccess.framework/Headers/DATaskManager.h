/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSArray, NSTimer, NSMutableSet, DAAccount;
@protocol DATask;

@interface DATaskManager : NSObject {
	DAAccount *_account;	// 4 = 0x4
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
@property(assign) DAAccount *account;	// G=0x311dd585; S=0x311dd661; @synthesize=_account
@property(readonly, assign) id<DATask> activeModalTask;	// G=0x311dcd75; @synthesize=_activeModalTask
@property(readonly, assign) id<DATask> activeQueuedTask;	// G=0x311e18a5; @synthesize=_activeQueuedTask
@property(readonly, assign) NSArray *allTasks;	// G=0x311dc999; 
@property(readonly, assign) NSArray *queuedTasks;	// G=0x311e18b9; @synthesize=_queuedTasks
- (id)init;	// 0x311c7e3d
- (id)initWithAccount:(id)account;	// 0x311dcd85
- (void)_cancelTasksWithReason:(int)reason;	// 0x311e1309
- (id)_getHeldIndependentTasks;	// 0x311e175d
- (id)_getIndependentTasks;	// 0x311e170d
- (id)_getModalHeldIndependentTasks;	// 0x311e17ad
- (id)_getQueuedExclusiveTasks;	// 0x311e16bd
- (id)_getQueuedModalTasks;	// 0x311e184d
- (id)_getQueuedTasks;	// 0x311e17fd
- (BOOL)_hasTasksForcingNetworkConnection;	// 0x311de5d1
- (void)_makeStateTransition;	// 0x311e0569
- (void)_performTask:(id)task;	// 0x311dffe1
- (void)_populateVersionDescriptions;	// 0x311dd4a1
- (void)_reactivateHeldTasks;	// 0x311e02fd
- (void)_releasePowerAssertionForTask:(id)task;	// 0x311e15c5
- (void)_requestCancelTasksWithReason:(int)reason;	// 0x311e00d9
- (void)_retainPowerAssertionForTask:(id)task;	// 0x311e152d
- (void)_schedulePerformTask:(id)task;	// 0x311e1281
- (void)_scheduleSelector:(SEL)selector withArgument:(id)argument;	// 0x311e11dd
- (void)_scheduleStartModal:(id)modal;	// 0x311e12a1
- (void)_startModal:(id)modal;	// 0x311e0219
- (BOOL)_taskForcesNetworking:(id)networking;	// 0x311de4cd
- (BOOL)_taskInQueueForcesNetworkConnection:(id)queueForcesNetworkConnection;	// 0x311de50d
- (BOOL)_useFakeDescriptions;	// 0x311dd52d
- (void)_useOpportunisticSocketsAgain;	// 0x311de451
- (id)_version;	// 0x311dd505
// declared property getter: - (id)account;	// 0x311dd585
- (id)accountID;	// 0x311dd769
- (id)accountPersistentUUID;	// 0x311dd789
// declared property getter: - (id)activeModalTask;	// 0x311dcd75
// declared property getter: - (id)activeQueuedTask;	// 0x311e18a5
// declared property getter: - (id)allTasks;	// 0x311dc999
- (void)cancelAllTasks;	// 0x311de04d
- (void)cancelTask:(id)task;	// 0x311de039
- (void)cancelTask:(id)task withUnderlyingError:(id)underlyingError;	// 0x311ddfd9
- (void)dealloc;	// 0x311dce69
- (id)deviceType;	// 0x311dd531
- (id)identityPersist;	// 0x311dd729
- (id)password;	// 0x311dd6e5
- (int)port;	// 0x311dd6a5
// declared property getter: - (id)queuedTasks;	// 0x311e18b9
- (id)scheme;	// 0x311dd749
- (id)server;	// 0x311dd6c5
// declared property setter: - (void)setAccount:(id)account;	// 0x311dd661
- (void)shutdown;	// 0x311de119
- (id)stateString;	// 0x311de281
- (void)submitExclusiveTask:(id)task;	// 0x311dd7a9
- (void)submitExclusiveTask:(id)task toFrontOfQueue:(BOOL)queue;	// 0x311dd7bd
- (void)submitIndependentTask:(id)task;	// 0x311ddad5
- (void)submitQueuedTask:(id)task;	// 0x311ddd3d
- (void)taskDidFinish:(id)task;	// 0x311de751
- (void)taskEndModal:(id)modal;	// 0x311dfba5
- (BOOL)taskIsModal:(id)modal;	// 0x311dfedd
- (void)taskManagerDidAddTask:(id)taskManager;	// 0x311e189d
- (void)taskManagerWillRemoveTask:(id)taskManager;	// 0x311e18a1
- (void)taskRequestModal:(id)modal;	// 0x311df611
- (BOOL)useSSL;	// 0x311dd705
- (id)user;	// 0x311dd685
- (id)userAgent;	// 0x311dd535
@end

