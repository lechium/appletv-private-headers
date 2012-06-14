/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import "NSKnownKeysDictionary.h"

@class NSKnownKeysMappingStrategy;

__attribute__((visibility("hidden")))
@interface NSKnownKeysDictionary1 : NSKnownKeysDictionary {
@private
	int _cd_rc;	// 4 = 0x4
	int _count;	// 8 = 0x8
	NSKnownKeysMappingStrategy *_keySearch;	// 12 = 0xc
	id _values[0];	// 16 = 0x10
}
+ (id)init;	// 0x3628cc4d
+ (id)initForKeys:(id)keys;	// 0x3622a9b9
+ (id)initWithCapacity:(unsigned)capacity;	// 0x3628cbed
+ (id)initWithCoder:(id)coder;	// 0x3628c981
+ (id)initWithDictionary:(id)dictionary;	// 0x3628c609
+ (id)initWithDictionary:(id)dictionary copyItems:(BOOL)items;	// 0x3628c61d
+ (id)initWithObjects:(id *)objects forKeys:(id *)keys count:(unsigned)count;	// 0x36223d21
+ (id)initWithSearchStrategy:(id)searchStrategy;	// 0x362247e5
+ (BOOL)accessInstanceVariablesDirectly;	// 0x3628bfe5
+ (id)alloc;	// 0x3628bfdd
+ (id)allocWithZone:(NSZone *)zone;	// 0x3628bfe1
- (unsigned)_countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count forKeys:(BOOL)keys;	// 0x3622cddd
- (BOOL)_isDeallocating;	// 0x3628d9cd
- (void)_recount;	// 0x36224955
- (void)_setValues:(id *)values retain:(BOOL)retain;	// 0x3628d4e1
- (BOOL)_tryRetain;	// 0x3628d9f5
- (unsigned)_valueCountByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x3628d3fd
- (void)addEntriesFromDictionary:(id)dictionary;	// 0x3628cd29
- (id)allKeys;	// 0x3628d2c9
- (id)allValues;	// 0x36227311
- (Class)classForCoder;	// 0x3628c5ed
- (id)copyWithZone:(NSZone *)zone;	// 0x3628d6a9
- (unsigned)count;	// 0x36224921
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x3622cdb9
- (void)dealloc;	// 0x3622dfb9
- (void)encodeWithCoder:(id)coder;	// 0x3628d755
- (void)getKeys:(id *)keys;	// 0x3628d18d
- (void)getObjects:(id *)objects;	// 0x3622d8d5
- (void)getObjects:(id *)objects andKeys:(id *)keys;	// 0x3628d209
- (BOOL)isEqualToDictionary:(id)dictionary;	// 0x3628d14d
- (id)keyEnumerator;	// 0x3628d421
- (const id *)knownKeyValuesPointer;	// 0x3628bffd
- (const id)mapping;	// 0x36227189
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x3628d699
- (id)objectEnumerator;	// 0x3628d0b5
- (id)objectForKey:(id)key;	// 0x3622ce91
- (oneway void)release;	// 0x3622df39
- (void)removeAllObjects;	// 0x3628ccad
- (void)removeObjectForKey:(id)key;	// 0x3628d369
- (id)retain;	// 0x3628da51
- (unsigned)retainCount;	// 0x3628bfe9
- (void)setObject:(id)object forKey:(id)key;	// 0x3622aea9
- (void)setValue:(id)value atIndex:(unsigned)index;	// 0x3628d5bd
- (void)setValues:(id *)values;	// 0x3628d4cd
- (id)valueAtIndex:(unsigned)index;	// 0x3628c00d
- (const id *)values;	// 0x36224911
@end
