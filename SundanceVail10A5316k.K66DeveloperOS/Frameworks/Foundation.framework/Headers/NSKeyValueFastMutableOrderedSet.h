/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSKeyValueMutableOrderedSet.h"
#import "Foundation-Structs.h"

@class NSKeyValueMutatingOrderedSetMethodSet;

__attribute__((visibility("hidden")))
@interface NSKeyValueFastMutableOrderedSet : NSKeyValueMutableOrderedSet {
@private
	NSKeyValueMutatingOrderedSetMethodSet *_mutatingMethods;	// 12 = 0xc
}
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x31a1d045
- (void)_proxyNonGCFinalize;	// 0x31aed361
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x31aed3b1
- (void)insertObjects:(id)objects atIndexes:(id)indexes;	// 0x31aed4a5
- (void)removeObjectAtIndex:(unsigned)index;	// 0x31aed515
- (void)removeObjectsAtIndexes:(id)indexes;	// 0x31aed5c1
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x31aed621
- (void)replaceObjectsAtIndexes:(id)indexes withObjects:(id)objects;	// 0x31aed74d
@end

