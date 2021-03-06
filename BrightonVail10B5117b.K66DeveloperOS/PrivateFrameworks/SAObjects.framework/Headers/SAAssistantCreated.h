/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSString;

@interface SAAssistantCreated : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSString *assistantId;	// G=0x355c3b99; S=0x355c3bb5; 
@property(copy, nonatomic) NSString *speechId;	// G=0x355c3c05; S=0x355c3c21; 
+ (id)assistantCreated;	// 0x355c3b09
+ (id)assistantCreatedWithDictionary:(id)dictionary context:(id)context;	// 0x355c3b4d
// declared property getter: - (id)assistantId;	// 0x355c3b99
- (id)encodedClassName;	// 0x355c3afd
- (id)groupIdentifier;	// 0x355c3aed
- (BOOL)requiresResponse;	// 0x355c3c71
// declared property setter: - (void)setAssistantId:(id)anId;	// 0x355c3bb5
// declared property setter: - (void)setSpeechId:(id)anId;	// 0x355c3c21
// declared property getter: - (id)speechId;	// 0x355c3c05
@end

