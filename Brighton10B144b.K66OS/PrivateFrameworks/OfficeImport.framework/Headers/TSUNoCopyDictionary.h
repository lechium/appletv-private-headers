/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSMutableDictionary.h> // Unknown library
#import "OfficeImport-Structs.h"


@interface TSUNoCopyDictionary : NSMutableDictionary {
	CFDictionaryRef mDictionary;	// 4 = 0x4
}
- (id)init;	// 0x34805921
- (id)initWithCFDictionary:(CFDictionaryRef)cfdictionary;	// 0x349b6b49
- (id)initWithCapacity:(unsigned)capacity;	// 0x34805935
- (id)allKeys;	// 0x348f7d45
- (id)allValues;	// 0x349606c5
- (id)copyWithZone:(NSZone *)zone;	// 0x34ad98dd
- (unsigned)count;	// 0x34ad98ed
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x34ad996d
- (void)dealloc;	// 0x348870e5
- (void)getObjects:(id *)objects andKeys:(id *)keys;	// 0x34ad9901
- (id)keyEnumerator;	// 0x34ad9945
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x349b6af9
- (id)objectEnumerator;	// 0x3496069d
- (id)objectForKey:(id)key;	// 0x348724c9
- (void)removeAllObjects;	// 0x3491b0d1
- (void)removeObjectForKey:(id)key;	// 0x348b6e75
- (void)setObject:(id)object forKey:(id)key;	// 0x348200f5
@end

