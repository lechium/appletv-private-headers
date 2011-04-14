/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DASubCal.framework/DASubCal
 */

#import <NSObject.h> // Unknown library
#import "DATask.h"

@class DAStatusReport, DATaskManager;

@interface SubCalDATask : NSObject <DATask> {
	DATaskManager *_taskManager;	// 4 = 0x4
	BOOL _finished;	// 8 = 0x8
	DAStatusReport *_statusReport;	// 12 = 0xc
}
@property(retain, nonatomic) DAStatusReport *statusReport;	// G=0x310f94a1; S=0x310f95b9; @synthesize=_statusReport
@property(assign, nonatomic) DATaskManager *taskManager;	// G=0x310f94b1; S=0x310f94c1; @synthesize=_taskManager
- (void)cancelTaskWithReason:(int)reason underlyingError:(id)error;	// 0x310f9559
- (id)consumerDictKey;	// 0x310f5ac9
- (void)dealloc;	// 0x310f9571
- (void)didFinish;	// 0x310f949d
- (void)finishWithError:(id)error;	// 0x310f94e9
- (void)performDelegateCallbackWithError:(id)error;	// 0x310f9499
- (void)performTask;	// 0x310f948d
// declared property setter: - (void)setStatusReport:(id)report;	// 0x310f95b9
// declared property setter: - (void)setTaskManager:(id)manager;	// 0x310f94c1
- (BOOL)shouldHoldPowerAssertion;	// 0x310f9491
// declared property getter: - (id)statusReport;	// 0x310f94a1
// declared property getter: - (id)taskManager;	// 0x310f94b1
- (void)willFinish;	// 0x310f9495
@end

