/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSXPCCoding.h"
#import "SSCoding.h"
#import "StoreServices-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class NSString, NSDictionary, NSMutableDictionary, NSNumber;

@interface SSURLBagContext : NSObject <SSCoding, SSXPCCoding, NSCopying> {
@private
	int _bagType;	// 4 = 0x4
	NSMutableDictionary *_httpHeaders;	// 8 = 0x8
	NSNumber *_userIdentifier;	// 12 = 0xc
}
@property(copy, nonatomic) NSDictionary *allHTTPHeaders;	// G=0x3156c065; S=0x3156c11d; 
@property(assign, nonatomic) int bagType;	// G=0x3156c701; S=0x3156c711; @synthesize=_bagType
@property(readonly, assign, nonatomic) NSString *cacheKey;	// G=0x3156c09d; 
@property(retain, nonatomic) NSNumber *userIdentifier;	// G=0x3156c721; S=0x3156c731; @synthesize=_userIdentifier
+ (id)contextWithBagType:(int)bagType;	// 0x3156c011
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x3156c45d
- (id)initWithXPCEncoding:(void *)xpcencoding;	// 0x3156c5d5
// declared property getter: - (id)allHTTPHeaders;	// 0x3156c065
// declared property getter: - (int)bagType;	// 0x3156c701
// declared property getter: - (id)cacheKey;	// 0x3156c09d
- (id)copyPropertyListEncoding;	// 0x3156c529
- (id)copyWithZone:(NSZone *)zone;	// 0x3156c3b1
- (void *)copyXPCEncoding;	// 0x3156c68d
- (void)dealloc;	// 0x3156bfb1
- (id)description;	// 0x3156c235
- (unsigned)hash;	// 0x3156c2ad
- (BOOL)isEqual:(id)equal;	// 0x3156c2fd
// declared property setter: - (void)setAllHTTPHeaders:(id)headers;	// 0x3156c11d
// declared property setter: - (void)setBagType:(int)type;	// 0x3156c711
// declared property setter: - (void)setUserIdentifier:(id)identifier;	// 0x3156c731
- (void)setValue:(id)value forHTTPHeaderField:(id)httpheaderField;	// 0x3156c161
// declared property getter: - (id)userIdentifier;	// 0x3156c721
- (id)valueForHTTPHeaderField:(id)httpheaderField;	// 0x3156c1ed
@end
