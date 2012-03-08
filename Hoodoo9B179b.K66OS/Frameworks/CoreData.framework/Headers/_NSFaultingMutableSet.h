/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <NSMutableSet.h> // Unknown library

@class NSManagedObject;

__attribute__((visibility("hidden")))
@interface _NSFaultingMutableSet : NSMutableSet {
@private
	int _cd_rc;	// 4 = 0x4
	NSFaultingMutableSetFlags _flags;	// 8 = 0x8
	id _realSet;	// 12 = 0xc
	NSManagedObject *_source;	// 16 = 0x10
}
@property(readonly, retain) NSManagedObject *source;	// G=0x32b0bbcd; converted property
+ (BOOL)accessInstanceVariablesDirectly;	// 0x32b0bb9d
+ (id)alloc;	// 0x32b0c06d
+ (id)allocWithZone:(NSZone *)zone;	// 0x32b0c065
- (id)initWithSource:(id)source destinations:(id)destinations forRelationship:(id)relationship inContext:(id)context;	// 0x32b0d0a5
- (id)initWithSource:(id)source forRelationship:(id)relationship asFault:(BOOL)fault;	// 0x32b0d165
- (BOOL)_isDeallocating;	// 0x32b0cf69
- (BOOL)_isIdenticalFault:(id)fault;	// 0x32b0c611
- (BOOL)_shouldProcessKVOChange;	// 0x32b0bbc9
- (BOOL)_tryRetain;	// 0x32b0cf91
- (void)addObject:(id)object;	// 0x32b0c7c1
- (void)addObjectsFromArray:(id)array;	// 0x32b0c2cd
- (id)allObjects;	// 0x32b0be69
- (id)anyObject;	// 0x32b0bea1
- (Class)classForArchiver;	// 0x32b0c075
- (Class)classForCoder;	// 0x32b0c0b9
- (BOOL)containsObject:(id)object;	// 0x32b0c719
- (id)copyWithZone:(NSZone *)zone;	// 0x32b0c9a1
- (unsigned)count;	// 0x32b0c8f5
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x32b0bd71
- (void)dealloc;	// 0x32b0cedd
- (id)description;	// 0x32b0bbdd
- (id)descriptionWithLocale:(id)locale;	// 0x32b0bca5
- (void)enumerateObjectsWithOptions:(unsigned)options usingBlock:(id)block;	// 0x32b0bdb1
- (void)getObjects:(id *)objects;	// 0x32b0c791
- (void)intersectSet:(id)set;	// 0x32b0c28d
- (BOOL)intersectsSet:(id)set;	// 0x32b0bf29
- (BOOL)isEqual:(id)equal;	// 0x32b0c6d5
- (BOOL)isEqualToSet:(id)set;	// 0x32b0bf6d
- (BOOL)isFault;	// 0x32b0bbb5
- (BOOL)isSubsetOfSet:(id)set;	// 0x32b0c5cd
- (void)makeObjectsPerformSelector:(SEL)selector;	// 0x32b0c591
- (void)makeObjectsPerformSelector:(SEL)selector withObject:(id)object;	// 0x32b0c551
- (id)member:(id)member;	// 0x32b0c885
- (void)minusSet:(id)set;	// 0x32b0c239
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x32b0c921
- (id)objectEnumerator;	// 0x32b0be31
- (id)objectsWithOptions:(unsigned)options passingTest:(id)test;	// 0x32b0bdf1
- (id)relationship;	// 0x32b0cb81
- (oneway void)release;	// 0x32b0cfed
- (void)removeAllObjects;	// 0x32b0c20d
- (void)removeObject:(id)object;	// 0x32b0c489
- (id)replacementObjectForCoder:(id)coder;	// 0x32b0c091
- (id)retain;	// 0x32b0d06d
- (unsigned)retainCount;	// 0x32b0bba1
- (void)setSet:(id)set;	// 0x32b0c18d
- (void)setValue:(id)value forKey:(id)key;	// 0x32b0c14d
// converted property getter: - (id)source;	// 0x32b0bbcd
- (void)turnIntoFault;	// 0x32b0cbc1
- (void)unionSet:(id)set;	// 0x32b0c1cd
- (id)valueForKey:(id)key;	// 0x32b0c111
- (id)valueForKeyPath:(id)keyPath;	// 0x32b0c0d5
- (void)willRead;	// 0x32b0cc49
@end

