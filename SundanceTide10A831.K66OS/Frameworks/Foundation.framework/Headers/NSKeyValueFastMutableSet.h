/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSKeyValueMutableSet.h"

@class NSKeyValueMutatingSetMethodSet;

__attribute__((visibility("hidden")))
@interface NSKeyValueFastMutableSet : NSKeyValueMutableSet {
	NSKeyValueMutatingSetMethodSet *_mutatingMethods;	// 12 = 0xc
}
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x32587181
- (void)_proxyNonGCFinalize;	// 0x325871e9
- (void)addObject:(id)object;	// 0x32587239
- (void)addObjectsFromArray:(id)array;	// 0x325872e5
- (void)intersectSet:(id)set;	// 0x325873a1
- (void)minusSet:(id)set;	// 0x32587401
- (void)removeAllObjects;	// 0x32587461
- (void)removeObject:(id)object;	// 0x32587519
- (void)setSet:(id)set;	// 0x325875c5
- (void)unionSet:(id)set;	// 0x32587625
@end

