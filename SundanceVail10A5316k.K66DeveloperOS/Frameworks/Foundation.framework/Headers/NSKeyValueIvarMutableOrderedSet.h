/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSKeyValueMutableOrderedSet.h"


__attribute__((visibility("hidden")))
@interface NSKeyValueIvarMutableOrderedSet : NSKeyValueMutableOrderedSet {
@private
	objc_ivar *_ivar;	// 12 = 0xc
}
+ (XXStruct_1UKQIB *)_proxyNonGCPoolPointer;	// 0x31aee329
- (id)_nonNilMutableOrderedSetValueWithSelector:(SEL)selector;	// 0x31aee481
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x31aee339
- (void)_proxyNonGCFinalize;	// 0x31aee391
- (void)_raiseNilValueExceptionWithSelector:(SEL)selector;	// 0x31aee40d
- (unsigned)count;	// 0x31aee3d1
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x31aee4c5
- (unsigned)indexOfObject:(id)object;	// 0x31aee4fd
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x31aee5a5
- (void)insertObjects:(id)objects atIndexes:(id)indexes;	// 0x31aee64d
- (id)objectAtIndex:(unsigned)index;	// 0x31aee545
- (id)objectsAtIndexes:(id)indexes;	// 0x31aee575
- (void)removeObjectAtIndex:(unsigned)index;	// 0x31aee7e1
- (void)removeObjectsAtIndexes:(id)indexes;	// 0x31aee811
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x31aee841
- (void)replaceObjectsAtIndexes:(id)indexes withObjects:(id)objects;	// 0x31aee875
@end

