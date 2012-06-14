/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAV-Structs.h"
#import <NSObject.h> // Unknown library
#import "CoreDAVAccountInfoProvider.h"

@class NSData, NSString, NSError, NSSet, NSURL, NSDictionary;

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
@property(retain) NSString *accountID;	// G=0x30c9d2d1; S=0x30c9d2e5; @synthesize=_accountID
@property(retain) id<CoreDAVAccountInfoProvider> backingAccountInfoProvider;	// G=0x30c9d329; S=0x30c9d33d; @synthesize=_backingAccountInfoProvider
@property(retain) NSError *error;	// G=0x30c9d3a1; S=0x30c9d3b5; @synthesize=_error
@property(retain) NSString *host;	// G=0x30c9d161; S=0x30c9d175; @synthesize=_host
@property(retain) NSData *identityPersist;	// G=0x30c9d261; S=0x30c9d275; @synthesize=_identityPersist
@property(retain) NSString *password;	// G=0x30c9d229; S=0x30c9d23d; @synthesize=_password
@property(assign) int port;	// G=0x30c9d199; S=0x30c9d1a9; @synthesize=_port
@property(retain) NSURL *principalURL;	// G=0x30c9d299; S=0x30c9d2ad; @synthesize=_principalURL
@property(retain) NSString *scheme;	// G=0x30c9d129; S=0x30c9d13d; @synthesize=_scheme
@property(retain) NSSet *serverComplianceClasses;	// G=0x30c9d411; S=0x30c9d425; @synthesize=_serverComplianceClasses
@property(retain) NSDictionary *serverHeaders;	// G=0x30c9d3d9; S=0x30c9d3ed; @synthesize=_serverHeaders
@property(retain) NSString *serverRoot;	// G=0x30c9d1b9; S=0x30c9d1cd; @synthesize=_serverRoot
@property(assign) BOOL shouldFailAllTasks;	// G=0x30c9d309; S=0x30c9d319; @synthesize=_shouldFailAllTasks
@property(assign) BOOL started;	// G=0x30c9d361; S=0x30c9d371; @synthesize=_started
@property(assign) BOOL success;	// G=0x30c9d381; S=0x30c9d391; @synthesize=_success
@property(retain) NSString *user;	// G=0x30c9d1f1; S=0x30c9d205; @synthesize=_user
@property(retain) NSString *userAgentHeader;	// G=0x30c9d449; S=0x30c9d45d; @synthesize=_userAgentHeader
- (id)initWithAccountInfoProvider:(id)accountInfoProvider;	// 0x30c9c67d
// declared property getter: - (id)accountID;	// 0x30c9d2d1
- (id)additionalHeaderValues;	// 0x30c9cc35
// declared property getter: - (id)backingAccountInfoProvider;	// 0x30c9d329
- (CFURLStorageSessionRef)copyStorageSession;	// 0x30c9d099
- (void)dealloc;	// 0x30c9c7f9
- (id)description;	// 0x30c9c935
// declared property getter: - (id)error;	// 0x30c9d3a1
- (BOOL)handleAuthenticateAgainstProtectionSpace:(id)space;	// 0x30c9cdc5
- (BOOL)handleAuthenticateAgainstProtectionSpace:(id)space withConnection:(id)connection;	// 0x30c9cee9
- (BOOL)handleCertificateError:(id)error;	// 0x30c9cd45
- (BOOL)handleShouldUseCredentialStorage;	// 0x30c9cfa1
- (BOOL)handleTrustChallenge:(id)challenge;	// 0x30c9cc7d
- (BOOL)handleTrustChallenge:(id)challenge withConnection:(id)connection;	// 0x30c9ccd5
// declared property getter: - (id)host;	// 0x30c9d161
// declared property getter: - (id)identityPersist;	// 0x30c9d261
// declared property getter: - (id)password;	// 0x30c9d229
// declared property getter: - (int)port;	// 0x30c9d199
// declared property getter: - (id)principalURL;	// 0x30c9d299
- (void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(id)completionBlock;	// 0x30c9cc0d
// declared property getter: - (id)scheme;	// 0x30c9d129
// declared property getter: - (id)serverComplianceClasses;	// 0x30c9d411
// declared property getter: - (id)serverHeaders;	// 0x30c9d3d9
// declared property getter: - (id)serverRoot;	// 0x30c9d1b9
// declared property setter: - (void)setAccountID:(id)anId;	// 0x30c9d2e5
// declared property setter: - (void)setBackingAccountInfoProvider:(id)provider;	// 0x30c9d33d
// declared property setter: - (void)setError:(id)error;	// 0x30c9d3b5
// declared property setter: - (void)setHost:(id)host;	// 0x30c9d175
// declared property setter: - (void)setIdentityPersist:(id)persist;	// 0x30c9d275
// declared property setter: - (void)setPassword:(id)password;	// 0x30c9d23d
// declared property setter: - (void)setPort:(int)port;	// 0x30c9d1a9
// declared property setter: - (void)setPrincipalURL:(id)url;	// 0x30c9d2ad
// declared property setter: - (void)setScheme:(id)scheme;	// 0x30c9d13d
// declared property setter: - (void)setServerComplianceClasses:(id)classes;	// 0x30c9d425
// declared property setter: - (void)setServerHeaders:(id)headers;	// 0x30c9d3ed
// declared property setter: - (void)setServerRoot:(id)root;	// 0x30c9d1cd
// declared property setter: - (void)setShouldFailAllTasks:(BOOL)failAllTasks;	// 0x30c9d319
// declared property setter: - (void)setStarted:(BOOL)started;	// 0x30c9d371
// declared property setter: - (void)setSuccess:(BOOL)success;	// 0x30c9d391
// declared property setter: - (void)setUser:(id)user;	// 0x30c9d205
// declared property setter: - (void)setUserAgentHeader:(id)header;	// 0x30c9d45d
// declared property getter: - (BOOL)shouldFailAllTasks;	// 0x30c9d309
- (BOOL)shouldHandleHTTPCookiesForURL:(id)url;	// 0x30c9cfe9
- (BOOL)shouldRetryUnauthorizedConnection:(id)connection;	// 0x30c9cd6d
- (BOOL)shouldSendClientInfoHeaderForURL:(id)url;	// 0x30c9d041
- (BOOL)shouldTurnModalOnBadPassword;	// 0x30c9cd69
- (BOOL)shouldUseOpportunisticSockets;	// 0x30c9d0e1
// declared property getter: - (BOOL)started;	// 0x30c9d361
// declared property getter: - (BOOL)success;	// 0x30c9d381
- (id)url;	// 0x30c9cb3d
// declared property getter: - (id)user;	// 0x30c9d1f1
// declared property getter: - (id)userAgentHeader;	// 0x30c9d449
@end
