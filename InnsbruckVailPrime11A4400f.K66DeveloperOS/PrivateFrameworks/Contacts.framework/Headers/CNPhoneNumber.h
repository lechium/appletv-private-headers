/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Contacts.framework/Contacts
 */

#import "Contacts-Structs.h"
#import </libobjc.A.h>
#import "NSCopying.h"

@class NSString;

@interface CNPhoneNumber : NSObject <NSCopying> {
	NSString *_stringValue;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSString *countryCode;	// G=0x3042f351; @dynamic
@property(readonly, assign, nonatomic) NSString *formattedStringValue;	// G=0x3042f355; @dynamic
@property(readonly, assign, nonatomic) NSString *stringValue;	// G=0x3042f365; @synthesize=_stringValue
+ (id)phoneNumberWithStringValue:(id)stringValue;	// 0x3042f1a1
+ (BOOL)supportsSecureCoding;	// 0x3042f19d
- (id)initWithCoder:(id)coder;	// 0x3042f255
- (id)initWithStringValue:(id)stringValue;	// 0x3042f1e9
- (void).cxx_destruct;	// 0x3042f379
- (id)copyWithZone:(NSZone *)zone;	// 0x3042f359
// declared property getter: - (id)countryCode;	// 0x3042f351
- (void)encodeWithCoder:(id)coder;	// 0x3042f2ed
// declared property getter: - (id)formattedStringValue;	// 0x3042f355
- (BOOL)isEqual:(id)equal;	// 0x3042f361
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x3042f35d
// declared property getter: - (id)stringValue;	// 0x3042f365
@end

