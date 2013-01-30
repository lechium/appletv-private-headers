/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import "AXTimer.h"

@class NSThread, AXThreadTimerTask;

@interface AXThreadTimer : AXTimer {
	NSThread *_thread;	// 16 = 0x10
	id _cancelBlock;	// 20 = 0x14
	AXThreadTimerTask *_task;	// 24 = 0x18
}
@property(retain, nonatomic) AXThreadTimerTask *task;	// G=0x333995c5; S=0x333995d5; @synthesize=_task
- (id)initWithThread:(id)thread;	// 0x33399249
- (void)_runAfterDelay:(id)delay;	// 0x333992a1
- (void)afterDelay:(double)delay processBlock:(id)block;	// 0x33399301
- (void)afterDelay:(double)delay processBlock:(id)block cancelBlock:(id)block3;	// 0x33399325
- (void)cancel;	// 0x3339948d
- (void)dealloc;	// 0x33399565
- (BOOL)isCancelled;	// 0x333994f5
- (BOOL)isPending;	// 0x3339951d
// declared property setter: - (void)setTask:(id)task;	// 0x333995d5
// declared property getter: - (id)task;	// 0x333995c5
@end
