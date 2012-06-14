/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSCoding.h"
#import "StoreServices-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class NSMutableDictionary;

@interface SSPurchaseHistoryItem : NSObject <SSCoding, NSCopying> {
	NSMutableDictionary *_properties;	// 4 = 0x4
}
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x3157f3dd
- (id)initWithXPCEncoding:(void *)xpcencoding;	// 0x3157f49d
- (id)copyPropertyListEncoding;	// 0x3157f345
- (id)copyWithZone:(NSZone *)zone;	// 0x3157f2d1
- (void *)copyXPCEncoding;	// 0x3157f3a9
- (void)dealloc;	// 0x3157f149
- (id)description;	// 0x3157f561
- (unsigned)hash;	// 0x3157f5c9
- (BOOL)isEqual:(id)equal;	// 0x3157f5e9
- (void)setValue:(id)value forProperty:(id)property;	// 0x3157f195
- (id)valueForProperty:(id)property;	// 0x3157f289
@end
