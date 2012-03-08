/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSMutableSet, NSRecursiveLock;

@interface DAAccountManager : NSObject {
	NSMutableDictionary *_accounts;	// 4 = 0x4
	NSMutableDictionary *_accountsToAdd;	// 8 = 0x8
	NSMutableDictionary *_accountsToRemove;	// 12 = 0xc
	NSMutableSet *_setAsideAccounts;	// 16 = 0x10
	NSRecursiveLock *_accountLock;	// 20 = 0x14
	BOOL _accountSaveInProgress;	// 24 = 0x18
	int _pendingAccountSetupCount;	// 28 = 0x1c
}
@property(readonly, retain) NSMutableDictionary *accounts;	// G=0x3118a5e1; converted property
+ (id)oneshotListOfAccountPersistentUUIDs;	// 0x31191785
+ (void)reacquireClientRestrictions:(id)restrictions;	// 0x311918f1
+ (id)sharedInstance;	// 0x31189935
+ (void)vendDaemonManagers:(Class)managers;	// 0x311919bd
- (id)init;	// 0x31189a21
- (id)_accountSettingsAccountTypes;	// 0x3118fb91
- (BOOL)_addAccount:(id)account checkUniqueness:(BOOL)uniqueness;	// 0x31190789
- (void)_removeStoresForAccountWithID:(id)anId;	// 0x3118faf5
- (void)_respondToAccountsChangedNotification;	// 0x31191599
- (BOOL)_saveAllAccountSettings:(BOOL)settings;	// 0x31190029
- (void)_setAccountName:(id)name forDataTypes:(int)dataTypes;	// 0x3118fc71
- (void)_setExternalSource:(id)source statusForDataTypes:(int)dataTypes;	// 0x3118fc15
- (void)_startAgentMonitoring;	// 0x3118fa61
- (void)_stopAgentMonitoring;	// 0x3118f9cd
- (void)_updateExternalSourcesAndAccountNamesForAccounts:(id)accounts;	// 0x3118fccd
- (id)accountWithID:(id)anId;	// 0x3119106d
- (id)accountWithPersistentUUID:(id)persistentUUID;	// 0x311910cd
// converted property getter: - (id)accounts;	// 0x3118a5e1
- (id)accountsOfClass:(Class)aClass;	// 0x31191309
- (BOOL)addAccount:(id)account;	// 0x31190cc5
- (void)addPendingAccountSetup;	// 0x311914c9
- (void)checkValidityForAccount:(id)account consumer:(id)consumer;	// 0x311919cd
- (void)cleanupLaunchdSemaphore;	// 0x3118f941
- (void)dealloc;	// 0x311916cd
- (void)disableDaemon;	// 0x3118f885
- (void)enableDaemon;	// 0x3118a8a9
- (id)getStatusReports;	// 0x311911ed
- (BOOL)hasActiveAccounts;	// 0x3118a6e1
- (BOOL)hasPendingAccountSetup;	// 0x31191581
- (id)pendingAccounts;	// 0x311913f1
- (void)reloadAccounts;	// 0x31189b39
- (BOOL)removeAccount:(id)account;	// 0x31190f95
- (BOOL)removeAccount:(id)account forAccountIDReset:(BOOL)accountIDReset;	// 0x31190cdd
- (void)removePendingAccountSetup;	// 0x311914dd
- (BOOL)saveAllAccountSettings;	// 0x31190629
- (void)setAsideAccountWithID:(id)anId;	// 0x31190fad
- (void)unsetAsideAccountWithID:(id)anId;	// 0x3119100d
@end

