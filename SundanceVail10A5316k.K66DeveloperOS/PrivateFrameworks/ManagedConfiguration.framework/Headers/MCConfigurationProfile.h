/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCProfile.h"

@class NSArray, MCProfileServiceProfile;

@interface MCConfigurationProfile : MCProfile {
@private
	NSArray *_payloads;	// 96 = 0x60
	MCProfileServiceProfile *_OTAProfile;	// 100 = 0x64
}
@property(assign, nonatomic) __weak MCProfileServiceProfile *OTAProfile;	// G=0x305c57b1; S=0x305c57d1; @synthesize=_OTAProfile
@property(readonly, retain) NSArray *payloads;	// G=0x305c57a1; converted property
- (id)initWithDictionary:(id)dictionary originalData:(id)data wasEncrypted:(BOOL)encrypted allowEmptyPayload:(BOOL)payload outError:(id *)error;	// 0x305c42b9
- (void).cxx_destruct;	// 0x305c57e5
// declared property getter: - (id)OTAProfile;	// 0x305c57b1
- (void)_addObjectsOfClass:(Class)aClass fromArray:(id)array toArray:(id)array3;	// 0x305c3e09
- (void)_sortPayloads;	// 0x305c3ee9
- (id)description;	// 0x305c5105
- (id)earliestCertificateExpiryDate;	// 0x305c55f1
- (id)installationWarnings;	// 0x305c4fad
- (BOOL)isManagedByProfileService;	// 0x305c4f8d
- (id)localizedPayloadSummaryByType;	// 0x305c549d
- (id)payloadWithUUID:(id)uuid;	// 0x305c4195
// converted property getter: - (id)payloads;	// 0x305c57a1
// declared property setter: - (void)setOTAProfile:(id)profile;	// 0x305c57d1
- (id)stubDictionary;	// 0x305c52ad
@end

