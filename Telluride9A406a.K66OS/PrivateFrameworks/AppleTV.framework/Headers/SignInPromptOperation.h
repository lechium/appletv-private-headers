/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ISOperation.h"

@class SSAuthenticationContext, SignInResponse;

__attribute__((visibility("hidden")))
@interface SignInPromptOperation : ISOperation {
@private
	SSAuthenticationContext *_authenticationContext;	// 60 = 0x3c
	SignInResponse *_response;	// 64 = 0x40
	id _authFailureBlock;	// 68 = 0x44
	id _authSuccessBlock;	// 72 = 0x48
}
@property(readonly, assign) SSAuthenticationContext *authenticationContext;	// G=0x331e66e1; 
@property(readonly, assign) SignInResponse *signInResponse;	// G=0x331e6741; 
- (id)initWithAuthenticationContext:(id)authenticationContext;	// 0x331e6605
- (id)_activeUserName;	// 0x331e6f95
- (void)_authenticateWithSuccess:(id)success withFailure:(id)failure;	// 0x331e68f1
- (void)_authenticationFailed:(id)failed;	// 0x331e6dfd
- (void)_authenticationStatusChanged:(id)changed;	// 0x331e6d65
- (void)_callAuthFailureBlocks;	// 0x331e6849
- (void)_callAuthSuccessBlocks;	// 0x331e67a1
- (id)_copyResponseByPromptingForCredentials:(id *)credentials;	// 0x331e7019
- (BOOL)_isAuthNotificationForMe:(id)me;	// 0x331e6c31
- (id)_newCreateAccountDialog;	// 0x331e7429
- (id)_newSignInDialog;	// 0x331e76c5
- (id)_passwordTextField;	// 0x331e79cd
- (void)_setSignInResponse:(id)response;	// 0x331e7ab9
- (void)_setSignInResponseType:(int)responseType;	// 0x331e7b21
- (id)_userNameTextField;	// 0x331e7b95
// declared property getter: - (id)authenticationContext;	// 0x331e66e1
- (void)dealloc;	// 0x331e6659
- (void)run;	// 0x331e6e31
// declared property getter: - (id)signInResponse;	// 0x331e6741
@end

