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
- (void)_queryComplete:(id)complete;	// 0xf5c29
- (void)_showSpinner;	// 0xf5d2d
- (void)dealloc;	// 0xf5415
- (BOOL)handleDisplayForAuthCancelledError:(id)authCancelledError;	// 0xf5821
- (BOOL)handleDisplayForAuthFailureError:(id)authFailureError userName:(id)name attempAuthorizationAgain:(BOOL *)again;	// 0xf5a8d
- (BOOL)performPostAuthenticationOperationsWithUser:(id)user accountOptionsPreviouslySet:(BOOL)set;	// 0xf54c9
- (void)wasPopped;	// 0xf5475
@end
