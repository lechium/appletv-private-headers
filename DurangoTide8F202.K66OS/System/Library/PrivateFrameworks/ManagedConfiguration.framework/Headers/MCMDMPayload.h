/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSData, NSString, NSArray;

@interface MCMDMPayload : MCPayload {
@private
	NSString *_identityUUID;	// 40 = 0x28
	NSData *_identityPersistentID;	// 44 = 0x2c
	BOOL _useDevelopmentAPNS;	// 48 = 0x30
	NSString *_topic;	// 52 = 0x34
	NSString *_serverURLString;	// 56 = 0x38
	NSString *_checkInURLString;	// 60 = 0x3c
	int _accessRights;	// 64 = 0x40
	BOOL _signMessage;	// 68 = 0x44
}
@property(readonly, assign) int accessRights;	// G=0x300683f1; @synthesize=_accessRights
@property(readonly, assign) NSString *checkInURLString;	// G=0x30068401; @synthesize=_checkInURLString
@property(retain) NSData *identityPersistentID;	// G=0x300695a5; S=0x300695bd; @synthesize=_identityPersistentID
@property(readonly, assign) NSString *identityUUID;	// G=0x30068441; @synthesize=_identityUUID
@property(readonly, assign) NSArray *localizedAccessRightDescriptions;	// G=0x30069229; 
@property(readonly, assign) NSString *serverURLString;	// G=0x30068421; @synthesize=_serverURLString
@property(readonly, assign) BOOL signMessage;	// G=0x300683e1; @synthesize=_signMessage
@property(readonly, assign) NSString *topic;	// G=0x30068431; @synthesize=_topic
@property(readonly, assign) BOOL useDevelopmentAPNS;	// G=0x30068411; @synthesize=_useDevelopmentAPNS
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x30069475
+ (id)typeStrings;	// 0x30068465
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x3006872d
- (id)_invalidRightsError;	// 0x30068501
- (id)_invalidTopicError;	// 0x3006848d
// declared property getter: - (int)accessRights;	// 0x300683f1
// declared property getter: - (id)checkInURLString;	// 0x30068401
- (void)dealloc;	// 0x30068575
- (id)description;	// 0x30068f05
// declared property getter: - (id)identityPersistentID;	// 0x300695a5
// declared property getter: - (id)identityUUID;	// 0x30068441
- (id)installationWarnings;	// 0x30069489
// declared property getter: - (id)localizedAccessRightDescriptions;	// 0x30069229
// declared property getter: - (id)serverURLString;	// 0x30068421
// declared property setter: - (void)setIdentityPersistentID:(id)anId;	// 0x300695bd
// declared property getter: - (BOOL)signMessage;	// 0x300683e1
- (id)stubDictionary;	// 0x30068605
- (id)subtitle1Description;	// 0x300683c1
- (id)subtitle1Label;	// 0x30069215
- (id)subtitle2Description;	// 0x300683d1
- (id)subtitle2Label;	// 0x30069201
- (id)title;	// 0x30068451
// declared property getter: - (id)topic;	// 0x30068431
// declared property getter: - (BOOL)useDevelopmentAPNS;	// 0x30068411
@end

