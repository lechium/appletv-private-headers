/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSMutableArray.h"


__attribute__((visibility("hidden")))
@interface __NSCFArray : NSMutableArray {
}
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x3712c0ad
- (BOOL)_isDeallocating;	// 0x3712c05d
- (BOOL)_tryRetain;	// 0x3712c04d
- (void)addObject:(id)object;	// 0x370a94f9
- (Class)classForCoder;	// 0x3712c0b1
- (id)copyWithZone:(NSZone *)zone;	// 0x370a4d29
- (unsigned)count;	// 0x37081b19
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x37097c89
- (void)finalize;	// 0x3712c06d
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x370ac561
- (unsigned)hash;	// 0x3712c045
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x370a952d
- (BOOL)isEqual:(id)equal;	// 0x370b2cc1
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x370a4bc9
- (id)objectAtIndex:(unsigned)index;	// 0x37081b1d
- (oneway void)release;	// 0x370a6a61
- (void)removeLastObject;	// 0x3712c0ed
- (void)removeObjectAtIndex:(unsigned)index;	// 0x370aa0e5
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x370a4bed
- (id)retain;	// 0x370a9429
- (unsigned)retainCount;	// 0x3712c069
@end

