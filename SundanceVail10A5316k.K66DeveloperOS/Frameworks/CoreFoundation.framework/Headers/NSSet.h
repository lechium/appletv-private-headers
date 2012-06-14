/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <NSObject.h> // Unknown library
#import "CoreFoundation-Structs.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"
#import "NSSecureCoding.h"
#import "NSFastEnumeration.h"


@interface NSSet : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, NSFastEnumeration> {
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x3707f1ed
+ (id)set;	// 0x37081fa9
+ (id)setWithArray:(id)array;	// 0x370ac4fd
+ (id)setWithArray:(id)array copyItems:(BOOL)items;	// 0x3713a799
+ (id)setWithArray:(id)array range:(NSRange)range;	// 0x3713a74d
+ (id)setWithArray:(id)array range:(NSRange)range copyItems:(BOOL)items;	// 0x370b84c5
+ (id)setWithObject:(id)object;	// 0x370b9601
+ (id)setWithObjects:(id)objects;	// 0x370ae981
+ (id)setWithObjects:(const id *)objects count:(unsigned)count;	// 0x370c153d
+ (id)setWithOrderedSet:(id)orderedSet;	// 0x3713ace1
+ (id)setWithOrderedSet:(id)orderedSet copyItems:(BOOL)items;	// 0x3713ac79
+ (id)setWithOrderedSet:(id)orderedSet range:(NSRange)range;	// 0x3713ac2d
+ (id)setWithOrderedSet:(id)orderedSet range:(NSRange)range copyItems:(BOOL)items;	// 0x3713abe1
+ (id)setWithSet:(id)set;	// 0x370c438d
+ (id)setWithSet:(id)set copyItems:(BOOL)items;	// 0x3713ad41
+ (BOOL)supportsSecureCoding;	// 0x3713ae01
- (id)initWithArray:(id)array;	// 0x370aaa89
- (id)initWithArray:(id)array copyItems:(BOOL)items;	// 0x3713a705
- (id)initWithArray:(id)array range:(NSRange)range;	// 0x3713a6e1
- (id)initWithArray:(id)array range:(NSRange)range copyItems:(BOOL)items;	// 0x370aaac5
- (id)initWithCoder:(id)coder;	// 0x3713ae05
- (id)initWithObject:(id)object;	// 0x3713a6c1
- (id)initWithObjects:(id)objects;	// 0x370b7315
- (id)initWithObjects:(const id *)objects count:(unsigned)count;	// 0x3713a69d
- (id)initWithOrderedSet:(id)orderedSet;	// 0x3713aba5
- (id)initWithOrderedSet:(id)orderedSet copyItems:(BOOL)items;	// 0x3713ab5d
- (id)initWithOrderedSet:(id)orderedSet range:(NSRange)range;	// 0x3713ab39
- (id)initWithOrderedSet:(id)orderedSet range:(NSRange)range copyItems:(BOOL)items;	// 0x3713a801
- (id)initWithSet:(id)set;	// 0x370ba4c9
- (id)initWithSet:(id)set copyItems:(BOOL)items;	// 0x370ba4dd
- (void)__applyValues:(/*function-pointer*/ void *)values context:(void *)context;	// 0x3713a181
- (BOOL)__getValue:(id *)value forObj:(id)obj;	// 0x3713a299
- (unsigned long)_cfTypeID;	// 0x3713942d
- (id)allObjects;	// 0x370835e9
- (id)anyObject;	// 0x370821c5
- (BOOL)containsObject:(id)object;	// 0x37092ad9
- (id)copyWithZone:(NSZone *)zone;	// 0x3713ad81
- (unsigned)count;	// 0x371393c1
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x370d3735
- (unsigned)countForObject:(id)object;	// 0x370aadfd
- (id)description;	// 0x3713a689
- (id)descriptionWithLocale:(id)locale;	// 0x3713a675
- (id)descriptionWithLocale:(id)locale indent:(unsigned)indent;	// 0x3713a321
- (void)encodeWithCoder:(id)coder;	// 0x3713ae09
- (void)enumerateObjectsUsingBlock:(id)block;	// 0x370bb8b1
- (void)enumerateObjectsWithOptions:(unsigned)options usingBlock:(id)block;	// 0x370bb93d
- (void)getObjects:(id *)objects;	// 0x3713971d
- (void)getObjects:(id *)objects count:(unsigned)count;	// 0x3707f7a9
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x3713a2c1
- (unsigned)hash;	// 0x371397e9
- (BOOL)intersectsOrderedSet:(id)set;	// 0x371397f9
- (BOOL)intersectsSet:(id)set;	// 0x370cb3ed
- (BOOL)isEqual:(id)equal;	// 0x370b9da1
- (BOOL)isEqualToSet:(id)set;	// 0x370aebc5
- (BOOL)isNSSet__;	// 0x3707f7a1
- (BOOL)isSubsetOfOrderedSet:(id)orderedSet;	// 0x37139995
- (BOOL)isSubsetOfSet:(id)set;	// 0x370c46a1
- (void)makeObjectsPerformSelector:(SEL)selector;	// 0x370c7eb5
- (void)makeObjectsPerformSelector:(SEL)selector withObject:(id)object;	// 0x370bb9d1
- (id)member:(id)member;	// 0x371393e5
- (id)members:(id)members notFoundMarker:(id)marker;	// 0x37139b11
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x3713adc5
- (id)objectEnumerator;	// 0x37139409
- (id)objectsPassingTest:(id)test;	// 0x370c678d
- (id)objectsWithOptions:(unsigned)options passingTest:(id)test;	// 0x370c6819
- (id)setByAddingObject:(id)object;	// 0x370cf4a1
- (id)setByAddingObjectsFromArray:(id)array;	// 0x3713ae0d
- (id)setByAddingObjectsFromSet:(id)set;	// 0x370c3871
- (id)sortedArrayUsingComparator:(id)comparator;	// 0x3713a0f5
- (id)sortedArrayWithOptions:(unsigned)options usingComparator:(id)comparator;	// 0x37139e25
@end

