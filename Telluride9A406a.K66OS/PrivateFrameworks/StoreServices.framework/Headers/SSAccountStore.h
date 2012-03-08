/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSAccountStore.h"
#import "NSObject.h"
#import <NSObject.h> // Unknown library

@class SSAccount, NSLock, NSArray, SSDistributedNotificationCenter;

@protocol SSAccountStore <NSObject>
@property(readonly, assign) NSArray *accounts;
@property(readonly, assign) SSAccount *activeAccount;
@property(readonly, assign) SSAccount *activeLockerAccount;
@property(readonly, assign, getter=isExpired) BOOL expired;
- (id)accountWithUniqueIdentifier:(id)uniqueIdentifier;
- (id)accountWithUniqueIdentifier:(id)uniqueIdentifier reloadIfNecessary:(BOOL)necessary;
// declared property getter: - (id)accounts;
// declared property getter: - (id)activeAccount;
// declared property getter: - (id)activeLockerAccount;
- (id)addAccount:(id)account;
// declared property getter: - (BOOL)isExpired;
- (BOOL)isExpiredForTokenType:(int)tokenType;
- (void)resetExpiration;
- (void)resetExpirationForTokenType:(int)tokenType;
- (void)setAccountCredits:(id)credits forAccountWithUniqueIdentifier:(id)uniqueIdentifier;
- (id)setActiveAccount:(id)account;
- (id)setActiveLockerAccount:(id)account;
- (void)signOutAccount:(id)account;
- (void)signOutAllAccounts;
@end

@interface SSAccountStore : NSObject <SSAccountStore> {
@private
	NSArray *_accounts;	// 4 = 0x4
	BOOL _accountsValid;	// 8 = 0x8
	NSLock *_lock;	// 12 = 0xc
	SSDistributedNotificationCenter *_notificationCenter;	// 16 = 0x10
	id _observer;	// 20 = 0x14
}
@property(readonly, assign) NSArray *accounts;	// G=0x3155642d; 
@property(readonly, assign) SSAccount *activeAccount;	// G=0x31556535; 
@property(readonly, assign) SSAccount *activeLockerAccount;	// G=0x31556661; 
@property(retain) id distributedNotificationCenter;	// G=0x315568e9; S=0x31556cd1; converted property
@property(readonly, assign, getter=isExpired) BOOL expired;	// G=0x3155678d; 
+ (id)defaultStore;	// 0x3155639d
+ (id)existingDefaultStore;	// 0x315567b1
+ (BOOL)isExpired;	// 0x31556f39
+ (BOOL)isExpiredForTokenType:(int)tokenType;	// 0x31556f51
+ (void)resetExpiration;	// 0x31557071
+ (void)resetExpirationForTokenType:(int)tokenType;	// 0x31557085
+ (void)setDefaultStore:(id)store;	// 0x31557105
+ (double)tokenExpirationInterval;	// 0x31556419
- (id)init;	// 0x315561fd
- (id)_accountWithUniqueIdentifier:(id)uniqueIdentifier;	// 0x31557159
- (id)_addAccount:(id)account withMessageParameters:(id)messageParameters;	// 0x3155721d
- (void)_invalidateAccounts;	// 0x31557419
- (void)_postAccountStoreChanged;	// 0x31557551
- (BOOL)_reloadAccountsIfNeeded;	// 0x31557455
- (void)_setAccounts:(id)accounts;	// 0x31557595
- (void)_signOutWithUserInfo:(id)userInfo;	// 0x315575d9
- (id)accountWithUniqueIdentifier:(id)uniqueIdentifier;	// 0x315564ad
- (id)accountWithUniqueIdentifier:(id)uniqueIdentifier reloadIfNecessary:(BOOL)necessary;	// 0x315567f5
// declared property getter: - (id)accounts;	// 0x3155642d
// declared property getter: - (id)activeAccount;	// 0x31556535
// declared property getter: - (id)activeLockerAccount;	// 0x31556661
- (id)addAccount:(id)account;	// 0x315568d5
- (void)dealloc;	// 0x315562d5
// converted property getter: - (id)distributedNotificationCenter;	// 0x315568e9
// declared property getter: - (BOOL)isExpired;	// 0x3155678d
- (BOOL)isExpiredForTokenType:(int)tokenType;	// 0x31556955
- (void)reloadAccounts;	// 0x31556979
- (void)resetExpiration;	// 0x315569c9
- (void)resetExpirationForTokenType:(int)tokenType;	// 0x315569e5
- (void)setAccountCredits:(id)credits forAccountWithUniqueIdentifier:(id)uniqueIdentifier;	// 0x31556a01
- (id)setActiveAccount:(id)account;	// 0x31556b91
- (id)setActiveLockerAccount:(id)account;	// 0x31556c31
// converted property setter: - (void)setDistributedNotificationCenter:(id)center;	// 0x31556cd1
- (void)signOutAccount:(id)account;	// 0x31556e51
- (void)signOutAllAccounts;	// 0x31556f25
@end

