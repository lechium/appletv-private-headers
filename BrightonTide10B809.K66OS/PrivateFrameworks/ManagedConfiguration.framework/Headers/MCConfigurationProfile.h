/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCProfile.h"

@class NSArray, MCProfileServiceProfile;

@interface MCConfigurationProfile : MCProfile {
	NSArray *_payloads;	// 96 = 0x60
	MCProfileServiceProfile *_OTAProfile;	// 100 = 0x64
}
@property(assign, nonatomic) __weak MCProfileServiceProfile *OTAProfile;	// G=0x344b1f4d; S=0x344b1f6d; @synthesize=_OTAProfile
@property(readonly, retain) NSArray *payloads;	// G=0x344b1f3d; converted property
- (id)initWithDictionary:(id)dictionary originalData:(id)data wasEncrypted:(BOOL)encrypted allowEmptyPayload:(BOOL)payload outError:(id *)error;	// 0x344b0a55
- (void).cxx_destruct;	// 0x344b1f81
// declared property getter: - (id)OTAProfile;	// 0x344b1f4d
- (void)_addObjectsOfClass:(Class)aClass fromArray:(id)array toArray:(id)array3;	// 0x344b05a5
- (void)_sortPayloads;	// 0x344b0685
- (id)description;	// 0x344b18a1
- (id)earliestCertificateExpiryDate;	// 0x344b1d8d
- (id)installationWarnings;	// 0x344b1749
- (BOOL)isManagedByProfileService;	// 0x344b1729
- (id)localizedPayloadSummaryByType;	// 0x344b1c39
- (id)payloadWithUUID:(id)uuid;	// 0x344b0931
// converted property getter: - (id)payloads;	// 0x344b1f3d
// declared property setter: - (void)setOTAProfile:(id)profile;	// 0x344b1f6d
- (id)stubDictionary;	// 0x344b1a49
@end

