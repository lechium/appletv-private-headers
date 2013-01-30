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
@property(copy, nonatomic) NSString *assistantId;	// G=0x353e8791; S=0x353e87ad; 
@property(copy, nonatomic) NSString *speechId;	// G=0x353e87fd; S=0x353e8819; 
+ (id)assistantCreated;	// 0x353e8701
+ (id)assistantCreatedWithDictionary:(id)dictionary context:(id)context;	// 0x353e8745
// declared property getter: - (id)assistantId;	// 0x353e8791
- (id)encodedClassName;	// 0x353e86f5
- (id)groupIdentifier;	// 0x353e86e5
- (BOOL)requiresResponse;	// 0x353e8869
// declared property setter: - (void)setAssistantId:(id)anId;	// 0x353e87ad
// declared property setter: - (void)setSpeechId:(id)anId;	// 0x353e8819
// declared property getter: - (id)speechId;	// 0x353e87fd
@end
