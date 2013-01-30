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
@property(assign) DAAccount *account;	// G=0x33b4253d; S=0x33b42619; @synthesize=_account
@property(readonly, assign) id<DATask> activeModalTask;	// G=0x33b41d2d; @synthesize=_activeModalTask
@property(readonly, assign) id<DATask> activeQueuedTask;	// G=0x33b4685d; @synthesize=_activeQueuedTask
@property(readonly, assign) NSArray *allTasks;	// G=0x33b41951; 
@property(readonly, assign) NSArray *queuedTasks;	// G=0x33b46871; @synthesize=_queuedTasks
- (id)init;	// 0x33b2cded
- (id)initWithAccount:(id)account;	// 0x33b41d3d
- (void)_cancelTasksWithReason:(int)reason;	// 0x33b462c1
- (id)_getHeldIndependentTasks;	// 0x33b46715
- (id)_getIndependentTasks;	// 0x33b466c5
- (id)_getModalHeldIndependentTasks;	// 0x33b46765
- (id)_getQueuedExclusiveTasks;	// 0x33b46675
- (id)_getQueuedModalTasks;	// 0x33b46805
- (id)_getQueuedTasks;	// 0x33b467b5
- (BOOL)_hasTasksForcingNetworkConnection;	// 0x33b43589
- (void)_makeStateTransition;	// 0x33b45521
- (void)_performTask:(id)task;	// 0x33b44f99
- (void)_populateVersionDescriptions;	// 0x33b42459
- (void)_reactivateHeldTasks;	// 0x33b452b5
- (void)_releasePowerAssertionForTask:(id)task;	// 0x33b4657d
- (void)_requestCancelTasksWithReason:(int)reason;	// 0x33b45091
- (void)_retainPowerAssertionForTask:(id)task;	// 0x33b464e5
- (void)_schedulePerformTask:(id)task;	// 0x33b46239
- (void)_scheduleSelector:(SEL)selector withArgument:(id)argument;	// 0x33b46195
- (void)_scheduleStartModal:(id)modal;	// 0x33b46259
- (void)_startModal:(id)modal;	// 0x33b451d1
- (BOOL)_taskForcesNetworking:(id)networking;	// 0x33b43485
- (BOOL)_taskInQueueForcesNetworkConnection:(id)queueForcesNetworkConnection;	// 0x33b434c5
- (BOOL)_useFakeDescriptions;	// 0x33b424e5
- (void)_useOpportunisticSocketsAgain;	// 0x33b43409
- (id)_version;	// 0x33b424bd
// declared property getter: - (id)account;	// 0x33b4253d
- (id)accountID;	// 0x33b42721
- (id)accountPersistentUUID;	// 0x33b42741
// declared property getter: - (id)activeModalTask;	// 0x33b41d2d
// declared property getter: - (id)activeQueuedTask;	// 0x33b4685d
// declared property getter: - (id)allTasks;	// 0x33b41951
- (void)cancelAllTasks;	// 0x33b43005
- (void)cancelTask:(id)task;	// 0x33b42ff1
- (void)cancelTask:(id)task withUnderlyingError:(id)underlyingError;	// 0x33b42f91
- (void)dealloc;	// 0x33b41e21
- (id)deviceType;	// 0x33b424e9
- (id)identityPersist;	// 0x33b426e1
- (id)password;	// 0x33b4269d
- (int)port;	// 0x33b4265d
// declared property getter: - (id)queuedTasks;	// 0x33b46871
- (id)scheme;	// 0x33b42701
- (id)server;	// 0x33b4267d
// declared property setter: - (void)setAccount:(id)account;	// 0x33b42619
- (void)shutdown;	// 0x33b430d1
- (id)stateString;	// 0x33b43239
- (void)submitExclusiveTask:(id)task;	// 0x33b42761
- (void)submitExclusiveTask:(id)task toFrontOfQueue:(BOOL)queue;	// 0x33b42775
- (void)submitIndependentTask:(id)task;	// 0x33b42a8d
- (void)submitQueuedTask:(id)task;	// 0x33b42cf5
- (void)taskDidFinish:(id)task;	// 0x33b43709
- (void)taskEndModal:(id)modal;	// 0x33b44b5d
- (BOOL)taskIsModal:(id)modal;	// 0x33b44e95
- (void)taskManagerDidAddTask:(id)taskManager;	// 0x33b46855
- (void)taskManagerWillRemoveTask:(id)taskManager;	// 0x33b46859
- (void)taskRequestModal:(id)modal;	// 0x33b445c9
- (BOOL)useSSL;	// 0x33b426bd
- (id)user;	// 0x33b4263d
- (id)userAgent;	// 0x33b424ed
@end
