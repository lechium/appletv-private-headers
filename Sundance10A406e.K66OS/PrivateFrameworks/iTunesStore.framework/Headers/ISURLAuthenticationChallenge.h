/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISAuthenticationChallenge.h"

@class NSURLAuthenticationChallenge;

@interface ISURLAuthenticationChallenge : ISAuthenticationChallenge {
	NSURLAuthenticationChallenge *_challenge;	// 12 = 0xc
}
- (id)initWithAuthenticationChallenge:(id)authenticationChallenge;	// 0x36939b55
- (void)cancelAuthentication;	// 0x36939d11
- (void)dealloc;	// 0x36939cc1
- (int)failureCount;	// 0x36939d4d
- (BOOL)hasPassword;	// 0x36939d6d
- (id)password;	// 0x36939da1
- (id)sender;	// 0x36939dd9
- (void)useCredential:(id)credential;	// 0x36939e31
- (id)user;	// 0x36939df9
@end

