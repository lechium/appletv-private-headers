/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSNumber, NSString, NSArray, NSDictionary;

@interface MCWiFiPayload : MCPayload {
	BOOL _isHidden;	// 44 = 0x2c
	BOOL _isWEP;	// 45 = 0x2d
	BOOL _isWPA;	// 46 = 0x2e
	BOOL _passwordRequired;	// 47 = 0x2f
	BOOL _usernameRequired;	// 48 = 0x30
	BOOL _autoJoin;	// 49 = 0x31
	BOOL _isHotspot;	// 50 = 0x32
	BOOL _serviceProviderRoamingEnabled;	// 51 = 0x33
	NSString *_ssid;	// 52 = 0x34
	NSString *_encryptionType;	// 56 = 0x38
	NSDictionary *_eapClientConfig;	// 60 = 0x3c
	NSString *_password;	// 64 = 0x40
	NSString *_username;	// 68 = 0x44
	NSString *_certificateUUID;	// 72 = 0x48
	NSArray *_payloadCertificateAnchorUUID;	// 76 = 0x4c
	int _proxyType;	// 80 = 0x50
	NSString *_proxyServer;	// 84 = 0x54
	NSNumber *_proxyServerPort;	// 88 = 0x58
	NSString *_proxyUsername;	// 92 = 0x5c
	NSString *_proxyPassword;	// 96 = 0x60
	NSString *_proxyPACURLString;	// 100 = 0x64
	NSString *_credentialUUID;	// 104 = 0x68
	NSNumber *_priority;	// 108 = 0x6c
	NSString *_domainName;	// 112 = 0x70
	NSString *_HESSID;	// 116 = 0x74
	NSArray *_roamingConsortiumOIs;	// 120 = 0x78
	NSArray *_NAIRealmNames;	// 124 = 0x7c
	NSArray *_MCCAndMNCs;	// 128 = 0x80
	NSString *_displayedOperatorName;	// 132 = 0x84
}
@property(retain, nonatomic) NSString *HESSID;	// G=0x3139d129; S=0x3139d139; @synthesize=_HESSID
@property(retain, nonatomic) NSArray *MCCAndMNCs;	// G=0x3139d1f1; S=0x3139d201; @synthesize=_MCCAndMNCs
@property(retain, nonatomic) NSArray *NAIRealmNames;	// G=0x3139d1b9; S=0x3139d1c9; @synthesize=_NAIRealmNames
@property(assign, nonatomic) BOOL autoJoin;	// G=0x3139ce99; S=0x3139cea9; @synthesize=_autoJoin
@property(retain, nonatomic) NSString *certificateUUID;	// G=0x3139ceb9; S=0x3139cec9; @synthesize=_certificateUUID
@property(retain, nonatomic) NSString *credentialUUID;	// G=0x3139d061; S=0x3139d071; @synthesize=_credentialUUID
@property(retain, nonatomic) NSString *displayedOperatorName;	// G=0x3139d229; S=0x3139d239; @synthesize=_displayedOperatorName
@property(retain, nonatomic) NSString *domainName;	// G=0x3139d0f1; S=0x3139d101; @synthesize=_domainName
@property(retain, nonatomic) NSDictionary *eapClientConfig;	// G=0x3139cdb1; S=0x3139cdc1; @synthesize=_eapClientConfig
@property(retain, nonatomic) NSString *encryptionType;	// G=0x3139cd39; S=0x3139cd49; @synthesize=_encryptionType
@property(assign, nonatomic) BOOL isHidden;	// G=0x3139cd19; S=0x3139cd29; @synthesize=_isHidden
@property(assign, nonatomic) BOOL isHotspot;	// G=0x3139d099; S=0x3139d0a9; @synthesize=_isHotspot
@property(assign, nonatomic) BOOL isWEP;	// G=0x3139cd71; S=0x3139cd81; @synthesize=_isWEP
@property(assign, nonatomic) BOOL isWPA;	// G=0x3139cd91; S=0x3139cda1; @synthesize=_isWPA
@property(retain, nonatomic) NSString *password;	// G=0x3139ce09; S=0x3139ce19; @synthesize=_password
@property(assign, nonatomic) BOOL passwordRequired;	// G=0x3139cde9; S=0x3139cdf9; @synthesize=_passwordRequired
@property(retain, nonatomic) NSArray *payloadCertificateAnchorUUID;	// G=0x3139cef1; S=0x3139cf01; @synthesize=_payloadCertificateAnchorUUID
@property(retain, nonatomic) NSNumber *priority;	// G=0x3139d0b9; S=0x3139d0c9; @synthesize=_priority
@property(retain, nonatomic) NSString *proxyPACURLString;	// G=0x3139d029; S=0x3139d039; @synthesize=_proxyPACURLString
@property(retain, nonatomic) NSString *proxyPassword;	// G=0x3139cff1; S=0x3139d001; @synthesize=_proxyPassword
@property(retain, nonatomic) NSString *proxyServer;	// G=0x3139cf49; S=0x3139cf59; @synthesize=_proxyServer
@property(retain, nonatomic) NSNumber *proxyServerPort;	// G=0x3139cf81; S=0x3139cf91; @synthesize=_proxyServerPort
@property(assign, nonatomic) int proxyType;	// G=0x3139cf29; S=0x3139cf39; @synthesize=_proxyType
@property(retain, nonatomic) NSString *proxyUsername;	// G=0x3139cfb9; S=0x3139cfc9; @synthesize=_proxyUsername
@property(retain, nonatomic) NSArray *roamingConsortiumOIs;	// G=0x3139d181; S=0x3139d191; @synthesize=_roamingConsortiumOIs
@property(assign, nonatomic, getter=isServiceProviderRoamingEnabled) BOOL serviceProviderRoamingEnabled;	// G=0x3139d161; S=0x3139d171; @synthesize=_serviceProviderRoamingEnabled
@property(retain, nonatomic) NSString *ssid;	// G=0x3139cce1; S=0x3139ccf1; @synthesize=_ssid
@property(retain, nonatomic) NSString *username;	// G=0x3139ce61; S=0x3139ce71; @synthesize=_username
@property(assign, nonatomic) BOOL usernameRequired;	// G=0x3139ce41; S=0x3139ce51; @synthesize=_usernameRequired
+ (id)localizedPluralForm;	// 0x31399b49
+ (id)localizedSingularForm;	// 0x31399b35
+ (id)typeStrings;	// 0x31399b0d
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x3139a891
- (void).cxx_destruct;	// 0x3139d261
// declared property getter: - (id)HESSID;	// 0x3139d129
// declared property getter: - (id)MCCAndMNCs;	// 0x3139d1f1
// declared property getter: - (id)NAIRealmNames;	// 0x3139d1b9
- (BOOL)_eapConfigIsValid:(id)valid error:(id *)error;	// 0x31399b5d
- (id)_eapPasswordFromConfig:(id)config isRequired:(BOOL *)required;	// 0x3139a6d9
- (id)_eapUsernameFromConfig:(id)config isRequired:(BOOL *)required;	// 0x3139a59d
- (BOOL)_isEAPSIMConfig:(id)config;	// 0x3139a815
// declared property getter: - (BOOL)autoJoin;	// 0x3139ce99
// declared property getter: - (id)certificateUUID;	// 0x3139ceb9
// declared property getter: - (id)credentialUUID;	// 0x3139d061
- (id)description;	// 0x3139c781
// declared property getter: - (id)displayedOperatorName;	// 0x3139d229
// declared property getter: - (id)domainName;	// 0x3139d0f1
// declared property getter: - (id)eapClientConfig;	// 0x3139cdb1
// declared property getter: - (id)encryptionType;	// 0x3139cd39
// declared property getter: - (BOOL)isHidden;	// 0x3139cd19
// declared property getter: - (BOOL)isHotspot;	// 0x3139d099
// declared property getter: - (BOOL)isServiceProviderRoamingEnabled;	// 0x3139d161
// declared property getter: - (BOOL)isWEP;	// 0x3139cd71
// declared property getter: - (BOOL)isWPA;	// 0x3139cd91
// declared property getter: - (id)password;	// 0x3139ce09
// declared property getter: - (BOOL)passwordRequired;	// 0x3139cde9
// declared property getter: - (id)payloadCertificateAnchorUUID;	// 0x3139cef1
// declared property getter: - (id)priority;	// 0x3139d0b9
// declared property getter: - (id)proxyPACURLString;	// 0x3139d029
// declared property getter: - (id)proxyPassword;	// 0x3139cff1
// declared property getter: - (id)proxyServer;	// 0x3139cf49
// declared property getter: - (id)proxyServerPort;	// 0x3139cf81
// declared property getter: - (int)proxyType;	// 0x3139cf29
// declared property getter: - (id)proxyUsername;	// 0x3139cfb9
// declared property getter: - (id)roamingConsortiumOIs;	// 0x3139d181
// declared property setter: - (void)setAutoJoin:(BOOL)join;	// 0x3139cea9
// declared property setter: - (void)setCertificateUUID:(id)uuid;	// 0x3139cec9
// declared property setter: - (void)setCredentialUUID:(id)uuid;	// 0x3139d071
// declared property setter: - (void)setDisplayedOperatorName:(id)name;	// 0x3139d239
// declared property setter: - (void)setDomainName:(id)name;	// 0x3139d101
// declared property setter: - (void)setEapClientConfig:(id)config;	// 0x3139cdc1
// declared property setter: - (void)setEncryptionType:(id)type;	// 0x3139cd49
// declared property setter: - (void)setHESSID:(id)hessid;	// 0x3139d139
// declared property setter: - (void)setIsHidden:(BOOL)hidden;	// 0x3139cd29
// declared property setter: - (void)setIsHotspot:(BOOL)hotspot;	// 0x3139d0a9
// declared property setter: - (void)setIsWEP:(BOOL)wep;	// 0x3139cd81
// declared property setter: - (void)setIsWPA:(BOOL)wpa;	// 0x3139cda1
// declared property setter: - (void)setMCCAndMNCs:(id)mncs;	// 0x3139d201
// declared property setter: - (void)setNAIRealmNames:(id)names;	// 0x3139d1c9
// declared property setter: - (void)setPassword:(id)password;	// 0x3139ce19
// declared property setter: - (void)setPasswordRequired:(BOOL)required;	// 0x3139cdf9
// declared property setter: - (void)setPayloadCertificateAnchorUUID:(id)uuid;	// 0x3139cf01
// declared property setter: - (void)setPriority:(id)priority;	// 0x3139d0c9
// declared property setter: - (void)setProxyPACURLString:(id)string;	// 0x3139d039
// declared property setter: - (void)setProxyPassword:(id)password;	// 0x3139d001
// declared property setter: - (void)setProxyServer:(id)server;	// 0x3139cf59
// declared property setter: - (void)setProxyServerPort:(id)port;	// 0x3139cf91
// declared property setter: - (void)setProxyType:(int)type;	// 0x3139cf39
// declared property setter: - (void)setProxyUsername:(id)username;	// 0x3139cfc9
// declared property setter: - (void)setRoamingConsortiumOIs:(id)ois;	// 0x3139d191
// declared property setter: - (void)setServiceProviderRoamingEnabled:(BOOL)enabled;	// 0x3139d171
// declared property setter: - (void)setSsid:(id)ssid;	// 0x3139ccf1
// declared property setter: - (void)setUsername:(id)username;	// 0x3139ce71
// declared property setter: - (void)setUsernameRequired:(BOOL)required;	// 0x3139ce51
// declared property getter: - (id)ssid;	// 0x3139cce1
- (id)stubDictionary;	// 0x3139c2a1
- (id)subtitle1Description;	// 0x3139c6dd
- (id)subtitle1Label;	// 0x3139c6cd
- (id)subtitle2Description;	// 0x3139c6fd
- (id)subtitle2Label;	// 0x3139c6ed
// declared property getter: - (id)username;	// 0x3139ce61
// declared property getter: - (BOOL)usernameRequired;	// 0x3139ce41
@end
