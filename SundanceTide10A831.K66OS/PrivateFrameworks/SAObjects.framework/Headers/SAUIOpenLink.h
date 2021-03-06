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
@property(copy, nonatomic) NSURL *ref;	// G=0x304cf75d; S=0x304cf7d9; 
+ (id)openLink;	// 0x304cf6cd
+ (id)openLinkWithDictionary:(id)dictionary context:(id)context;	// 0x304cf711
- (id)encodedClassName;	// 0x304cf6c1
- (id)groupIdentifier;	// 0x304cf6b1
// declared property getter: - (id)ref;	// 0x304cf75d
- (BOOL)requiresResponse;	// 0x304cf839
// declared property setter: - (void)setRef:(id)ref;	// 0x304cf7d9
@end

