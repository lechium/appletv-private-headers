/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSMutableSet.h"


__attribute__((visibility("hidden")))
@interface __NSSetM : NSMutableSet {
@private
	unsigned _used : 26;	// 4 = 0x4
	unsigned _size;	// 8 = 0x8
	unsigned long _mutations;	// 12 = 0xc
	id *_objs;	// 16 = 0x10
}
+ (id)__new:(const id *)aNew :(unsigned)arg2;	// 0x3713908d
+ (id)allocWithZone:(NSZone *)zone;	// 0x37139331
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x3713932d
+ (void)initialize;	// 0x3713934d
- (void)_mutate;	// 0x37138b01
- (void)addObject:(id)object;	// 0x37138b15
- (id)copyWithZone:(NSZone *)zone;	// 0x37139385
- (unsigned)count;	// 0x371387a5
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x371389dd
- (void)dealloc;	// 0x3713921d
- (void)finalize;	// 0x371392a9
- (void)getObjects:(id *)objects count:(unsigned)count;	// 0x371388f1
- (id)member:(id)member;	// 0x371387b9
- (id)objectEnumerator;	// 0x371388a5
- (void)removeAllObjects;	// 0x37138fed
- (void)removeObject:(id)object;	// 0x37138e15
@end

