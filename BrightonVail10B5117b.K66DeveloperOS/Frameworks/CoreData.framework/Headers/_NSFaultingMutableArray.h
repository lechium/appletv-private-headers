/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSMutableArray.h> // Unknown library
#import "CoreData-Structs.h"

@class NSPropertyDescription, NSManagedObject;

@interface _NSFaultingMutableArray : NSMutableArray {
	int _cd_rc;	// 4 = 0x4
	NSMutableArray *_realArray;	// 8 = 0x8
	NSManagedObject *_source;	// 12 = 0xc
	NSPropertyDescription *_relationship;	// 16 = 0x10
	NSFaultingMutableArrayFlags _flags;	// 20 = 0x14
}
@property(readonly, retain) NSPropertyDescription *relationship;	// G=0x30f0814d; converted property
@property(readonly, retain) NSManagedObject *source;	// G=0x30f0813d; converted property
+ (BOOL)accessInstanceVariablesDirectly;	// 0x30f07da9
+ (id)alloc;	// 0x30f07dad
+ (id)allocWithZone:(NSZone *)zone;	// 0x30f07db5
- (id)initWithSource:(id)source forRelationship:(id)relationship asFault:(BOOL)fault;	// 0x30f07efd
- (BOOL)_isDeallocating;	// 0x30f07ed1
- (BOOL)_tryRetain;	// 0x30f07e81
- (void)addObject:(id)object;	// 0x30f084c5
- (id)copyWithZone:(NSZone *)zone;	// 0x30f0815d
- (unsigned)count;	// 0x30f08449
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x30f08505
- (void)dealloc;	// 0x30f07fcd
- (id)description;	// 0x30f08209
- (id)descriptionWithLocale:(id)locale;	// 0x30f082c9
- (id)descriptionWithLocale:(id)locale indent:(unsigned)indent;	// 0x30f08389
- (void)enumerateObjectsAtIndexes:(id)indexes options:(unsigned)options usingBlock:(id)block;	// 0x30f0858d
- (void)enumerateObjectsWithOptions:(unsigned)options usingBlock:(id)block;	// 0x30f08549
- (void)getObjects:(id *)objects;	// 0x30f08821
- (unsigned)indexOfObjectAtIndexes:(id)indexes options:(unsigned)options passingTest:(id)test;	// 0x30f08615
- (unsigned)indexOfObjectWithOptions:(unsigned)options passingTest:(id)test;	// 0x30f085d1
- (id)indexesOfObjectsAtIndexes:(id)indexes options:(unsigned)options passingTest:(id)test;	// 0x30f0869d
- (id)indexesOfObjectsWithOptions:(unsigned)options passingTest:(id)test;	// 0x30f08659
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x30f0871d
- (BOOL)isFault;	// 0x30f0801d
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x30f081f9
- (id)objectAtIndex:(unsigned)index;	// 0x30f08485
- (id)objectEnumerator;	// 0x30f086e1
// converted property getter: - (id)relationship;	// 0x30f0814d
- (oneway void)release;	// 0x30f07df5
- (void)removeLastObject;	// 0x30f08761
- (void)removeObjectAtIndex:(unsigned)index;	// 0x30f0879d
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x30f087dd
- (id)retain;	// 0x30f07dbd
- (unsigned)retainCount;	// 0x30f07e6d
- (void)setValue:(id)value forKey:(id)key;	// 0x30f08861
// converted property getter: - (id)source;	// 0x30f0813d
- (void)turnIntoFault;	// 0x30f080fd
- (id)valueForKey:(id)key;	// 0x30f088a5
- (id)valueForKeyPath:(id)keyPath;	// 0x30f088e5
- (void)willRead;	// 0x30f08031
@end

