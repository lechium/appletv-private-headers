/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "PeriodicWorkerTaskDelegate.h"
#import <NSThread.h> // Unknown library

@class NSConditionLock, NSLock, NSMutableSet, NSMutableArray, NSTimer;

__attribute__((visibility("hidden")))
@interface PeriodicWorkerThread : NSThread <PeriodicWorkerTaskDelegate> {
@private
	BOOL running_;	// 52 = 0x34
	BOOL enabled_;	// 53 = 0x35
	NSConditionLock *workLock_;	// 56 = 0x38
	NSLock *taskLock_;	// 60 = 0x3c
	NSTimer *intervalTimer_;	// 64 = 0x40
	double interval_;	// 68 = 0x44
	NSMutableSet *tasks_;	// 76 = 0x4c
	NSMutableArray *inProcessTasks_;	// 80 = 0x50
}
@property(assign) BOOL enabled;	// G=0x332f8960; S=0x332f8770; @synthesize=enabled_
@property(retain) NSMutableArray *inProcessTasks;	// G=0x332f851c; S=0x332f84e8; @synthesize=inProcessTasks_
@property(assign) double interval;	// G=0x332f8734; S=0x332f853c; @synthesize=interval_
@property(retain) NSTimer *intervalTimer;	// G=0x332f8474; S=0x332f8440; @synthesize=intervalTimer_
@property(assign) BOOL running;	// G=0x332f7e14; S=0x332f7e2c; @synthesize=running_
@property(retain) NSLock *taskLock;	// G=0x332f8420; S=0x332f83ec; @synthesize=taskLock_
@property(retain) NSMutableSet *tasks;	// G=0x332f84c8; S=0x332f8494; @synthesize=tasks_
@property(retain) NSConditionLock *workLock;	// G=0x332f83cc; S=0x332f8398; @synthesize=workLock_
- (id)init;	// 0x332f7e50
- (id)initWithInterval:(double)interval;	// 0x332f822c
- (void)addPeriodicWorkerTask:(id)task;	// 0x332f7fb8
- (void)dealloc;	// 0x332f8e34
// declared property getter: - (BOOL)enabled;	// 0x332f8960
// declared property getter: - (id)inProcessTasks;	// 0x332f851c
- (void)installTimer;	// 0x332f7e68
// declared property getter: - (double)interval;	// 0x332f8734
// declared property getter: - (id)intervalTimer;	// 0x332f8474
- (void)main;	// 0x332f8994
- (void)periodicWorkerTaskDidFinish:(id)periodicWorkerTask;	// 0x332f81b4
- (void)periodicWorkerTaskDidFinishWithCancel:(id)periodicWorkerTask;	// 0x332f821c
- (void)removePeriodicWorkerTask:(id)task;	// 0x332f8054
- (void)removeTaskFromCollections:(id)collections;	// 0x332f80dc
// declared property getter: - (BOOL)running;	// 0x332f7e14
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x332f8770
// declared property setter: - (void)setInProcessTasks:(id)processTasks;	// 0x332f84e8
// declared property setter: - (void)setInterval:(double)interval;	// 0x332f853c
// declared property setter: - (void)setIntervalTimer:(id)timer;	// 0x332f8440
// declared property setter: - (void)setRunning:(BOOL)running;	// 0x332f7e2c
// declared property setter: - (void)setTaskLock:(id)lock;	// 0x332f83ec
// declared property setter: - (void)setTasks:(id)tasks;	// 0x332f8494
// declared property setter: - (void)setWorkLock:(id)lock;	// 0x332f8398
// declared property getter: - (id)taskLock;	// 0x332f8420
// declared property getter: - (id)tasks;	// 0x332f84c8
- (void)trigger:(id)trigger;	// 0x332f7f54
// declared property getter: - (id)workLock;	// 0x332f83cc
@end

