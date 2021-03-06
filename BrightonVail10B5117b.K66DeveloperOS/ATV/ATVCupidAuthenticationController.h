/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVSharedCredentialsAuthenticationController.h"

@class NSTimer, ATVDataQuery;

__attribute__((visibility("hidden")))
@interface ATVCupidAuthenticationController : ATVSharedCredentialsAuthenticationController {
	ATVDataQuery *_query;	// 120 = 0x78
	NSTimer *_spinnerTimer;	// 124 = 0x7c
	BOOL _accountOptionsPreviouslySet;	// 128 = 0x80
}
- (void)_queryComplete:(id)complete;	// 0xf84e9
- (void)_showSpinner;	// 0xf85ed
- (void)dealloc;	// 0xf7cd5
- (BOOL)handleDisplayForAuthCancelledError:(id)authCancelledError;	// 0xf80e1
- (BOOL)handleDisplayForAuthFailureError:(id)authFailureError userName:(id)name attempAuthorizationAgain:(BOOL *)again;	// 0xf834d
- (BOOL)performPostAuthenticationOperationsWithUser:(id)user accountOptionsPreviouslySet:(BOOL)set;	// 0xf7d89
- (void)wasPopped;	// 0xf7d35
@end

