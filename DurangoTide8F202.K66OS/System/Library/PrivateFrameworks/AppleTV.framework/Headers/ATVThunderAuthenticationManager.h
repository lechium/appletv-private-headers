/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <BRAuthenticationManager.h> // Unknown library


@interface ATVThunderAuthenticationManager : BRAuthenticationManager {
}
@property(retain) id preferredAccount;	// G=0x3372b7d1; S=0x3372b74d; converted property
- (id)authenticationControllerWithAuthenticator:(id)authenticator;	// 0x3372b81d
- (id)basicAccount;	// 0x3372b6d9
- (void)checkAuthenticator:(id *)authenticator forAccount:(id)account scope:(unsigned)scope;	// 0x3372b681
// converted property getter: - (id)preferredAccount;	// 0x3372b7d1
// converted property setter: - (void)setPreferredAccount:(id)account;	// 0x3372b74d
@end

