/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SSProtocolCondition : NSObject {
@private
	int _operator;	// 4 = 0x4
	id _value;	// 8 = 0x8
}
+ (id)newConditionWithDictionary:(id)dictionary;	// 0x324d25d5
- (id)initWithDictionary:(id)dictionary;	// 0x324d23e5
- (void)dealloc;	// 0x324d258d
- (BOOL)evaluateWithContext:(id)context;	// 0x324d2249
@end

