/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DABookmarkDAV.framework/DABookmarkDAV
 */

#import <DAAccount.h> // Unknown library
#import "CoreDAVAccountInfoProvider.h"
#import "CoreDAVLogDelegate.h"
#import "CoreDAVDiscoveryTaskGroupDelegate.h"

@class DACoreDAVTaskManager, CoreDAVDiscoveryTaskGroup, DACoreDAVLogger;

@interface BookmarkDAVAccount : DAAccount <CoreDAVAccountInfoProvider, CoreDAVLogDelegate, CoreDAVDiscoveryTaskGroupDelegate> {
	DACoreDAVTaskManager *_taskManager;	// 60 = 0x3c
	CoreDAVDiscoveryTaskGroup *_checkValidityTaskGroup;	// 64 = 0x40
	DACoreDAVLogger *_curLogger;	// 68 = 0x44
}
@property(assign) int bookmarkDAVAccountVersion;	// G=0x32e1a6e1; S=0x32e1a6fd; 
@property(retain) id host;	// G=0x32e1a4c5; S=0x32e1a4e1; converted property
@property(assign) int port;	// G=0x32e1a55d; S=0x32e1a579; converted property
@property(retain) id principalURL;	// G=0x32e1a30d; S=0x32e1a26d; converted property
@property(retain) id scheme;	// G=0x32e1a595; S=0x32e1a5b1; converted property
@property(retain) id serverComplianceClasses;	// G=0x32e1aa11; S=0x32e1aa15; converted property
@property(retain) id serverRoot;	// G=0x32e1a6d9; S=0x32e1a6dd; converted property
@property(readonly, retain) DACoreDAVTaskManager *taskManager;	// G=0x32e19d25; converted property
@property(assign) BOOL useSSL;	// G=0x32e1a679; S=0x32e1a6a9; converted property
@property(retain) id username;	// G=0x32e1a42d; S=0x32e1a449; converted property
+ (Class)accountClass;	// 0x32e1959d
+ (Class)clientClass;	// 0x32e195b9
+ (id)defaultProperties;	// 0x32e19299
+ (id)supportedDataclasses;	// 0x32e195d5
- (id)init;	// 0x32e193e5
- (id)initWithProperties:(id)properties;	// 0x32e19425
- (id)_oldURLsForKeychain;	// 0x32e19ddd
- (BOOL)_upgradeSelfFromVersion:(int)version superClassUpgraded:(BOOL)upgraded;	// 0x32e19f09
- (id)_validationErrorFromRawError:(id)rawError;	// 0x32e19985
- (BOOL)accountNeedsUpgrade;	// 0x32e1a179
// declared property getter: - (int)bookmarkDAVAccountVersion;	// 0x32e1a6e1
- (void)checkValidityWithConsumer:(id)consumer;	// 0x32e19601
- (void)coreDAVLogDiagnosticMessage:(id)message atLevel:(int)level;	// 0x32e1ab2d
- (int)coreDAVLogLevel;	// 0x32e1ab0d
- (void)coreDAVLogTransmittedDataPartial:(id)partial;	// 0x32e1ab95
- (int)coreDAVOutputLevel;	// 0x32e1ab25
- (void)coreDAVTransmittedDataFinished;	// 0x32e1abb5
- (void)dealloc;	// 0x32e194e1
- (void)discoveryTask:(id)task gotAccountInfo:(id)info error:(id)error;	// 0x32e19ba1
- (BOOL)handleCertificateError:(id)error;	// 0x32e1ab09
- (BOOL)handleTrustChallenge:(id)challenge;	// 0x32e1aad9
// converted property getter: - (id)host;	// 0x32e1a4c5
- (BOOL)isEqualToAccount:(id)account;	// 0x32e1a719
- (id)localizedIdenticalAccountFailureMessage;	// 0x32e1a8e9
- (id)localizedInvalidPasswordMessage;	// 0x32e1a961
- (void)noteHomeSetOnDifferentHost:(id)host;	// 0x32e1a36d
// converted property getter: - (int)port;	// 0x32e1a55d
// converted property getter: - (id)principalURL;	// 0x32e1a30d
- (void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(id)completionBlock;	// 0x32e1aa45
// converted property getter: - (id)scheme;	// 0x32e1a595
// converted property getter: - (id)serverComplianceClasses;	// 0x32e1aa11
// converted property getter: - (id)serverRoot;	// 0x32e1a6d9
// declared property setter: - (void)setBookmarkDAVAccountVersion:(int)version;	// 0x32e1a6fd
// converted property setter: - (void)setHost:(id)host;	// 0x32e1a4e1
// converted property setter: - (void)setPort:(int)port;	// 0x32e1a579
// converted property setter: - (void)setPrincipalURL:(id)url;	// 0x32e1a26d
// converted property setter: - (void)setScheme:(id)scheme;	// 0x32e1a5b1
// converted property setter: - (void)setServerComplianceClasses:(id)classes;	// 0x32e1aa15
// converted property setter: - (void)setServerRoot:(id)root;	// 0x32e1a6dd
- (void)setShouldFailAllTasks:(BOOL)failAllTasks;	// 0x32e19941
// converted property setter: - (void)setUseSSL:(BOOL)ssl;	// 0x32e1a6a9
// converted property setter: - (void)setUsername:(id)username;	// 0x32e1a449
- (BOOL)shouldLogTransmittedData;	// 0x32e1ab71
- (id)spinnerIdentifiers;	// 0x32e1aa1d
- (id)stateString;	// 0x32e19d75
- (BOOL)supportsDADataclass:(int)dataclass;	// 0x32e195f5
// converted property getter: - (id)taskManager;	// 0x32e19d25
- (BOOL)upgradeAccount;	// 0x32e1a0f1
// converted property getter: - (BOOL)useSSL;	// 0x32e1a679
- (id)userAgentHeader;	// 0x32e1aa19
// converted property getter: - (id)username;	// 0x32e1a42d
@end

