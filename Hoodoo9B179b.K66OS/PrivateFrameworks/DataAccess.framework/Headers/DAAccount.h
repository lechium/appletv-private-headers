/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <BasicAccount.h> // Unknown library
#import "DataAccess-Structs.h"
#import "AccountCreationProtocol.h"
#import "BasicAccountSyncing.h"
#import "AccountFullAccountProtocol.h"

@class NSMutableDictionary, DAStatusReport, NSString, NSData, NSURL, NSArray, DASettingsTemplate;

@interface DAAccount : BasicAccount <AccountFullAccountProtocol, AccountCreationProtocol, BasicAccountSyncing> {
	int _dataclasses;	// 24 = 0x18
	BOOL _hasDirtyBits;	// 28 = 0x1c
	BOOL _hasInitted;	// 29 = 0x1d
	BOOL _shouldAutodiscoverPrincipalURL;	// 30 = 0x1e
	BOOL _shouldPromptForPassword;	// 31 = 0x1f
	BOOL _shouldFailAllTasks;	// 32 = 0x20
	BOOL _shouldUseOpportunisticSockets;	// 33 = 0x21
	int _originalDataclasses;	// 36 = 0x24
	CFDictionaryRef _changeTypesByDataclass;	// 40 = 0x28
	NSMutableDictionary *_haveWarnedAboutCertDict;	// 44 = 0x2c
	DASettingsTemplate *_settingsTemplate;	// 48 = 0x30
	DAStatusReport *_statusReport;	// 52 = 0x34
	CFDictionaryRef _consumers;	// 56 = 0x38
	CFURLStorageSessionRef _storageSession;	// 60 = 0x3c
}
@property(copy) NSString *accountDescription;	// G=0x3118a939; S=0x3118b039; 
@property(assign, setter=setDAAccountVersion:) int daAccountVersion;	// G=0x3118a5ad; S=0x3118cb51; 
@property(copy) NSString *emailAddress;	// G=0x3118c005; S=0x3118c051; 
@property(copy) NSArray *emailAddresses;	// G=0x3118c099; S=0x3118c0d1; 
@property(readonly, assign) int enabledDataclassesBitmask;	// G=0x3118d081; @synthesize=_dataclasses
@property(retain) NSData *encryptionIdentityPersistentReference;	// G=0x3118c26d; 
@property(readonly, assign) BOOL hasDirtyBits;	// G=0x3118c551; converted property
@property(copy) NSString *host;	// G=0x3118bedd; S=0x3118bf29; 
@property(readonly, assign) NSData *identityPersist;	// G=0x3118c7c9; 
@property(readonly, assign) BOOL isChildAccount;	// G=0x3118caf5; 
@property(copy) NSString *password;	// G=0x3118bc19; S=0x3118bd61; 
@property(readonly, assign) NSString *persistentUUID;	// G=0x3118a40d; 
@property(assign) int port;	// G=0x3118c301; S=0x3118c34d; 
@property(copy) NSURL *principalURL;	// G=0x3118c475; S=0x3118c4c1; 
@property(readonly, assign, nonatomic) NSString *scheduleIdentifier;	// G=0x3118affd; 
@property(copy) NSString *scheme;	// G=0x3118c3e1; S=0x3118c42d; 
@property(retain) DASettingsTemplate *settingsTemplate;	// G=0x3118d0b1; S=0x3118d0c5; @synthesize=_settingsTemplate
@property(assign) BOOL shouldAutodiscoverPrincipalURL;	// G=0x3118d091; S=0x3118d0a1; @synthesize=_shouldAutodiscoverPrincipalURL
@property(assign) BOOL shouldFailAllTasks;	// G=0x3118d0f9; S=0x3118d109; @synthesize=_shouldFailAllTasks
@property(assign) BOOL shouldPromptForPassword;	// G=0x3118bbf9; S=0x3118bc09; 
@property(assign) BOOL shouldUseOpportunisticSockets;	// G=0x3118d119; S=0x3118d129; @synthesize=_shouldUseOpportunisticSockets
@property(retain) NSData *signingIdentityPersistentReference;	// G=0x3118c1d9; 
@property(readonly, assign) DAStatusReport *statusReport;	// G=0x3118d0e9; @synthesize=_statusReport
@property(readonly, assign) NSString *tag;	// G=0x3118b00d; 
@property(assign) int toDosNumberOfPastDaysToSync;	// G=0x31198645; S=0x31198649; converted property
@property(assign) BOOL useSSL;	// G=0x3118bf71; S=0x3118bfbd; 
@property(copy) NSString *user;	// G=0x3118bebd; S=0x3118becd; 
@property(copy) NSString *username;	// G=0x3118be29; S=0x3118be75; 
@property(retain) id version;	// G=0x3118bd95; S=0x3118bde1; converted property
+ (Class)accountClass;	// 0x3118af1d
+ (Class)accountClassWithProperties:(id)properties;	// 0x3118b3f9
+ (id)basicAccountProperties;	// 0x3118ad99
+ (Class)classForAccountType:(id)accountType;	// 0x3118b4c1
+ (Class)clientClass;	// 0x3118b429
+ (Class)daemonClass;	// 0x3118b475
+ (id)defaultProperties;	// 0x3118caf9
+ (id)newAccountOfAccountType:(id)accountType;	// 0x3118cafd
- (id)init;	// 0x3118ae75
- (id)initWithProperties:(id)properties;	// 0x3118a051
- (int)_actionForTrust:(SecTrust *)trust host:(id)host service:(id)service;	// 0x3118d139
- (id)_exceptionsDict;	// 0x3118c905
- (void)_handlePasswordNotification:(CFUserNotificationRef)notification response:(unsigned long)response callback:(id)callback;	// 0x3118e5ed
- (BOOL)_isIdentityManagedByProfile;	// 0x3118c8c5
- (void)_removeHostsToTrust;	// 0x3118b945
- (id)_serverSuffixesToAlwaysFail;	// 0x3118d239
- (void)_setPersistentUUID:(id)uuid;	// 0x3118b01d
- (void)_setProperties:(id)properties;	// 0x3118c509
- (BOOL)_upgradeSelfFromPreKirkwood;	// 0x3118ba4d
- (BOOL)accountBoolPropertyForKey:(id)key;	// 0x3118b4f9
- (int)accountChangeTypeForDataclass:(int)dataclass;	// 0x3118b381
- (BOOL)accountContainsEmailAddress:(id)address;	// 0x3118c119
// declared property getter: - (id)accountDescription;	// 0x3118a939
- (id)accountID;	// 0x3118a351
- (int)accountIntPropertyForKey:(id)key;	// 0x3118b561
- (BOOL)accountNeedsUpgrade;	// 0x3118b975
- (BOOL)autodiscoverAccountConfigurationWithConsumer:(id)consumer;	// 0x3118b93d
- (id)beginDownloadingAttachmentWithUUID:(id)uuid consumer:(id)consumer;	// 0x3118e795
- (void)cancelAllSearchQueries;	// 0x31196b29
- (void)cancelAutodiscovery;	// 0x3118b941
- (void)cancelDownloadingInstance:(id)instance error:(id)error;	// 0x3118e835
- (void)cancelSearchQuery:(id)query;	// 0x31196b25
- (void)checkValidityWithConsumer:(id)consumer;	// 0x3118b8f5
- (BOOL)childKeyIsSharedForReading:(id)reading;	// 0x3118ce61
- (BOOL)childKeyIsSharedForWriting:(id)writing;	// 0x3118cf09
- (void)cleanupAccountFiles;	// 0x3118ca99
- (id)consumerForTask:(id)task;	// 0x3118b8b1
- (id)contactsFolders;	// 0x3118e865
- (CFURLStorageSessionRef)copyStorageSession;	// 0x3118cf0d
// declared property getter: - (int)daAccountVersion;	// 0x3118a5ad
- (void)dealloc;	// 0x3118a4d5
- (id)defaultContactsFolder;	// 0x3118e861
- (id)defaultContainerIdentifierForDADataclass:(int)dadataclass;	// 0x3118c6b1
- (id)defaultEventsFolder;	// 0x3118e785
- (id)defaultNotesFolder;	// 0x311a65f5
- (id)defaultToDosFolder;	// 0x31198639
- (id)deletedItemsFolder;	// 0x3118e8c5
- (id)description;	// 0x3118dd6d
- (id)domainOnly;	// 0x3118b855
// declared property getter: - (id)emailAddress;	// 0x3118c005
// declared property getter: - (id)emailAddresses;	// 0x3118c099
// declared property getter: - (int)enabledDataclassesBitmask;	// 0x3118d081
- (BOOL)enabledForDADataclass:(int)dadataclass;	// 0x3118b0a1
// declared property getter: - (id)encryptionIdentityPersistentReference;	// 0x3118c26d
- (id)eventsFolders;	// 0x3118e789
- (CFDataRef)exceptionsForDigest:(id)digest;	// 0x3118c921
- (void)getRootFolderWithConsumer:(id)consumer;	// 0x311ac8ed
- (void)handleTrust:(SecTrust *)trust forHost:(id)host withCompletionBlock:(id)completionBlock;	// 0x3118d2c1
- (BOOL)handleTrustChallenge:(id)challenge;	// 0x3118da39
// converted property getter: - (BOOL)hasDirtyBits;	// 0x3118c551
- (BOOL)haveWarnedAboutCert:(id)cert forHost:(id)host;	// 0x3118cb95
// declared property getter: - (id)host;	// 0x3118bedd
// declared property getter: - (id)identityPersist;	// 0x3118c7c9
- (id)inboxFolder;	// 0x3118e8bd
- (BOOL)isActiveSyncAccount;	// 0x3118ce49
- (BOOL)isCalDAVAccount;	// 0x3118ce51
- (BOOL)isCalDAVChildAccount;	// 0x3118ce59
- (BOOL)isCardDAVAccount;	// 0x3118ce55
// declared property getter: - (BOOL)isChildAccount;	// 0x3118caf5
- (BOOL)isDisabled;	// 0x3118a891
- (BOOL)isEqualToAccount:(id)account;	// 0x3118cda9
- (BOOL)isHotmailAccount;	// 0x3118ce5d
- (BOOL)isLDAPAccount;	// 0x3118ce4d
- (int)keychainAccessibilityType;	// 0x3118bcc9
- (id)localizedIdenticalAccountFailureMessage;	// 0x3118ddfd
- (id)localizedInvalidPasswordMessage;	// 0x3118de9d
- (BOOL)monitorFolderWithID:(id)anId;	// 0x3118c5c1
- (BOOL)monitorFoldersWithIDs:(id)ids;	// 0x3118c5bd
- (id)notesFolders;	// 0x311a65f9
- (BOOL)originallyEnabledForDADataclass:(int)dadataclass;	// 0x3118b369
// declared property getter: - (id)password;	// 0x3118bc19
- (void)performSearchQuery:(id)query;	// 0x31196a81
// declared property getter: - (id)persistentUUID;	// 0x3118a40d
// declared property getter: - (int)port;	// 0x3118c301
// declared property getter: - (id)principalURL;	// 0x3118c475
- (BOOL)reattemptInvitationLinkageForMetaData:(id)metaData inFolderWithId:(id)anId;	// 0x3118e8c9
- (void)removeClientCertificateData;	// 0x3118c6b5
- (void)removeConsumerForTask:(id)task;	// 0x3118b8d5
- (void)renewAccountCredentialsWithHandler:(id)handler;	// 0x3118df3d
- (void)resetAccountID;	// 0x3118af39
- (BOOL)resetCertWarnings;	// 0x3118cca9
- (void)resetStatusReport;	// 0x3118ccd9
- (void)resumeMonitoringFoldersWithIDs:(id)ids;	// 0x3118b5c9
- (void)saveAccountProperties;	// 0x3118c70d
- (void)saveAccountSettings;	// 0x3118cae1
- (void)saveChildAccountSettingsWithAccountsManager:(id)accountsManager;	// 0x3118c77d
// declared property getter: - (id)scheduleIdentifier;	// 0x3118affd
// declared property getter: - (id)scheme;	// 0x3118c3e1
- (BOOL)searchQueriesRunning;	// 0x31196b2d
- (BOOL)sendEmailsForCalEvents:(id)calEvents consumer:(id)consumer;	// 0x3118e791
- (id)sentItemsFolder;	// 0x3118e8c1
- (void)setAccountBoolProperty:(BOOL)property forKey:(id)key;	// 0x3118b521
// declared property setter: - (void)setAccountDescription:(id)description;	// 0x3118b039
- (void)setAccountIntProperty:(int)property forKey:(id)key;	// 0x3118b589
- (void)setConsumer:(id)consumer forTask:(id)task;	// 0x3118b859
// declared property setter: - (void)setDAAccountVersion:(int)version;	// 0x3118cb51
// declared property setter: - (void)setEmailAddress:(id)address;	// 0x3118c051
// declared property setter: - (void)setEmailAddresses:(id)addresses;	// 0x3118c0d1
- (void)setEnabled:(BOOL)enabled forDADataclass:(int)dadataclass changeType:(int)type;	// 0x3118b0b9
- (oneway void)setEncryptionIdentityPersistentReference:(id)reference;	// 0x3118c2b9
- (void)setExceptions:(CFDataRef)exceptions forDigest:(id)digest;	// 0x3118c965
- (void)setHaveWarnedAboutCert:(id)cert forHost:(id)host;	// 0x3118cbe1
// declared property setter: - (void)setHost:(id)host;	// 0x3118bf29
- (void)setIdentityCertificatePersistentID:(id)anId managedByProfile:(BOOL)profile;	// 0x3118c7e5
// declared property setter: - (void)setPassword:(id)password;	// 0x3118bd61
- (void)setPassword:(id)password withAccessibility:(int)accessibility;	// 0x3118bccd
// declared property setter: - (void)setPort:(int)port;	// 0x3118c34d
// declared property setter: - (void)setPrincipalURL:(id)url;	// 0x3118c4c1
// declared property setter: - (void)setScheme:(id)scheme;	// 0x3118c42d
// declared property setter: - (void)setSettingsTemplate:(id)aTemplate;	// 0x3118d0c5
// declared property setter: - (void)setShouldAutodiscoverPrincipalURL:(BOOL)autodiscoverPrincipalURL;	// 0x3118d0a1
// declared property setter: - (void)setShouldFailAllTasks:(BOOL)failAllTasks;	// 0x3118d109
// declared property setter: - (void)setShouldPromptForPassword:(BOOL)promptForPassword;	// 0x3118bc09
// declared property setter: - (void)setShouldUseOpportunisticSockets:(BOOL)useOpportunisticSockets;	// 0x3118d129
- (oneway void)setSigningIdentityPersistentReference:(id)reference;	// 0x3118c225
// converted property setter: - (void)setToDosNumberOfPastDaysToSync:(int)sync;	// 0x31198649
// declared property setter: - (void)setUseSSL:(BOOL)ssl;	// 0x3118bfbd
// declared property setter: - (void)setUser:(id)user;	// 0x3118becd
// declared property setter: - (void)setUsername:(id)username;	// 0x3118be75
// converted property setter: - (void)setVersion:(id)version;	// 0x3118bde1
// declared property getter: - (id)settingsTemplate;	// 0x3118d0b1
// declared property getter: - (BOOL)shouldAutodiscoverPrincipalURL;	// 0x3118d091
// declared property getter: - (BOOL)shouldFailAllTasks;	// 0x3118d0f9
// declared property getter: - (BOOL)shouldPromptForPassword;	// 0x3118bbf9
// declared property getter: - (BOOL)shouldUseOpportunisticSockets;	// 0x3118d119
// declared property getter: - (id)signingIdentityPersistentReference;	// 0x3118c1d9
- (id)spinnerIdentifiers;	// 0x3118b3ad
- (id)stateString;	// 0x3118b6c9
// declared property getter: - (id)statusReport;	// 0x3118d0e9
- (void)stopMonitoringFolderWithID:(id)anId;	// 0x3118b66d
- (void)stopMonitoringFolders;	// 0x3118c655
- (void)stopMonitoringFoldersWithIDs:(id)ids;	// 0x3118c5f9
- (BOOL)supportsDADataclass:(int)dataclass;	// 0x3118b059
- (int)supportsEmailFlagging;	// 0x31196b35
- (int)supportsMailboxSearch;	// 0x31196b31
- (void)suspendMonitoringFoldersWithIDs:(id)ids;	// 0x3118b611
- (id)syncStoreIdentifier;	// 0x3118a4c5
- (void)synchronizeBookmarkTreeWithConsumer:(id)consumer hasRemoteChanges:(BOOL)changes;	// 0x311ac8f1
- (void)synchronizeContactsFolder:(id)folder previousTag:(id)tag previousSyncToken:(id)token actions:(id)actions highestIdContext:(XXStruct_K5nmsA *)context isInitialUberSync:(BOOL)sync isResyncAfterConnectionFailed:(BOOL)failed previousTagIsSuspect:(BOOL)suspect consumer:(id)consumer;	// 0x3118e869
- (void)synchronizeEventsFolder:(id)folder previousTag:(id)tag actions:(id)actions highestIdContext:(XXStruct_SMhV9B *)context isInitialUberSync:(BOOL)sync isResyncAfterConnectionFailed:(BOOL)failed consumer:(id)consumer;	// 0x3118e78d
- (void)synchronizeNotesFolder:(id)folder noteContext:(id)context previousTag:(id)tag actions:(id)actions changeSet:(id)set notesToDeleteAfterSync:(id)deleteAfterSync isInitialUberSync:(BOOL)sync isResyncAfterConnectionFailed:(BOOL)failed consumer:(id)consumer;	// 0x311a65fd
- (void)synchronizeToDosFolder:(id)dosFolder previousTag:(id)tag actions:(id)actions highestIdContext:(XXStruct_SMhV9B *)context isInitialUberSync:(BOOL)sync isResyncAfterConnectionFailed:(BOOL)failed consumer:(id)consumer;	// 0x31198641
// declared property getter: - (id)tag;	// 0x3118b00d
- (void)takeValuesFromAccount:(id)account;	// 0x3118b749
- (void)tearDown;	// 0x3118c561
- (id)toDosFolders;	// 0x3119863d
// converted property getter: - (int)toDosNumberOfPastDaysToSync;	// 0x31198645
- (BOOL)upgradeAccount;	// 0x3118bba1
- (id)urlForKeychain;	// 0x3118c395
// declared property getter: - (BOOL)useSSL;	// 0x3118bf71
// declared property getter: - (id)user;	// 0x3118bebd
// declared property getter: - (id)username;	// 0x3118be29
- (id)usernameWithoutDomain;	// 0x3118b845
// converted property getter: - (id)version;	// 0x3118bd95
@end
