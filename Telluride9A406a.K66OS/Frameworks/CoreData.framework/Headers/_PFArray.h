/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <NSArray.h> // Unknown library


__attribute__((visibility("hidden")))
@interface _PFArray : NSArray {
@private
	int _cd_rc;	// 4 = 0x4
	unsigned _count;	// 8 = 0x8
	id *_array;	// 12 = 0xc
	PFArrayFlags _flags;	// 16 = 0x10
}
@property(readonly, assign) unsigned count;	// G=0x3477d5c5; converted property
+ (BOOL)accessInstanceVariablesDirectly;	// 0x3479c8a1
+ (void)initialize;	// 0x3479ce09
- (id)initWithObjects:(const id *)objects count:(unsigned)count;	// 0x3479caad
- (id)initWithObjects:(id *)objects count:(unsigned)count andFlags:(unsigned)flags;	// 0x3477d38d
- (unsigned)_flags;	// 0x3479c98d
- (BOOL)_isDeallocating;	// 0x3479e029
- (id *)_objectsPointer;	// 0x3479c8a5
- (void)_setShouldRelease:(BOOL)_set;	// 0x3479c9d5
- (void)_setShouldUseExtendedRelease:(BOOL)_set;	// 0x3479ca0d
- (BOOL)_tryRetain;	// 0x3479e051
- (id)arrayFromObjectIDs;	// 0x3479cad1
- (id)copyWithZone:(NSZone *)zone;	// 0x3479cd59
// converted property getter: - (unsigned)count;	// 0x3477d5c5
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x3479c8f9
- (void)dealloc;	// 0x3478404d
- (void)getObjects:(id *)objects;	// 0x3479e151
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x3479e0ad
- (unsigned)indexOfManagedObjectForObjectID:(id)objectID;	// 0x3479cc11
- (unsigned)indexOfObject:(id)object;	// 0x3479caf9
- (unsigned)indexOfObject:(id)object inRange:(NSRange)range;	// 0x3479cb49
- (unsigned)indexOfObjectIdenticalTo:(id)to;	// 0x3479cbe1
- (unsigned)indexOfObjectIdenticalTo:(id)to inRange:(NSRange)range;	// 0x3479c8b5
- (id)managedObjectIDAtIndex:(unsigned)index;	// 0x3479ccd9
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x3479cdb1
- (id)newArrayFromObjectIDs;	// 0x3479e17d
- (id)objectAtIndex:(unsigned)index;	// 0x3477d5d5
- (oneway void)release;	// 0x3477d545
- (id)retain;	// 0x3477d50d
- (unsigned)retainCount;	// 0x3479c979
- (id)subarrayWithRange:(NSRange)range;	// 0x3479df6d
@end

