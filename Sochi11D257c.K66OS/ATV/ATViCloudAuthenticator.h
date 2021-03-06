/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVSharedCredentialsAuthenticator.h"

@class ACAccount;

__attribute__((visibility("hidden")))
@interface ATViCloudAuthenticator : ATVSharedCredentialsAuthenticator {
	ACAccount *_authenticatingAppleAccount;	// 12 = 0xc
	BOOL _requiresMachineProvisioning;	// 16 = 0x10
	BOOL _isSecondPassHSAError;	// 17 = 0x11
}
- (void).cxx_destruct;	// 0xa4059
- (void)_authCompletionHandler:(BOOL)handler error:(id)error callbackType:(int)type;	// 0xa406d
- (void)_handleAuthenticationSucceeded;	// 0xa5271
- (void)_handleHSASucceeded:(id)succeeded;	// 0xa5a81
- (void)_handleTOCAgreed:(id)agreed;	// 0xa4e09
- (void)_handleTOCDisagreed:(id)disagreed;	// 0xa51f1
- (void)_loadHSADevicesWithCompletionHandler:(id)completionHandler;	// 0xa52d5
- (void)_loadTOCWithCompletionHandler:(id)completionHandler;	// 0xa4bc1
- (id)_makeAuthenticationController;	// 0xa39c1
- (void)_sendAuthenticationRequest;	// 0xa3a55
- (void)_sendHSACodeToDevice:(id)device withCompletionHandler:(id)completionHandler;	// 0xa554d
- (void)_verifyHSACode:(id)code fromDevice:(id)device withCompletionHandler:(id)completionHandler;	// 0xa57c9
- (BOOL)requiresPassword:(id *)password;	// 0xa3fbd
@end

