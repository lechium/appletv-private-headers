/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRAuthenticator.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface BRUserPasswordAuthenticator : BRAuthenticator {
	BOOL _userEnteredPassword;	// 12 = 0xc
}
@property(retain) NSString *password;	// G=0x37c9d5; S=0x37c9a9; @dynamic
@property(retain) NSString *user;	// G=0x37c981; S=0x37c955; @dynamic
@property(assign) BOOL userEnteredPassword;	// G=0x37cc35; S=0x37cc4d; @synthesize=_userEnteredPassword
- (id)initWithAccount:(id)account;	// 0x37c929
- (void)_handleAuthenticationFailedWithError:(id)error;	// 0x37cc65
- (void)_handleAuthenticationSucceeded;	// 0x37ccd5
- (id)_makeAuthenticationController;	// 0x37c9fd
// declared property getter: - (id)password;	// 0x37c9d5
- (BOOL)requiresPassword:(id *)password;	// 0x37cb3d
- (BOOL)requiresUser:(id *)user;	// 0x37ca75
// declared property setter: - (void)setPassword:(id)password;	// 0x37c9a9
// declared property setter: - (void)setUser:(id)user;	// 0x37c955
// declared property setter: - (void)setUserEnteredPassword:(BOOL)password;	// 0x37cc4d
- (BOOL)shouldResetPasswordOnAuthenticationError:(id)error;	// 0x37cc31
// declared property getter: - (id)user;	// 0x37c981
// declared property getter: - (BOOL)userEnteredPassword;	// 0x37cc35
- (id)userPasswordAccount;	// 0x37cbcd
@end
