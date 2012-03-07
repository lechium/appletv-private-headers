/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSDictionary, NSString, NSMutableDictionary;

@interface MCVPNPayload : MCPayload {
	NSMutableDictionary *_atom;	// 40 = 0x28
	NSString *_certificateUUID;	// 44 = 0x2c
	unsigned char _userNameRequired;	// 48 = 0x30
	unsigned char _passwordRequired;	// 49 = 0x31
	unsigned char _proxyUserNameRequired;	// 50 = 0x32
	unsigned char _proxyPasswordRequired;	// 51 = 0x33
	unsigned char _sharedSecretRequired;	// 52 = 0x34
	unsigned char _pinRequired;	// 53 = 0x35
	NSString *_userNameKey;	// 56 = 0x38
	NSString *_passwordKey;	// 60 = 0x3c
	NSString *_proxyUserNameKey;	// 64 = 0x40
	NSString *_proxyPasswordKey;	// 68 = 0x44
	NSString *_sharedSecretKey;	// 72 = 0x48
	NSString *_pinKey;	// 76 = 0x4c
	NSString *_userName;	// 80 = 0x50
	NSString *_password;	// 84 = 0x54
	NSString *_proxyUserName;	// 88 = 0x58
	NSString *_proxyPassword;	// 92 = 0x5c
	NSString *_sharedSecret;	// 96 = 0x60
	NSString *_pin;	// 100 = 0x64
}
@property(readonly, assign, nonatomic) NSDictionary *atom;	// G=0x32b1a16d; @synthesize=_atom
@property(readonly, assign, nonatomic) NSString *certificateUUID;	// G=0x32b1a15d; @synthesize=_certificateUUID
@property(copy, nonatomic) NSString *password;	// G=0x32b1a07d; S=0x32b1a56d; @synthesize=_password
@property(readonly, assign, nonatomic) NSString *passwordKey;	// G=0x32b1a0dd; @synthesize=_passwordKey
@property(readonly, assign, nonatomic) unsigned char passwordRequired;	// G=0x32b1a13d; @synthesize=_passwordRequired
@property(copy, nonatomic) NSString *pin;	// G=0x32b1a03d; S=0x32b1a61d; @synthesize=_pin
@property(readonly, assign, nonatomic) NSString *pinKey;	// G=0x32b1a09d; @synthesize=_pinKey
@property(readonly, assign, nonatomic) unsigned char pinRequired;	// G=0x32b1a0fd; @synthesize=_pinRequired
@property(copy, nonatomic) NSString *proxyPassword;	// G=0x32b1a05d; S=0x32b1a5c5; @synthesize=_proxyPassword
@property(readonly, assign, nonatomic) NSString *proxyPasswordKey;	// G=0x32b1a0bd; @synthesize=_proxyPasswordKey
@property(readonly, assign, nonatomic) unsigned char proxyPasswordRequired;	// G=0x32b1a11d; @synthesize=_proxyPasswordRequired
@property(copy, nonatomic) NSString *proxyUserName;	// G=0x32b1a06d; S=0x32b1a599; @synthesize=_proxyUserName
@property(readonly, assign, nonatomic) NSString *proxyUserNameKey;	// G=0x32b1a0cd; @synthesize=_proxyUserNameKey
@property(readonly, assign, nonatomic) unsigned char proxyUserNameRequired;	// G=0x32b1a12d; @synthesize=_proxyUserNameRequired
@property(copy, nonatomic) NSString *sharedSecret;	// G=0x32b1a04d; S=0x32b1a5f1; @synthesize=_sharedSecret
@property(readonly, assign, nonatomic) NSString *sharedSecretKey;	// G=0x32b1a0ad; @synthesize=_sharedSecretKey
@property(readonly, assign, nonatomic) unsigned char sharedSecretRequired;	// G=0x32b1a10d; @synthesize=_sharedSecretRequired
@property(copy, nonatomic) NSString *userName;	// G=0x32b1a08d; S=0x32b1a541; @synthesize=_userName
@property(readonly, assign, nonatomic) NSString *userNameKey;	// G=0x32b1a0ed; @synthesize=_userNameKey
@property(readonly, assign, nonatomic) unsigned char userNameRequired;	// G=0x32b1a14d; @synthesize=_userNameRequired
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x32b1a649
+ (id)typeStrings;	// 0x32b1a391
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x32b1a481
- (void)_validateVPNPayload:(id)payload;	// 0x32b1a17d
// declared property getter: - (id)atom;	// 0x32b1a16d
// declared property getter: - (id)certificateUUID;	// 0x32b1a15d
- (void)dealloc;	// 0x32b1a3b9
// declared property getter: - (id)password;	// 0x32b1a07d
// declared property getter: - (id)passwordKey;	// 0x32b1a0dd
// declared property getter: - (unsigned char)passwordRequired;	// 0x32b1a13d
// declared property getter: - (id)pin;	// 0x32b1a03d
// declared property getter: - (id)pinKey;	// 0x32b1a09d
// declared property getter: - (unsigned char)pinRequired;	// 0x32b1a0fd
// declared property getter: - (id)proxyPassword;	// 0x32b1a05d
// declared property getter: - (id)proxyPasswordKey;	// 0x32b1a0bd
// declared property getter: - (unsigned char)proxyPasswordRequired;	// 0x32b1a11d
// declared property getter: - (id)proxyUserName;	// 0x32b1a06d
// declared property getter: - (id)proxyUserNameKey;	// 0x32b1a0cd
// declared property getter: - (unsigned char)proxyUserNameRequired;	// 0x32b1a12d
// declared property setter: - (void)setPassword:(id)password;	// 0x32b1a56d
// declared property setter: - (void)setPin:(id)pin;	// 0x32b1a61d
// declared property setter: - (void)setProxyPassword:(id)password;	// 0x32b1a5c5
// declared property setter: - (void)setProxyUserName:(id)name;	// 0x32b1a599
// declared property setter: - (void)setSharedSecret:(id)secret;	// 0x32b1a5f1
// declared property setter: - (void)setUserName:(id)name;	// 0x32b1a541
// declared property getter: - (id)sharedSecret;	// 0x32b1a04d
// declared property getter: - (id)sharedSecretKey;	// 0x32b1a0ad
// declared property getter: - (unsigned char)sharedSecretRequired;	// 0x32b1a10d
// declared property getter: - (id)userName;	// 0x32b1a08d
// declared property getter: - (id)userNameKey;	// 0x32b1a0ed
// declared property getter: - (unsigned char)userNameRequired;	// 0x32b1a14d
@end
