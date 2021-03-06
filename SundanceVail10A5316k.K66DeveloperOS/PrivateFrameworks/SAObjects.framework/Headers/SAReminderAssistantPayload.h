/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAReminderPayload.h"
#import "AceObject.h"

@class NSString;

@interface SAReminderAssistantPayload : AceObject <SAReminderPayload> {
}
@property(copy, nonatomic) NSString *utterance;	// G=0x32f45335; S=0x32f45351; 
+ (id)assistantPayload;	// 0x32f452a5
+ (id)assistantPayloadWithDictionary:(id)dictionary context:(id)context;	// 0x32f452e9
- (id)encodedClassName;	// 0x32f45299
- (id)groupIdentifier;	// 0x32f45289
// declared property setter: - (void)setUtterance:(id)utterance;	// 0x32f45351
// declared property getter: - (id)utterance;	// 0x32f45335
@end

