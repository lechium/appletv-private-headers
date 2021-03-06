/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSData;

@interface SAGetSessionCertificateResponse : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSData *certificate;	// G=0x355bb1ad; S=0x355bb1c9; 
+ (id)getSessionCertificateResponse;	// 0x355bb11d
+ (id)getSessionCertificateResponseWithDictionary:(id)dictionary context:(id)context;	// 0x355bb161
// declared property getter: - (id)certificate;	// 0x355bb1ad
- (id)encodedClassName;	// 0x355bb111
- (id)groupIdentifier;	// 0x355bb101
- (BOOL)requiresResponse;	// 0x355bb219
// declared property setter: - (void)setCertificate:(id)certificate;	// 0x355bb1c9
@end

