/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSAccountStore.h"

@class NSArray;

@interface SSClientAccountStore : SSAccountStore {
	NSArray *_accounts;	// 16 = 0x10
	BOOL _accountsValid;	// 20 = 0x14
}
@property(copy) NSArray *accounts;	// G=0x355116fd; S=0x35511461; @dynamic
- (id)init;	// 0x35511369
- (id)_accountWithUniqueIdentifier:(id)uniqueIdentifier;	// 0x355126e1
- (id)_addAccount:(id)account asActiveAccount:(BOOL)account2 activeLockerAccount:(BOOL)account3;	// 0x35512461
- (id)_copyReloadedAccounts;	// 0x355127c9
- (void)_invalidateAccounts;	// 0x35512aa5
- (void)_reloadAccountsIfNeeded;	// 0x35512add
- (void)_signOutWithAccountIDs:(id)accountIDs;	// 0x35512b31
- (id)accountWithUniqueIdentifier:(id)uniqueIdentifier;	// 0x355118f1
- (id)accountWithUniqueIdentifier:(id)uniqueIdentifier reloadIfNecessary:(BOOL)necessary;	// 0x35511ac9
// declared property getter: - (id)accounts;	// 0x355116fd
- (id)activeAccount;	// 0x35511cf9
- (id)activeLockerAccount;	// 0x35511f75
- (id)addAccount:(id)account;	// 0x355118d1
- (void)dealloc;	// 0x355113f9
- (void)reloadAccounts;	// 0x355121f1
- (void)setAccountCredits:(id)credits forAccountWithUniqueIdentifier:(id)uniqueIdentifier;	// 0x3551226d
// declared property setter: - (void)setAccounts:(id)accounts;	// 0x35511461
- (id)setActiveAccount:(id)account;	// 0x35512349
- (id)setActiveLockerAccount:(id)account;	// 0x35512369
- (void)signOutAccount:(id)account;	// 0x35512389
- (void)signOutAllAccounts;	// 0x3551244d
- (void)updateAccountsWithMessage:(id)message completionBlock:(id)block;	// 0x3551153d
@end

