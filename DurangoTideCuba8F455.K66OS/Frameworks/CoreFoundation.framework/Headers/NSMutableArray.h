/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSArray.h"
#import "CoreFoundation-Structs.h"


@interface NSMutableArray : NSArray {
}
+ (id)arrayWithCapacity:(unsigned)capacity;	// 0x34239be5
- (id)initWithCapacity:(unsigned)capacity;	// 0x342b693d
- (id)initWithObjects:(id *)objects count:(unsigned)count;	// 0x342b61e5
- (void)addObject:(id)object;	// 0x342b6f29
- (void)addObjectsFromArray:(id)array;	// 0x3423075d
- (void)exchangeObjectAtIndex:(unsigned)index withObjectAtIndex:(unsigned)index2;	// 0x3426e189
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x342b699d
- (void)insertObjects:(id)objects atIndexes:(id)indexes;	// 0x342b8761
- (void)removeAllObjects;	// 0x342339b9
- (void)removeLastObject;	// 0x342b6ed9
- (void)removeObject:(id)object;	// 0x34251fcd
- (void)removeObject:(id)object inRange:(NSRange)range;	// 0x342b5371
- (void)removeObject:(id)object range:(NSRange)range identical:(BOOL)identical;	// 0x34252015
- (void)removeObjectAtIndex:(unsigned)index;	// 0x342b695d
- (void)removeObjectIdenticalTo:(id)to;	// 0x3426f1a1
- (void)removeObjectIdenticalTo:(id)to inRange:(NSRange)range;	// 0x342b533d
- (void)removeObjectsAtIndexes:(id)indexes;	// 0x34269dcd
- (void)removeObjectsInArray:(id)array;	// 0x3425f05d
- (void)removeObjectsInRange:(NSRange)range;	// 0x3426a379
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x342b697d
- (void)replaceObjectsAtIndexes:(id)indexes withObjects:(id)objects;	// 0x342b8a3d
- (void)replaceObjectsInRange:(NSRange)range withObjects:(id *)objects count:(unsigned)count;	// 0x3422a7d9
- (void)replaceObjectsInRange:(NSRange)range withObjectsFromArray:(id)array;	// 0x342653f5
- (void)replaceObjectsInRange:(NSRange)range withObjectsFromArray:(id)array range:(NSRange)range3;	// 0x342b954d
- (void)setArray:(id)array;	// 0x342b8719
- (void)setObject:(id)object atIndex:(unsigned)index;	// 0x34269159
- (void)sortRange:(NSRange)range options:(unsigned)options usingComparator:(id)comparator;	// 0x342308bd
- (void)sortUsingComparator:(id)comparator;	// 0x3426aa5d
- (void)sortUsingFunction:(/*function-pointer*/ void *)function context:(void *)context;	// 0x34258cc1
- (void)sortUsingFunction:(/*function-pointer*/ void *)function context:(void *)context range:(NSRange)range;	// 0x342b6311
- (void)sortUsingSelector:(SEL)selector;	// 0x34230815
- (void)sortWithOptions:(unsigned)options usingComparator:(id)comparator;	// 0x34230871
@end
