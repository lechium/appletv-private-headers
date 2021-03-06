/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import "MIME-Structs.h"
#import <NSObject.h> // Unknown library


@protocol NSObject
- (id)autorelease;
- (Class)class;
- (BOOL)conformsToProtocol:(id)protocol;
@optional
- (id)debugDescription;
@required
- (id)description;
- (unsigned)hash;
- (BOOL)isEqual:(id)equal;
- (BOOL)isKindOfClass:(Class)aClass;
- (BOOL)isMemberOfClass:(Class)aClass;
- (BOOL)isProxy;
- (id)performSelector:(SEL)selector;
- (id)performSelector:(SEL)selector withObject:(id)object;
- (id)performSelector:(SEL)selector withObject:(id)object withObject:(id)object3;
- (oneway void)release;
- (BOOL)respondsToSelector:(SEL)selector;
- (id)retain;
- (unsigned)retainCount;
- (id)self;
- (Class)superclass;
- (NSZone *)zone;
@end

@interface NSObject (LockingAdditions)
+ (void)mf_clearLocks;	// 0x373d9015
- (void)_mf_checkToAllowExclusiveLocksWithLock:(id)lock;	// 0x373d9b25
- (void)_mf_checkToAllowLock:(id)allowLock;	// 0x373d9d05
- (void)_mf_checkToAllowOrderingWithLock:(id)lock;	// 0x373d9821
- (void)_mf_checkToAllowStrictProgressionWithLock:(id)lock;	// 0x373d99b1
- (void)_mf_dumpLockCallStacks:(unsigned)stacks ordering:(id)ordering;	// 0x373d9545
- (id)_mf_lockOrderingForType:(int)type;	// 0x373d943d
- (BOOL)_mf_ntsIsLocked;	// 0x373da42d
- (id)mf_exclusiveLocks;	// 0x373da455
- (void)mf_lock;	// 0x373d9d4d
- (id)mf_lockOrdering;	// 0x373da451
- (void)mf_lockWithPriority;	// 0x373da1a1
- (id)mf_strictLockOrdering;	// 0x373da44d
- (BOOL)mf_tryLock;	// 0x373da005
- (BOOL)mf_tryLockWithPriority;	// 0x373da1c5
- (void)mf_unlock;	// 0x373da1e9
@end

