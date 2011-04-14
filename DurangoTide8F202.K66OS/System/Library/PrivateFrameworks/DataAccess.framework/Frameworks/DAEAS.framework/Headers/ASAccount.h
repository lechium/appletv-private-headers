/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAAccount.h> // Unknown library
#import "DAEAS-Structs.h"

@class NSMutableSet, NSLock, ASFolderHierarchy, ASTaskManager, NSMutableArray, ASProtocol, ASAutodiscoverTask;

@interface ASAccount : DAAccount {
	ASFolderHierarchy *_folderHierarchy;	// 64 = 0x40
	ASTaskManager *_taskManager;	// 68 = 0x44
	ASProtocol *_protocol;	// 72 = 0x48
	NSMutableSet *_searchTaskSet;	// 76 = 0x4c
	NSMutableArray *_autodiscoveryServersToTry;	// 80 = 0x50
	NSLock *_autodiscoverTaskLock;	// 84 = 0x54
	ASAutodiscoverTask *_autodiscoverTask;	// 88 = 0x58
	BOOL _useHTTPForTesting;	// 92 = 0x5c
	BOOL _useLocalhostForAutodiscoveryTesting;	// 93 = 0x5d
	BOOL _isValidating;	// 94 = 0x5e
}
@property(assign, setter=setASAccountVersion:) int asAccountVersion;	// G=0x32ee09b5; S=0x32ee0979; 
@property(retain) id emailAddress;	// G=0x32ee076d; S=0x32ee0701; converted property
@property(retain) id emailAddresses;	// G=0x32ee0689; S=0x32ee0475; converted property
@property(retain) id host;	// G=0x32ee08c5; S=0x32ee0849; converted property
@property(retain) id lastKnownProtocolVersion;	// G=0x32ee03dd; S=0x32ee0335; converted property
@property(assign) int mailNumberOfPastDaysToSync;	// G=0x32ee0415; S=0x32ee03f9; 
@property(readonly, assign) int mailNumberOfPastDaysToSyncUpperLimit;	// G=0x32ee56b9; 
@property(assign) int port;	// G=0x32ee082d; S=0x32ee0811; converted property
@property(readonly, retain) ASProtocol *protocol;	// G=0x32ee02c9; converted property
@property(retain) id savedFolderPathsThatClientsCareAbout;	// G=0x32ee0365; S=0x32ee2041; converted property
@property(readonly, retain) ASTaskManager *taskManager;	// G=0x32ee1c49; converted property
@property(assign) BOOL useSSL;	// G=0x32ee07f1; S=0x32ee0789; converted property
@property(retain) id username;	// G=0x32ee095d; S=0x32ee08e1; converted property
+ (Class)accountClass;	// 0x32ee1e3d
+ (void)cleanUpFilesForAccountWithId:(id)anId;	// 0x32ee1c29
+ (Class)clientClass;	// 0x32ee98b1
+ (id)defaultProperties;	// 0x32ee1985
+ (id)supportedDataclasses;	// 0x32ee1965
- (id)initWithProperties:(id)properties;	// 0x32ee1e5d
- (void *)_copyDefaultExchangeEventsCalendar:(BOOL)calendar;	// 0x32ee53fd
- (id)_defaultMailFolderWithDefaultType:(int)defaultType fallbackType:(int)type fallbackName:(id)name;	// 0x32ee4681
- (void)_fillOutActionsArray:(id)array responseArray:(id)array2 withTask:(id)task added:(id)added removed:(id)removed modified:(id)modified perserved:(id)perserved addedResponse:(id)response modifiedResponse:(id)response9 removedResponse:(id)response10 fetchedResponse:(id)response11;	// 0x32ee12ad
- (id)_folderHierarchy;	// 0x32ee17f9
- (BOOL)_generateAutodiscoverURLsForEmailAddress:(id)emailAddress;	// 0x32ee2659
- (id)_newPolicyManager;	// 0x32edfecd
- (void)_removeInvitationsForMailboxFolderID:(id)mailboxFolderID;	// 0x32ee4ab5
- (BOOL)_shouldSaveLastKnownProtocolVersion;	// 0x32edff25
- (void)_startAutodiscoverTaskWithConsumer:(id)consumer;	// 0x32ee09e1
- (BOOL)_upgradeSelfFromVersion:(int)version superClassUpgraded:(BOOL)upgraded;	// 0x32ee32e9
- (id)_urlForKeychainUsingPreApexScheme;	// 0x32ee31f9
- (id)_visibleASFolders;	// 0x32ee40c5
- (void)accountDidUpdateProtocolVersion;	// 0x32edff29
- (BOOL)accountNeedsUpgrade;	// 0x32ee2f49
- (id)addressBookConstraintsPath;	// 0x32ee025d
// declared property getter: - (int)asAccountVersion;	// 0x32ee09b5
- (id)asFolderHierarchyTaskManager:(id)manager;	// 0x32ee16fd
- (id)asFolderWithId:(id)anId;	// 0x32ee1711
- (BOOL)autodiscoverAccountConfigurationWithConsumer:(id)consumer;	// 0x32ee2479
- (void)autodiscoverTask:(id)task completedWithStatus:(int)status accountInfo:(id)info shouldRetryWithEmail:(id)email error:(id)error;	// 0x32ee20e9
- (void)blowAwayFolderCache;	// 0x32ee1739
- (id)calendarConstraintsPath;	// 0x32ee0281
- (void)cancelAllSearchQueries;	// 0x32ee35f9
- (void)cancelAutodiscovery;	// 0x32ee0b55
- (void)cancelSearchQuery:(id)query;	// 0x32ee36cd
- (void)cancelTaskWithID:(int)anId;	// 0x32ee0c81
- (void)checkValidityWithConsumer:(id)consumer;	// 0x32ee1b85
- (void)cleanupAccountFiles;	// 0x32ee1cb9
- (BOOL)clearOutInviteWithDeliveryFolderId:(id)deliveryFolderId deliveryServerId:(id)anId wasSoftDelete:(BOOL)aDelete considerInvitedToInvitations:(BOOL)invitations;	// 0x32ee5161
- (id)contactsFolders;	// 0x32ee4539
- (void)dealloc;	// 0x32ee1d61
- (id)defaultContactsFolder;	// 0x32ee492d
- (id)defaultContainerIdentifierForDADataclass:(int)dadataclass;	// 0x32ee1669
- (id)defaultEventsFolder;	// 0x32ee47a5
- (id)deletedItemsFolder;	// 0x32ee1781
- (id)displayName;	// 0x32ee1951
- (id)domainOnly;	// 0x32ee55e9
// converted property getter: - (id)emailAddress;	// 0x32ee076d
// converted property getter: - (id)emailAddresses;	// 0x32ee0689
- (id)eventsFolders;	// 0x32ee4431
- (id)existingTaskManager;	// 0x32edfed1
- (void)fetchAttachmentTask:(id)task completedWithStatus:(int)status dataWasBase64:(BOOL)a64 error:(id)error;	// 0x32ee0f15
- (void)fetchAttachmentTask:(id)task receivedData:(id)data ofContentType:(id)contentType;	// 0x32ee0f81
- (id)folderIdsThatExternalClientsCareAbout;	// 0x32ee16d9
- (id)folderIdsThatExternalClientsCareAboutForDataclasses:(int)dataclasses;	// 0x32ee16b1
- (void)folderItemsSyncTask:(id)task completedWithStatus:(int)status error:(id)error newSyncKey:(id)key added:(id)added removed:(id)removed modified:(id)modified addedResponse:(id)response modifiedResponse:(id)response9 removedResponse:(id)response10 fetchedResponse:(id)response11;	// 0x32ee4bcd
- (BOOL)folderItemsSyncTask:(id)task handleStreamOperation:(int)operation forCodePage:(int)codePage tag:(int)tag withParentItem:(id)parentItem withData:(char *)data dataLength:(int)length;	// 0x32ee0fe5
- (BOOL)folderItemsSyncTask:(id)task hasPartialAdded:(id)added removed:(id)removed modified:(id)modified addedResponse:(id)response modifiedResponse:(id)response6 removedResponse:(id)response7 fetchedResponse:(id)response8 moreAvailable:(BOOL)available;	// 0x32ee2d5d
- (id)folderWithId:(id)anId;	// 0x32ee4659
- (id)foldersTag;	// 0x32ee175d
- (void)getOptionsTask:(id)task completedWithStatus:(int)status supportedCommands:(id)commands supportedVersions:(id)versions error:(id)error;	// 0x32ee3025
// converted property getter: - (id)host;	// 0x32ee08c5
- (id)inboxFolder;	// 0x32ee17d1
- (BOOL)isActiveSyncAccount;	// 0x32edff2d
- (BOOL)isEqualToAccount:(id)account;	// 0x32ee0089
- (void)itemOperationsTask:(id)task completedWithStatus:(int)status error:(id)error responses:(id)responses;	// 0x32ee3d85
- (BOOL)itemOperationsTask:(id)task handleStreamOperation:(int)operation forCodePage:(int)codePage tag:(int)tag withParentItem:(id)parentItem withData:(char *)data dataLength:(int)length;	// 0x32ee0ca9
- (BOOL)itemOperationsTask:(id)task hasPartialResponses:(id)responses;	// 0x32ee3b95
// converted property getter: - (id)lastKnownProtocolVersion;	// 0x32ee03dd
- (id)localizedIdenticalAccountFailureMessage;	// 0x32ee0019
- (id)localizedInvalidPasswordMessage;	// 0x32edff6d
// declared property getter: - (int)mailNumberOfPastDaysToSync;	// 0x32ee0415
// declared property getter: - (int)mailNumberOfPastDaysToSyncUpperLimit;	// 0x32ee56b9
- (void)moveItemsTask:(id)task completedWithStatus:(int)status error:(id)error movedItems:(id)items;	// 0x32ee37fd
- (CFStringRef)passwordChangedNotificationName;	// 0x32ee191d
- (void)performSearchQuery:(id)query consumer:(id)consumer;	// 0x32ee2915
- (id)policyManager;	// 0x32ee1d3d
// converted property getter: - (int)port;	// 0x32ee082d
// converted property getter: - (id)protocol;	// 0x32ee02c9
- (void)resetAccountID;	// 0x32ee1859
- (void)saveAccountSettings;	// 0x32ee1cf5
// converted property getter: - (id)savedFolderPathsThatClientsCareAbout;	// 0x32ee0365
- (BOOL)searchQueriesRunning;	// 0x32ee0c5d
- (void)searchTask:(id)task finishedWithError:(id)error;	// 0x32ee2851
- (void)searchTask:(id)task returnedResults:(id)results;	// 0x32ee0c15
- (void)searchTask:(id)task returnedTotalCount:(id)count;	// 0x32ee0bb5
- (void)sendMailTask:(id)task completedWithStatus:(int)status error:(id)error;	// 0x32ee2d1d
- (int)sendMessageWithRFC822Data:(id)rfc822Data messageID:(id)anId outgoingMessageType:(int)type originalMessageFolderID:(id)anId4 originalMessageItemID:(id)anId5 originalMessageLongID:(id)anId6 originalAccountID:(id)anId7 consumer:(id)consumer context:(void *)context;	// 0x32ee2b55
- (id)sentItemsFolder;	// 0x32ee17a9
// declared property setter: - (void)setASAccountVersion:(int)version;	// 0x32ee0979
// converted property setter: - (void)setEmailAddress:(id)address;	// 0x32ee0701
// converted property setter: - (void)setEmailAddresses:(id)addresses;	// 0x32ee0475
- (void)setEnabled:(BOOL)enabled forDataclass:(int)dataclass changeType:(int)type;	// 0x32ee432d
- (BOOL)setFolderIdsThatExternalClientsCareAboutAdded:(id)added deleted:(id)deleted foldersTag:(id)tag;	// 0x32edfef9
// converted property setter: - (void)setHost:(id)host;	// 0x32ee0849
// converted property setter: - (void)setLastKnownProtocolVersion:(id)version;	// 0x32ee0335
- (void)setLastKnownProtocolVersion:(id)version save:(BOOL)save;	// 0x32ee0381
// declared property setter: - (void)setMailNumberOfPastDaysToSync:(int)sync;	// 0x32ee03f9
// converted property setter: - (void)setPort:(int)port;	// 0x32ee0811
- (void)setProtocolVersion:(id)version;	// 0x32ee1f2d
// converted property setter: - (void)setSavedFolderPathsThatClientsCareAbout:(id)about;	// 0x32ee2041
- (void)setShouldFailAllTasks:(BOOL)failAllTasks;	// 0x32edff31
- (void)setUseHTTPForTesting:(BOOL)testing;	// 0x32edff01
- (void)setUseLocalhostForAutodiscoveryTesting:(BOOL)autodiscoveryTesting;	// 0x32edff11
// converted property setter: - (void)setUseSSL:(BOOL)ssl;	// 0x32ee0789
// converted property setter: - (void)setUsername:(id)username;	// 0x32ee08e1
- (BOOL)shouldFixOnDiskDeviceId;	// 0x32edfefd
- (BOOL)shouldSavePropertiesForFolderPathsThatClientsCareAbout;	// 0x32edff21
- (int)sniffableTypeForFolder:(id)folder;	// 0x32ee3f59
- (id)stateString;	// 0x32ee1b01
- (BOOL)supportsDataclass:(int)dataclass;	// 0x32edfee1
- (int)supportsMailboxSearch;	// 0x32ee02a5
// converted property getter: - (id)taskManager;	// 0x32ee1c49
- (BOOL)upgradeAccount;	// 0x32ee18a1
- (void)upgradeWithProtocolVersion:(id)protocolVersion;	// 0x32ee2005
- (id)urlForKeychain;	// 0x32ee30e1
// converted property getter: - (BOOL)useSSL;	// 0x32ee07f1
// converted property getter: - (id)username;	// 0x32ee095d
- (id)usernameWithoutDomain;	// 0x32ee5649
- (id)visibleFolders;	// 0x32ee4641
@end

