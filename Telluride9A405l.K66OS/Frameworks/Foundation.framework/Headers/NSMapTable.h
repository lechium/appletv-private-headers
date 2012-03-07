/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"
#import "NSFastEnumeration.h"


@interface NSMapTable : NSObject <NSCopying, NSCoding, NSFastEnumeration> {
}
+ (id)alloc;	// 0x30257329
+ (id)allocWithZone:(NSZone *)zone;	// 0x302d990d
+ (id)mapTableWithKeyOptions:(unsigned)keyOptions valueOptions:(unsigned)options;	// 0x302d9939
+ (id)mapTableWithStrongToStrongObjects;	// 0x3029c091
+ (id)mapTableWithStrongToWeakObjects;	// 0x302d998d
+ (id)mapTableWithWeakToStrongObjects;	// 0x302767d9
+ (id)mapTableWithWeakToWeakObjects;	// 0x302d99dd
- (id)init;	// 0x302d9b25
- (id)initWithCoder:(id)coder;	// 0x302d9a2d
- (id)initWithKeyOptions:(unsigned)keyOptions valueOptions:(unsigned)options capacity:(unsigned)capacity;	// 0x302d9a89
- (id)initWithKeyPointerFunctions:(id)keyPointerFunctions valuePointerFunctions:(id)functions capacity:(unsigned)capacity;	// 0x302d9b1d
- (id)allKeys;	// 0x302d9bb5
- (id)allValues;	// 0x302d9bbd
- (id)copy;	// 0x302d9b55
- (id)copyWithZone:(NSZone *)zone;	// 0x302d9d85
- (unsigned)count;	// 0x302d9b3d
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x302d9b5d
- (id)description;	// 0x302d9b2d
- (id)dictionaryRepresentation;	// 0x302d9cb5
- (void)encodeWithCoder:(id)coder;	// 0x302d9b35
- (id)enumerator;	// 0x302d9bcd
- (void *)existingItemForSetItem:(const void *)setItem forAbsentKey:(const void *)absentKey;	// 0x302d9ba5
- (unsigned)getKeys:(const void **)keys values:(const void **)values;	// 0x302d9bdd
- (id)keyEnumerator;	// 0x302d9b45
- (id)keyPointerFunctions;	// 0x302d9b65
- (BOOL)mapMember:(const void *)member originalKey:(const void **)key value:(const void **)value;	// 0x302d9bd5
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x302d9d95
- (id)mutableDictionary;	// 0x302d9be5
- (id)objectEnumerator;	// 0x302d9b4d
- (id)objectForKey:(id)key;	// 0x302d9b75
- (void)removeAllItems;	// 0x302d9bc5
- (void)removeAllObjects;	// 0x302690b5
- (void)removeObjectForKey:(id)key;	// 0x302d9b85
- (void)replaceItem:(const void *)item forExistingKey:(const void *)existingKey;	// 0x302d9bad
- (void)setItem:(const void *)item forAbsentKey:(const void *)absentKey;	// 0x302d9b95
- (void)setItem:(const void *)item forKey:(const void *)key;	// 0x302d9b8d
- (void)setItem:(const void *)item forKnownAbsentKey:(const void *)knownAbsentKey;	// 0x302d9b9d
- (void)setObject:(id)object forKey:(id)key;	// 0x302d9b7d
- (id)valuePointerFunctions;	// 0x302d9b6d
@end
