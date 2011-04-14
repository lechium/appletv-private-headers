/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RUIYTAuthenticationManager.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface RUIYTAuthenticationManager : XXUnknownSuperclass {
}
@property(retain) id preferredAccount;	// G=0x21d21; S=0x21bb5; converted property
- (id)authenticationControllerWithAuthenticator:(id)authenticator;	// 0x21d6d
- (id)basicAccount;	// 0x21b41
- (void)checkAuthenticator:(id *)authenticator forAccount:(id)account scope:(unsigned)scope;	// 0x21ae9
// converted property getter: - (id)preferredAccount;	// 0x21d21
// converted property setter: - (void)setPreferredAccount:(id)account;	// 0x21bb5
@end

@interface RUIYTAuthenticationManager (Private)
- (void)_removeDuplicatesOfAccount:(id)account;	// 0x21df5
@end

