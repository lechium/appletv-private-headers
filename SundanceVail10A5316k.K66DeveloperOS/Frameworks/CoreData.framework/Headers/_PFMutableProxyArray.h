/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <NSMutableArray.h> // Unknown library

@class _PFArray;

__attribute__((visibility("hidden")))
@interface _PFMutableProxyArray : NSMutableArray {
@private
	int _cd_rc;	// 4 = 0x4
	unsigned _editCount;	// 8 = 0x8
	unsigned _offset;	// 12 = 0xc
	unsigned _limit;	// 16 = 0x10
	_PFArray *_originalArray;	// 20 = 0x14
	NSMutableArray *_updatedObjectsArray;	// 24 = 0x18
	CFArrayRef _indicesVeneer;	// 28 = 0x1c
}
- (id)initWithPFArray:(id)pfarray;	// 0x32d44c79
- (id)initWithPFArray:(id)pfarray inRange:(NSRange)range;	// 0x32d44b81
- (BOOL)_isDeallocating;	// 0x32d44fa5
- (void)_rehash;	// 0x32d44fe5
- (BOOL)_tryRetain;	// 0x32d44f55
- (void)addObject:(id)object;	// 0x32d45599
- (id)arrayFromObjectIDs;	// 0x32d45485
- (unsigned)count;	// 0x32d44fd1
- (void)dealloc;	// 0x32d44dd5
- (void)finalize;	// 0x32d44e4d
- (unsigned)indexOfManagedObjectForObjectID:(id)objectID;	// 0x32d453fd
- (unsigned)indexOfObject:(id)object;	// 0x32d452c9
- (unsigned)indexOfObject:(id)object inRange:(NSRange)range;	// 0x32d45301
- (unsigned)indexOfObjectIdenticalTo:(id)to;	// 0x32d45339
- (unsigned)indexOfObjectIdenticalTo:(id)to inRange:(NSRange)range;	// 0x32d45371
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x32d456a1
- (id)managedObjectIDAtIndex:(unsigned)index;	// 0x32d4523d
- (id)newArrayFromObjectIDs;	// 0x32d454ad
- (id)objectAtIndex:(unsigned)index;	// 0x32d451c9
- (oneway void)release;	// 0x32d44ec9
- (void)removeLastObject;	// 0x32d455f9
- (void)removeObjectAtIndex:(unsigned)index;	// 0x32d45705
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x32d45799
- (id)retain;	// 0x32d44e91
- (unsigned)retainCount;	// 0x32d44f41
- (id)subarrayWithRange:(NSRange)range;	// 0x32d44cb1
@end

