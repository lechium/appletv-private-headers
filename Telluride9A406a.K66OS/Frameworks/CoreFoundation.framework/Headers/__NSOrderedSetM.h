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
@private
	unsigned _used;	// 4 = 0x4
	CFBasicHashRef _set;	// 8 = 0x8
	NSMutableArray *_array;	// 12 = 0xc
}
+ (id)__new:(const id *)aNew :(unsigned)arg2;	// 0x34075351
+ (id)allocWithZone:(NSZone *)zone;	// 0x340fe95d
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x340fe959
- (void)_mutate;	// 0x34075eed
- (unsigned)count;	// 0x3407543d
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x34076089
- (void)dealloc;	// 0x3408532d
- (void)finalize;	// 0x340fe915
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x34075a55
- (unsigned)indexOfObject:(id)object;	// 0x34085105
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x34075f0d
- (id)objectAtIndex:(unsigned)index;	// 0x3407546d
- (void)removeObjectAtIndex:(unsigned)index;	// 0x340855e1
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x340fe735
@end

