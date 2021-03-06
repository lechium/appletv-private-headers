/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class NSString;

@interface SALocalSearchPhoneNumber : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSString *type;	// G=0x303abee5; S=0x303abf01; 
@property(copy, nonatomic) NSString *value;	// G=0x303abf51; S=0x303abf6d; 
+ (id)phoneNumber;	// 0x303abe55
+ (id)phoneNumberWithDictionary:(id)dictionary context:(id)context;	// 0x303abe99
- (id)encodedClassName;	// 0x303abe49
- (id)groupIdentifier;	// 0x303abe39
// declared property setter: - (void)setType:(id)type;	// 0x303abf01
// declared property setter: - (void)setValue:(id)value;	// 0x303abf6d
// declared property getter: - (id)type;	// 0x303abee5
// declared property getter: - (id)value;	// 0x303abf51
@end

