/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSKeyValueMutableOrderedSet.h"


__attribute__((visibility("hidden")))
@interface NSKeyValueNotifyingMutableOrderedSet : NSKeyValueMutableOrderedSet {
	NSMutableOrderedSet *_mutableOrderedSet;	// 12 = 0xc
}
+ (XXStruct_1UKQIB *)_proxyNonGCPoolPointer;	// 0x37413321
+ (id)_proxyShare;	// 0x37413331
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x37413361
- (void)_proxyNonGCFinalize;	// 0x374133dd
- (unsigned)count;	// 0x3741342d
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x3741344d
- (unsigned)indexOfObject:(id)object;	// 0x37413481
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x374134e1
- (void)insertObjects:(id)objects atIndexes:(id)indexes;	// 0x374135b1
- (id)objectAtIndex:(unsigned)index;	// 0x374134a1
- (id)objectsAtIndexes:(id)indexes;	// 0x374134c1
- (void)removeObjectAtIndex:(unsigned)index;	// 0x3741363d
- (void)removeObjectsAtIndexes:(id)indexes;	// 0x37413709
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x37413791
- (void)replaceObjectsAtIndexes:(id)indexes withObjects:(id)objects;	// 0x37413861
@end

