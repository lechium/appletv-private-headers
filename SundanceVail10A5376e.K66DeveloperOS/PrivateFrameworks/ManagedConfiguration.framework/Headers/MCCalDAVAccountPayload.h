/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSString;

@interface MCCalDAVAccountPayload : MCPayload {
	NSString *_accountDescription;	// 40 = 0x28
	NSString *_hostname;	// 44 = 0x2c
	NSString *_username;	// 48 = 0x30
	NSString *_password;	// 52 = 0x34
	NSString *_principalURL;	// 56 = 0x38
	BOOL _useSSL;	// 60 = 0x3c
	int _port;	// 64 = 0x40
	NSString *_accountPersistentUUID;	// 68 = 0x44
}
@property(readonly, assign, nonatomic) NSString *accountDescription;	// G=0x32b9dc4d; @synthesize=_accountDescription
@property(copy, nonatomic) NSString *accountPersistentUUID;	// G=0x32b9dce5; S=0x32b9dcf9; @synthesize=_accountPersistentUUID
@property(readonly, assign, nonatomic) NSString *hostname;	// G=0x32b9dc5d; @synthesize=_hostname
@property(copy, nonatomic) NSString *password;	// G=0x32b9dc91; S=0x32b9dca5; @synthesize=_password
@property(readonly, assign, nonatomic) int port;	// G=0x32b9dcd5; @synthesize=_port
@property(readonly, assign, nonatomic) NSString *principalURL;	// G=0x32b9dcb5; @synthesize=_principalURL
@property(readonly, assign, nonatomic) BOOL useSSL;	// G=0x32b9dcc5; @synthesize=_useSSL
@property(copy, nonatomic) NSString *username;	// G=0x32b9dc6d; S=0x32b9dc81; @synthesize=_username
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x32b9d251
+ (id)typeStrings;	// 0x32b9d229
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x32b9d2d9
- (void).cxx_destruct;	// 0x32b9dd09
// declared property getter: - (id)accountDescription;	// 0x32b9dc4d
// declared property getter: - (id)accountPersistentUUID;	// 0x32b9dce5
- (id)description;	// 0x32b9d8fd
// declared property getter: - (id)hostname;	// 0x32b9dc5d
// declared property getter: - (id)password;	// 0x32b9dc91
// declared property getter: - (int)port;	// 0x32b9dcd5
// declared property getter: - (id)principalURL;	// 0x32b9dcb5
// declared property setter: - (void)setAccountPersistentUUID:(id)uuid;	// 0x32b9dcf9
// declared property setter: - (void)setPassword:(id)password;	// 0x32b9dca5
// declared property setter: - (void)setUsername:(id)username;	// 0x32b9dc81
- (id)stubDictionary;	// 0x32b9dac1
- (id)subtitle1Description;	// 0x32b9dc1d
- (id)subtitle1Label;	// 0x32b9dc0d
- (id)subtitle2Description;	// 0x32b9dc3d
- (id)subtitle2Label;	// 0x32b9dc2d
- (id)title;	// 0x32b9dbb1
// declared property getter: - (BOOL)useSSL;	// 0x32b9dcc5
// declared property getter: - (id)username;	// 0x32b9dc6d
@end

