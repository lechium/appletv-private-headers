/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRAuthenticator.h"

@class NSString;

@interface BRUserPasswordAuthenticator : BRAuthenticator {
@private
	NSString *_user;	// 36 = 0x24
	NSString *_password;	// 40 = 0x28
}
@property(retain) NSString *password;	// G=0x3310ed9d; S=0x3310edb1; @synthesize=_password
@property(retain) NSString *user;	// G=0x3310ed65; S=0x3310ed79; @synthesize=_user
- (id)initWithAccount:(id)account scope:(unsigned)scope;	// 0x3310ea75
- (void)_handleAuthenticationFailedWithError:(id)error;	// 0x3310edd5
- (void)_handleAuthenticationSucceeded;	// 0x3310ee75
- (void)dealloc;	// 0x3310eb31
- (id)makeAuthenticationController;	// 0x3310eb91
// declared property getter: - (id)password;	// 0x3310ed9d
- (BOOL)requiresPassword:(id *)password;	// 0x3310ecd5
- (BOOL)requiresUser:(id *)user;	// 0x3310ec09
// declared property setter: - (void)setPassword:(id)password;	// 0x3310edb1
// declared property setter: - (void)setUser:(id)user;	// 0x3310ed79
// declared property getter: - (id)user;	// 0x3310ed65
@end

