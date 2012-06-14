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
@private
	NSKeyValueMutatingSetMethodSet *_mutatingMethods;	// 12 = 0xc
}
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x31a66031
- (void)_proxyNonGCFinalize;	// 0x31a66099
- (void)addObject:(id)object;	// 0x31a660e9
- (void)addObjectsFromArray:(id)array;	// 0x31a66195
- (void)intersectSet:(id)set;	// 0x31a66251
- (void)minusSet:(id)set;	// 0x31a662b1
- (void)removeAllObjects;	// 0x31a66311
- (void)removeObject:(id)object;	// 0x31a663c9
- (void)setSet:(id)set;	// 0x31a66475
- (void)unionSet:(id)set;	// 0x31a664d5
@end

