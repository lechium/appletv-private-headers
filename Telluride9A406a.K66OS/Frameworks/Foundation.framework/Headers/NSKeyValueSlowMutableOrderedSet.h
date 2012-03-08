/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSKeyValueMutableOrderedSet.h"
#import "Foundation-Structs.h"

@class NSKeyValueGetter, NSKeyValueSetter;

__attribute__((visibility("hidden")))
@interface NSKeyValueSlowMutableOrderedSet : NSKeyValueMutableOrderedSet {
@private
	NSKeyValueGetter *_valueGetter;	// 12 = 0xc
	NSKeyValueSetter *_valueSetter;	// 16 = 0x10
	BOOL _treatNilValuesLikeEmptyOrderedSets;	// 20 = 0x14
	BOOL _padding[3];	// 21 = 0x15
}
+ (XXStruct_1UKQIB *)_proxyNonGCPoolPointer;	// 0x35ed89bd
- (id)_createNonNilMutableOrderedSetValueWithSelector:(SEL)selector;	// 0x35ed8fcd
- (id)_nonNilOrderedSetValueWithSelector:(SEL)selector;	// 0x35ed8bf1
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x35ed89cd
- (void)_proxyNonGCFinalize;	// 0x35ed8a79
- (void)_raiseNilValueExceptionWithSelector:(SEL)selector;	// 0x35ed8af1
- (unsigned)count;	// 0x35ed8b89
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x35ed8c35
- (unsigned)indexOfObject:(id)object;	// 0x35ed8c6d
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x35ed8cfd
- (void)insertObjects:(id)objects atIndexes:(id)indexes;	// 0x35ed8de9
- (id)objectAtIndex:(unsigned)index;	// 0x35ed8c9d
- (id)objectsAtIndexes:(id)indexes;	// 0x35ed8ccd
- (void)removeObjectAtIndex:(unsigned)index;	// 0x35ed9025
- (void)removeObjectsAtIndexes:(id)indexes;	// 0x35ed9091
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x35ed90fd
- (void)replaceObjectsAtIndexes:(id)indexes withObjects:(id)objects;	// 0x35ed9175
@end

