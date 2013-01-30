/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRUserPasswordAuthenticator.h"


__attribute__((visibility("hidden")))
@interface ATVSharedCredentialsAuthenticator : BRUserPasswordAuthenticator {
	BRUserPasswordAuthenticator *_sharedAuthenticator;	// 12 = 0xc
	BOOL _usingSharedCredentials;	// 16 = 0x10
	BOOL _setSharedCredentialsIsEnabled;	// 17 = 0x11
}
@property(assign) BOOL setSharedCredentialsIsEnabled;	// G=0x1c7fb5; S=0x1c7fcd; @synthesize=_setSharedCredentialsIsEnabled
@property(retain) BRUserPasswordAuthenticator *sharedAuthenticator;	// G=0x1c7f61; S=0x1c7f75; @synthesize=_sharedAuthenticator
@property(assign) BOOL usingSharedCredentials;	// G=0x1c7f85; S=0x1c7f9d; @synthesize=_usingSharedCredentials
- (id)initWithAccount:(id)account sharedAuthenticator:(id)authenticator;	// 0x1c7b3d
- (void)_handleAuthenticationCancelledWithError:(id)error;	// 0x1c7f19
- (void)_handleAuthenticationFailedWithError:(id)error;	// 0x1c7ed1
- (void)_handleAuthenticationSucceeded;	// 0x1c7e8d
- (BOOL)canSetSharedCredentials;	// 0x1c7cfd
- (BOOL)canUseSharedCredentials:(id *)credentials;	// 0x1c7bd1
- (void)dealloc;	// 0x1c7b85
- (BOOL)requiresPassword:(id *)password;	// 0x1c7e3d
- (BOOL)requiresUser:(id *)user;	// 0x1c7ded
// declared property setter: - (void)setSetSharedCredentialsIsEnabled:(BOOL)enabled;	// 0x1c7fcd
// declared property setter: - (void)setSharedAuthenticator:(id)authenticator;	// 0x1c7f75
- (void)setSharedCredentials;	// 0x1c7d5d
// declared property getter: - (BOOL)setSharedCredentialsIsEnabled;	// 0x1c7fb5
// declared property setter: - (void)setUsingSharedCredentials:(BOOL)credentials;	// 0x1c7f9d
// declared property getter: - (id)sharedAuthenticator;	// 0x1c7f61
- (void)useSharedCredentials;	// 0x1c7c61
// declared property getter: - (BOOL)usingSharedCredentials;	// 0x1c7f85
@end
