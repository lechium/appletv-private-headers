/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "ManagedConfiguration-Structs.h"
#import "MCCertificatePayload.h"

@class NSData;

@interface MCWAPIIdentityCertificatePayload : MCCertificatePayload {
@private
	NSData *_pemData;	// 48 = 0x30
}
@property(readonly, assign) NSData *pemData;	// G=0x348d2091; @synthesize=_pemData
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x348d20ed
+ (id)typeStrings;	// 0x348d214d
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x348d2265
- (SecCertificate *)copyCertificate;	// 0x348d2205
- (SecIdentity *)copyIdentityFromKeychain;	// 0x348d2089
- (void)dealloc;	// 0x348d20a1
- (id)description;	// 0x348d2175
- (BOOL)isIdentity;	// 0x348d208d
// declared property getter: - (id)pemData;	// 0x348d2091
@end

