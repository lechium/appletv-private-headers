/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCProfile.h"

@class NSString, NSData, NSArray;

@interface MCProfileServiceProfile : MCProfile {
@private
	NSString *_URLString;	// 88 = 0x58
	NSArray *_deviceAttributes;	// 92 = 0x5c
	id _challenge;	// 96 = 0x60
	NSData *_enrollmentIdentityPersistentID;	// 100 = 0x64
	BOOL _confirmInstallation;	// 104 = 0x68
	NSArray *_bogusPayloads;	// 108 = 0x6c
}
@property(retain) NSString *URLString;	// G=0x340ecb95; S=0x340ecbc5; @synthesize=_URLString
@property(readonly, assign) id challenge;	// G=0x340ec1ad; @synthesize=_challenge
@property(readonly, assign) BOOL confirmInstallation;	// G=0x340ec19d; @synthesize=_confirmInstallation
@property(readonly, assign) NSArray *deviceAttributes;	// G=0x340ec1bd; @synthesize=_deviceAttributes
@property(retain) NSData *enrollmentIdentityPersistentID;	// G=0x340ecbad; S=0x340ecbf1; @synthesize=_enrollmentIdentityPersistentID
- (id)initWithDictionary:(id)dictionary originalData:(id)data wasEncrypted:(BOOL)encrypted allowEmptyPayload:(BOOL)payload outError:(id *)error;	// 0x340ec4d5
// declared property getter: - (id)URLString;	// 0x340ecb95
- (id)_badDataTypeErrorWithFieldName:(id)fieldName;	// 0x340ec2c5
- (id)_unsupportedValueErrorWithFieldName:(id)fieldName value:(id)value;	// 0x340ec269
// declared property getter: - (id)challenge;	// 0x340ec1ad
// declared property getter: - (BOOL)confirmInstallation;	// 0x340ec19d
- (void)dealloc;	// 0x340ec445
- (id)description;	// 0x340eca61
// declared property getter: - (id)deviceAttributes;	// 0x340ec1bd
// declared property getter: - (id)enrollmentIdentityPersistentID;	// 0x340ecbad
- (id)localizedPayloadSummaryByType;	// 0x340eca31
- (id)payloads;	// 0x340ec1cd
// declared property setter: - (void)setEnrollmentIdentityPersistentID:(id)anId;	// 0x340ecbf1
// declared property setter: - (void)setURLString:(id)string;	// 0x340ecbc5
- (id)stubDictionary;	// 0x340ec321
@end

