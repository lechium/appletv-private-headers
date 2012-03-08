/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <NSOrderedSet.h> // Unknown library

@class NSArray;

__attribute__((visibility("hidden")))
@interface _PFFetchedResultOrderedSetWrapper : NSOrderedSet {
@private
	int _cd_rc;	// 4 = 0x4
	NSArray *_underlyingArray;	// 8 = 0x8
}
+ (BOOL)accessInstanceVariablesDirectly;	// 0x32b18ca1
+ (id)alloc;	// 0x32b1b261
+ (id)allocWithZone:(NSZone *)zone;	// 0x32b1b259
- (id)initWithArray:(id)array;	// 0x32b1b135
- (BOOL)_isDeallocating;	// 0x32b1b395
- (BOOL)_tryRetain;	// 0x32b1b3bd
- (id)allObjects;	// 0x32b1a04d
- (id)array;	// 0x32b19e71
- (id)arrayFromObjectIDs;	// 0x32b1a10d
- (Class)classForArchiver;	// 0x32b19fa5
- (Class)classForCoder;	// 0x32b19f89
- (BOOL)containsObject:(id)object;	// 0x32b1a005
- (id)copyWithZone:(NSZone *)zone;	// 0x32b19b05
- (unsigned)count;	// 0x32b19b85
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x32b19c35
- (void)dealloc;	// 0x32b1b365
- (id)description;	// 0x32b19a75
- (id)descriptionWithLocale:(id)locale;	// 0x32b19abd
- (void)enumerateObjectsAtIndexes:(id)indexes options:(unsigned)options usingBlock:(id)block;	// 0x32b19cb5
- (void)enumerateObjectsWithOptions:(unsigned)options usingBlock:(id)block;	// 0x32b19c75
- (void)getObjects:(id *)objects;	// 0x32b19f31
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x32b19ef1
- (unsigned)indexOfManagedObjectForObjectID:(id)objectID;	// 0x32b1a0d1
- (unsigned)indexOfObject:(id)object;	// 0x32b19bf9
- (unsigned)indexOfObjectAtIndexes:(id)indexes options:(unsigned)options passingTest:(id)test;	// 0x32b19d35
- (unsigned)indexOfObjectWithOptions:(unsigned)options passingTest:(id)test;	// 0x32b19cf5
- (id)indexesOfObjectsAtIndexes:(id)indexes options:(unsigned)options passingTest:(id)test;	// 0x32b19db5
- (id)indexesOfObjectsWithOptions:(unsigned)options passingTest:(id)test;	// 0x32b19d75
- (BOOL)isEqual:(id)equal;	// 0x32b19fc1
- (BOOL)isEqualToOrderedSet:(id)orderedSet;	// 0x32b1b269
- (id)managedObjectIDAtIndex:(unsigned)index;	// 0x32b1a095
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x32b19b31
- (id)newArrayFromObjectIDs;	// 0x32b1a145
- (id)objectAtIndex:(unsigned)index;	// 0x32b19bbd
- (id)objectEnumerator;	// 0x32b19eb9
- (oneway void)release;	// 0x32b1b419
- (id)retain;	// 0x32b1b499
- (unsigned)retainCount;	// 0x32b18ca5
- (id)sortedArrayUsingComparator:(id)comparator;	// 0x32b19df5
- (id)sortedArrayWithOptions:(unsigned)options usingComparator:(id)comparator;	// 0x32b19e31
- (void)willRead;	// 0x32b18cb9
@end

