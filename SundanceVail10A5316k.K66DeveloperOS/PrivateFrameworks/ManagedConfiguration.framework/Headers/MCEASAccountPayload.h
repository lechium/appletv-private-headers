/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCEmailAccountPayloadBase.h"

@class NSNumber, NSData, NSString;

@interface MCEASAccountPayload : MCEmailAccountPayloadBase {
	NSString *_accountDescription;	// 60 = 0x3c
	NSString *_hostname;	// 64 = 0x40
	NSString *_username;	// 68 = 0x44
	NSString *_password;	// 72 = 0x48
	NSString *_emailAddress;	// 76 = 0x4c
	BOOL _useSSL;	// 80 = 0x50
	NSNumber *_mailNumberOfPastDaysToSync;	// 84 = 0x54
	NSData *_embeddedCertificate;	// 88 = 0x58
	NSString *_embeddedCertificateName;	// 92 = 0x5c
	NSString *_embeddedCertificatePassword;	// 96 = 0x60
	NSString *_certificateUUID;	// 100 = 0x64
	NSString *_accountPersistentUUID;	// 104 = 0x68
	NSData *_certificatePersistentID;	// 108 = 0x6c
	BOOL _syncDefaultFoldersOnly;	// 112 = 0x70
}
@property(readonly, assign, nonatomic) NSString *accountDescription;	// G=0x305db21d; @synthesize=_accountDescription
@property(copy, nonatomic) NSString *accountPersistentUUID;	// G=0x305db309; S=0x305db31d; @synthesize=_accountPersistentUUID
@property(retain, nonatomic) NSData *certificatePersistentID;	// G=0x305db32d; S=0x305db33d; @synthesize=_certificatePersistentID
@property(readonly, assign, nonatomic) NSString *certificateUUID;	// G=0x305db2f9; @synthesize=_certificateUUID
@property(copy, nonatomic) NSString *emailAddress;	// G=0x305db051; S=0x305db285; @synthesize=_emailAddress
@property(readonly, assign, nonatomic) NSData *embeddedCertificate;	// G=0x305db2b5; @synthesize=_embeddedCertificate
@property(readonly, assign, nonatomic) NSString *embeddedCertificateName;	// G=0x305db2c5; @synthesize=_embeddedCertificateName
@property(copy, nonatomic) NSString *embeddedCertificatePassword;	// G=0x305db2d5; S=0x305db2e9; @synthesize=_embeddedCertificatePassword
@property(readonly, assign, nonatomic) BOOL hasCertificate;	// G=0x305dacb1; 
@property(readonly, assign, nonatomic) NSString *hostname;	// G=0x305db22d; @synthesize=_hostname
@property(readonly, assign, nonatomic) NSNumber *mailNumberOfPastDaysToSync;	// G=0x305db2a5; @synthesize=_mailNumberOfPastDaysToSync
@property(copy, nonatomic) NSString *password;	// G=0x305db261; S=0x305db275; @synthesize=_password
@property(assign, nonatomic) BOOL syncDefaultFoldersOnly;	// G=0x305db365; S=0x305db375; @synthesize=_syncDefaultFoldersOnly
@property(readonly, assign, nonatomic) BOOL useSSL;	// G=0x305db295; @synthesize=_useSSL
@property(copy, nonatomic) NSString *username;	// G=0x305db23d; S=0x305db251; @synthesize=_username
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x305da345
+ (id)typeStrings;	// 0x305da31d
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x305da3cd
- (void).cxx_destruct;	// 0x305db385
// declared property getter: - (id)accountDescription;	// 0x305db21d
// declared property getter: - (id)accountPersistentUUID;	// 0x305db309
// declared property getter: - (id)certificatePersistentID;	// 0x305db32d
// declared property getter: - (id)certificateUUID;	// 0x305db2f9
- (id)description;	// 0x305dace1
// declared property getter: - (id)emailAddress;	// 0x305db051
// declared property getter: - (id)embeddedCertificate;	// 0x305db2b5
// declared property getter: - (id)embeddedCertificateName;	// 0x305db2c5
// declared property getter: - (id)embeddedCertificatePassword;	// 0x305db2d5
// declared property getter: - (BOOL)hasCertificate;	// 0x305dacb1
// declared property getter: - (id)hostname;	// 0x305db22d
// declared property getter: - (id)mailNumberOfPastDaysToSync;	// 0x305db2a5
// declared property getter: - (id)password;	// 0x305db261
// declared property setter: - (void)setAccountPersistentUUID:(id)uuid;	// 0x305db31d
// declared property setter: - (void)setCertificatePersistentID:(id)anId;	// 0x305db33d
// declared property setter: - (void)setEmailAddress:(id)address;	// 0x305db285
// declared property setter: - (void)setEmbeddedCertificatePassword:(id)password;	// 0x305db2e9
// declared property setter: - (void)setPassword:(id)password;	// 0x305db275
// declared property setter: - (void)setSyncDefaultFoldersOnly:(BOOL)only;	// 0x305db375
// declared property setter: - (void)setUsername:(id)username;	// 0x305db251
- (id)stubDictionary;	// 0x305daf31
- (id)subtitle1Description;	// 0x305db1b5
- (id)subtitle1Label;	// 0x305db1a5
- (id)subtitle2Description;	// 0x305db20d
- (id)subtitle2Label;	// 0x305db1c5
// declared property getter: - (BOOL)syncDefaultFoldersOnly;	// 0x305db365
- (id)title;	// 0x305db149
// declared property getter: - (BOOL)useSSL;	// 0x305db295
// declared property getter: - (id)username;	// 0x305db23d
@end

