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
@property(assign) DAAccount *account;	// G=0x33569729; S=0x33569805; @synthesize=_account
@property(readonly, assign) id<DATask> activeModalTask;	// G=0x33568f15; @synthesize=_activeModalTask
@property(readonly, assign) id<DATask> activeQueuedTask;	// G=0x3356d93d; @synthesize=_activeQueuedTask
@property(readonly, assign) NSArray *allTasks;	// G=0x33568b39; 
@property(readonly, assign) NSArray *queuedTasks;	// G=0x3356d951; @synthesize=_queuedTasks
- (id)init;	// 0x335541b5
- (id)initWithAccount:(id)account;	// 0x33568f25
- (void)_cancelTasksWithReason:(int)reason;	// 0x3356d3a1
- (id)_getHeldIndependentTasks;	// 0x3356d7f5
- (id)_getIndependentTasks;	// 0x3356d7a5
- (id)_getModalHeldIndependentTasks;	// 0x3356d845
- (id)_getQueuedExclusiveTasks;	// 0x3356d755
- (id)_getQueuedModalTasks;	// 0x3356d8e5
- (id)_getQueuedTasks;	// 0x3356d895
- (BOOL)_hasTasksForcingNetworkConnection;	// 0x3356a775
- (void)_makeStateTransition;	// 0x3356c601
- (void)_performTask:(id)task;	// 0x3356c079
- (void)_populateVersionDescriptions;	// 0x33569641
- (void)_reactivateHeldTasks;	// 0x3356c395
- (void)_releasePowerAssertionForTask:(id)task;	// 0x3356d65d
- (void)_requestCancelTasksWithReason:(int)reason;	// 0x3356c171
- (void)_retainPowerAssertionForTask:(id)task;	// 0x3356d5c5
- (void)_schedulePerformTask:(id)task;	// 0x3356d319
- (void)_scheduleSelector:(SEL)selector withArgument:(id)argument;	// 0x3356d275
- (void)_scheduleStartModal:(id)modal;	// 0x3356d339
- (void)_startModal:(id)modal;	// 0x3356c2b1
- (BOOL)_taskForcesNetworking:(id)networking;	// 0x3356a671
- (BOOL)_taskInQueueForcesNetworkConnection:(id)queueForcesNetworkConnection;	// 0x3356a6b1
- (BOOL)_useFakeDescriptions;	// 0x335696cd
- (void)_useOpportunisticSocketsAgain;	// 0x3356a5f5
- (id)_version;	// 0x335696a5
// declared property getter: - (id)account;	// 0x33569729
- (id)accountID;	// 0x3356990d
- (id)accountPersistentUUID;	// 0x3356992d
// declared property getter: - (id)activeModalTask;	// 0x33568f15
// declared property getter: - (id)activeQueuedTask;	// 0x3356d93d
// declared property getter: - (id)allTasks;	// 0x33568b39
- (void)cancelAllTasks;	// 0x3356a1f1
- (void)cancelTask:(id)task;	// 0x3356a1dd
- (void)cancelTask:(id)task withUnderlyingError:(id)underlyingError;	// 0x3356a17d
- (void)dealloc;	// 0x33569009
- (id)deviceID;	// 0x33569725
- (id)deviceType;	// 0x335696d1
- (id)identityPersist;	// 0x335698cd
- (id)password;	// 0x33569889
- (int)port;	// 0x33569849
// declared property getter: - (id)queuedTasks;	// 0x3356d951
- (id)scheme;	// 0x335698ed
- (id)server;	// 0x33569869
// declared property setter: - (void)setAccount:(id)account;	// 0x33569805
- (void)shutdown;	// 0x3356a2bd
- (id)stateString;	// 0x3356a425
- (void)submitExclusiveTask:(id)task;	// 0x3356994d
- (void)submitExclusiveTask:(id)task toFrontOfQueue:(BOOL)queue;	// 0x33569961
- (void)submitIndependentTask:(id)task;	// 0x33569c79
- (void)submitQueuedTask:(id)task;	// 0x33569ee1
- (void)taskDidFinish:(id)task;	// 0x3356a8f1
- (void)taskEndModal:(id)modal;	// 0x3356bd45
- (void)taskManagerDidAddTask:(id)taskManager;	// 0x3356d935
- (void)taskManagerWillRemoveTask:(id)taskManager;	// 0x3356d939
- (void)taskRequestModal:(id)modal;	// 0x3356b7b1
- (BOOL)useSSL;	// 0x335698a9
- (id)user;	// 0x33569829
- (id)userAgent;	// 0x335696d5
@end

