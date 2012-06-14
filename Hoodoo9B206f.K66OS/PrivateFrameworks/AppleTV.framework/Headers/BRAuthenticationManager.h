/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "BRAuthenticatorDelegate.h"

@class BRAuthenticator;

@interface BRAuthenticationManager : NSObject <BRAuthenticatorDelegate> {
@private
	id _authenticatorCreation;	// 4 = 0x4
	BRAuthenticator *_authenticator;	// 8 = 0x8
}
@property(readonly, retain) BRAuthenticator *authenticator;	// G=0x36720959; converted property
@property(retain) id preferredAccount;	// G=0x36720799; S=0x3672079d; converted property
+ (id)managerForAccountType:(id)accountType;	// 0x36720f31
+ (void)registerManager:(id)manager forAccountType:(id)accountType;	// 0x36720e1d
- (id)initWithAuthenticatorCreation:(id)authenticatorCreation;	// 0x367206a1
- (void)_authenticationControllerDidCancel:(id)_authenticationController;	// 0x36720dd5
- (void)_checkAuthenticator:(id *)authenticator forAccount:(id)account scope:(unsigned)scope;	// 0x36721029
- (id)_selectAccount;	// 0x36720cfd
- (id)_selectAuthenticatorWithAccount:(id)account scope:(unsigned)scope;	// 0x36720d45
- (void)autenticationSucceededForAuthenticator:(id)authenticator accountChanged:(BOOL)changed;	// 0x36720b15
- (id)authenticationControllerForScope:(unsigned)scope;	// 0x36720999
// converted property getter: - (id)authenticator;	// 0x36720959
- (void)dealloc;	// 0x367206f5
// converted property getter: - (id)preferredAccount;	// 0x36720799
- (void)reauthenticationFailedForAuthenticator:(id)authenticator error:(id)error;	// 0x36720c81
// converted property setter: - (void)setPreferredAccount:(id)account;	// 0x3672079d
@end
