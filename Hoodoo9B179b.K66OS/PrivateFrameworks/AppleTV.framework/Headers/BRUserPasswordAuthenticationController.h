/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRAuthenticationController.h"

@class BRBoxControl, NSString, NSTimer, BRWaitPromptControl;

@interface BRUserPasswordAuthenticationController : BRAuthenticationController {
@private
	NSString *_userName;	// 100 = 0x64
	NSTimer *_authTimeoutTimer;	// 104 = 0x68
	NSTimer *_promptTimer;	// 108 = 0x6c
	BOOL _hasTimedOut;	// 112 = 0x70
	BRBoxControl *_contentWrapper;	// 116 = 0x74
	BRWaitPromptControl *_waitPrompt;	// 120 = 0x78
}
- (id)initWithAuthenticator:(id)authenticator resources:(id)resources;	// 0x30247a41
- (void)_askUserForPassword:(id)password userName:(id)name completionHandler:(id)handler;	// 0x30248705
- (void)_askUserForUserName:(id)userName completionHandler:(id)handler;	// 0x302481e9
- (void)_authSucceededComplete:(BOOL)complete;	// 0x3024817d
- (void)_authenticate;	// 0x30249179
- (void)_authenticationTimedOut:(id)anOut;	// 0x30248fa5
- (void)_setContent:(id)content;	// 0x30248025
- (void)_setUserName:(id)name;	// 0x302481a9
- (BOOL)_shouldAttemptAuthorizationAgainForUser:(id)user error:(id)error;	// 0x30248bc9
- (void)_showCancellationMessage:(id)message;	// 0x30248d8d
- (void)_showPrompt:(id)prompt;	// 0x30248e95
- (void)authenticationCancelled:(id)cancelled;	// 0x30247cb5
- (void)authenticationFailed:(id)failed;	// 0x30247db9
- (void)authenticationSucceeded:(BOOL)succeeded;	// 0x30247c11
- (BOOL)configurePostUserPasswordOptionsWithUser:(id)user;	// 0x302496dd
- (BOOL)configurePreUserPasswordOptions;	// 0x302496d9
- (void)dealloc;	// 0x30247bc5
- (BOOL)handleDisplayForAuthCancelledError:(id)authCancelledError;	// 0x302496e5
- (BOOL)handleDisplayForAuthFailureError:(id)authFailureError userName:(id)name attempAuthorizationAgain:(BOOL *)again;	// 0x302496e9
- (void)layoutSubcontrols;	// 0x30247f91
- (BOOL)performPostAuthenticationOperationsWithUser:(id)user accountOptionsPreviouslySet:(BOOL)set;	// 0x302496e1
- (void)wasPopped;	// 0x30247f09
- (void)wasPushed;	// 0x30247ea5
@end

