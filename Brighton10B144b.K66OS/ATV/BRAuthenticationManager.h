/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class BRAccountType, BRAuthenticator;

__attribute__((visibility("hidden")))
@interface BRAuthenticationManager : XXUnknownSuperclass {
	BOOL _isChangingAccounts;	// 4 = 0x4
	BRAccountType *_accountType;	// 8 = 0x8
	BRAuthenticator *__authenticator;	// 12 = 0xc
	id __authenticatorCreation;	// 16 = 0x10
}
@property(retain, nonatomic) BRAuthenticator *_authenticator;	// G=0x36c125; S=0x36c135; @synthesize=__authenticator
@property(copy, nonatomic) id _authenticatorCreation;	// G=0x36c145; S=0x36c159; @synthesize=__authenticatorCreation
@property(retain, nonatomic) BRAccountType *accountType;	// G=0x36c105; S=0x36c115; @synthesize=_accountType
+ (id)managerForAccountType:(id)accountType;	// 0x36c639
+ (void)registerManager:(id)manager;	// 0x36c501
- (id)initWithAccountType:(id)accountType authenticatorCreation:(id)creation;	// 0x36bd31
- (void)_accountManagerPreferredAccountEstablished:(id)established;	// 0x36c1d1
- (void)_accountManagerPreferredAccountRemoved:(id)removed;	// 0x36c201
- (void)_autenticationSucceededForAuthenticator:(id)authenticator accountChanged:(BOOL)changed;	// 0x36bfa9
- (void)_authenticationCancelledForAuthenticator:(id)authenticator;	// 0x36c079
- (void)_authenticationFailedForAuthenticator:(id)authenticator;	// 0x36c041
- (void)_authenticationFinalizedForAuthenticator:(id)authenticator;	// 0x36c0b1
// declared property getter: - (id)_authenticator;	// 0x36c125
// declared property getter: - (id)_authenticatorCreation;	// 0x36c145
- (void)_changeCurrentAccountWithAccount:(id)account;	// 0x36c231
- (void)_handlePreferredAccountChange:(id)change;	// 0x36c169
- (id)_selectAuthenticatorWithPreferredAccount:(id)preferredAccount;	// 0x36c2dd
- (void)_sendNotificationWithActivity:(int)activity;	// 0x36c46d
// declared property getter: - (id)accountType;	// 0x36c105
- (id)authenticatorWithAccount:(id)account;	// 0x36bf99
- (id)authenticatorWithNewAccount;	// 0x36bf69
- (id)currentAccount;	// 0x36bf45
- (void)dealloc;	// 0x36be51
- (void)removeCurrentAccount;	// 0x36bf55
// declared property setter: - (void)setAccountType:(id)type;	// 0x36c115
// declared property setter: - (void)set_authenticator:(id)authenticator;	// 0x36c135
// declared property setter: - (void)set_authenticatorCreation:(id)creation;	// 0x36c159
@end
