/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSMutableArray.h> // Unknown library
#import "CoreData-Structs.h"

@class _PFArray;

@interface _PFMutableProxyArray : NSMutableArray {
	int _cd_rc;	// 4 = 0x4
	unsigned _editCount;	// 8 = 0x8
	unsigned _offset;	// 12 = 0xc
	unsigned _limit;	// 16 = 0x10
	_PFArray *_originalArray;	// 20 = 0x14
	NSMutableArray *_updatedObjectsArray;	// 24 = 0x18
	CFArrayRef _indicesVeneer;	// 28 = 0x1c
}
- (id)initWithPFArray:(id)pfarray;	// 0x30ec38ad
- (id)initWithPFArray:(id)pfarray inRange:(NSRange)range;	// 0x30ec37b5
- (BOOL)_isDeallocating;	// 0x30ec3bd9
- (void)_rehash;	// 0x30ec3c19
- (BOOL)_tryRetain;	// 0x30ec3b89
- (void)addObject:(id)object;	// 0x30ec41cd
- (id)arrayFromObjectIDs;	// 0x30ec40b9
- (unsigned)count;	// 0x30ec3c05
- (void)dealloc;	// 0x30ec3a09
- (void)finalize;	// 0x30ec3a81
- (unsigned)indexOfManagedObjectForObjectID:(id)objectID;	// 0x30ec4031
- (unsigned)indexOfObject:(id)object;	// 0x30ec3efd
- (unsigned)indexOfObject:(id)object inRange:(NSRange)range;	// 0x30ec3f35
- (unsigned)indexOfObjectIdenticalTo:(id)to;	// 0x30ec3f6d
- (unsigned)indexOfObjectIdenticalTo:(id)to inRange:(NSRange)range;	// 0x30ec3fa5
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x30ec42d5
- (id)managedObjectIDAtIndex:(unsigned)index;	// 0x30ec3e71
- (id)newArrayFromObjectIDs;	// 0x30ec40e1
- (id)objectAtIndex:(unsigned)index;	// 0x30ec3dfd
- (oneway void)release;	// 0x30ec3afd
- (void)removeLastObject;	// 0x30ec422d
- (void)removeObjectAtIndex:(unsigned)index;	// 0x30ec4339
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x30ec43cd
- (id)retain;	// 0x30ec3ac5
- (unsigned)retainCount;	// 0x30ec3b75
- (id)subarrayWithRange:(NSRange)range;	// 0x30ec38e5
@end

