/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSOrderedSet.h> // Unknown library
#import "CoreData-Structs.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface _PFFetchedResultOrderedSetWrapper : NSOrderedSet {
@private
	int _cd_rc;	// 4 = 0x4
	NSArray *_underlyingArray;	// 8 = 0x8
}
+ (BOOL)accessInstanceVariablesDirectly;	// 0x32d45afd
+ (id)alloc;	// 0x32d45d6d
+ (id)allocWithZone:(NSZone *)zone;	// 0x32d45d75
- (id)initWithArray:(id)array;	// 0x32d45b01
- (BOOL)_isDeallocating;	// 0x32d45d41
- (BOOL)_tryRetain;	// 0x32d45cf1
- (id)allObjects;	// 0x32d46501
- (id)array;	// 0x32d461e5
- (id)arrayFromObjectIDs;	// 0x32d465cd
- (Class)classForArchiver;	// 0x32d46329
- (Class)classForCoder;	// 0x32d4630d
- (BOOL)containsObject:(id)object;	// 0x32d464b5
- (id)copyWithZone:(NSZone *)zone;	// 0x32d45e41
- (unsigned)count;	// 0x32d45ec9
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x32d45f85
- (void)dealloc;	// 0x32d45d7d
- (id)description;	// 0x32d45dad
- (id)descriptionWithLocale:(id)locale;	// 0x32d45df5
- (void)enumerateObjectsAtIndexes:(id)indexes options:(unsigned)options usingBlock:(id)block;	// 0x32d4600d
- (void)enumerateObjectsWithOptions:(unsigned)options usingBlock:(id)block;	// 0x32d45fc9
- (void)getObjects:(id *)objects;	// 0x32d462b5
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x32d4626d
- (unsigned)indexOfManagedObjectForObjectID:(id)objectID;	// 0x32d4658d
- (unsigned)indexOfObject:(id)object;	// 0x32d45f45
- (unsigned)indexOfObjectAtIndexes:(id)indexes options:(unsigned)options passingTest:(id)test;	// 0x32d46095
- (unsigned)indexOfObjectWithOptions:(unsigned)options passingTest:(id)test;	// 0x32d46051
- (id)indexesOfObjectsAtIndexes:(id)indexes options:(unsigned)options passingTest:(id)test;	// 0x32d4611d
- (id)indexesOfObjectsWithOptions:(unsigned)options passingTest:(id)test;	// 0x32d460d9
- (BOOL)isEqual:(id)equal;	// 0x32d46471
- (BOOL)isEqualToOrderedSet:(id)orderedSet;	// 0x32d46345
- (id)managedObjectIDAtIndex:(unsigned)index;	// 0x32d4654d
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x32d45e71
- (id)newArrayFromObjectIDs;	// 0x32d46609
- (id)objectAtIndex:(unsigned)index;	// 0x32d45f05
- (id)objectEnumerator;	// 0x32d46231
- (oneway void)release;	// 0x32d45c65
- (id)retain;	// 0x32d45c2d
- (unsigned)retainCount;	// 0x32d45cdd
- (id)sortedArrayUsingComparator:(id)comparator;	// 0x32d46161
- (id)sortedArrayWithOptions:(unsigned)options usingComparator:(id)comparator;	// 0x32d461a1
- (void)willRead;	// 0x32d45e3d
@end

