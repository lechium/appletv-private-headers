/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSKeyValueFastMutableSet.h"
#import "Foundation-Structs.h"

@class NSKeyValueGetter;

__attribute__((visibility("hidden")))
@interface NSKeyValueFastMutableSet2 : NSKeyValueFastMutableSet {
@private
	NSKeyValueGetter *_valueGetter;	// 16 = 0x10
}
+ (XXStruct_1UKQIB *)_proxyNonGCPoolPointer;	// 0x31082cb1
- (id)_nonNilSetValueWithSelector:(SEL)selector;	// 0x31082d7d
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x31082cc1
- (void)_proxyNonGCFinalize;	// 0x31082d29
- (unsigned)count;	// 0x31082e19
- (id)member:(id)member;	// 0x31082e45
- (id)objectEnumerator;	// 0x31082e75
@end

