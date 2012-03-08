/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSSet.h"
#import "CoreFoundation-Structs.h"


@interface NSMutableSet : NSSet {
}
+ (id)setWithCapacity:(unsigned)capacity;	// 0x30d2e491
- (id)initWithCapacity:(unsigned)capacity;	// 0x30d9eaad
- (id)initWithObjects:(const id *)objects count:(unsigned)count;	// 0x30d9ead1
- (void)_mutate;	// 0x30cec06d
- (void)addObject:(id)object;	// 0x30d9cab1
- (void)addObjects:(const id *)objects count:(unsigned)count;	// 0x30d9caf9
- (void)addObjectsFromArray:(id)array;	// 0x30d1e955
- (void)addObjectsFromArray:(id)array range:(NSRange)range;	// 0x30d9cc85
- (void)addObjectsFromOrderedSet:(id)orderedSet;	// 0x30d9d1e5
- (void)addObjectsFromOrderedSet:(id)orderedSet range:(NSRange)range;	// 0x30d9cf35
- (void)addObjectsFromSet:(id)set;	// 0x30d9d329
- (void)intersectOrderedSet:(id)set;	// 0x30d9d5a9
- (void)intersectSet:(id)set;	// 0x30d24799
- (void)minusOrderedSet:(id)set;	// 0x30d9d961
- (void)minusSet:(id)set;	// 0x30cef2d5
- (void)removeAllObjects;	// 0x30d9dad1
- (void)removeObject:(id)object;	// 0x30d9cad5
- (void)removeObjectsInArray:(id)array;	// 0x30d9de0d
- (void)removeObjectsInArray:(id)array range:(NSRange)range;	// 0x30d9dc71
- (void)removeObjectsInOrderedSet:(id)orderedSet;	// 0x30d9e0ed
- (void)removeObjectsInOrderedSet:(id)orderedSet range:(NSRange)range;	// 0x30d9df51
- (void)removeObjectsInSet:(id)set;	// 0x30d9e231
- (void)replaceObject:(id)object;	// 0x30d9e4c9
- (void)setArray:(id)array;	// 0x30d9e665
- (void)setObject:(id)object;	// 0x30d9e599
- (void)setOrderedSet:(id)set;	// 0x30d9e7bd
- (void)setSet:(id)set;	// 0x30d3ff61
- (void)unionOrderedSet:(id)set;	// 0x30d9e93d
- (void)unionSet:(id)set;	// 0x30cebcbd
@end

