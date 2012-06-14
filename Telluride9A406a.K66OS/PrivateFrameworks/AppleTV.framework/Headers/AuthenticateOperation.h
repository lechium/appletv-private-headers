/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ISOperation.h"

@class SSAuthenticationContext, SSAuthenticateResponse;

__attribute__((visibility("hidden")))
@interface AuthenticateOperation : ISOperation {
@private
	SSAuthenticationContext *_authenticationContext;	// 60 = 0x3c
	SSAuthenticateResponse *_authenticateResponse;	// 64 = 0x40
}
@property(readonly, assign) SSAuthenticateResponse *authenticateResponse;	// G=0x331e3c79; 
@property(readonly, assign) SSAuthenticationContext *authenticationContext;	// G=0x331e3cd9; 
+ (BOOL)shouldOfferRetryForError:(id)error;	// 0x331e3bd9
- (id)init;	// 0x331e3aa1
- (id)initWithAuthenticationContext:(id)authenticationContext;	// 0x331e3ab5
- (id)_account;	// 0x331e3f95
- (BOOL)_addAccountForAttempt:(id)attempt error:(id *)error;	// 0x331e3fed
- (BOOL)_promptForRetryWithTitle:(id)title message:(id)message;	// 0x331e4261
- (BOOL)_runAuthenticationAttempts:(id *)attempts;	// 0x331e4339
- (void)_setAuthenticateResponse:(id)response;	// 0x331e45cd
- (void)_setAuthenticateResponseWithAccount:(id)account authenticationResponse:(id)response;	// 0x331e46c9
- (void)_setAuthenticateResponseWithAccount:(id)account type:(int)type;	// 0x331e4635
- (void)_setAuthenticateResponseWithFailedAttempt:(id)failedAttempt;	// 0x331e47b5
- (BOOL)_shouldRetryAfterOperationFailed:(id)failed;	// 0x331e48b9
- (BOOL)_shouldRetryForError:(id)error;	// 0x331e4985
- (BOOL)_shouldRetryForServerResponse:(id)serverResponse;	// 0x331e4a19
// declared property getter: - (id)authenticateResponse;	// 0x331e3c79
- (id)authenticatedAccountDSID;	// 0x331e3d39
// declared property getter: - (id)authenticationContext;	// 0x331e3cd9
- (void)dealloc;	// 0x331e3b79
- (void)run;	// 0x331e3d9d
- (id)uniqueKey;	// 0x331e3f25
@end
