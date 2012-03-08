/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSMutableSet.h"
#import "CoreFoundation-Structs.h"


__attribute__((visibility("hidden")))
@interface __NSCFSet : NSMutableSet {
@private
	unsigned char _cfinfo[4];	// 4 = 0x4
	unsigned _bits[4];	// 8 = 0x8
	void *_callbacks;	// 24 = 0x18
	id *_values;	// 28 = 0x1c
}
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x30d9ec4d
- (BOOL)_isDeallocating;	// 0x30d9ebf9
- (unsigned)_trueCount;	// 0x30d9ec51
- (BOOL)_tryRetain;	// 0x30d9ebe5
- (void)addObject:(id)object;	// 0x30ceed35
- (Class)classForCoder;	// 0x30d28959
- (id)copyWithZone:(NSZone *)zone;	// 0x30d1c031
- (unsigned)count;	// 0x30cec075
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x30cec1f1
- (void)finalize;	// 0x30d9ec09
- (void)getObjects:(id *)objects;	// 0x30d28999
- (unsigned)hash;	// 0x30d3c67d
- (BOOL)isEqual:(id)equal;	// 0x30d26c2d
- (id)member:(id)member;	// 0x30d040c1
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x30cef075
- (id)objectEnumerator;	// 0x30d333c5
- (oneway void)release;	// 0x30cec25d
- (void)removeAllObjects;	// 0x30ceea15
- (void)removeObject:(id)object;	// 0x30cef225
- (id)retain;	// 0x30d03745
- (unsigned)retainCount;	// 0x30d9ec05
@end

