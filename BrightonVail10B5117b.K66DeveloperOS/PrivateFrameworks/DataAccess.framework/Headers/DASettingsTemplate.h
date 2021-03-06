/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <NSObject.h> // Unknown library

@class NSArray, NSString;

@interface DASettingsTemplate : NSObject {
	NSString *_name;	// 4 = 0x4
	int _order;	// 8 = 0x8
	NSString *_primaryDomain;	// 12 = 0xc
	NSArray *_domainAliasPatterns;	// 16 = 0x10
	NSString *_primaryUsernameDomain;	// 20 = 0x14
	int _httpPort;	// 24 = 0x18
	int _httpsPort;	// 28 = 0x1c
	int _port;	// 32 = 0x20
	NSString *_pathFormat;	// 36 = 0x24
	BOOL _isDefaultTemplate;	// 40 = 0x28
	BOOL _defaultUseSSL;	// 41 = 0x29
}
@property(readonly, assign, nonatomic) int defaultPort;	// G=0x33b4bf49; 
@property(readonly, assign, nonatomic) NSString *defaultScheme;	// G=0x33b4bf15; 
@property(assign, nonatomic) BOOL defaultUseSSL;	// G=0x33b4d7f1; S=0x33b4d801; @synthesize=_defaultUseSSL
@property(retain, nonatomic) NSArray *domainAliasPatterns;	// G=0x33b4d721; S=0x33b4d731; @synthesize=_domainAliasPatterns
@property(assign, nonatomic) int httpPort;	// G=0x33b4d761; S=0x33b4d771; @synthesize=_httpPort
@property(assign, nonatomic) int httpsPort;	// G=0x33b4d781; S=0x33b4d791; @synthesize=_httpsPort
@property(assign) BOOL isDefaultTemplate;	// G=0x33b4d7c1; S=0x33b4d7d9; @synthesize=_isDefaultTemplate
@property(retain, nonatomic) NSString *name;	// G=0x33b4d6c1; S=0x33b4d6d1; @synthesize=_name
@property(assign, nonatomic) int order;	// G=0x33b4d6e1; S=0x33b4d6f1; @synthesize=_order
@property(retain, nonatomic) NSString *pathFormat;	// G=0x33b4d7a1; S=0x33b4d7b1; @synthesize=_pathFormat
@property(retain, nonatomic) NSString *primaryDomain;	// G=0x33b4d701; S=0x33b4d711; @synthesize=_primaryDomain
@property(retain, nonatomic) NSString *primaryUsernameDomain;	// G=0x33b4d741; S=0x33b4d751; @synthesize=_primaryUsernameDomain
+ (BOOL)_isValidPort:(int)port;	// 0x33b4d3b9
+ (id)defaultTemplate;	// 0x33b4b5ed
+ (id)knownTemplates;	// 0x33b4b5a5
+ (BOOL)requiresPathFormat;	// 0x33b4b635
+ (BOOL)requiresPorts;	// 0x33b4b639
+ (id)templateWithDomain:(id)domain;	// 0x33b4b63d
- (void)initAccount:(id)account;	// 0x33b4c081
- (void)_appendPrimarySuffixToUsernameIfNeeded:(id)usernameIfNeeded;	// 0x33b4d3cd
- (id)_initWithName:(id)name plist:(id)plist;	// 0x33b4b7dd
- (BOOL)_isDomainInAliases:(id)aliases;	// 0x33b4bf89
- (BOOL)_isPrincipalPathCustomForAccount:(id)account;	// 0x33b4d54d
- (id)_principalPathForAccount:(id)account;	// 0x33b4d5d1
- (void)_setPrincipalURLForAccount:(id)account;	// 0x33b4d061
- (int)compare:(id)compare;	// 0x33b4be95
- (void)dealloc;	// 0x33b4bd59
// declared property getter: - (int)defaultPort;	// 0x33b4bf49
// declared property getter: - (id)defaultScheme;	// 0x33b4bf15
// declared property getter: - (BOOL)defaultUseSSL;	// 0x33b4d7f1
- (id)description;	// 0x33b4d65d
- (id)descriptionForAccount:(id)account;	// 0x33b4d4e9
// declared property getter: - (id)domainAliasPatterns;	// 0x33b4d721
- (unsigned)hash;	// 0x33b4bdf9
// declared property getter: - (int)httpPort;	// 0x33b4d761
// declared property getter: - (int)httpsPort;	// 0x33b4d781
// declared property getter: - (BOOL)isDefaultTemplate;	// 0x33b4d7c1
- (BOOL)isEqual:(id)equal;	// 0x33b4be21
// declared property getter: - (id)name;	// 0x33b4d6c1
// declared property getter: - (int)order;	// 0x33b4d6e1
// declared property getter: - (id)pathFormat;	// 0x33b4d7a1
// declared property getter: - (id)primaryDomain;	// 0x33b4d701
// declared property getter: - (id)primaryUsernameDomain;	// 0x33b4d741
// declared property setter: - (void)setDefaultUseSSL:(BOOL)ssl;	// 0x33b4d801
- (void)setDomain:(id)domain forAccount:(id)account;	// 0x33b4c14d
// declared property setter: - (void)setDomainAliasPatterns:(id)patterns;	// 0x33b4d731
// declared property setter: - (void)setHttpPort:(int)port;	// 0x33b4d771
// declared property setter: - (void)setHttpsPort:(int)port;	// 0x33b4d791
// declared property setter: - (void)setIsDefaultTemplate:(BOOL)aTemplate;	// 0x33b4d7d9
// declared property setter: - (void)setName:(id)name;	// 0x33b4d6d1
// declared property setter: - (void)setOrder:(int)order;	// 0x33b4d6f1
// declared property setter: - (void)setPathFormat:(id)format;	// 0x33b4d7b1
- (void)setPort:(int)port forAccount:(id)account;	// 0x33b4c9b9
// declared property setter: - (void)setPrimaryDomain:(id)domain;	// 0x33b4d711
// declared property setter: - (void)setPrimaryUsernameDomain:(id)domain;	// 0x33b4d751
- (void)setPrincipalURLForAccount:(id)account toURL:(id)url;	// 0x33b4d04d
- (void)setURL:(id)url forAccount:(id)account;	// 0x33b4cb81
- (void)setUseSSL:(BOOL)ssl forAccount:(id)account;	// 0x33b4c7b5
- (void)setUsername:(id)username forAccount:(id)account;	// 0x33b4c5bd
@end

