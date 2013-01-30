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
+ (id)__new:(const id *)aNew :(unsigned)arg2 :(BOOL)arg3;	// 0x310f0745
+ (id)allocWithZone:(NSZone *)zone;	// 0x31179f9d
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x31179f99
- (void)_mutate;	// 0x310f0fad
- (unsigned)count;	// 0x310f0849
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x310f1151
- (void)dealloc;	// 0x310f761d
- (void)finalize;	// 0x31179f55
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x310f0bd1
- (unsigned)indexOfObject:(id)object;	// 0x310f0d71
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x310f0fcd
- (id)objectAtIndex:(unsigned)index;	// 0x310f0879
- (void)removeObjectAtIndex:(unsigned)index;	// 0x310fcb49
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x31179b55
- (void)setObject:(id)object atIndex:(unsigned)index;	// 0x31179d31
@end
