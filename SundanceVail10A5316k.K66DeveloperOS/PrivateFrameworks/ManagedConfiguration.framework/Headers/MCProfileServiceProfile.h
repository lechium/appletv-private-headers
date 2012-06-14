/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCProfile.h"

@class NSData, NSString, NSArray;

@interface MCProfileServiceProfile : MCProfile {
@private
	NSString *_URLString;	// 96 = 0x60
	NSArray *_deviceAttributes;	// 100 = 0x64
	id _challenge;	// 104 = 0x68
	NSData *_enrollmentIdentityPersistentID;	// 108 = 0x6c
	BOOL _confirmInstallation;	// 112 = 0x70
	NSArray *_bogusPayloads;	// 116 = 0x74
}
@property(retain, nonatomic) NSString *URLString;	// G=0x305c6435; S=0x305c6445; @synthesize=_URLString
@property(readonly, assign, nonatomic) id challenge;	// G=0x305c647d; @synthesize=_challenge
@property(readonly, assign, nonatomic) BOOL confirmInstallation;	// G=0x305c64c5; @synthesize=_confirmInstallation
@property(readonly, assign, nonatomic) NSArray *deviceAttributes;	// G=0x305c646d; @synthesize=_deviceAttributes
@property(retain, nonatomic) NSData *enrollmentIdentityPersistentID;	// G=0x305c648d; S=0x305c649d; @synthesize=_enrollmentIdentityPersistentID
- (id)initWithDictionary:(id)dictionary originalData:(id)data wasEncrypted:(BOOL)encrypted allowEmptyPayload:(BOOL)payload outError:(id *)error;	// 0x305c5925
- (void).cxx_destruct;	// 0x305c64d5
// declared property getter: - (id)URLString;	// 0x305c6435
- (id)_badDataTypeErrorWithFieldName:(id)fieldName;	// 0x305c5815
- (id)_unsupportedValueErrorWithFieldName:(id)fieldName value:(id)value;	// 0x305c589d
// declared property getter: - (id)challenge;	// 0x305c647d
// declared property getter: - (BOOL)confirmInstallation;	// 0x305c64c5
- (id)description;	// 0x305c62c5
// declared property getter: - (id)deviceAttributes;	// 0x305c646d
// declared property getter: - (id)enrollmentIdentityPersistentID;	// 0x305c648d
- (id)localizedPayloadSummaryByType;	// 0x305c6059
- (id)payloads;	// 0x305c60ad
// declared property setter: - (void)setEnrollmentIdentityPersistentID:(id)anId;	// 0x305c649d
// declared property setter: - (void)setURLString:(id)string;	// 0x305c6445
- (id)stubDictionary;	// 0x305c6151
@end

