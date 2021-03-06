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
	BRAccountType *_accountType;	// 4 = 0x4
	BRAuthenticator *__authenticator;	// 8 = 0x8
	id __authenticatorCreation;	// 12 = 0xc
}
@property(retain, nonatomic) BRAuthenticator *_authenticator;	// G=0x33ee01; S=0x33ee11; @synthesize=__authenticator
@property(copy, nonatomic) id _authenticatorCreation;	// G=0x33ee21; S=0x33ee35; @synthesize=__authenticatorCreation
@property(retain, nonatomic) BRAccountType *accountType;	// G=0x33ede1; S=0x33edf1; @synthesize=_accountType
+ (id)managerForAccountType:(id)accountType;	// 0x33f22d
+ (void)registerManager:(id)manager;	// 0x33f0f5
- (id)initWithAccountType:(id)accountType authenticatorCreation:(id)creation;	// 0x33eb59
- (void)_autenticationSucceededForAuthenticator:(id)authenticator accountChanged:(BOOL)changed;	// 0x33ec75
- (void)_authenticationCancelledForAuthenticator:(id)authenticator;	// 0x33ed55
- (void)_authenticationFailedForAuthenticator:(id)authenticator;	// 0x33ed1d
- (void)_authenticationFinalizedForAuthenticator:(id)authenticator;	// 0x33ed8d
// declared property getter: - (id)_authenticator;	// 0x33ee01
// declared property getter: - (id)_authenticatorCreation;	// 0x33ee21
- (void)_changeCurrentAccountWithAccount:(id)account;	// 0x33ee45
- (id)_selectAuthenticatorWithPreferredAccount:(id)preferredAccount;	// 0x33eed1
- (void)_sendNotificationWithActivity:(int)activity;	// 0x33f061
// declared property getter: - (id)accountType;	// 0x33ede1
- (id)authenticatorWithAccount:(id)account;	// 0x33ec65
- (id)currentAccount;	// 0x33ec41
- (void)dealloc;	// 0x33ebb9
- (void)removeCurrentAccount;	// 0x33ec51
// declared property setter: - (void)setAccountType:(id)type;	// 0x33edf1
// declared property setter: - (void)set_authenticator:(id)authenticator;	// 0x33ee11
// declared property setter: - (void)set_authenticatorCreation:(id)creation;	// 0x33ee35
@end

