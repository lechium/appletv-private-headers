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
- (id)init;	// 0x378aa921
- (id)initWithCFDictionary:(CFDictionaryRef)cfdictionary;	// 0x37a5bb49
- (id)initWithCapacity:(unsigned)capacity;	// 0x378aa935
- (id)allKeys;	// 0x3799cd45
- (id)allValues;	// 0x37a056c5
- (id)copyWithZone:(NSZone *)zone;	// 0x37b7e8dd
- (unsigned)count;	// 0x37b7e8ed
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x37b7e96d
- (void)dealloc;	// 0x3792c0e5
- (void)getObjects:(id *)objects andKeys:(id *)keys;	// 0x37b7e901
- (id)keyEnumerator;	// 0x37b7e945
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x37a5baf9
- (id)objectEnumerator;	// 0x37a0569d
- (id)objectForKey:(id)key;	// 0x379174c9
- (void)removeAllObjects;	// 0x379c00d1
- (void)removeObjectForKey:(id)key;	// 0x3795be75
- (void)setObject:(id)object forKey:(id)key;	// 0x378c50f5
@end
