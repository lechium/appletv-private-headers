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
	NSString *_certificateFileName;	// 52 = 0x34
	NSData *_certificateData;	// 56 = 0x38
	NSString *_password;	// 60 = 0x3c
	int _dataEncoding;	// 64 = 0x40
}
@property(readonly, assign, nonatomic) NSData *certificateData;	// G=0x313a4735; @synthesize=_certificateData
@property(readonly, assign, nonatomic) NSString *certificateFileName;	// G=0x313a4715; @synthesize=_certificateFileName
@property(readonly, assign, nonatomic) int dataEncoding;	// G=0x313a4725; @synthesize=_dataEncoding
@property(readonly, assign, nonatomic) NSString *password;	// G=0x313a4745; @synthesize=_password
+ (id)localizedPluralForm;	// 0x313a3e61
+ (id)localizedSingularForm;	// 0x313a3e4d
+ (id)typeStrings;	// 0x313a3df5
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x313a3e75
- (void).cxx_destruct;	// 0x313a4755
// declared property getter: - (id)certificateData;	// 0x313a4735
// declared property getter: - (id)certificateFileName;	// 0x313a4715
- (SecCertificate *)copyCertificate;	// 0x313a43f9
// declared property getter: - (int)dataEncoding;	// 0x313a4725
- (id)description;	// 0x313a4545
- (id)installationWarnings;	// 0x313a42a9
- (BOOL)isIdentity;	// 0x313a4695
- (BOOL)isSigned;	// 0x313a4249
// declared property getter: - (id)password;	// 0x313a4745
- (id)persistentResourceID;	// 0x313a464d
@end

