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
@property(copy, nonatomic) NSData *certificate;	// G=0x32f51ee5; S=0x32f51f01; 
+ (id)getSessionCertificateResponse;	// 0x32f51e55
+ (id)getSessionCertificateResponseWithDictionary:(id)dictionary context:(id)context;	// 0x32f51e99
// declared property getter: - (id)certificate;	// 0x32f51ee5
- (id)encodedClassName;	// 0x32f51e49
- (id)groupIdentifier;	// 0x32f51e39
- (BOOL)requiresResponse;	// 0x32f51f51
// declared property setter: - (void)setCertificate:(id)certificate;	// 0x32f51f01
@end

