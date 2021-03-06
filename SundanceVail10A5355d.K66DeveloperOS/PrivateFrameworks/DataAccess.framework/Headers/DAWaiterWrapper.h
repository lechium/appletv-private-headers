/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <NSObject.h> // Unknown library

@protocol DADataclassLockWatcher;

@interface DAWaiterWrapper : NSObject {
	id<DADataclassLockWatcher> _waiter;	// 4 = 0x4
	int _dataclasses;	// 8 = 0x8
	id _completionHandler;	// 12 = 0xc
	int _waiterNum;	// 16 = 0x10
}
@property(copy) id completionHandler;	// G=0x33666359; S=0x3366636d; @synthesize=_completionHandler
@property(assign) int dataclasses;	// G=0x3366637d; S=0x33666391; @synthesize=_dataclasses
@property(retain) id<DADataclassLockWatcher> waiter;	// G=0x33666335; S=0x33666349; @synthesize=_waiter
@property(readonly, assign) int waiterNum;	// G=0x336663a9; @synthesize=_waiterNum
- (id)init;	// 0x33666209
// declared property getter: - (id)completionHandler;	// 0x33666359
// declared property getter: - (int)dataclasses;	// 0x3366637d
- (void)dealloc;	// 0x336662d1
- (id)description;	// 0x33666259
// declared property setter: - (void)setCompletionHandler:(id)handler;	// 0x3366636d
// declared property setter: - (void)setDataclasses:(int)dataclasses;	// 0x33666391
// declared property setter: - (void)setWaiter:(id)waiter;	// 0x33666349
// declared property getter: - (id)waiter;	// 0x33666335
// declared property getter: - (int)waiterNum;	// 0x336663a9
@end

