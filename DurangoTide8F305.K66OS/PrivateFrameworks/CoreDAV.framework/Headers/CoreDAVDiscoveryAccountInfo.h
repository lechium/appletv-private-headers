/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVAccountInfoProvider.h"
#import <NSObject.h> // Unknown library

@class NSURL, NSError, NSSet, NSString, NSData;

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
	NSSet *_serverComplianceClasses;	// 40 = 0x28
	NSString *_userAgentHeader;	// 44 = 0x2c
	BOOL _shouldFailAllTasks;	// 48 = 0x30
	BOOL _started;	// 49 = 0x31
	NSError *_error;	// 52 = 0x34
	id<CoreDAVAccountInfoProvider> _backingAccountInfoProvider;	// 56 = 0x38
}
@property(retain) NSString *accountID;	// G=0x3386bfc9; S=0x3386c1a1; @synthesize=_accountID
@property(retain) id<CoreDAVAccountInfoProvider> backingAccountInfoProvider;	// G=0x3386bfe1; S=0x3386c1cd; @synthesize=_backingAccountInfoProvider
@property(retain) NSError *error;	// G=0x3386bff9; S=0x3386c1f9; @synthesize=_error
@property(retain) NSString *host;	// G=0x3386bf39; S=0x3386c099; @synthesize=_host
@property(retain) NSData *identityPersist;	// G=0x3386bf99; S=0x3386c149; @synthesize=_identityPersist
@property(retain) NSString *password;	// G=0x3386bf81; S=0x3386c11d; @synthesize=_password
@property(assign) int port;	// G=0x3386ad95; S=0x3386ada5; @synthesize=_port
@property(retain) NSURL *principalURL;	// G=0x3386bfb1; S=0x3386c175; @synthesize=_principalURL
@property(retain) NSString *scheme;	// G=0x3386bf21; S=0x3386c06d; @synthesize=_scheme
@property(retain) NSSet *serverComplianceClasses;	// G=0x3386c011; S=0x3386c225; @synthesize=_serverComplianceClasses
@property(retain) NSString *serverRoot;	// G=0x3386bf51; S=0x3386c0c5; @synthesize=_serverRoot
@property(assign) BOOL shouldFailAllTasks;	// G=0x3386ad75; S=0x3386ad85; @synthesize=_shouldFailAllTasks
@property(assign) BOOL started;	// G=0x3386ad55; S=0x3386ad65; @synthesize=_started
@property(retain) NSString *user;	// G=0x3386bf69; S=0x3386c0f1; @synthesize=_user
@property(retain) NSString *userAgentHeader;	// G=0x3386c029; S=0x3386c251; @synthesize=_userAgentHeader
- (id)initWithAccountInfoProvider:(id)accountInfoProvider;	// 0x3386ba4d
// declared property getter: - (id)accountID;	// 0x3386bfc9
// declared property getter: - (id)backingAccountInfoProvider;	// 0x3386bfe1
- (void)dealloc;	// 0x3386b71d
- (id)description;	// 0x3386b54d
// declared property getter: - (id)error;	// 0x3386bff9
- (BOOL)handleAuthenticateAgainstProtectionSpace:(id)space;	// 0x3386be09
- (BOOL)handleAuthenticateAgainstProtectionSpace:(id)space withConnection:(id)connection;	// 0x3386bd6d
- (BOOL)handleCertificateError:(id)error;	// 0x3386b0ed
- (BOOL)handleShouldUseCredentialStorage;	// 0x3386b04d
- (BOOL)handleTrustChallenge:(id)challenge;	// 0x3386b179
- (BOOL)handleTrustChallenge:(id)challenge withConnection:(id)connection;	// 0x3386b111
// declared property getter: - (id)host;	// 0x3386bf39
// declared property getter: - (id)identityPersist;	// 0x3386bf99
- (id)mmeToken;	// 0x3386b19d
// declared property getter: - (id)password;	// 0x3386bf81
// declared property getter: - (int)port;	// 0x3386ad95
// declared property getter: - (id)principalURL;	// 0x3386bfb1
- (void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(id)completionBlock;	// 0x3386b1e1
// declared property getter: - (id)scheme;	// 0x3386bf21
// declared property getter: - (id)serverComplianceClasses;	// 0x3386c011
// declared property getter: - (id)serverRoot;	// 0x3386bf51
// declared property setter: - (void)setAccountID:(id)anId;	// 0x3386c1a1
// declared property setter: - (void)setBackingAccountInfoProvider:(id)provider;	// 0x3386c1cd
// declared property setter: - (void)setError:(id)error;	// 0x3386c1f9
// declared property setter: - (void)setHost:(id)host;	// 0x3386c099
// declared property setter: - (void)setIdentityPersist:(id)persist;	// 0x3386c149
// declared property setter: - (void)setPassword:(id)password;	// 0x3386c11d
// declared property setter: - (void)setPort:(int)port;	// 0x3386ada5
// declared property setter: - (void)setPrincipalURL:(id)url;	// 0x3386c175
// declared property setter: - (void)setScheme:(id)scheme;	// 0x3386c06d
// declared property setter: - (void)setServerComplianceClasses:(id)classes;	// 0x3386c225
// declared property setter: - (void)setServerRoot:(id)root;	// 0x3386c0c5
// declared property setter: - (void)setShouldFailAllTasks:(BOOL)failAllTasks;	// 0x3386ad85
// declared property setter: - (void)setStarted:(BOOL)started;	// 0x3386ad65
// declared property setter: - (void)setUser:(id)user;	// 0x3386c0f1
// declared property setter: - (void)setUserAgentHeader:(id)header;	// 0x3386c251
// declared property getter: - (BOOL)shouldFailAllTasks;	// 0x3386ad75
- (BOOL)shouldTurnModalOnBadPassword;	// 0x3386b09d
// declared property getter: - (BOOL)started;	// 0x3386ad55
- (id)url;	// 0x3386b205
// declared property getter: - (id)user;	// 0x3386bf69
// declared property getter: - (id)userAgentHeader;	// 0x3386c029
@end
