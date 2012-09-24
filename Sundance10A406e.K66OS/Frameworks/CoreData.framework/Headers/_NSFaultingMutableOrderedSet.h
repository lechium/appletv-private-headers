/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSMutableOrderedSet.h> // Unknown library
#import "CoreData-Structs.h"

@class NSManagedObject;

@interface _NSFaultingMutableOrderedSet : NSMutableOrderedSet {
	int _cd_rc;	// 4 = 0x4
	NSFaultingMutableOrderedSetFlags _flags;	// 8 = 0x8
	id _realSet;	// 12 = 0xc
	NSManagedObject *_source;	// 16 = 0x10
	unsigned *_orderKeys;	// 20 = 0x14
	id _grottyHack;	// 24 = 0x18
}
@property(readonly, retain) NSManagedObject *source;	// G=0x33db80ad; converted property
+ (BOOL)accessInstanceVariablesDirectly;	// 0x33db6961
+ (id)alloc;	// 0x33db6ce5
+ (id)allocWithZone:(NSZone *)zone;	// 0x33db6ced
- (id)initWithOrderedSet:(id)orderedSet;	// 0x33db6965
- (id)initWithSource:(id)source destinations:(id)destinations forRelationship:(id)relationship inContext:(id)context;	// 0x33db6b69
- (id)initWithSource:(id)source forRelationship:(id)relationship asFault:(BOOL)fault;	// 0x33db6a05
- (void)_assignOrderKeysUsingCount:(unsigned)count;	// 0x33db72f1
- (BOOL)_hasOrderKeys;	// 0x33db7ff5
- (BOOL)_isDeallocating;	// 0x33db6cb9
- (BOOL)_isIdenticalFault:(id)fault;	// 0x33db8d25
- (id)_newOrderKeys;	// 0x33db7e51
- (unsigned)_orderKeyForObject:(id)object;	// 0x33db7d39
- (void)_populateOrderKeysUsingSnapshot:(id)snapshot orderKeys:(id)keys newIndexes:(unsigned **)indexes reorderedIndexes:(char **)indexes4;	// 0x33db7681
- (void)_setProcessingIdempotentKVO:(BOOL)kvo;	// 0x33db72cd
- (BOOL)_shouldProcessKVOChange;	// 0x33db72b5
- (BOOL)_tryRetain;	// 0x33db6c69
- (void)_updateOrderKeysFromOrderOfObjectIDs:(id)objectIDs;	// 0x33db7335
- (void)addObject:(id)object;	// 0x33db8e25
- (void)addObjects:(const id *)objects count:(unsigned)count;	// 0x33db8f15
- (void)addObjectsFromArray:(id)array;	// 0x33db9089
- (id)allObjects;	// 0x33dba255
- (Class)classForArchiver;	// 0x33db8a7d
- (Class)classForCoder;	// 0x33db8a39
- (BOOL)containsObject:(id)object;	// 0x33db8de9
- (id)copyWithZone:(NSZone *)zone;	// 0x33db80fd
- (unsigned)count;	// 0x33db8335
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x33db84d1
- (void)dealloc;	// 0x33db6cf5
- (id)description;	// 0x33db6ddd
- (id)descriptionWithLocale:(id)locale;	// 0x33db6ea5
- (void)enumerateObjectsAtIndexes:(id)indexes options:(unsigned)options usingBlock:(id)block;	// 0x33db8559
- (void)enumerateObjectsWithOptions:(unsigned)options usingBlock:(id)block;	// 0x33db8515
- (void)getObjects:(id *)objects;	// 0x33db8731
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x33db86e9
- (unsigned)indexOfObject:(id)object;	// 0x33db83b1
- (unsigned)indexOfObjectAtIndexes:(id)indexes options:(unsigned)options passingTest:(id)test;	// 0x33db85e1
- (unsigned)indexOfObjectWithOptions:(unsigned)options passingTest:(id)test;	// 0x33db859d
- (id)indexesOfObjectsAtIndexes:(id)indexes options:(unsigned)options passingTest:(id)test;	// 0x33db8669
- (id)indexesOfObjectsWithOptions:(unsigned)options passingTest:(id)test;	// 0x33db8625
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x33db83f1
- (void)insertObjects:(id)objects atIndexes:(id)indexes;	// 0x33db934d
- (void)insertObjects:(const id *)objects count:(unsigned)count atIndex:(unsigned)index;	// 0x33db91b9
- (BOOL)isEqual:(id)equal;	// 0x33db8ce1
- (BOOL)isEqualToOrderedSet:(id)orderedSet;	// 0x33db8a99
- (BOOL)isFault;	// 0x33db6dc9
- (void)minusOrderedSet:(id)set;	// 0x33db983d
- (void)minusSet:(id)set;	// 0x33db9a9d
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x33db82dd
- (id)objectAtIndex:(unsigned)index;	// 0x33db8371
- (id)objectEnumerator;	// 0x33db86ad
- (id)relationship;	// 0x33db80bd
- (oneway void)release;	// 0x33db6bdd
- (void)removeAllObjects;	// 0x33db9675
- (void)removeObjectAtIndex:(unsigned)index;	// 0x33db8789
- (void)removeObjectsInArray:(id)array;	// 0x33db970d
- (void)removeObjectsInRange:(NSRange)range;	// 0x33db943d
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x33db8839
- (id)replacementObjectForCoder:(id)coder;	// 0x33db8a55
- (id)retain;	// 0x33db6ba5
- (unsigned)retainCount;	// 0x33db6c55
- (void)setValue:(id)value forKey:(id)key;	// 0x33db891d
- (void)sortRange:(NSRange)range options:(unsigned)options usingComparator:(id)comparator;	// 0x33db9d49
- (void)sortUsingComparator:(id)comparator;	// 0x33db9cfd
- (void)sortWithOptions:(unsigned)options usingComparator:(id)comparator;	// 0x33db9d25
// converted property getter: - (id)source;	// 0x33db80ad
- (void)turnIntoFault;	// 0x33db800d
- (void)unionOrderedSet:(id)set;	// 0x33db996d
- (void)unionSet:(id)set;	// 0x33db9bcd
- (id)valueForKey:(id)key;	// 0x33db89b9
- (id)valueForKeyPath:(id)keyPath;	// 0x33db89f9
- (void)willChange;	// 0x33db7245
- (void)willRead;	// 0x33db6f71
@end
