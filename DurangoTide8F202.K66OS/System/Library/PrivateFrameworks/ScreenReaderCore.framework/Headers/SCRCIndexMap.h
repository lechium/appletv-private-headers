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
- (id)init;	// 0x315bd2f5
- (id)initWithObjects:(id *)objects andIndexes:(unsigned *)indexes count:(unsigned long)count;	// 0x315bdfc5
- (unsigned *)_createIndexesWithSize:(unsigned *)size;	// 0x315be071
- (id)_initAndDeepCopyIndexMap:(id)map;	// 0x315bdeb9
- (id)_initWithIndexMap:(id)indexMap;	// 0x315bdb89
- (void)addObjectsFromIndexMap:(id)indexMap;	// 0x315be0bd
- (id)copyWithZone:(NSZone *)zone;	// 0x315bdb59
- (unsigned long)count;	// 0x315c1ca9
- (void)dealloc;	// 0x315bdc01
- (id)deepCopyWithZone:(NSZone *)zone;	// 0x315bde89
- (id)description;	// 0x315c1cc1
- (id)indexes;	// 0x315c2999
- (id)objectForIndex:(unsigned long)index;	// 0x315bd38d
- (void)removeAllObjects;	// 0x315bde71
- (void)removeObjectForIndex:(unsigned long)index;	// 0x315c2a21
- (void)setObject:(id)object forIndex:(unsigned long)index;	// 0x315bd369
@end

