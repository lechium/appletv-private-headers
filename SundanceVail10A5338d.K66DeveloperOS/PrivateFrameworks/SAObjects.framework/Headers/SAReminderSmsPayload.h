/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAReminderPayload.h"
#import "AceObject.h"

@class NSString, NSArray;

@interface SAReminderSmsPayload : AceObject <SAReminderPayload> {
}
@property(copy, nonatomic) NSString *message;	// G=0x3795fb89; S=0x3795fba5; 
@property(copy, nonatomic) NSArray *recipients;	// G=0x3795fbf5; S=0x3795fc11; 
+ (id)smsPayload;	// 0x3795faf9
+ (id)smsPayloadWithDictionary:(id)dictionary context:(id)context;	// 0x3795fb3d
- (id)encodedClassName;	// 0x3795faed
- (id)groupIdentifier;	// 0x3795fadd
// declared property getter: - (id)message;	// 0x3795fb89
// declared property getter: - (id)recipients;	// 0x3795fbf5
// declared property setter: - (void)setMessage:(id)message;	// 0x3795fba5
// declared property setter: - (void)setRecipients:(id)recipients;	// 0x3795fc11
@end

