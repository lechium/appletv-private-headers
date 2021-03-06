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
+ (id)setWithCapacity:(unsigned)capacity;	// 0x352a44c1
- (id)initWithCapacity:(unsigned)capacity;	// 0x35314add
- (id)initWithObjects:(const id *)objects count:(unsigned)count;	// 0x35314b01
- (void)_mutate;	// 0x352620a5
- (void)addObject:(id)object;	// 0x35312ae1
- (void)addObjects:(const id *)objects count:(unsigned)count;	// 0x35312b29
- (void)addObjectsFromArray:(id)array;	// 0x35294985
- (void)addObjectsFromArray:(id)array range:(NSRange)range;	// 0x35312cb5
- (void)addObjectsFromOrderedSet:(id)orderedSet;	// 0x35313215
- (void)addObjectsFromOrderedSet:(id)orderedSet range:(NSRange)range;	// 0x35312f65
- (void)addObjectsFromSet:(id)set;	// 0x35313359
- (void)intersectOrderedSet:(id)set;	// 0x353135d9
- (void)intersectSet:(id)set;	// 0x3529a7c9
- (void)minusOrderedSet:(id)set;	// 0x35313991
- (void)minusSet:(id)set;	// 0x3526530d
- (void)removeAllObjects;	// 0x35313b01
- (void)removeObject:(id)object;	// 0x35312b05
- (void)removeObjectsInArray:(id)array;	// 0x35313e3d
- (void)removeObjectsInArray:(id)array range:(NSRange)range;	// 0x35313ca1
- (void)removeObjectsInOrderedSet:(id)orderedSet;	// 0x3531411d
- (void)removeObjectsInOrderedSet:(id)orderedSet range:(NSRange)range;	// 0x35313f81
- (void)removeObjectsInSet:(id)set;	// 0x35314261
- (void)replaceObject:(id)object;	// 0x353144f9
- (void)setArray:(id)array;	// 0x35314695
- (void)setObject:(id)object;	// 0x353145c9
- (void)setOrderedSet:(id)set;	// 0x353147ed
- (void)setSet:(id)set;	// 0x352b5f91
- (void)unionOrderedSet:(id)set;	// 0x3531496d
- (void)unionSet:(id)set;	// 0x35261cf5
@end

