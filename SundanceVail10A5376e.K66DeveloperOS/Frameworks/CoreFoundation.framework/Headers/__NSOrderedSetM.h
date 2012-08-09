/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSMutableOrderedSet.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface __NSOrderedSetM : NSMutableOrderedSet {
	unsigned _used;	// 4 = 0x4
	CFBasicHashRef _set;	// 8 = 0x8
	NSMutableArray *_array;	// 12 = 0xc
}
+ (id)__new:(const id *)aNew :(unsigned)arg2 :(BOOL)arg3;	// 0x355f8b75
+ (id)allocWithZone:(NSZone *)zone;	// 0x35682345
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x35682341
- (void)_mutate;	// 0x355f93dd
- (unsigned)count;	// 0x355f8c79
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x355f9581
- (void)dealloc;	// 0x355ffa4d
- (void)finalize;	// 0x356822fd
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x355f9001
- (unsigned)indexOfObject:(id)object;	// 0x355f91a1
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x355f93fd
- (id)objectAtIndex:(unsigned)index;	// 0x355f8ca9
- (void)removeObjectAtIndex:(unsigned)index;	// 0x35604f79
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x35681efd
- (void)setObject:(id)object atIndex:(unsigned)index;	// 0x356820d9
@end
