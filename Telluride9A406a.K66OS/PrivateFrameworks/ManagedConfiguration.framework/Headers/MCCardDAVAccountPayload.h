/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSString;

@interface MCCardDAVAccountPayload : MCPayload {
	NSString *_accountDescription;	// 40 = 0x28
	NSString *_hostname;	// 44 = 0x2c
	NSString *_username;	// 48 = 0x30
	NSString *_password;	// 52 = 0x34
	NSString *_principalURL;	// 56 = 0x38
	BOOL _useSSL;	// 60 = 0x3c
	int _port;	// 64 = 0x40
	NSString *_accountPersistentUUID;	// 68 = 0x44
}
@property(readonly, assign, nonatomic) NSString *accountDescription;	// G=0x36471531; @synthesize=_accountDescription
@property(copy, nonatomic) NSString *accountPersistentUUID;	// G=0x364714c1; S=0x364716c1; @synthesize=_accountPersistentUUID
@property(readonly, assign, nonatomic) NSString *hostname;	// G=0x36471521; @synthesize=_hostname
@property(copy, nonatomic) NSString *password;	// G=0x36471501; S=0x3647169d; @synthesize=_password
@property(readonly, assign, nonatomic) int port;	// G=0x364714d1; @synthesize=_port
@property(readonly, assign, nonatomic) NSString *principalURL;	// G=0x364714f1; @synthesize=_principalURL
@property(readonly, assign, nonatomic) BOOL useSSL;	// G=0x364714e1; @synthesize=_useSSL
@property(copy, nonatomic) NSString *username;	// G=0x36471511; S=0x36471679; @synthesize=_username
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x364715f1
+ (id)typeStrings;	// 0x36471651
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x364719f1
// declared property getter: - (id)accountDescription;	// 0x36471531
// declared property getter: - (id)accountPersistentUUID;	// 0x364714c1
- (void)dealloc;	// 0x36471541
- (id)description;	// 0x36471839
// declared property getter: - (id)hostname;	// 0x36471521
// declared property getter: - (id)password;	// 0x36471501
// declared property getter: - (int)port;	// 0x364714d1
// declared property getter: - (id)principalURL;	// 0x364714f1
// declared property setter: - (void)setAccountPersistentUUID:(id)uuid;	// 0x364716c1
// declared property setter: - (void)setPassword:(id)password;	// 0x3647169d
// declared property setter: - (void)setUsername:(id)username;	// 0x36471679
- (id)stubDictionary;	// 0x36471755
- (id)subtitle1Description;	// 0x36471705
- (id)subtitle1Label;	// 0x36471715
- (id)subtitle2Description;	// 0x364716e5
- (id)subtitle2Label;	// 0x364716f5
- (id)title;	// 0x36471725
// declared property getter: - (BOOL)useSSL;	// 0x364714e1
// declared property getter: - (id)username;	// 0x36471511
@end

