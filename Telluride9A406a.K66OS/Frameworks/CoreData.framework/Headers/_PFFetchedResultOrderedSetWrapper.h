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
+ (BOOL)accessInstanceVariablesDirectly;	// 0x3479ca91
+ (id)alloc;	// 0x3479f051
+ (id)allocWithZone:(NSZone *)zone;	// 0x3479f049
- (id)initWithArray:(id)array;	// 0x3479ef25
- (BOOL)_isDeallocating;	// 0x3479f185
- (BOOL)_tryRetain;	// 0x3479f1ad
- (id)allObjects;	// 0x3479de3d
- (id)array;	// 0x3479dc61
- (id)arrayFromObjectIDs;	// 0x3479defd
- (Class)classForArchiver;	// 0x3479dd95
- (Class)classForCoder;	// 0x3479dd79
- (BOOL)containsObject:(id)object;	// 0x3479ddf5
- (id)copyWithZone:(NSZone *)zone;	// 0x3479d8f5
- (unsigned)count;	// 0x3479d975
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x3479da25
- (void)dealloc;	// 0x3479f155
- (id)description;	// 0x3479d865
- (id)descriptionWithLocale:(id)locale;	// 0x3479d8ad
- (void)enumerateObjectsAtIndexes:(id)indexes options:(unsigned)options usingBlock:(id)block;	// 0x3479daa5
- (void)enumerateObjectsWithOptions:(unsigned)options usingBlock:(id)block;	// 0x3479da65
- (void)getObjects:(id *)objects;	// 0x3479dd21
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x3479dce1
- (unsigned)indexOfManagedObjectForObjectID:(id)objectID;	// 0x3479dec1
- (unsigned)indexOfObject:(id)object;	// 0x3479d9e9
- (unsigned)indexOfObjectAtIndexes:(id)indexes options:(unsigned)options passingTest:(id)test;	// 0x3479db25
- (unsigned)indexOfObjectWithOptions:(unsigned)options passingTest:(id)test;	// 0x3479dae5
- (id)indexesOfObjectsAtIndexes:(id)indexes options:(unsigned)options passingTest:(id)test;	// 0x3479dba5
- (id)indexesOfObjectsWithOptions:(unsigned)options passingTest:(id)test;	// 0x3479db65
- (BOOL)isEqual:(id)equal;	// 0x3479ddb1
- (BOOL)isEqualToOrderedSet:(id)orderedSet;	// 0x3479f059
- (id)managedObjectIDAtIndex:(unsigned)index;	// 0x3479de85
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x3479d921
- (id)newArrayFromObjectIDs;	// 0x3479df35
- (id)objectAtIndex:(unsigned)index;	// 0x3479d9ad
- (id)objectEnumerator;	// 0x3479dca9
- (oneway void)release;	// 0x3479f209
- (id)retain;	// 0x3479f289
- (unsigned)retainCount;	// 0x3479ca95
- (id)sortedArrayUsingComparator:(id)comparator;	// 0x3479dbe5
- (id)sortedArrayWithOptions:(unsigned)options usingComparator:(id)comparator;	// 0x3479dc21
- (void)willRead;	// 0x3479caa9
@end

