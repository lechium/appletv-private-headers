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
@property(readonly, assign, nonatomic) NSString *accountDescription;	// G=0x3366ff9d; @synthesize=_accountDescription
@property(copy, nonatomic) NSString *accountPersistentUUID;	// G=0x3367004d; S=0x33670061; @synthesize=_accountPersistentUUID
@property(readonly, assign, nonatomic) NSString *hostname;	// G=0x3366ffad; @synthesize=_hostname
@property(retain, nonatomic) NSString *password;	// G=0x3366fff5; S=0x33670005; @synthesize=_password
@property(readonly, assign, nonatomic) NSArray *searchSettings;	// G=0x3367003d; @synthesize=_searchSettings
@property(readonly, assign, nonatomic) BOOL useSSL;	// G=0x3367002d; @synthesize=_useSSL
@property(retain, nonatomic) NSString *username;	// G=0x3366ffbd; S=0x3366ffcd; @synthesize=_username
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x3366f599
+ (id)typeStrings;	// 0x3366f571
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x3366f621
- (void).cxx_destruct;	// 0x33670071
// declared property getter: - (id)accountDescription;	// 0x3366ff9d
// declared property getter: - (id)accountPersistentUUID;	// 0x3367004d
- (id)description;	// 0x3366fbb9
// declared property getter: - (id)hostname;	// 0x3366ffad
// declared property getter: - (id)password;	// 0x3366fff5
// declared property getter: - (id)searchSettings;	// 0x3367003d
// declared property setter: - (void)setAccountPersistentUUID:(id)uuid;	// 0x33670061
// declared property setter: - (void)setPassword:(id)password;	// 0x33670005
// declared property setter: - (void)setUsername:(id)username;	// 0x3366ffcd
- (id)stubDictionary;	// 0x3366fd4d
- (id)subtitle1Description;	// 0x3366fea9
- (id)subtitle1Label;	// 0x3366fe99
- (id)subtitle2Description;	// 0x3366ff2d
- (id)subtitle2Label;	// 0x3366feb9
- (id)title;	// 0x3366fe3d
// declared property getter: - (BOOL)useSSL;	// 0x3367002d
// declared property getter: - (id)username;	// 0x3366ffbd
@end

