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
@property(copy) id completionHandler;	// G=0x31eca511; S=0x31eca555; @synthesize=_completionHandler
@property(assign) int dataclasses;	// G=0x31ec97ad; S=0x31ec97bd; @synthesize=_dataclasses
@property(retain) id<DADataclassLockWatcher> waiter;	// G=0x31eca4f9; S=0x31eca529; @synthesize=_waiter
@property(readonly, assign) int waiterNum;	// G=0x31ec979d; @synthesize=_waiterNum
- (id)init;	// 0x31ec97d1
// declared property getter: - (id)completionHandler;	// 0x31eca511
// declared property getter: - (int)dataclasses;	// 0x31ec97ad
- (void)dealloc;	// 0x31eca421
- (id)description;	// 0x31eca47d
// declared property setter: - (void)setCompletionHandler:(id)handler;	// 0x31eca555
// declared property setter: - (void)setDataclasses:(int)dataclasses;	// 0x31ec97bd
// declared property setter: - (void)setWaiter:(id)waiter;	// 0x31eca529
// declared property getter: - (id)waiter;	// 0x31eca4f9
// declared property getter: - (int)waiterNum;	// 0x31ec979d
@end

