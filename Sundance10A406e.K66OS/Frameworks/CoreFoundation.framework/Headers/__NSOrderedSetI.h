/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSOrderedSet.h"


__attribute__((visibility("hidden")))
@interface __NSOrderedSetI : NSOrderedSet {
	unsigned _used : 26;	// 4 = 0x4
	unsigned _szidx : 6;	// 7 = 0x7
}
+ (id)__new:(const id *)aNew :(unsigned)arg2 :(BOOL)arg3;	// 0x33a947cd
+ (id)allocWithZone:(NSZone *)zone;	// 0x33b1eb39
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x33b1eb35
- (id)copyWithZone:(NSZone *)zone;	// 0x33b1eab9
- (unsigned)count;	// 0x33aa20b5
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x33aa1fe9
- (void)dealloc;	// 0x33aa217d
- (void)finalize;	// 0x33b1eac9
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x33aa6009
- (unsigned)indexOfObject:(id)object;	// 0x33b1e9a5
- (id)objectAtIndex:(unsigned)index;	// 0x33aa20c9
@end
