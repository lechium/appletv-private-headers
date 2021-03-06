/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "NSCoding.h"
#import "NSMutableCopying.h"
#import "Foundation-Structs.h"


@interface NSIndexSet : NSObject <NSCopying, NSMutableCopying, NSCoding> {
	struct {
		unsigned _inverted : 1;
		unsigned _builtin : 1;
		unsigned _isCF : 1;
		unsigned _reserved : 29;
	} _indexSetFlags;	// 4 = 0x4
	union {
		struct {
			NSRange _range;
		} _singleRange;
		struct {
			void *_data;
			void *_reserved;
		} _multipleRanges;
	} _internal;	// 8 = 0x8
}
+ (id)indexSet;	// 0x34d697f9
+ (id)indexSetWithIndex:(unsigned)index;	// 0x34d796b5
+ (id)indexSetWithIndexes:(const unsigned *)indexes count:(unsigned)count;	// 0x34da8719
+ (id)indexSetWithIndexesInRange:(NSRange)range;	// 0x34d698fd
- (id)init;	// 0x34d2ac21
- (id)initWithCoder:(id)coder;	// 0x34da8b81
- (id)initWithIndex:(unsigned)index;	// 0x34d796f1
- (id)initWithIndexSet:(id)indexSet;	// 0x34d4c095
- (id)initWithIndexes:(const unsigned *)indexes count:(unsigned)count;	// 0x34da8759
- (id)initWithIndexesInRange:(NSRange)range;	// 0x34d2ac35
- (unsigned)__getContainmentVector:(out BOOL *)vector inRange:(NSRange)range;	// 0x34da94b9
- (unsigned)_indexAtIndex:(unsigned)index;	// 0x34d82cc5
- (unsigned)_indexClosestToIndex:(unsigned)index equalAllowed:(BOOL)allowed following:(BOOL)following;	// 0x34d6aab1
- (unsigned)_indexOfRangeAfterOrContainingIndex:(unsigned)rangeAfterOrContainingIndex;	// 0x34d699a5
- (unsigned)_indexOfRangeBeforeOrContainingIndex:(unsigned)rangeBeforeOrContainingIndex;	// 0x34d4bd0d
- (unsigned)_indexOfRangeContainingIndex:(unsigned)rangeContainingIndex;	// 0x34d6a9b1
- (id)_init;	// 0x34d2ace9
- (id)_numberEnumerator;	// 0x34da97b5
- (void)_setContentToContentFromIndexSet:(id)indexSet;	// 0x34d4c0c9
- (Class)classForCoder;	// 0x34da8f6d
- (BOOL)containsIndex:(unsigned)index;	// 0x34d6a8f9
- (BOOL)containsIndexes:(id)indexes;	// 0x34da95f1
- (BOOL)containsIndexesInRange:(NSRange)range;	// 0x34da9585
- (id)copyWithZone:(NSZone *)zone;	// 0x34d4c02d
- (unsigned)count;	// 0x34d4c27d
- (unsigned)countOfIndexesInRange:(NSRange)range;	// 0x34d6a021
- (void)dealloc;	// 0x34d2b7e9
- (id)description;	// 0x34da97fd
- (void)encodeWithCoder:(id)coder;	// 0x34da8969
- (void)enumerateIndexesInRange:(NSRange)range options:(unsigned)options usingBlock:(id)block;	// 0x34da9e85
- (void)enumerateIndexesUsingBlock:(id)block;	// 0x34d7b71d
- (void)enumerateIndexesWithOptions:(unsigned)options usingBlock:(id)block;	// 0x34d7b731
- (void)enumerateRangesInRange:(NSRange)range options:(unsigned)options usingBlock:(id)block;	// 0x34daa2a1
- (void)enumerateRangesUsingBlock:(id)block;	// 0x34d6993d
- (void)enumerateRangesWithOptions:(unsigned)options usingBlock:(id)block;	// 0x34d69951
- (unsigned)firstIndex;	// 0x34d6aa4d
- (unsigned)getIndexes:(unsigned *)indexes maxCount:(unsigned)count inIndexRange:(NSRange *)indexRange;	// 0x34da9295
- (unsigned)hash;	// 0x34da8f7d
- (unsigned)indexGreaterThanIndex:(unsigned)index;	// 0x34d6aa91
- (unsigned)indexGreaterThanOrEqualToIndex:(unsigned)index;	// 0x34d7b781
- (unsigned)indexInRange:(NSRange)range options:(unsigned)options passingTest:(id)test;	// 0x34da9f3d
- (unsigned)indexLessThanIndex:(unsigned)index;	// 0x34d7b7a1
- (unsigned)indexLessThanOrEqualToIndex:(unsigned)index;	// 0x34da9275
- (unsigned)indexPassingTest:(id)test;	// 0x34da9ed5
- (unsigned)indexWithOptions:(unsigned)options passingTest:(id)test;	// 0x34da9ee9
- (id)indexesInRange:(NSRange)range options:(unsigned)options passingTest:(id)test;	// 0x34daa125
- (id)indexesPassingTest:(id)test;	// 0x34da9f8d
- (id)indexesWithOptions:(unsigned)options passingTest:(id)test;	// 0x34da9fa1
- (BOOL)intersectsIndexesInRange:(NSRange)range;	// 0x34da96f5
- (BOOL)isEqual:(id)equal;	// 0x34da91e5
- (BOOL)isEqualToIndexSet:(id)indexSet;	// 0x34da8fed
- (unsigned)lastIndex;	// 0x34d2ad35
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x34da923d
- (NSRange)rangeAtIndex:(unsigned)index;	// 0x34d4c2b5
- (unsigned)rangeCount;	// 0x34d2ad8d
- (id)replacementObjectForPortCoder:(id)portCoder;	// 0x34e83589
@end

