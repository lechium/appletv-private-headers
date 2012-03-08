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
@property(readonly, retain) NSManagedObject *source;	// G=0x3478f9cd; converted property
+ (BOOL)accessInstanceVariablesDirectly;	// 0x3478f99d
+ (id)alloc;	// 0x3478fe6d
+ (id)allocWithZone:(NSZone *)zone;	// 0x3478fe65
- (id)initWithSource:(id)source destinations:(id)destinations forRelationship:(id)relationship inContext:(id)context;	// 0x34790ea5
- (id)initWithSource:(id)source forRelationship:(id)relationship asFault:(BOOL)fault;	// 0x34790f65
- (BOOL)_isDeallocating;	// 0x34790d69
- (BOOL)_isIdenticalFault:(id)fault;	// 0x34790411
- (BOOL)_shouldProcessKVOChange;	// 0x3478f9c9
- (BOOL)_tryRetain;	// 0x34790d91
- (void)addObject:(id)object;	// 0x347905c1
- (void)addObjectsFromArray:(id)array;	// 0x347900cd
- (id)allObjects;	// 0x3478fc69
- (id)anyObject;	// 0x3478fca1
- (Class)classForArchiver;	// 0x3478fe75
- (Class)classForCoder;	// 0x3478feb9
- (BOOL)containsObject:(id)object;	// 0x34790519
- (id)copyWithZone:(NSZone *)zone;	// 0x347907a1
- (unsigned)count;	// 0x347906f5
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x3478fb71
- (void)dealloc;	// 0x34790cdd
- (id)description;	// 0x3478f9dd
- (id)descriptionWithLocale:(id)locale;	// 0x3478faa5
- (void)enumerateObjectsWithOptions:(unsigned)options usingBlock:(id)block;	// 0x3478fbb1
- (void)getObjects:(id *)objects;	// 0x34790591
- (void)intersectSet:(id)set;	// 0x3479008d
- (BOOL)intersectsSet:(id)set;	// 0x3478fd29
- (BOOL)isEqual:(id)equal;	// 0x347904d5
- (BOOL)isEqualToSet:(id)set;	// 0x3478fd6d
- (BOOL)isFault;	// 0x3478f9b5
- (BOOL)isSubsetOfSet:(id)set;	// 0x347903cd
- (void)makeObjectsPerformSelector:(SEL)selector;	// 0x34790391
- (void)makeObjectsPerformSelector:(SEL)selector withObject:(id)object;	// 0x34790351
- (id)member:(id)member;	// 0x34790685
- (void)minusSet:(id)set;	// 0x34790039
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x34790721
- (id)objectEnumerator;	// 0x3478fc31
- (id)objectsWithOptions:(unsigned)options passingTest:(id)test;	// 0x3478fbf1
- (id)relationship;	// 0x34790981
- (oneway void)release;	// 0x34790ded
- (void)removeAllObjects;	// 0x3479000d
- (void)removeObject:(id)object;	// 0x34790289
- (id)replacementObjectForCoder:(id)coder;	// 0x3478fe91
- (id)retain;	// 0x34790e6d
- (unsigned)retainCount;	// 0x3478f9a1
- (void)setSet:(id)set;	// 0x3478ff8d
- (void)setValue:(id)value forKey:(id)key;	// 0x3478ff4d
// converted property getter: - (id)source;	// 0x3478f9cd
- (void)turnIntoFault;	// 0x347909c1
- (void)unionSet:(id)set;	// 0x3478ffcd
- (id)valueForKey:(id)key;	// 0x3478ff11
- (id)valueForKeyPath:(id)keyPath;	// 0x3478fed5
- (void)willRead;	// 0x34790a49
@end

