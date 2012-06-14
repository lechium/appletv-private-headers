/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSKeyValueMutableArray.h"


__attribute__((visibility("hidden")))
@interface NSKeyValueIvarMutableArray : NSKeyValueMutableArray {
@private
	objc_ivar *_ivar;	// 12 = 0xc
}
+ (XXStruct_1UKQIB *)_proxyNonGCPoolPointer;	// 0x35e52759
- (id)_nonNilMutableArrayValueWithSelector:(SEL)selector;	// 0x35e528a9
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x35e52769
- (void)_proxyNonGCFinalize;	// 0x35e527c1
- (void)_raiseNilValueExceptionWithSelector:(SEL)selector;	// 0x35e5283d
- (void)addObject:(id)object;	// 0x35e52985
- (unsigned)count;	// 0x35e52801
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x35e528ed
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x35e529fd
- (void)insertObjects:(id)objects atIndexes:(id)indexes;	// 0x35e52aa1
- (id)objectAtIndex:(unsigned)index;	// 0x35e52925
- (id)objectsAtIndexes:(id)indexes;	// 0x35e52955
- (void)removeLastObject;	// 0x35e52c1d
- (void)removeObjectAtIndex:(unsigned)index;	// 0x35e52c49
- (void)removeObjectsAtIndexes:(id)indexes;	// 0x35e52c79
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x35e52ca9
- (void)replaceObjectsAtIndexes:(id)indexes withObjects:(id)objects;	// 0x35e52cdd
@end
