/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVAccountInfoProvider.h"
#import "CoreDAV-Structs.h"
#import <NSObject.h> // Unknown library

@class NSError, NSSet, NSURL, NSData, NSString, NSDictionary;

@interface CoreDAVDiscoveryAccountInfo : NSObject <CoreDAVAccountInfoProvider> {
	NSString *_scheme;	// 4 = 0x4
	NSString *_host;	// 8 = 0x8
	NSString *_serverRoot;	// 12 = 0xc
	int _port;	// 16 = 0x10
	NSString *_user;	// 20 = 0x14
	NSString *_password;	// 24 = 0x18
	NSData *_identityPersist;	// 28 = 0x1c
	NSURL *_principalURL;	// 32 = 0x20
	NSString *_accountID;	// 36 = 0x24
	NSDictionary *_serverHeaders;	// 40 = 0x28
	NSSet *_serverComplianceClasses;	// 44 = 0x2c
	NSString *_userAgentHeader;	// 48 = 0x30
	BOOL _shouldFailAllTasks;	// 52 = 0x34
	BOOL _started;	// 53 = 0x35
	BOOL _success;	// 54 = 0x36
	NSError *_error;	// 56 = 0x38
	id<CoreDAVAccountInfoProvider> _backingAccountInfoProvider;	// 60 = 0x3c
}
@property(retain) NSString *accountID;	// G=0x336fdfc9; S=0x336fdfdd; @synthesize=_accountID
@property(retain) id<CoreDAVAccountInfoProvider> backingAccountInfoProvider;	// G=0x336fe01d; S=0x336fe031; @synthesize=_backingAccountInfoProvider
@property(retain) NSError *error;	// G=0x336fe0a1; S=0x336fe0b5; @synthesize=_error
@property(retain) NSString *host;	// G=0x336fdec5; S=0x336fded9; @synthesize=_host
@property(retain) NSData *identityPersist;	// G=0x336fdf81; S=0x336fdf95; @synthesize=_identityPersist
@property(retain) NSString *password;	// G=0x336fdf5d; S=0x336fdf71; @synthesize=_password
@property(assign) int port;	// G=0x336fdee9; S=0x336fdefd; @synthesize=_port
@property(retain) NSURL *principalURL;	// G=0x336fdfa5; S=0x336fdfb9; @synthesize=_principalURL
@property(retain) NSString *scheme;	// G=0x336fdea1; S=0x336fdeb5; @synthesize=_scheme
@property(retain) NSSet *serverComplianceClasses;	// G=0x336fe0e9; S=0x336fe0fd; @synthesize=_serverComplianceClasses
@property(retain) NSDictionary *serverHeaders;	// G=0x336fe0c5; S=0x336fe0d9; @synthesize=_serverHeaders
@property(retain) NSString *serverRoot;	// G=0x336fdf15; S=0x336fdf29; @synthesize=_serverRoot
@property(assign) BOOL shouldFailAllTasks;	// G=0x336fdfed; S=0x336fe005; @synthesize=_shouldFailAllTasks
@property(assign) BOOL started;	// G=0x336fe041; S=0x336fe059; @synthesize=_started
@property(assign) BOOL success;	// G=0x336fe071; S=0x336fe089; @synthesize=_success
@property(retain) NSString *user;	// G=0x336fdf39; S=0x336fdf4d; @synthesize=_user
@property(retain) NSString *userAgentHeader;	// G=0x336fe10d; S=0x336fe121; @synthesize=_userAgentHeader
- (id)initWithAccountInfoProvider:(id)accountInfoProvider;	// 0x336fd379
// declared property getter: - (id)accountID;	// 0x336fdfc9
- (id)additionalHeaderValues;	// 0x336fd941
// declared property getter: - (id)backingAccountInfoProvider;	// 0x336fe01d
- (CFURLStorageSessionRef)copyStorageSession;	// 0x336fde11
- (void)dealloc;	// 0x336fd4f5
- (id)description;	// 0x336fd635
// declared property getter: - (id)error;	// 0x336fe0a1
- (BOOL)handleAuthenticateAgainstProtectionSpace:(id)space;	// 0x336fdb09
- (BOOL)handleAuthenticateAgainstProtectionSpace:(id)space withConnection:(id)connection;	// 0x336fdc71
- (BOOL)handleCertificateError:(id)error;	// 0x336fda8d
- (BOOL)handleShouldUseCredentialStorage;	// 0x336fdd21
- (BOOL)handleTrustChallenge:(id)challenge;	// 0x336fd9d1
- (BOOL)handleTrustChallenge:(id)challenge withConnection:(id)connection;	// 0x336fda25
// declared property getter: - (id)host;	// 0x336fdec5
// declared property getter: - (id)identityPersist;	// 0x336fdf81
- (id)oauthToken;	// 0x336fd989
// declared property getter: - (id)password;	// 0x336fdf5d
// declared property getter: - (int)port;	// 0x336fdee9
// declared property getter: - (id)principalURL;	// 0x336fdfa5
- (void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(id)completionBlock;	// 0x336fd915
// declared property getter: - (id)scheme;	// 0x336fdea1
// declared property getter: - (id)serverComplianceClasses;	// 0x336fe0e9
// declared property getter: - (id)serverHeaders;	// 0x336fe0c5
// declared property getter: - (id)serverRoot;	// 0x336fdf15
// declared property setter: - (void)setAccountID:(id)anId;	// 0x336fdfdd
// declared property setter: - (void)setBackingAccountInfoProvider:(id)provider;	// 0x336fe031
// declared property setter: - (void)setError:(id)error;	// 0x336fe0b5
// declared property setter: - (void)setHost:(id)host;	// 0x336fded9
// declared property setter: - (void)setIdentityPersist:(id)persist;	// 0x336fdf95
// declared property setter: - (void)setPassword:(id)password;	// 0x336fdf71
// declared property setter: - (void)setPort:(int)port;	// 0x336fdefd
// declared property setter: - (void)setPrincipalURL:(id)url;	// 0x336fdfb9
// declared property setter: - (void)setScheme:(id)scheme;	// 0x336fdeb5
// declared property setter: - (void)setServerComplianceClasses:(id)classes;	// 0x336fe0fd
// declared property setter: - (void)setServerHeaders:(id)headers;	// 0x336fe0d9
// declared property setter: - (void)setServerRoot:(id)root;	// 0x336fdf29
// declared property setter: - (void)setShouldFailAllTasks:(BOOL)failAllTasks;	// 0x336fe005
// declared property setter: - (void)setStarted:(BOOL)started;	// 0x336fe059
// declared property setter: - (void)setSuccess:(BOOL)success;	// 0x336fe089
// declared property setter: - (void)setUser:(id)user;	// 0x336fdf4d
// declared property setter: - (void)setUserAgentHeader:(id)header;	// 0x336fe121
// declared property getter: - (BOOL)shouldFailAllTasks;	// 0x336fdfed
- (BOOL)shouldHandleHTTPCookiesForURL:(id)url;	// 0x336fdd69
- (BOOL)shouldRetryUnauthorizedConnection:(id)connection;	// 0x336fdab5
- (BOOL)shouldSendClientInfoHeaderForURL:(id)url;	// 0x336fddbd
- (BOOL)shouldTurnModalOnBadPassword;	// 0x336fdab1
- (BOOL)shouldUseOpportunisticSockets;	// 0x336fde59
// declared property getter: - (BOOL)started;	// 0x336fe041
// declared property getter: - (BOOL)success;	// 0x336fe071
- (id)url;	// 0x336fd841
// declared property getter: - (id)user;	// 0x336fdf39
// declared property getter: - (id)userAgentHeader;	// 0x336fe10d
@end

