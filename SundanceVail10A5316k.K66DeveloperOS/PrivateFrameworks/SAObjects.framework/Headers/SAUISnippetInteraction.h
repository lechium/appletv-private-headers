/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseCommand.h"
#import "SAServerBoundCommand.h"

@class NSString;

@interface SAUISnippetInteraction : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(copy, nonatomic) NSString *requestId;	// G=0x32f4f78d; S=0x32f4f7a9; 
@property(copy, nonatomic) NSString *snippetId;	// G=0x32f4f7f9; S=0x32f4f815; 
+ (id)snippetInteraction;	// 0x32f4f6fd
+ (id)snippetInteractionWithDictionary:(id)dictionary context:(id)context;	// 0x32f4f741
- (id)encodedClassName;	// 0x32f4f6f1
- (id)groupIdentifier;	// 0x32f4f6e1
// declared property getter: - (id)requestId;	// 0x32f4f78d
// declared property setter: - (void)setRequestId:(id)anId;	// 0x32f4f7a9
// declared property setter: - (void)setSnippetId:(id)anId;	// 0x32f4f815
// declared property getter: - (id)snippetId;	// 0x32f4f7f9
@end

