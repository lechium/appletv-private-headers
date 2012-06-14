/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCCertificatePayload.h"
#import "ManagedConfiguration-Structs.h"

@class NSString, NSData;

@interface MCPlainCertificatePayload : MCCertificatePayload {
@private
	NSString *_certificateFileName;	// 48 = 0x30
	NSData *_certificateData;	// 52 = 0x34
	NSString *_password;	// 56 = 0x38
	int _dataEncoding;	// 60 = 0x3c
}
@property(readonly, assign, nonatomic) NSData *certificateData;	// G=0x305de2b1; @synthesize=_certificateData
@property(readonly, assign, nonatomic) NSString *certificateFileName;	// G=0x305de291; @synthesize=_certificateFileName
@property(readonly, assign, nonatomic) int dataEncoding;	// G=0x305de2a1; @synthesize=_dataEncoding
@property(readonly, assign, nonatomic) NSString *password;	// G=0x305de2c1; @synthesize=_password
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x305dd949
+ (id)typeStrings;	// 0x305dd8f1
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x305dd9d1
- (void).cxx_destruct;	// 0x305de2d1
// declared property getter: - (id)certificateData;	// 0x305de2b1
// declared property getter: - (id)certificateFileName;	// 0x305de291
- (SecCertificate *)copyCertificate;	// 0x305ddf69
// declared property getter: - (int)dataEncoding;	// 0x305de2a1
- (id)description;	// 0x305de0c1
- (id)installationWarnings;	// 0x305dde19
- (BOOL)isIdentity;	// 0x305de211
- (BOOL)isSigned;	// 0x305dddb9
// declared property getter: - (id)password;	// 0x305de2c1
- (id)persistentResourceID;	// 0x305de1c9
@end

