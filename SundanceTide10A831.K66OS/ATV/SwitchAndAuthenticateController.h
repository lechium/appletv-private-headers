/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRTextWithSpinnerController.h"

@class BRAccount;

__attribute__((visibility("hidden")))
@interface SwitchAndAuthenticateController : BRTextWithSpinnerController {
	BRAccount *_account;	// 120 = 0x78
	BRController *_controller;	// 124 = 0x7c
	BOOL _switchSucceded;	// 128 = 0x80
}
- (id)initWithAccount:(id)account controller:(id)controller;	// 0x3df001
- (void).cxx_destruct;	// 0x3df3fd
- (void)dealloc;	// 0x3df149
- (void)swapForAuthenticationController:(id)authenticationController;	// 0x3df299
- (void)wasPopped;	// 0x3df1b5
@end
