/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "ManagedConfiguration-Structs.h"
#import <NSObject.h> // Unknown library

@class NSArray, NSMutableArray, NSDictionary, NSData, NSString, NSDate;

@interface MCProfile : NSObject {
@private
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
	int _trustLevel;	// 60 = 0x3c
	BOOL _trustHasBeenEvaluated;	// 64 = 0x40
	dispatch_queue_s *_trustEvaluationQueue;	// 68 = 0x44
	NSString *_signerSummary;	// 72 = 0x48
	NSMutableArray *_signerCertificates;	// 76 = 0x4c
	BOOL _signerHasBeenEvaluated;	// 80 = 0x50
	dispatch_queue_s *_signerEvaluationQueue;	// 84 = 0x54
@protected
	NSDictionary *_context;	// 88 = 0x58
}
@property(readonly, assign) NSString *UUID;	// G=0x3645c2a9; @synthesize=_UUID
@property(readonly, assign) NSString *UUIDHashFileName;	// G=0x3645d64d; 
@property(retain) NSDictionary *context;	// G=0x3645cb71; S=0x3645cb4d; @synthesize=_context
@property(retain) NSString *displayName;	// G=0x3645cabd; S=0x3645ca99; @synthesize=_displayName
@property(readonly, assign) NSDate *earliestCertificateExpiryDate;	// G=0x3645c1f1; 
@property(assign, getter=isEncrypted) BOOL encrypted;	// G=0x3645c289; S=0x3645c299; @synthesize=_encrypted
@property(readonly, assign) NSDate *expiryDate;	// G=0x3645cc05; @synthesize=_expiryDate
@property(readonly, assign) NSString *friendlyName;	// G=0x3645d0e1; 
@property(readonly, assign) NSString *identifier;	// G=0x3645c2b9; @synthesize=_identifier
@property(retain) NSDate *installDate;	// G=0x3645caf9; S=0x3645cad5; @synthesize=_installDate
@property(readonly, assign) NSArray *installationWarnings;	// G=0x3645d349; 
@property(readonly, assign) BOOL isManagedByProfileService;	// G=0x3645c1f5; 
@property(readonly, assign) BOOL isSigned;	// G=0x3645d329; 
@property(readonly, assign) BOOL isStub;	// G=0x3645c219; @synthesize=_isStub
@property(readonly, assign) NSArray *localizedPayloadSummaryByType;	// G=0x3645c1ed; 
@property(assign, getter=isLocked) BOOL locked;	// G=0x3645c249; S=0x3645c259; @synthesize=_isLocked
@property(readonly, assign) BOOL needsReboot;	// G=0x3645c229; @synthesize=_needsReboot
@property(readonly, assign) NSString *organization;	// G=0x3645c279; @synthesize=_organization
@property(readonly, assign) NSArray *payloads;	// G=0x3645c1e5; 
@property(readonly, assign) NSString *productBuildVersion;	// G=0x3645c1f9; @synthesize=_productBuildVersion
@property(readonly, assign) NSString *productVersion;	// G=0x3645c209; @synthesize=_productVersion
@property(retain) NSData *profileData;	// G=0x3645cb35; S=0x3645cb11; @synthesize=_profileData
@property(readonly, assign) NSString *profileDescription;	// G=0x3645c2c9; @synthesize=_profileDescription
@property(readonly, assign) NSString *profileIDHashFileName;	// G=0x3645d619; 
@property(readonly, assign) NSString *removalPasscode;	// G=0x3645c239; @synthesize=_removalPasscode
@property(retain) NSString *removalPasscode;	// G=0x3645c2d9; S=0x3645d681; 
@property(readonly, assign) SecCertificate *signerCertificate;	// G=0x3645d50d; 
@property(retain) NSArray *signerCertificates;	// G=0x3645c3bd; S=0x3645c609; 
@property(retain) NSString *signerSummary;	// G=0x3645c469; S=0x3645c515; 
@property(readonly, assign) NSString *stubFileName;	// G=0x3645d5e5; 
@property(readonly, assign) int trustLevel;	// G=0x3645c2e9; 
@property(readonly, assign) int version;	// G=0x3645c269; @synthesize=_version
+ (int)_evaluateCertificateChain:(id)chain;	// 0x3645c779
+ (int)_evaluateSignerTrust:(SecTrust *)trust;	// 0x3645c8f5
+ (id)_malformedProfileError;	// 0x3645dae9
+ (id)badFieldTypeErrorWithField:(id)field;	// 0x3645db49
+ (BOOL)checkString:(id)string isOneOfStrings:(id)strings key:(id)key errorDomain:(id)domain errorCode:(int)code errorString:(id)string6 outError:(id *)error;	// 0x3645e2c5
+ (int)evaluateTrustOfData:(id)data;	// 0x3645f9d1
+ (id)missingFieldErrorWithField:(id)field;	// 0x3645dba9
+ (id)profileDictionaryFromProfileData:(id)profileData outWasEncrypted:(BOOL *)encrypted outError:(id *)error;	// 0x3645f6b1
+ (id)profileWithData:(id)data context:(id)context fileName:(id)name allowEmptyPayload:(BOOL)payload outError:(id *)error;	// 0x3645d869
+ (id)profileWithData:(id)data context:(id)context fileName:(id)name outError:(id *)error;	// 0x3645c9ed
+ (id)profileWithData:(id)data context:(id)context outError:(id *)error;	// 0x3645ca1d
+ (id)profileWithData:(id)data fileName:(id)name outError:(id *)error;	// 0x3645ca45
+ (id)profileWithData:(id)data outError:(id *)error;	// 0x3645ca6d
+ (id)profileWithDictionary:(id)dictionary fileName:(id)name originalData:(id)data wasEncrypted:(BOOL)encrypted allowEmptyPayload:(BOOL)payload outError:(id *)error;	// 0x3645dc09
+ (id)removeOptionalNonZeroLengthStringInDictionary:(id)dictionary key:(id)key errorDomain:(id)domain invalidDataCode:(int)code invalidDataErrorString:(id)string outError:(id *)error;	// 0x3645e1b9
+ (id)removeOptionalObjectInDictionary:(id)dictionary key:(id)key type:(Class)type errorDomain:(id)domain invalidDataCode:(int)code invalidDataErrorString:(id)string outError:(id *)error;	// 0x3645df85
+ (id)removeRequiredNonZeroLengthStringInDictionary:(id)dictionary key:(id)key errorDomain:(id)domain missingDataCode:(int)code missingDataErrorString:(id)string invalidDataCode:(int)code6 invalidDataErrorString:(id)string7 outError:(id *)error;	// 0x3645e05d
+ (id)removeRequiredObjectInDictionary:(id)dictionary key:(id)key type:(Class)type errorDomain:(id)domain missingDataCode:(int)code missingDataErrorString:(id)string invalidDataCode:(int)code7 invalidDataErrorString:(id)string8 outError:(id *)error;	// 0x3645de71
+ (id)signerSummaryOfData:(id)data outSignerCertificates:(id *)certificates;	// 0x3645fa79
- (id)initWithDictionary:(id)dictionary originalData:(id)data wasEncrypted:(BOOL)encrypted allowEmptyPayload:(BOOL)payload outError:(id *)error;	// 0x3645e349
// declared property getter: - (id)UUID;	// 0x3645c2a9
// declared property getter: - (id)UUIDHashFileName;	// 0x3645d64d
- (void)__evaluateSignerCertificates;	// 0x3645d539
// declared property getter: - (id)context;	// 0x3645cb71
- (void)dealloc;	// 0x3645d1ad
- (id)description;	// 0x3645cc9d
// declared property getter: - (id)displayName;	// 0x3645cabd
// declared property getter: - (id)earliestCertificateExpiryDate;	// 0x3645c1f1
- (void)evaluateSignerTrust;	// 0x3645cbd9
- (void)evaluateSignerTrustAsynchronouslyWithCompletion:(id)completion;	// 0x3645cb89
// declared property getter: - (id)expiryDate;	// 0x3645cc05
// declared property getter: - (id)friendlyName;	// 0x3645d0e1
// declared property getter: - (id)identifier;	// 0x3645c2b9
// declared property getter: - (id)installDate;	// 0x3645caf9
// declared property getter: - (id)installationWarnings;	// 0x3645d349
// declared property getter: - (BOOL)isEncrypted;	// 0x3645c289
// declared property getter: - (BOOL)isLocked;	// 0x3645c249
// declared property getter: - (BOOL)isManagedByProfileService;	// 0x3645c1f5
// declared property getter: - (BOOL)isSigned;	// 0x3645d329
// declared property getter: - (BOOL)isStub;	// 0x3645c219
// declared property getter: - (id)localizedPayloadSummaryByType;	// 0x3645c1ed
- (id)malformedProfileErrorWithError:(id)error;	// 0x3645da51
// declared property getter: - (BOOL)needsReboot;	// 0x3645c229
// declared property getter: - (id)organization;	// 0x3645c279
- (id)payloadWithUUID:(id)uuid;	// 0x3645c1e9
// declared property getter: - (id)payloads;	// 0x3645c1e5
// declared property getter: - (id)productBuildVersion;	// 0x3645c1f9
// declared property getter: - (id)productVersion;	// 0x3645c209
// declared property getter: - (id)profileData;	// 0x3645cb35
// declared property getter: - (id)profileDescription;	// 0x3645c2c9
// declared property getter: - (id)profileIDHashFileName;	// 0x3645d619
// declared property getter: - (id)removalPasscode;	// 0x3645c239
// declared property getter: - (id)removalPasscode;	// 0x3645c2d9
// declared property setter: - (void)setContext:(id)context;	// 0x3645cb4d
// declared property setter: - (void)setDisplayName:(id)name;	// 0x3645ca99
// declared property setter: - (void)setEncrypted:(BOOL)encrypted;	// 0x3645c299
// declared property setter: - (void)setInstallDate:(id)date;	// 0x3645cad5
// declared property setter: - (void)setLocked:(BOOL)locked;	// 0x3645c259
// declared property setter: - (void)setProfileData:(id)data;	// 0x3645cb11
// declared property setter: - (void)setRemovalPasscode:(id)passcode;	// 0x3645d681
// declared property setter: - (void)setSignerCertificates:(id)certificates;	// 0x3645c609
// declared property setter: - (void)setSignerSummary:(id)summary;	// 0x3645c515
// declared property getter: - (SecCertificate *)signerCertificate;	// 0x3645d50d
// declared property getter: - (id)signerCertificates;	// 0x3645c3bd
// declared property getter: - (id)signerSummary;	// 0x3645c469
- (id)stubDictionary;	// 0x3645f0d9
// declared property getter: - (id)stubFileName;	// 0x3645d5e5
// declared property getter: - (int)trustLevel;	// 0x3645c2e9
// declared property getter: - (int)version;	// 0x3645c269
- (BOOL)writeStubToDirectory:(id)directory;	// 0x3645d759
- (BOOL)writeStubToPath:(id)path;	// 0x3645d7a9
@end

