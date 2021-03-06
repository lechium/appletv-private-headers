/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/YouTubeATV.framework/YouTubeATV
 */

#import </libobjc.A.h>

@class NSMutableArray;
@protocol YTAuthenticatorDelegate;

@interface YTAuthenticator : NSObject {
	id<YTAuthenticatorDelegate> _delegate;	// 4 = 0x4
	NSMutableArray *_deferredRequests;	// 8 = 0x8
	int _accountAuthState;	// 12 = 0xc
	int _deviceAuthState;	// 16 = 0x10
}
+ (id)sharedAuthenticator;	// 0x33aab885
- (id)init;	// 0x33aab8cd
- (void)_addAccountAuthenticationObserers;	// 0x33aabcd5
- (void)_addDeferredRequest:(id)request accountAuthRequired:(BOOL)required;	// 0x33aab98d
- (void)_addDeviceAuthenticationObserers;	// 0x33aabae9
- (void)_completeAuthenticationForDeferredRequests;	// 0x33aac039
- (void)_didAuthenticateDevice:(id)device;	// 0x33aabbfd
- (void)_failedToAuthenticateAccount:(id)authenticateAccount;	// 0x33aabe15
- (void)_failedToAuthenticateDevice:(id)authenticateDevice;	// 0x33aabc3d
- (void)_removeAccountAuthenticationObservers;	// 0x33aabd35
- (void)_removeDefferredRequests;	// 0x33aac225
- (void)_removeDeviceAuthenticationObservers;	// 0x33aabb81
- (void)addAuthenticationHeadersToRequest:(id)request accountAuthRequired:(BOOL)required;	// 0x33aac245
- (BOOL)cachedCredentialsValid;	// 0x33aac4d1
- (void)clearAccountInfo;	// 0x33aac42d
- (void)dealloc;	// 0x33aab931
- (void)didAuthenticateAccount;	// 0x33aabdb1
- (void)invalidateToken;	// 0x33aac3dd
- (BOOL)isAccountAuthenticated;	// 0x33aac535
- (BOOL)isWaitingForAuthentication;	// 0x33aac505
- (BOOL)loadStoredCredentials;	// 0x33aac54d
- (void)setAccount:(id)account password:(id)password;	// 0x33aabead
- (void)setDelegate:(id)delegate;	// 0x33aab97d
- (void)userCancelledAccountAuthentication;	// 0x33aabf0d
@end

