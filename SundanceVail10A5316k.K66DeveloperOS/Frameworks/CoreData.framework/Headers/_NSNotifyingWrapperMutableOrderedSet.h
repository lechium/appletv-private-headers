/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSMutableOrderedSet.h> // Unknown library
#import "CoreData-Structs.h"

@class NSManagedObject, NSString;

__attribute__((visibility("hidden")))
@interface _NSNotifyingWrapperMutableOrderedSet : NSMutableOrderedSet {
@private
	NSManagedObject *_container;	// 4 = 0x4
	NSString *_key;	// 8 = 0x8
	NSMutableOrderedSet *_mutableOrderedSet;	// 12 = 0xc
}
- (id)initWithContainer:(id)container key:(id)key mutableOrderedSet:(id)set;	// 0x32e040ad
- (void)addObject:(id)object;	// 0x32e04b35
- (void)addObjects:(const id *)objects count:(unsigned)count;	// 0x32e04c4d
- (void)addObjectsFromArray:(id)array;	// 0x32e04e19
- (id)allObjects;	// 0x32e041d9
- (id)array;	// 0x32e04529
- (BOOL)containsObject:(id)object;	// 0x32e04415
- (id)copyWithZone:(NSZone *)zone;	// 0x32e04149
- (unsigned)count;	// 0x32e047cd
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x32e047ed
- (void)dealloc;	// 0x32e0401d
- (id)description;	// 0x32e0470d
- (id)descriptionWithLocale:(id)locale;	// 0x32e0472d
- (id)descriptionWithLocale:(id)locale indent:(unsigned)indent;	// 0x32e0474d
- (void)enumerateObjectsAtIndexes:(id)indexes options:(unsigned)options usingBlock:(id)block;	// 0x32e045a9
- (void)enumerateObjectsUsingBlock:(id)block;	// 0x32e04569
- (void)enumerateObjectsWithOptions:(unsigned)options usingBlock:(id)block;	// 0x32e04589
- (void)exchangeObjectAtIndex:(unsigned)index withObjectAtIndex:(unsigned)index2;	// 0x32e04ed5
- (id)firstObject;	// 0x32e043b1
- (void)getObjects:(id *)objects;	// 0x32e0434d
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x32e042d9
- (unsigned)indexOfObject:(id)object;	// 0x32e0432d
- (unsigned)indexOfObject:(id)object inSortedRange:(NSRange)sortedRange options:(unsigned)options usingComparator:(id)comparator;	// 0x32e04689
- (unsigned)indexOfObjectAtIndexes:(id)indexes options:(unsigned)options passingTest:(id)test;	// 0x32e04609
- (unsigned)indexOfObjectPassingTest:(id)objectPassingTest;	// 0x32e045c9
- (unsigned)indexOfObjectWithOptions:(unsigned)options passingTest:(id)test;	// 0x32e045e9
- (id)indexesOfObjectsAtIndexes:(id)indexes options:(unsigned)options passingTest:(id)test;	// 0x32e04669
- (id)indexesOfObjectsPassingTest:(id)objectsPassingTest;	// 0x32e04629
- (id)indexesOfObjectsWithOptions:(unsigned)options passingTest:(id)test;	// 0x32e04649
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x32e0480d
- (void)insertObjects:(id)objects atIndexes:(id)indexes;	// 0x32e05115
- (void)insertObjects:(id *)objects count:(unsigned)count atIndex:(unsigned)index;	// 0x32e0502d
- (void)intersectOrderedSet:(id)set;	// 0x32e05825
- (void)intersectSet:(id)set;	// 0x32e05c71
- (BOOL)intersectsOrderedSet:(id)set;	// 0x32e04439
- (BOOL)intersectsSet:(id)set;	// 0x32e0445d
- (BOOL)isEqualToOrderedSet:(id)orderedSet;	// 0x32e043f1
- (BOOL)isSubsetOfOrderedSet:(id)orderedSet;	// 0x32e044a5
- (BOOL)isSubsetOfSet:(id)set;	// 0x32e04481
- (id)lastObject;	// 0x32e043d1
- (void)minusOrderedSet:(id)set;	// 0x32e059f1
- (void)minusSet:(id)set;	// 0x32e05e3d
- (void)moveObjectsAtIndexes:(id)indexes toIndex:(unsigned)index;	// 0x32e04f81
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x32e04191
- (id)objectAtIndex:(unsigned)index;	// 0x32e0430d
- (id)objectEnumerator;	// 0x32e044c9
- (id)objectsAtIndexes:(id)indexes;	// 0x32e04391
- (void)removeAllObjects;	// 0x32e05545
- (void)removeObject:(id)object;	// 0x32e05635
- (void)removeObjectAtIndex:(unsigned)index;	// 0x32e0495d
- (void)removeObjectsAtIndexes:(id)indexes;	// 0x32e054a9
- (void)removeObjectsInArray:(id)array;	// 0x32e05661
- (void)removeObjectsInRange:(NSRange)range;	// 0x32e053c9
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x32e04a29
- (void)replaceObjectsAtIndexes:(id)indexes withObjects:(id)objects;	// 0x32e05399
- (void)replaceObjectsInRange:(NSRange)range withObjects:(const id *)objects count:(unsigned)count;	// 0x32e051e1
- (id)reverseObjectEnumerator;	// 0x32e044e9
- (id)reversedOrderedSet;	// 0x32e04509
- (id)set;	// 0x32e04549
- (void)setObject:(id)object atIndex:(unsigned)index;	// 0x32e051b1
- (void)setValue:(id)value forKey:(id)key;	// 0x32e0476d
- (void)sortRange:(NSRange)range options:(unsigned)options usingComparator:(id)comparator;	// 0x32e06111
- (void)sortUsingComparator:(id)comparator;	// 0x32e060c5
- (void)sortWithOptions:(unsigned)options usingComparator:(id)comparator;	// 0x32e060ed
- (id)sortedArrayUsingComparator:(id)comparator;	// 0x32e046cd
- (id)sortedArrayWithOptions:(unsigned)options usingComparator:(id)comparator;	// 0x32e046ed
- (void)unionOrderedSet:(id)set;	// 0x32e05bb5
- (void)unionSet:(id)set;	// 0x32e06009
- (id)valueForKey:(id)key;	// 0x32e0478d
- (id)valueForKeyPath:(id)keyPath;	// 0x32e047ad
@end

