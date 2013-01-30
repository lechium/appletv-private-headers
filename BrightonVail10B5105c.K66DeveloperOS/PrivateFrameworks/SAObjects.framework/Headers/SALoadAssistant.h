/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAServerBoundCommand.h"
#import "SABaseCommand.h"

@class NSData, NSString;

@interface SALoadAssistant : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSData *activationToken;	// G=0x303c5655; S=0x303c5671; 
@property(copy, nonatomic) NSString *assistantId;	// G=0x303c56c1; S=0x303c56dd; 
@property(copy, nonatomic) NSString *connectionType;	// G=0x303c572d; S=0x303c5749; 
@property(copy, nonatomic) NSString *language;	// G=0x303c5799; S=0x303c57b5; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(copy, nonatomic) NSData *sessionValidationData;	// G=0x303c5805; S=0x303c5821; 
@property(copy, nonatomic) NSString *speechId;	// G=0x303c5871; S=0x303c588d; 
+ (id)loadAssistant;	// 0x303c55c5
+ (id)loadAssistantWithDictionary:(id)dictionary context:(id)context;	// 0x303c5609
// declared property getter: - (id)activationToken;	// 0x303c5655
// declared property getter: - (id)assistantId;	// 0x303c56c1
// declared property getter: - (id)connectionType;	// 0x303c572d
- (id)encodedClassName;	// 0x303c55b9
- (id)groupIdentifier;	// 0x303c55a9
// declared property getter: - (id)language;	// 0x303c5799
// declared property getter: - (id)sessionValidationData;	// 0x303c5805
// declared property setter: - (void)setActivationToken:(id)token;	// 0x303c5671
// declared property setter: - (void)setAssistantId:(id)anId;	// 0x303c56dd
// declared property setter: - (void)setConnectionType:(id)type;	// 0x303c5749
// declared property setter: - (void)setLanguage:(id)language;	// 0x303c57b5
// declared property setter: - (void)setSessionValidationData:(id)data;	// 0x303c5821
// declared property setter: - (void)setSpeechId:(id)anId;	// 0x303c588d
// declared property getter: - (id)speechId;	// 0x303c5871
@end
