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
@property(copy) NSString *accountDescription;	// G=0x3615bb29; S=0x3615c229; 
@property(assign, setter=setDAAccountVersion:) int daAccountVersion;	// G=0x3615b79d; S=0x3615dd41; 
@property(copy) NSString *emailAddress;	// G=0x3615d1f5; S=0x3615d241; 
@property(copy) NSArray *emailAddresses;	// G=0x3615d289; S=0x3615d2c1; 
@property(readonly, assign) int enabledDataclassesBitmask;	// G=0x3615e271; @synthesize=_dataclasses
@property(retain) NSData *encryptionIdentityPersistentReference;	// G=0x3615d45d; 
@property(readonly, assign) BOOL hasDirtyBits;	// G=0x3615d741; converted property
@property(copy) NSString *host;	// G=0x3615d0cd; S=0x3615d119; 
@property(readonly, assign) NSData *identityPersist;	// G=0x3615d9b9; 
@property(readonly, assign) BOOL isChildAccount;	// G=0x3615dce5; 
@property(copy) NSString *password;	// G=0x3615ce09; S=0x3615cf51; 
@property(readonly, assign) NSString *persistentUUID;	// G=0x3615b5fd; 
@property(assign) int port;	// G=0x3615d4f1; S=0x3615d53d; 
@property(copy) NSURL *principalURL;	// G=0x3615d665; S=0x3615d6b1; 
@property(readonly, assign, nonatomic) NSString *scheduleIdentifier;	// G=0x3615c1ed; 
@property(copy) NSString *scheme;	// G=0x3615d5d1; S=0x3615d61d; 
@property(retain) DASettingsTemplate *settingsTemplate;	// G=0x3615e2a1; S=0x3615e2b5; @synthesize=_settingsTemplate
@property(assign) BOOL shouldAutodiscoverPrincipalURL;	// G=0x3615e281; S=0x3615e291; @synthesize=_shouldAutodiscoverPrincipalURL
@property(assign) BOOL shouldFailAllTasks;	// G=0x3615e2e9; S=0x3615e2f9; @synthesize=_shouldFailAllTasks
@property(assign) BOOL shouldPromptForPassword;	// G=0x3615cde9; S=0x3615cdf9; 
@property(assign) BOOL shouldUseOpportunisticSockets;	// G=0x3615e309; S=0x3615e319; @synthesize=_shouldUseOpportunisticSockets
@property(retain) NSData *signingIdentityPersistentReference;	// G=0x3615d3c9; 
@property(readonly, assign) DAStatusReport *statusReport;	// G=0x3615e2d9; @synthesize=_statusReport
@property(readonly, assign) NSString *tag;	// G=0x3615c1fd; 
@property(assign) int toDosNumberOfPastDaysToSync;	// G=0x361698bd; S=0x361698c1; converted property
@property(assign) BOOL useSSL;	// G=0x3615d161; S=0x3615d1ad; 
@property(copy) NSString *user;	// G=0x3615d0ad; S=0x3615d0bd; 
@property(copy) NSString *username;	// G=0x3615d019; S=0x3615d065; 
@property(retain) id version;	// G=0x3615cf85; S=0x3615cfd1; converted property
+ (Class)accountClass;	// 0x3615c10d
+ (Class)accountClassWithProperties:(id)properties;	// 0x3615c5e9
+ (id)basicAccountProperties;	// 0x3615bf89
+ (Class)classForAccountType:(id)accountType;	// 0x3615c6b1
+ (Class)clientClass;	// 0x3615c619
+ (Class)daemonClass;	// 0x3615c665
+ (id)defaultProperties;	// 0x3615dce9
+ (id)newAccountOfAccountType:(id)accountType;	// 0x3615dced
- (id)init;	// 0x3615c065
- (id)initWithProperties:(id)properties;	// 0x3615b241
- (int)_actionForTrust:(SecTrust *)trust host:(id)host service:(id)service;	// 0x3615e329
- (id)_exceptionsDict;	// 0x3615daf5
- (void)_handlePasswordNotification:(CFUserNotificationRef)notification response:(unsigned long)response callback:(id)callback;	// 0x3615f7dd
- (BOOL)_isIdentityManagedByProfile;	// 0x3615dab5
- (void)_removeHostsToTrust;	// 0x3615cb35
- (id)_serverSuffixesToAlwaysFail;	// 0x3615e429
- (void)_setPersistentUUID:(id)uuid;	// 0x3615c20d
- (void)_setProperties:(id)properties;	// 0x3615d6f9
- (BOOL)_upgradeSelfFromPreKirkwood;	// 0x3615cc3d
- (BOOL)accountBoolPropertyForKey:(id)key;	// 0x3615c6e9
- (int)accountChangeTypeForDataclass:(int)dataclass;	// 0x3615c571
- (BOOL)accountContainsEmailAddress:(id)address;	// 0x3615d309
// declared property getter: - (id)accountDescription;	// 0x3615bb29
- (id)accountID;	// 0x3615b541
- (int)accountIntPropertyForKey:(id)key;	// 0x3615c751
- (BOOL)accountNeedsUpgrade;	// 0x3615cb65
- (BOOL)autodiscoverAccountConfigurationWithConsumer:(id)consumer;	// 0x3615cb2d
- (id)beginDownloadingAttachmentWithUUID:(id)uuid consumer:(id)consumer;	// 0x3615f985
- (void)cancelAllSearchQueries;	// 0x36167d19
- (void)cancelAutodiscovery;	// 0x3615cb31
- (void)cancelDownloadingInstance:(id)instance error:(id)error;	// 0x3615fa25
- (void)cancelSearchQuery:(id)query;	// 0x36167d15
- (void)checkValidityWithConsumer:(id)consumer;	// 0x3615cae5
- (BOOL)childKeyIsSharedForReading:(id)reading;	// 0x3615e051
- (BOOL)childKeyIsSharedForWriting:(id)writing;	// 0x3615e0f9
- (void)cleanupAccountFiles;	// 0x3615dc89
- (id)consumerForTask:(id)task;	// 0x3615caa1
- (id)contactsFolders;	// 0x3615fa55
- (CFURLStorageSessionRef)copyStorageSession;	// 0x3615e0fd
// declared property getter: - (int)daAccountVersion;	// 0x3615b79d
- (void)dealloc;	// 0x3615b6c5
- (id)defaultContactsFolder;	// 0x3615fa51
- (id)defaultContainerIdentifierForDADataclass:(int)dadataclass;	// 0x3615d8a1
- (id)defaultEventsFolder;	// 0x3615f975
- (id)defaultNotesFolder;	// 0x36177851
- (id)defaultToDosFolder;	// 0x361698b1
- (id)deletedItemsFolder;	// 0x3615fab5
- (id)description;	// 0x3615ef5d
- (id)domainOnly;	// 0x3615ca45
// declared property getter: - (id)emailAddress;	// 0x3615d1f5
// declared property getter: - (id)emailAddresses;	// 0x3615d289
// declared property getter: - (int)enabledDataclassesBitmask;	// 0x3615e271
- (BOOL)enabledForDADataclass:(int)dadataclass;	// 0x3615c291
// declared property getter: - (id)encryptionIdentityPersistentReference;	// 0x3615d45d
- (id)eventsFolders;	// 0x3615f979
- (CFDataRef)exceptionsForDigest:(id)digest;	// 0x3615db11
- (void)getRootFolderWithConsumer:(id)consumer;	// 0x3617db49
- (void)handleTrust:(SecTrust *)trust forHost:(id)host withCompletionBlock:(id)completionBlock;	// 0x3615e4b1
- (BOOL)handleTrustChallenge:(id)challenge;	// 0x3615ec29
// converted property getter: - (BOOL)hasDirtyBits;	// 0x3615d741
- (BOOL)haveWarnedAboutCert:(id)cert forHost:(id)host;	// 0x3615dd85
// declared property getter: - (id)host;	// 0x3615d0cd
// declared property getter: - (id)identityPersist;	// 0x3615d9b9
- (id)inboxFolder;	// 0x3615faad
- (BOOL)isActiveSyncAccount;	// 0x3615e039
- (BOOL)isCalDAVAccount;	// 0x3615e041
- (BOOL)isCalDAVChildAccount;	// 0x3615e049
- (BOOL)isCardDAVAccount;	// 0x3615e045
// declared property getter: - (BOOL)isChildAccount;	// 0x3615dce5
- (BOOL)isDisabled;	// 0x3615ba81
- (BOOL)isEqualToAccount:(id)account;	// 0x3615df99
- (BOOL)isHotmailAccount;	// 0x3615e04d
- (BOOL)isLDAPAccount;	// 0x3615e03d
- (int)keychainAccessibilityType;	// 0x3615ceb9
- (id)localizedIdenticalAccountFailureMessage;	// 0x3615efed
- (id)localizedInvalidPasswordMessage;	// 0x3615f08d
- (BOOL)monitorFolderWithID:(id)anId;	// 0x3615d7b1
- (BOOL)monitorFoldersWithIDs:(id)ids;	// 0x3615d7ad
- (id)notesFolders;	// 0x36177855
- (BOOL)originallyEnabledForDADataclass:(int)dadataclass;	// 0x3615c559
// declared property getter: - (id)password;	// 0x3615ce09
- (void)performSearchQuery:(id)query;	// 0x36167c71
// declared property getter: - (id)persistentUUID;	// 0x3615b5fd
// declared property getter: - (int)port;	// 0x3615d4f1
// declared property getter: - (id)principalURL;	// 0x3615d665
- (BOOL)reattemptInvitationLinkageForMetaData:(id)metaData inFolderWithId:(id)anId;	// 0x3615fab9
- (void)removeClientCertificateData;	// 0x3615d8a5
- (void)removeConsumerForTask:(id)task;	// 0x3615cac5
- (void)renewAccountCredentialsWithHandler:(id)handler;	// 0x3615f12d
- (void)resetAccountID;	// 0x3615c129
- (BOOL)resetCertWarnings;	// 0x3615de99
- (void)resetStatusReport;	// 0x3615dec9
- (void)resumeMonitoringFoldersWithIDs:(id)ids;	// 0x3615c7b9
- (void)saveAccountProperties;	// 0x3615d8fd
- (void)saveAccountSettings;	// 0x3615dcd1
- (void)saveChildAccountSettingsWithAccountsManager:(id)accountsManager;	// 0x3615d96d
// declared property getter: - (id)scheduleIdentifier;	// 0x3615c1ed
// declared property getter: - (id)scheme;	// 0x3615d5d1
- (BOOL)searchQueriesRunning;	// 0x36167d1d
- (BOOL)sendEmailsForCalEvents:(id)calEvents consumer:(id)consumer;	// 0x3615f981
- (id)sentItemsFolder;	// 0x3615fab1
- (void)setAccountBoolProperty:(BOOL)property forKey:(id)key;	// 0x3615c711
// declared property setter: - (void)setAccountDescription:(id)description;	// 0x3615c229
- (void)setAccountIntProperty:(int)property forKey:(id)key;	// 0x3615c779
- (void)setConsumer:(id)consumer forTask:(id)task;	// 0x3615ca49
// declared property setter: - (void)setDAAccountVersion:(int)version;	// 0x3615dd41
// declared property setter: - (void)setEmailAddress:(id)address;	// 0x3615d241
// declared property setter: - (void)setEmailAddresses:(id)addresses;	// 0x3615d2c1
- (void)setEnabled:(BOOL)enabled forDADataclass:(int)dadataclass changeType:(int)type;	// 0x3615c2a9
- (oneway void)setEncryptionIdentityPersistentReference:(id)reference;	// 0x3615d4a9
- (void)setExceptions:(CFDataRef)exceptions forDigest:(id)digest;	// 0x3615db55
- (void)setHaveWarnedAboutCert:(id)cert forHost:(id)host;	// 0x3615ddd1
// declared property setter: - (void)setHost:(id)host;	// 0x3615d119
- (void)setIdentityCertificatePersistentID:(id)anId managedByProfile:(BOOL)profile;	// 0x3615d9d5
// declared property setter: - (void)setPassword:(id)password;	// 0x3615cf51
- (void)setPassword:(id)password withAccessibility:(int)accessibility;	// 0x3615cebd
// declared property setter: - (void)setPort:(int)port;	// 0x3615d53d
// declared property setter: - (void)setPrincipalURL:(id)url;	// 0x3615d6b1
// declared property setter: - (void)setScheme:(id)scheme;	// 0x3615d61d
// declared property setter: - (void)setSettingsTemplate:(id)aTemplate;	// 0x3615e2b5
// declared property setter: - (void)setShouldAutodiscoverPrincipalURL:(BOOL)autodiscoverPrincipalURL;	// 0x3615e291
// declared property setter: - (void)setShouldFailAllTasks:(BOOL)failAllTasks;	// 0x3615e2f9
// declared property setter: - (void)setShouldPromptForPassword:(BOOL)promptForPassword;	// 0x3615cdf9
// declared property setter: - (void)setShouldUseOpportunisticSockets:(BOOL)useOpportunisticSockets;	// 0x3615e319
- (oneway void)setSigningIdentityPersistentReference:(id)reference;	// 0x3615d415
// converted property setter: - (void)setToDosNumberOfPastDaysToSync:(int)sync;	// 0x361698c1
// declared property setter: - (void)setUseSSL:(BOOL)ssl;	// 0x3615d1ad
// declared property setter: - (void)setUser:(id)user;	// 0x3615d0bd
// declared property setter: - (void)setUsername:(id)username;	// 0x3615d065
// converted property setter: - (void)setVersion:(id)version;	// 0x3615cfd1
// declared property getter: - (id)settingsTemplate;	// 0x3615e2a1
// declared property getter: - (BOOL)shouldAutodiscoverPrincipalURL;	// 0x3615e281
// declared property getter: - (BOOL)shouldFailAllTasks;	// 0x3615e2e9
// declared property getter: - (BOOL)shouldPromptForPassword;	// 0x3615cde9
// declared property getter: - (BOOL)shouldUseOpportunisticSockets;	// 0x3615e309
// declared property getter: - (id)signingIdentityPersistentReference;	// 0x3615d3c9
- (id)spinnerIdentifiers;	// 0x3615c59d
- (id)stateString;	// 0x3615c8b9
// declared property getter: - (id)statusReport;	// 0x3615e2d9
- (void)stopMonitoringFolderWithID:(id)anId;	// 0x3615c85d
- (void)stopMonitoringFolders;	// 0x3615d845
- (void)stopMonitoringFoldersWithIDs:(id)ids;	// 0x3615d7e9
- (BOOL)supportsDADataclass:(int)dataclass;	// 0x3615c249
- (int)supportsEmailFlagging;	// 0x36167d25
- (int)supportsMailboxSearch;	// 0x36167d21
- (void)suspendMonitoringFoldersWithIDs:(id)ids;	// 0x3615c801
- (id)syncStoreIdentifier;	// 0x3615b6b5
- (void)synchronizeBookmarkTreeWithConsumer:(id)consumer hasRemoteChanges:(BOOL)changes;	// 0x3617db4d
- (void)synchronizeContactsFolder:(id)folder previousTag:(id)tag previousSyncToken:(id)token actions:(id)actions highestIdContext:(XXStruct_K5nmsA *)context isInitialUberSync:(BOOL)sync isResyncAfterConnectionFailed:(BOOL)failed previousTagIsSuspect:(BOOL)suspect consumer:(id)consumer;	// 0x3615fa59
- (void)synchronizeEventsFolder:(id)folder previousTag:(id)tag actions:(id)actions highestIdContext:(XXStruct_SMhV9B *)context isInitialUberSync:(BOOL)sync isResyncAfterConnectionFailed:(BOOL)failed consumer:(id)consumer;	// 0x3615f97d
- (void)synchronizeNotesFolder:(id)folder noteContext:(id)context previousTag:(id)tag actions:(id)actions changeSet:(id)set notesToDeleteAfterSync:(id)deleteAfterSync isInitialUberSync:(BOOL)sync isResyncAfterConnectionFailed:(BOOL)failed consumer:(id)consumer;	// 0x36177859
- (void)synchronizeToDosFolder:(id)dosFolder previousTag:(id)tag actions:(id)actions highestIdContext:(XXStruct_SMhV9B *)context isInitialUberSync:(BOOL)sync isResyncAfterConnectionFailed:(BOOL)failed consumer:(id)consumer;	// 0x361698b9
// declared property getter: - (id)tag;	// 0x3615c1fd
- (void)takeValuesFromAccount:(id)account;	// 0x3615c939
- (void)tearDown;	// 0x3615d751
- (id)toDosFolders;	// 0x361698b5
// converted property getter: - (int)toDosNumberOfPastDaysToSync;	// 0x361698bd
- (BOOL)upgradeAccount;	// 0x3615cd91
- (id)urlForKeychain;	// 0x3615d585
// declared property getter: - (BOOL)useSSL;	// 0x3615d161
// declared property getter: - (id)user;	// 0x3615d0ad
// declared property getter: - (id)username;	// 0x3615d019
- (id)usernameWithoutDomain;	// 0x3615ca35
// converted property getter: - (id)version;	// 0x3615cf85
@end

