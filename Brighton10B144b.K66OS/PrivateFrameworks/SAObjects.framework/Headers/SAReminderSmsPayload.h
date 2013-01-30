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
@property(copy, nonatomic) NSString *message;	// G=0x353d53a5; S=0x353d53c1; 
@property(copy, nonatomic) NSArray *recipients;	// G=0x353d5411; S=0x353d542d; 
+ (id)smsPayload;	// 0x353d5315
+ (id)smsPayloadWithDictionary:(id)dictionary context:(id)context;	// 0x353d5359
- (id)encodedClassName;	// 0x353d5309
- (id)groupIdentifier;	// 0x353d52f9
// declared property getter: - (id)message;	// 0x353d53a5
// declared property getter: - (id)recipients;	// 0x353d5411
// declared property setter: - (void)setMessage:(id)message;	// 0x353d53c1
// declared property setter: - (void)setRecipients:(id)recipients;	// 0x353d542d
@end
