/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSMutableOrderedSet.h"
#import "CoreFoundation-Structs.h"


__attribute__((visibility("hidden")))
@interface __NSPlaceholderOrderedSet : NSMutableOrderedSet {
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x30db614d
+ (id)immutablePlaceholder;	// 0x30d2c8ed
+ (void)initialize;	// 0x30d2c7e9
+ (id)mutablePlaceholder;	// 0x30d2d311
- (id)init;	// 0x30d2c8fd
- (id)initWithCapacity:(unsigned)capacity;	// 0x30d2dd29
- (id)initWithObjects:(const id *)objects count:(unsigned)count;	// 0x30d2c951
- (unsigned)count;	// 0x30db6175
- (void)dealloc;	// 0x30db6171
- (unsigned)indexOfObject:(id)object;	// 0x30db6239
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x30db63c1
- (id)objectAtIndex:(unsigned)index;	// 0x30db62fd
- (oneway void)release;	// 0x30db6165
- (void)removeObjectAtIndex:(unsigned)index;	// 0x30db6485
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x30db6549
- (id)retain;	// 0x30db6161
- (unsigned)retainCount;	// 0x30db6169
@end

