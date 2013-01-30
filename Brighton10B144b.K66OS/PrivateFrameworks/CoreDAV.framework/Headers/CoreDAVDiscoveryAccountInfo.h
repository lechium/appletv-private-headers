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
@property(retain) NSString *accountID;	// G=0x336fcfc9; S=0x336fcfdd; @synthesize=_accountID
@property(retain) id<CoreDAVAccountInfoProvider> backingAccountInfoProvider;	// G=0x336fd01d; S=0x336fd031; @synthesize=_backingAccountInfoProvider
@property(retain) NSError *error;	// G=0x336fd0a1; S=0x336fd0b5; @synthesize=_error
@property(retain) NSString *host;	// G=0x336fcec5; S=0x336fced9; @synthesize=_host
@property(retain) NSData *identityPersist;	// G=0x336fcf81; S=0x336fcf95; @synthesize=_identityPersist
@property(retain) NSString *password;	// G=0x336fcf5d; S=0x336fcf71; @synthesize=_password
@property(assign) int port;	// G=0x336fcee9; S=0x336fcefd; @synthesize=_port
@property(retain) NSURL *principalURL;	// G=0x336fcfa5; S=0x336fcfb9; @synthesize=_principalURL
@property(retain) NSString *scheme;	// G=0x336fcea1; S=0x336fceb5; @synthesize=_scheme
@property(retain) NSSet *serverComplianceClasses;	// G=0x336fd0e9; S=0x336fd0fd; @synthesize=_serverComplianceClasses
@property(retain) NSDictionary *serverHeaders;	// G=0x336fd0c5; S=0x336fd0d9; @synthesize=_serverHeaders
@property(retain) NSString *serverRoot;	// G=0x336fcf15; S=0x336fcf29; @synthesize=_serverRoot
@property(assign) BOOL shouldFailAllTasks;	// G=0x336fcfed; S=0x336fd005; @synthesize=_shouldFailAllTasks
@property(assign) BOOL started;	// G=0x336fd041; S=0x336fd059; @synthesize=_started
@property(assign) BOOL success;	// G=0x336fd071; S=0x336fd089; @synthesize=_success
@property(retain) NSString *user;	// G=0x336fcf39; S=0x336fcf4d; @synthesize=_user
@property(retain) NSString *userAgentHeader;	// G=0x336fd10d; S=0x336fd121; @synthesize=_userAgentHeader
- (id)initWithAccountInfoProvider:(id)accountInfoProvider;	// 0x336fc379
// declared property getter: - (id)accountID;	// 0x336fcfc9
- (id)additionalHeaderValues;	// 0x336fc941
// declared property getter: - (id)backingAccountInfoProvider;	// 0x336fd01d
- (CFURLStorageSessionRef)copyStorageSession;	// 0x336fce11
- (void)dealloc;	// 0x336fc4f5
- (id)description;	// 0x336fc635
// declared property getter: - (id)error;	// 0x336fd0a1
- (BOOL)handleAuthenticateAgainstProtectionSpace:(id)space;	// 0x336fcb09
- (BOOL)handleAuthenticateAgainstProtectionSpace:(id)space withConnection:(id)connection;	// 0x336fcc71
- (BOOL)handleCertificateError:(id)error;	// 0x336fca8d
- (BOOL)handleShouldUseCredentialStorage;	// 0x336fcd21
- (BOOL)handleTrustChallenge:(id)challenge;	// 0x336fc9d1
- (BOOL)handleTrustChallenge:(id)challenge withConnection:(id)connection;	// 0x336fca25
// declared property getter: - (id)host;	// 0x336fcec5
// declared property getter: - (id)identityPersist;	// 0x336fcf81
- (id)oauthToken;	// 0x336fc989
// declared property getter: - (id)password;	// 0x336fcf5d
// declared property getter: - (int)port;	// 0x336fcee9
// declared property getter: - (id)principalURL;	// 0x336fcfa5
- (void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(id)completionBlock;	// 0x336fc915
// declared property getter: - (id)scheme;	// 0x336fcea1
// declared property getter: - (id)serverComplianceClasses;	// 0x336fd0e9
// declared property getter: - (id)serverHeaders;	// 0x336fd0c5
// declared property getter: - (id)serverRoot;	// 0x336fcf15
// declared property setter: - (void)setAccountID:(id)anId;	// 0x336fcfdd
// declared property setter: - (void)setBackingAccountInfoProvider:(id)provider;	// 0x336fd031
// declared property setter: - (void)setError:(id)error;	// 0x336fd0b5
// declared property setter: - (void)setHost:(id)host;	// 0x336fced9
// declared property setter: - (void)setIdentityPersist:(id)persist;	// 0x336fcf95
// declared property setter: - (void)setPassword:(id)password;	// 0x336fcf71
// declared property setter: - (void)setPort:(int)port;	// 0x336fcefd
// declared property setter: - (void)setPrincipalURL:(id)url;	// 0x336fcfb9
// declared property setter: - (void)setScheme:(id)scheme;	// 0x336fceb5
// declared property setter: - (void)setServerComplianceClasses:(id)classes;	// 0x336fd0fd
// declared property setter: - (void)setServerHeaders:(id)headers;	// 0x336fd0d9
// declared property setter: - (void)setServerRoot:(id)root;	// 0x336fcf29
// declared property setter: - (void)setShouldFailAllTasks:(BOOL)failAllTasks;	// 0x336fd005
// declared property setter: - (void)setStarted:(BOOL)started;	// 0x336fd059
// declared property setter: - (void)setSuccess:(BOOL)success;	// 0x336fd089
// declared property setter: - (void)setUser:(id)user;	// 0x336fcf4d
// declared property setter: - (void)setUserAgentHeader:(id)header;	// 0x336fd121
// declared property getter: - (BOOL)shouldFailAllTasks;	// 0x336fcfed
- (BOOL)shouldHandleHTTPCookiesForURL:(id)url;	// 0x336fcd69
- (BOOL)shouldRetryUnauthorizedConnection:(id)connection;	// 0x336fcab5
- (BOOL)shouldSendClientInfoHeaderForURL:(id)url;	// 0x336fcdbd
- (BOOL)shouldTurnModalOnBadPassword;	// 0x336fcab1
- (BOOL)shouldUseOpportunisticSockets;	// 0x336fce59
// declared property getter: - (BOOL)started;	// 0x336fd041
// declared property getter: - (BOOL)success;	// 0x336fd071
- (id)url;	// 0x336fc841
// declared property getter: - (id)user;	// 0x336fcf39
// declared property getter: - (id)userAgentHeader;	// 0x336fd10d
@end
