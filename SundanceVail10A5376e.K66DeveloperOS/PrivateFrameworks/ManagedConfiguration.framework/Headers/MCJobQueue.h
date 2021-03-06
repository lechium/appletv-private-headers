/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <NSObject.h> // Unknown library

@protocol OS_dispatch_group, OS_dispatch_queue, MCJobQueueObserver;

@interface MCJobQueue : NSObject {
	NSObject<OS_dispatch_queue> *_executionQueue;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_jobQueue;	// 8 = 0x8
	NSObject<OS_dispatch_group> *_jobGroup;	// 12 = 0xc
	id _abortCompletionBlock;	// 16 = 0x10
	id<MCJobQueueObserver> _observer;	// 20 = 0x14
}
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *executionQueue;	// G=0x32bb35d9; S=0x32bb35e9; @synthesize=_executionQueue
@property(assign, nonatomic) __weak id<MCJobQueueObserver> observer;	// G=0x32bb3611; S=0x32bb3631; @synthesize=_observer
- (id)init;	// 0x32bb2ec1
- (void).cxx_destruct;	// 0x32bb3645
- (void)abortEnqueuedJobsCompletionBlock:(id)block;	// 0x32bb3349
- (void)enqueueJob:(id)job;	// 0x32bb2f61
// declared property getter: - (id)executionQueue;	// 0x32bb35d9
- (BOOL)hasJobsEnqueued;	// 0x32bb3141
- (void)jobDidFinish;	// 0x32bb3165
// declared property getter: - (id)observer;	// 0x32bb3611
// declared property setter: - (void)setExecutionQueue:(id)queue;	// 0x32bb35e9
// declared property setter: - (void)setObserver:(id)observer;	// 0x32bb3631
- (void)waitForEnqueuedJobsToCompleteCompletionBlock:(id)completeCompletionBlock;	// 0x32bb31a5
@end

