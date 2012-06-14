/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRAuthenticationController.h"

@class BRWaitPromptControl, BRAlertControl, NSTimer;

@interface ATVOAuth2DPAuthenticationController : BRAuthenticationController {
@private
	BRWaitPromptControl *_waitPrompt;	// 100 = 0x64
	BRAlertControl *_alertControl;	// 104 = 0x68
	NSTimer *_promptTimer;	// 108 = 0x6c
	NSTimer *_retryTimer;	// 112 = 0x70
	double _retryInterval;	// 116 = 0x74
}
- (id)initWithAuthenticator:(id)authenticator resources:(id)resources;	// 0x303a8365
- (void)_authenticate;	// 0x303a8d69
- (void)_promptUserWithUserCode:(id)userCode verificationURL:(id)url;	// 0x303a884d
- (void)_retryTimerHandler:(id)handler;	// 0x303a8d31
- (BOOL)_shouldAttemptAuthenticationAgainWithErrorMessage:(id)errorMessage;	// 0x303a8a4d
- (BOOL)_shouldRetryAuthentication;	// 0x303a89fd
- (void)_showPrompt:(id)prompt;	// 0x303a8be5
- (void)authenticateAtInterval:(double)interval userCode:(id)code verificationURL:(id)url;	// 0x303a8679
- (void)authenticationCancelled:(id)cancelled;	// 0x303a84bd
- (void)authenticationFailed:(id)failed;	// 0x303a8515
- (void)authenticationSucceeded:(BOOL)succeeded;	// 0x303a8465
- (void)slowDown;	// 0x303a874d
- (void)wasPopped;	// 0x303a87d1
- (void)wasPushed;	// 0x303a876d
@end
