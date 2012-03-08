/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSKeyValueFastMutableOrderedSet.h"

@class NSKeyValueGetter;

__attribute__((visibility("hidden")))
@interface NSKeyValueFastMutableOrderedSet2 : NSKeyValueFastMutableOrderedSet {
@private
	NSKeyValueGetter *_valueGetter;	// 16 = 0x10
}
+ (XXStruct_1UKQIB *)_proxyNonGCPoolPointer;	// 0x35ed8761
- (id)_nonNilOrderedSetValueWithSelector:(SEL)selector;	// 0x35ed882d
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x35ed8771
- (void)_proxyNonGCFinalize;	// 0x35ed87d9
- (unsigned)count;	// 0x35ed88c9
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x35ed88f5
- (unsigned)indexOfObject:(id)object;	// 0x35ed892d
- (id)objectAtIndex:(unsigned)index;	// 0x35ed895d
- (id)objectsAtIndexes:(id)indexes;	// 0x35ed898d
@end

