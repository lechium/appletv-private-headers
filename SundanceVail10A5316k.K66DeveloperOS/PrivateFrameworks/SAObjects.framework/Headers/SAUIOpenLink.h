/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSURL;

@interface SAUIOpenLink : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSURL *ref;	// G=0x32f2f0f1; S=0x32f2f16d; 
+ (id)openLink;	// 0x32f2f061
+ (id)openLinkWithDictionary:(id)dictionary context:(id)context;	// 0x32f2f0a5
- (id)encodedClassName;	// 0x32f2f055
- (id)groupIdentifier;	// 0x32f2f045
// declared property getter: - (id)ref;	// 0x32f2f0f1
- (BOOL)requiresResponse;	// 0x32f2f1cd
// declared property setter: - (void)setRef:(id)ref;	// 0x32f2f16d
@end
