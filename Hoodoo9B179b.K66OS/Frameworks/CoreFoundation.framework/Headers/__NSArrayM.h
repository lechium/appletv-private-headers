/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSMutableArray.h"


__attribute__((visibility("hidden")))
@interface __NSArrayM : NSMutableArray {
@private
	unsigned _used;	// 4 = 0x4
	unsigned _doHardRetain : 1;	// 8 = 0x8
	unsigned _doWeakAccess : 1;	// 8 = 0x8
	unsigned _size : 30;	// 8 = 0x8
	unsigned _hasObjects : 1;	// 12 = 0xc
	unsigned _hasStrongReferences : 1;	// 12 = 0xc
	unsigned _offset : 30;	// 12 = 0xc
	unsigned long _mutations;	// 16 = 0x10
	id *_list;	// 20 = 0x14
}
+ (id)__new:(const id *)aNew :(unsigned)arg2 :(BOOL)arg3 :(BOOL)arg4;	// 0x30cecdb1
+ (id)allocWithZone:(NSZone *)zone;	// 0x30d899d5
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x30d899d1
- (BOOL)_hasObjects;	// 0x30cf535d
- (BOOL)_hasStrongReferences;	// 0x30d89811
- (void)_mutate;	// 0x30cea2ed
- (void)addObject:(id)object;	// 0x30ceb0e9
- (id)copyWithZone:(NSZone *)zone;	// 0x30cf001d
- (unsigned)count;	// 0x30ce01a9
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x30cea8cd
- (void)dealloc;	// 0x30cf4ff1
- (void)finalize;	// 0x30d89825
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x30cea301
- (unsigned)indexOfObjectIdenticalTo:(id)to;	// 0x30d17209
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x30ceb11d
- (id)objectAtIndex:(unsigned)index;	// 0x30cdf8cd
- (void)removeLastObject;	// 0x30d1c569
- (void)removeObjectAtIndex:(unsigned)index;	// 0x30cf4911
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x30cee77d
@end

