/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import "ScreenReaderCore-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"


@interface SCRCIndexMap : NSObject <NSCopying> {
	CFDictionaryRef _map;	// 4 = 0x4
}
- (id)init;	// 0x3696067d
- (id)initWithObjects:(id *)objects andIndexes:(unsigned *)indexes count:(unsigned long)count;	// 0x369605b5
- (unsigned *)_createIndexesWithSize:(unsigned *)size;	// 0x3696086d
- (id)_initAndDeepCopyIndexMap:(id)map;	// 0x36960751
- (id)_initWithIndexMap:(id)indexMap;	// 0x36960bed
- (void)addObjectsFromIndexMap:(id)indexMap;	// 0x369618e9
- (id)copyWithZone:(NSZone *)zone;	// 0x36960bb5
- (unsigned long)count;	// 0x36963561
- (void)dealloc;	// 0x369609d1
- (id)deepCopyWithZone:(NSZone *)zone;	// 0x36960719
- (id)description;	// 0x36963609
- (id)indexes;	// 0x36963575
- (id)objectForIndex:(unsigned long)index;	// 0x36960669
- (void)removeAllObjects;	// 0x36960c5d
- (void)removeObjectForIndex:(unsigned long)index;	// 0x36961e21
- (void)setObject:(id)object forIndex:(unsigned long)index;	// 0x369606fd
@end

