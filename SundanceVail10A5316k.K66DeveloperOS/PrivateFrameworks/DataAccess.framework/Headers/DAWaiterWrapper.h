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
@property(copy) id completionHandler;	// G=0x335773c9; S=0x335773dd; @synthesize=_completionHandler
@property(assign) int dataclasses;	// G=0x335773ed; S=0x33577401; @synthesize=_dataclasses
@property(retain) id<DADataclassLockWatcher> waiter;	// G=0x335773a5; S=0x335773b9; @synthesize=_waiter
@property(readonly, assign) int waiterNum;	// G=0x33577419; @synthesize=_waiterNum
- (id)init;	// 0x33577279
// declared property getter: - (id)completionHandler;	// 0x335773c9
// declared property getter: - (int)dataclasses;	// 0x335773ed
- (void)dealloc;	// 0x33577341
- (id)description;	// 0x335772c9
// declared property setter: - (void)setCompletionHandler:(id)handler;	// 0x335773dd
// declared property setter: - (void)setDataclasses:(int)dataclasses;	// 0x33577401
// declared property setter: - (void)setWaiter:(id)waiter;	// 0x335773b9
// declared property getter: - (id)waiter;	// 0x335773a5
// declared property getter: - (int)waiterNum;	// 0x33577419
@end

