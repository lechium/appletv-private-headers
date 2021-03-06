/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSData, NSString, NSArray;

@interface MCMDMPayload : MCPayload {
	NSString *_identityUUID;	// 40 = 0x28
	NSData *_identityPersistentID;	// 44 = 0x2c
	BOOL _useDevelopmentAPNS;	// 48 = 0x30
	NSString *_topic;	// 52 = 0x34
	NSString *_serverURLString;	// 56 = 0x38
	NSString *_checkInURLString;	// 60 = 0x3c
	int _accessRights;	// 64 = 0x40
	BOOL _signMessage;	// 68 = 0x44
	BOOL _checkOutWhenRemoved;	// 69 = 0x45
}
@property(readonly, assign, nonatomic) int accessRights;	// G=0x32e049b5; @synthesize=_accessRights
@property(readonly, assign, nonatomic) NSString *checkInURLString;	// G=0x32e049a5; @synthesize=_checkInURLString
@property(readonly, assign, nonatomic) BOOL checkOutWhenRemoved;	// G=0x32e049d5; @synthesize=_checkOutWhenRemoved
@property(retain, nonatomic) NSData *identityPersistentID;	// G=0x32e0493d; S=0x32e0494d; @synthesize=_identityPersistentID
@property(readonly, assign, nonatomic) NSString *identityUUID;	// G=0x32e0492d; @synthesize=_identityUUID
@property(readonly, assign, nonatomic) NSArray *localizedAccessRightDescriptions;	// G=0x32e042fd; 
@property(readonly, assign, nonatomic) NSString *serverURLString;	// G=0x32e04985; @synthesize=_serverURLString
@property(readonly, assign, nonatomic) BOOL signMessage;	// G=0x32e049c5; @synthesize=_signMessage
@property(readonly, assign, nonatomic) NSString *topic;	// G=0x32e04975; @synthesize=_topic
@property(readonly, assign, nonatomic) BOOL useDevelopmentAPNS;	// G=0x32e04995; @synthesize=_useDevelopmentAPNS
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x32e03015
+ (id)typeStrings;	// 0x32e02fed
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x32e031e5
- (void).cxx_destruct;	// 0x32e049e5
- (id)_invalidRightsError;	// 0x32e03025
- (id)_invalidTopicError;	// 0x32e030c1
- (id)_nonHTTPSURLErrorForField:(id)field;	// 0x32e0315d
// declared property getter: - (int)accessRights;	// 0x32e049b5
// declared property getter: - (id)checkInURLString;	// 0x32e049a5
// declared property getter: - (BOOL)checkOutWhenRemoved;	// 0x32e049d5
- (id)description;	// 0x32e03f39
// declared property getter: - (id)identityPersistentID;	// 0x32e0493d
// declared property getter: - (id)identityUUID;	// 0x32e0492d
- (id)installationWarnings;	// 0x32e04651
// declared property getter: - (id)localizedAccessRightDescriptions;	// 0x32e042fd
// declared property getter: - (id)serverURLString;	// 0x32e04985
// declared property setter: - (void)setIdentityPersistentID:(id)anId;	// 0x32e0494d
// declared property getter: - (BOOL)signMessage;	// 0x32e049c5
- (id)stubDictionary;	// 0x32e03d49
- (id)subtitle1Description;	// 0x32e048f5
- (id)subtitle1Label;	// 0x32e048e5
- (id)subtitle2Description;	// 0x32e04919
- (id)subtitle2Label;	// 0x32e04909
- (id)title;	// 0x32e048d5
// declared property getter: - (id)topic;	// 0x32e04975
// declared property getter: - (BOOL)useDevelopmentAPNS;	// 0x32e04995
@end

