/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSString, NSArray;

@interface MCLDAPAccountPayload : MCPayload {
	NSString *_accountDescription;	// 40 = 0x28
	NSString *_hostname;	// 44 = 0x2c
	NSString *_username;	// 48 = 0x30
	NSString *_password;	// 52 = 0x34
	BOOL _useSSL;	// 56 = 0x38
	NSArray *_searchSettings;	// 60 = 0x3c
	NSString *_accountPersistentUUID;	// 64 = 0x40
}
@property(readonly, assign, nonatomic) NSString *accountDescription;	// G=0x344c5e81; @synthesize=_accountDescription
@property(copy, nonatomic) NSString *accountPersistentUUID;	// G=0x344c5f31; S=0x344c5f45; @synthesize=_accountPersistentUUID
@property(readonly, assign, nonatomic) NSString *hostname;	// G=0x344c5e91; @synthesize=_hostname
@property(retain, nonatomic) NSString *password;	// G=0x344c5ed9; S=0x344c5ee9; @synthesize=_password
@property(readonly, assign, nonatomic) NSArray *searchSettings;	// G=0x344c5f21; @synthesize=_searchSettings
@property(readonly, assign, nonatomic) BOOL useSSL;	// G=0x344c5f11; @synthesize=_useSSL
@property(retain, nonatomic) NSString *username;	// G=0x344c5ea1; S=0x344c5eb1; @synthesize=_username
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x344c547d
+ (id)typeStrings;	// 0x344c5455
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x344c5505
- (void).cxx_destruct;	// 0x344c5f55
// declared property getter: - (id)accountDescription;	// 0x344c5e81
// declared property getter: - (id)accountPersistentUUID;	// 0x344c5f31
- (id)description;	// 0x344c5a9d
// declared property getter: - (id)hostname;	// 0x344c5e91
// declared property getter: - (id)password;	// 0x344c5ed9
// declared property getter: - (id)searchSettings;	// 0x344c5f21
// declared property setter: - (void)setAccountPersistentUUID:(id)uuid;	// 0x344c5f45
// declared property setter: - (void)setPassword:(id)password;	// 0x344c5ee9
// declared property setter: - (void)setUsername:(id)username;	// 0x344c5eb1
- (id)stubDictionary;	// 0x344c5c31
- (id)subtitle1Description;	// 0x344c5d8d
- (id)subtitle1Label;	// 0x344c5d7d
- (id)subtitle2Description;	// 0x344c5e11
- (id)subtitle2Label;	// 0x344c5d9d
- (id)title;	// 0x344c5d21
// declared property getter: - (BOOL)useSSL;	// 0x344c5f11
// declared property getter: - (id)username;	// 0x344c5ea1
@end

