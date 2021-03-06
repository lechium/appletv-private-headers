/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DABookmarkDAV.framework/DABookmarkDAV
 */

#import <DAAccount.h> // Unknown library
#import "CoreDAVLogDelegate.h"
#import "CoreDAVDiscoveryTaskGroupDelegate.h"
#import "CoreDAVAccountInfoProvider.h"

@class BookmarkDAVTaskManager, CoreDAVDiscoveryTaskGroup, CoreDAVLogger;

@interface BookmarkDAVAccount : DAAccount <CoreDAVAccountInfoProvider, CoreDAVLogDelegate, CoreDAVDiscoveryTaskGroupDelegate> {
	BookmarkDAVTaskManager *_taskManager;	// 64 = 0x40
	CoreDAVDiscoveryTaskGroup *_checkValidityTaskGroup;	// 68 = 0x44
	CoreDAVLogger *_curLogger;	// 72 = 0x48
}
@property(assign) int bookmarkDAVAccountVersion;	// G=0x31d7c461; S=0x31d7c445; 
@property(retain) id host;	// G=0x31d7c5f1; S=0x31d7c575; converted property
@property(assign) int port;	// G=0x31d7c559; S=0x31d7c53d; converted property
@property(retain) id principalURL;	// G=0x31d7c761; S=0x31d7c799; converted property
@property(retain) id scheme;	// G=0x31d7c521; S=0x31d7c505; converted property
@property(retain) id serverComplianceClasses;	// G=0x31d7c0ad; S=0x31d7c0b1; converted property
@property(retain) id serverRoot;	// G=0x31d7c0a5; S=0x31d7c0a9; converted property
@property(readonly, retain) BookmarkDAVTaskManager *taskManager;	// G=0x31d7c829; converted property
@property(assign) BOOL useSSL;	// G=0x31d7c4e5; S=0x31d7c47d; converted property
@property(retain) id username;	// G=0x31d7c689; S=0x31d7c60d; converted property
+ (Class)accountClass;	// 0x31d7c8b5
+ (Class)clientClass;	// 0x31d7c895
+ (id)defaultProperties;	// 0x31d7c90d
+ (id)supportedDataclasses;	// 0x31d7c875
- (id)init;	// 0x31d7c8d5
- (id)initWithProperties:(id)properties;	// 0x31d7cbd9
- (BOOL)_upgradeSelfFromVersion:(int)version superClassUpgraded:(BOOL)upgraded;	// 0x31d7cd5d
- (id)_validationErrorFromRawError:(id)rawError;	// 0x31d7cfd9
- (BOOL)accountNeedsUpgrade;	// 0x31d7cc85
// declared property getter: - (int)bookmarkDAVAccountVersion;	// 0x31d7c461
- (void)checkValidityWithConsumer:(id)consumer;	// 0x31d7d1f5
- (void)coreDAVLogDiagnosticMessage:(id)message atLevel:(int)level;	// 0x31d7cc4d
- (int)coreDAVLogLevel;	// 0x31d7d601
- (void)coreDAVLogTransmittedDataPartial:(id)partial;	// 0x31d7c151
- (int)coreDAVOutputLevel;	// 0x31d7d60d
- (void)coreDAVTransmittedDataFinished;	// 0x31d7c115
- (void)dealloc;	// 0x31d7cb29
- (void)discoveryTask:(id)task gotAccountInfo:(id)info error:(id)error;	// 0x31d7ce75
- (BOOL)handleCertificateError:(id)error;	// 0x31d7c0d9
- (BOOL)handleTrustChallenge:(id)challenge;	// 0x31d7ca45
// converted property getter: - (id)host;	// 0x31d7c5f1
- (BOOL)isEqualToAccount:(id)account;	// 0x31d7c315
- (int)keychainAccessibilityType;	// 0x31d7d4c5
- (id)localizedIdenticalAccountFailureMessage;	// 0x31d7c2a5
- (id)localizedInvalidPasswordMessage;	// 0x31d7c1f9
- (void)noteHomeSetOnDifferentHost:(id)host;	// 0x31d7c6a5
// converted property getter: - (int)port;	// 0x31d7c559
// converted property getter: - (id)principalURL;	// 0x31d7c761
- (void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(id)completionBlock;	// 0x31d7c1ad
// converted property getter: - (id)scheme;	// 0x31d7c521
// converted property getter: - (id)serverComplianceClasses;	// 0x31d7c0ad
// converted property getter: - (id)serverRoot;	// 0x31d7c0a5
// declared property setter: - (void)setBookmarkDAVAccountVersion:(int)version;	// 0x31d7c445
// converted property setter: - (void)setHost:(id)host;	// 0x31d7c575
// converted property setter: - (void)setPort:(int)port;	// 0x31d7c53d
// converted property setter: - (void)setPrincipalURL:(id)url;	// 0x31d7c799
// converted property setter: - (void)setScheme:(id)scheme;	// 0x31d7c505
// converted property setter: - (void)setServerComplianceClasses:(id)classes;	// 0x31d7c0b1
// converted property setter: - (void)setServerRoot:(id)root;	// 0x31d7c0a9
- (void)setShouldFailAllTasks:(BOOL)failAllTasks;	// 0x31d7caed
// converted property setter: - (void)setUseSSL:(BOOL)ssl;	// 0x31d7c47d
// converted property setter: - (void)setUsername:(id)username;	// 0x31d7c60d
- (BOOL)shouldLogTransmittedData;	// 0x31d7d619
- (BOOL)supportsDataclass:(int)dataclass;	// 0x31d7c099
// converted property getter: - (id)taskManager;	// 0x31d7c829
- (BOOL)upgradeAccount;	// 0x31d7ca71
- (id)urlForKeychain;	// 0x31d7d4e9
// converted property getter: - (BOOL)useSSL;	// 0x31d7c4e5
- (id)userAgentHeader;	// 0x31d7d5d5
// converted property getter: - (id)username;	// 0x31d7c689
@end

