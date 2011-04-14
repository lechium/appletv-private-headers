/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSObject.h> // Unknown library
#import "MIME-Structs.h"


@protocol NSObject
- (id)autorelease;
- (Class)class;
- (BOOL)conformsToProtocol:(id)protocol;
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
+ (void)mf_clearLocks;	// 0x346b1f9d
- (void)_mf_checkToAllowExclusiveLocksWithLock:(id)lock;	// 0x346b15dd
- (void)_mf_checkToAllowLock:(id)allowLock;	// 0x346b1a79
- (void)_mf_checkToAllowOrderingWithLock:(id)lock;	// 0x346b1859
- (void)_mf_checkToAllowStrictProgressionWithLock:(id)lock;	// 0x346b172d
- (id)_mf_lockOrderingForType:(int)type;	// 0x346b1995
- (BOOL)_mf_ntsIsLocked;	// 0x346b1b81
- (id)mf_exclusiveLocks;	// 0x346b154d
- (void)mf_lock;	// 0x346b2ed1
- (id)mf_lockOrdering;	// 0x346b1549
- (void)mf_lockWithPriority;	// 0x346b2eb1
- (id)mf_strictLockOrdering;	// 0x346b1545
- (BOOL)mf_tryLock;	// 0x346b1dcd
- (BOOL)mf_tryLockWithPriority;	// 0x346b1da9
- (void)mf_unlock;	// 0x346b1df1
@end

