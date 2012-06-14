/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSKeyValueMutableSet.h"

@class NSKeyValueGetter, NSKeyValueSetter;

__attribute__((visibility("hidden")))
@interface NSKeyValueSlowMutableSet : NSKeyValueMutableSet {
@private
	NSKeyValueGetter *_valueGetter;	// 12 = 0xc
	NSKeyValueSetter *_valueSetter;	// 16 = 0x10
	BOOL _treatNilValuesLikeEmptySets;	// 20 = 0x14
	BOOL _padding[3];	// 21 = 0x15
}
+ (XXStruct_1UKQIB *)_proxyNonGCPoolPointer;	// 0x31a66879
- (id)_createMutableSetValueWithSelector:(SEL)selector;	// 0x31a66b41
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x31a66889
- (void)_proxyNonGCFinalize;	// 0x31a66939
- (void)_raiseNilValueExceptionWithSelector:(SEL)selector;	// 0x31a669b1
- (id)_setValueWithSelector:(SEL)selector;	// 0x31a66a25
- (void)addObject:(id)object;	// 0x31a66ba9
- (void)addObjectsFromArray:(id)array;	// 0x31a66c4d
- (unsigned)count;	// 0x31a66a79
- (void)intersectSet:(id)set;	// 0x31a66ced
- (id)member:(id)member;	// 0x31a66aa5
- (void)minusSet:(id)set;	// 0x31a66d5d
- (id)objectEnumerator;	// 0x31a66ad5
- (void)removeAllObjects;	// 0x31a66dcd
- (void)removeObject:(id)object;	// 0x31a66e81
- (void)setSet:(id)set;	// 0x31a66ef1
- (void)unionSet:(id)set;	// 0x31a66f69
@end

