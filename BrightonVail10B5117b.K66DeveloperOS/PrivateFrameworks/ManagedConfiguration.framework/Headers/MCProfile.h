/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "ManagedConfiguration-Structs.h"
#import <NSObject.h> // Unknown library

@class NSData, NSString, NSDate, NSArray;
@protocol OS_dispatch_queue;

@interface MCProfile : NSObject {
	NSString *_displayName;	// 4 = 0x4
	NSString *_profileDescription;	// 8 = 0x8
	NSString *_identifier;	// 12 = 0xc
	NSString *_UUID;	// 16 = 0x10
	NSString *_organization;	// 20 = 0x14
	int _version;	// 24 = 0x18
	NSDate *_installDate;	// 28 = 0x1c
	NSDate *_expiryDate;	// 32 = 0x20
	BOOL _encrypted;	// 36 = 0x24
	BOOL _isLocked;	// 37 = 0x25
	NSString *_removalPasscode;	// 40 = 0x28
	BOOL _needsReboot;	// 44 = 0x2c
	BOOL _isStub;	// 45 = 0x2d
	NSString *_productBuildVersion;	// 48 = 0x30
	NSString *_productVersion;	// 52 = 0x34
	NSData *_profileData;	// 56 = 0x38
	NSDate *_removalDate;	// 60 = 0x3c
	NSString *_localizedConsentText;	// 64 = 0x40
	int _trustLevel;	// 68 = 0x44
	BOOL _trustHasBeenEvaluated;	// 72 = 0x48
	NSObject<OS_dispatch_queue> *_trustEvaluationQueue;	// 76 = 0x4c
	NSString *_signerSummary;	// 80 = 0x50
	NSArray *_signerCertificates;	// 84 = 0x54
	BOOL _signerHasBeenEvaluated;	// 88 = 0x58
	NSObject<OS_dispatch_queue> *_signerEvaluationQueue;	// 92 = 0x5c
}
@property(readonly, assign, nonatomic) NSString *UUID;	// G=0x346b95c1; @synthesize=_UUID
@property(readonly, assign, nonatomic) NSString *UUIDHashFileName;	// G=0x346ba33d; 
@property(retain, nonatomic) NSString *displayName;	// G=0x346b9579; S=0x346b9589; @synthesize=_displayName
@property(readonly, assign, nonatomic) NSDate *earliestCertificateExpiryDate;	// G=0x346b90b9; 
@property(assign, nonatomic, getter=isEncrypted) BOOL encrypted;	// G=0x346b95d1; S=0x346b95e1; @synthesize=_encrypted
@property(readonly, assign, nonatomic) NSDate *expiryDate;	// G=0x346b90c1; @synthesize=_expiryDate
@property(readonly, assign, nonatomic) NSString *friendlyName;	// G=0x346b8a6d; 
@property(readonly, assign, nonatomic) NSString *identifier;	// G=0x346b95b1; @synthesize=_identifier
@property(retain, nonatomic) NSDate *installDate;	// G=0x346b9611; S=0x346b9621; @synthesize=_installDate
@property(readonly, assign, nonatomic) NSArray *installationWarnings;	// G=0x346b8645; 
@property(readonly, assign, nonatomic) BOOL isManagedByProfileService;	// G=0x346b9199; 
@property(readonly, assign, nonatomic) BOOL isSigned;	// G=0x346b8a41; 
@property(readonly, assign, nonatomic) BOOL isStub;	// G=0x346b9689; @synthesize=_isStub
@property(readonly, assign, nonatomic) NSString *localizedConsentText;	// G=0x346b9701; @synthesize=_localizedConsentText
@property(readonly, assign, nonatomic) NSArray *localizedPayloadSummaryByType;	// G=0x346b90b5; 
@property(assign, nonatomic, getter=isLocked) BOOL locked;	// G=0x346b9649; S=0x346b9659; @synthesize=_isLocked
@property(readonly, assign, nonatomic) BOOL needsReboot;	// G=0x346b9679; @synthesize=_needsReboot
@property(readonly, assign, nonatomic) NSString *organization;	// G=0x346b95f1; @synthesize=_organization
@property(readonly, assign, nonatomic) NSArray *payloads;	// G=0x346b8a39; 
@property(readonly, assign, nonatomic) NSString *productBuildVersion;	// G=0x346b96a9; @synthesize=_productBuildVersion
@property(readonly, assign, nonatomic) NSString *productVersion;	// G=0x346b9699; @synthesize=_productVersion
@property(retain, nonatomic) NSData *profileData;	// G=0x346b96b9; S=0x346b96c9; @synthesize=_profileData
@property(readonly, assign, nonatomic) NSString *profileDescription;	// G=0x346b9569; @synthesize=_profileDescription
@property(readonly, assign, nonatomic) NSString *profileIDHashFileName;	// G=0x346ba2ed; 
@property(readonly, assign, nonatomic) NSDate *removalDate;	// G=0x346b96f1; @synthesize=_removalDate
@property(retain, nonatomic) NSString *removalPasscode;	// G=0x346ba38d; S=0x346ba3a1; 
@property(readonly, assign, nonatomic) NSString *removalPasscode;	// G=0x346b9669; @synthesize=_removalPasscode
@property(readonly, assign, nonatomic) SecCertificate *signerCertificate;	// G=0x346b82b1; 
@property(retain, nonatomic) NSArray *signerCertificates;	// G=0x346b82ed; S=0x346b8559; 
@property(retain, nonatomic) NSString *signerSummary;	// G=0x346b83a9; S=0x346b8465; 
@property(readonly, assign, nonatomic) NSString *stubFileName;	// G=0x346ba29d; 
@property(readonly, assign, nonatomic) int trustLevel;	// G=0x346b8159; 
@property(readonly, assign, nonatomic) int version;	// G=0x346b9601; @synthesize=_version
+ (int)_evaluateCertificateChain:(id)chain;	// 0x346b93c5
+ (int)_evaluateSignerTrust:(SecTrust *)trust;	// 0x346b92cd
+ (id)_malformedProfileError;	// 0x346b9871
+ (id)badFieldTypeErrorWithField:(id)field;	// 0x346b98f5
+ (BOOL)checkString:(id)string isOneOfStrings:(id)strings key:(id)key errorDomain:(id)domain errorCode:(int)code errorString:(id)string6 outError:(id *)error;	// 0x346bc5d1
+ (int)evaluateTrustOfData:(id)data;	// 0x346bc6b1
+ (id)missingFieldErrorWithField:(id)field;	// 0x346b997d
+ (id)profileDictionaryFromProfileData:(id)profileData outWasEncrypted:(BOOL *)encrypted outError:(id *)error;	// 0x346b9c99
+ (id)profileWithData:(id)data fileName:(id)name allowEmptyPayload:(BOOL)payload outError:(id *)error;	// 0x346b9a05
+ (id)profileWithData:(id)data fileName:(id)name outError:(id *)error;	// 0x346b89ed
+ (id)profileWithData:(id)data outError:(id *)error;	// 0x346b89c9
+ (id)profileWithDictionary:(id)dictionary fileName:(id)name originalData:(id)data wasEncrypted:(BOOL)encrypted allowEmptyPayload:(BOOL)payload outError:(id *)error;	// 0x346ba069
+ (id)removeOptionalNonZeroLengthStringInDictionary:(id)dictionary key:(id)key errorDomain:(id)domain invalidDataCode:(int)code invalidDataErrorString:(id)string outError:(id *)error;	// 0x346bc481
+ (id)removeOptionalObjectInDictionary:(id)dictionary key:(id)key type:(Class)type errorDomain:(id)domain invalidDataCode:(int)code invalidDataErrorString:(id)string outError:(id *)error;	// 0x346bc185
+ (id)removeRequiredNonZeroLengthStringInDictionary:(id)dictionary key:(id)key errorDomain:(id)domain missingDataCode:(int)code missingDataErrorString:(id)string invalidDataCode:(int)code6 invalidDataErrorString:(id)string7 outError:(id *)error;	// 0x346bc2ad
+ (id)removeRequiredObjectInDictionary:(id)dictionary key:(id)key type:(Class)type errorDomain:(id)domain missingDataCode:(int)code missingDataErrorString:(id)string invalidDataCode:(int)code7 invalidDataErrorString:(id)string8 outError:(id *)error;	// 0x346bbfdd
+ (id)signerSummaryOfData:(id)data outSignerCertificates:(id *)certificates;	// 0x346bc779
- (id)initWithDictionary:(id)dictionary originalData:(id)data wasEncrypted:(BOOL)encrypted allowEmptyPayload:(BOOL)payload outError:(id *)error;	// 0x346ba3e5
- (void).cxx_destruct;	// 0x346b9711
// declared property getter: - (id)UUID;	// 0x346b95c1
// declared property getter: - (id)UUIDHashFileName;	// 0x346ba33d
- (void)__evaluateSignerCertificates;	// 0x346b823d
- (BOOL)containsPayloadOfClass:(Class)aClass;	// 0x346bbef5
- (id)description;	// 0x346b8bc1
// declared property getter: - (id)displayName;	// 0x346b9579
// declared property getter: - (id)earliestCertificateExpiryDate;	// 0x346b90b9
- (void)evaluateSignerTrust;	// 0x346b919d
- (void)evaluateSignerTrustAsynchronouslyWithCompletion:(id)completion;	// 0x346b91d5
// declared property getter: - (id)expiryDate;	// 0x346b90c1
// declared property getter: - (id)friendlyName;	// 0x346b8a6d
// declared property getter: - (id)identifier;	// 0x346b95b1
// declared property getter: - (id)installDate;	// 0x346b9611
// declared property getter: - (id)installationWarnings;	// 0x346b8645
// declared property getter: - (BOOL)isEncrypted;	// 0x346b95d1
// declared property getter: - (BOOL)isLocked;	// 0x346b9649
// declared property getter: - (BOOL)isManagedByProfileService;	// 0x346b9199
// declared property getter: - (BOOL)isSigned;	// 0x346b8a41
// declared property getter: - (BOOL)isStub;	// 0x346b9689
// declared property getter: - (id)localizedConsentText;	// 0x346b9701
// declared property getter: - (id)localizedPayloadSummaryByType;	// 0x346b90b5
- (id)malformedProfileErrorWithError:(id)error;	// 0x346bb5b1
// declared property getter: - (BOOL)needsReboot;	// 0x346b9679
// declared property getter: - (id)organization;	// 0x346b95f1
- (id)payloadWithUUID:(id)uuid;	// 0x346b8a3d
// declared property getter: - (id)payloads;	// 0x346b8a39
// declared property getter: - (id)productBuildVersion;	// 0x346b96a9
// declared property getter: - (id)productVersion;	// 0x346b9699
// declared property getter: - (id)profileData;	// 0x346b96b9
// declared property getter: - (id)profileDescription;	// 0x346b9569
// declared property getter: - (id)profileIDHashFileName;	// 0x346ba2ed
// declared property getter: - (id)removalDate;	// 0x346b96f1
// declared property getter: - (id)removalPasscode;	// 0x346ba38d
// declared property getter: - (id)removalPasscode;	// 0x346b9669
// declared property setter: - (void)setDisplayName:(id)name;	// 0x346b9589
// declared property setter: - (void)setEncrypted:(BOOL)encrypted;	// 0x346b95e1
// declared property setter: - (void)setInstallDate:(id)date;	// 0x346b9621
// declared property setter: - (void)setLocked:(BOOL)locked;	// 0x346b9659
// declared property setter: - (void)setProfileData:(id)data;	// 0x346b96c9
// declared property setter: - (void)setRemovalPasscode:(id)passcode;	// 0x346ba3a1
// declared property setter: - (void)setSignerCertificates:(id)certificates;	// 0x346b8559
// declared property setter: - (void)setSignerSummary:(id)summary;	// 0x346b8465
// declared property getter: - (SecCertificate *)signerCertificate;	// 0x346b82b1
// declared property getter: - (id)signerCertificates;	// 0x346b82ed
// declared property getter: - (id)signerSummary;	// 0x346b83a9
- (id)stubDictionary;	// 0x346bb791
// declared property getter: - (id)stubFileName;	// 0x346ba29d
// declared property getter: - (int)trustLevel;	// 0x346b8159
// declared property getter: - (int)version;	// 0x346b9601
- (BOOL)writeStubToDirectory:(id)directory;	// 0x346bb6bd
- (BOOL)writeStubToPath:(id)path;	// 0x346bb73d
@end

