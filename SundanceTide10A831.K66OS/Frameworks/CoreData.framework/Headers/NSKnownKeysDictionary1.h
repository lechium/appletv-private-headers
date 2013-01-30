/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import "NSKnownKeysDictionary.h"

@class NSKnownKeysMappingStrategy;

@interface NSKnownKeysDictionary1 : NSKnownKeysDictionary {
	int _cd_rc;	// 4 = 0x4
	int _count;	// 8 = 0x8
	NSKnownKeysMappingStrategy *_keySearch;	// 12 = 0xc
	id _values[0];	// 16 = 0x10
}
+ (id)init;	// 0x33d67f61
+ (id)initForKeys:(id)keys;	// 0x33d1477d
+ (id)initWithCapacity:(unsigned)capacity;	// 0x33d67fbd
+ (id)initWithCoder:(id)coder;	// 0x33d68021
+ (id)initWithDictionary:(id)dictionary;	// 0x33d68469
+ (id)initWithDictionary:(id)dictionary copyItems:(BOOL)items;	// 0x33d681c9
+ (id)initWithObjects:(id *)objects forKeys:(id *)keys count:(unsigned)count;	// 0x33d175e5
+ (id)initWithSearchStrategy:(id)searchStrategy;	// 0x33d1532d
+ (BOOL)accessInstanceVariablesDirectly;	// 0x33d6847d
+ (id)alloc;	// 0x33d68019
+ (id)allocWithZone:(NSZone *)zone;	// 0x33d6801d
- (unsigned)_countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count forKeys:(BOOL)keys;	// 0x33d68995
- (BOOL)_isDeallocating;	// 0x33d68521
- (void)_recount;	// 0x33d0f361
- (void)_setValues:(id *)values retain:(BOOL)retain;	// 0x33d0f3d9
- (BOOL)_tryRetain;	// 0x33d684d1
- (unsigned)_valueCountByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x33d68a71
- (void)addEntriesFromDictionary:(id)dictionary;	// 0x33d68dbd
- (id)allKeys;	// 0x33d68b25
- (id)allValues;	// 0x33d15ca1
- (Class)classForArchiver;	// 0x33d68569
- (Class)classForCoder;	// 0x33d6854d
- (id)copyWithZone:(NSZone *)zone;	// 0x33d68741
- (unsigned)count;	// 0x33d0f32d
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x33d68a4d
- (void)dealloc;	// 0x33d17db9
- (void)encodeWithCoder:(id)coder;	// 0x33d68585
- (void)getKeys:(id *)keys;	// 0x33d68c85
- (void)getObjects:(id *)objects;	// 0x33d1768d
- (void)getObjects:(id *)objects andKeys:(id *)keys;	// 0x33d68bcd
- (BOOL)isEqualToDictionary:(id)dictionary;	// 0x33d68cf9
- (id)keyEnumerator;	// 0x33d688f1
- (const id *)knownKeyValuesPointer;	// 0x33d68805
- (id)mapping;	// 0x33d0f3b9
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x33d687f5
- (id)objectEnumerator;	// 0x33d68d35
- (id)objectForKey:(id)key;	// 0x33d182ed
- (oneway void)release;	// 0x33d17d45
- (void)removeAllObjects;	// 0x33d6904d
- (void)removeObjectForKey:(id)key;	// 0x33d68a95
- (id)retain;	// 0x33d68481
- (unsigned)retainCount;	// 0x33d684bd
- (void)setObject:(id)object forKey:(id)key;	// 0x33d15829
- (void)setValue:(id)value atIndex:(unsigned)index;	// 0x33d68829
- (void)setValues:(id *)values;	// 0x33d0f911
- (id)valueAtIndex:(unsigned)index;	// 0x33d68815
- (const id *)values;	// 0x33d0f901
@end
