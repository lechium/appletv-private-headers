/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVPINController.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface SettingsTouchRemotePINEntryController : ATVPINController {
	NSDictionary *_remoteInfo;	// 104 = 0x68
}
- (id)initWithTouchRemoteInfo:(id)touchRemoteInfo;	// 0x2b44e9
- (void).cxx_destruct;	// 0x2b491d
- (void)_pairingCanceled:(id)canceled;	// 0x2b4a4d
- (void)_pairingFailed:(id)failed;	// 0x2b49e5
- (void)_pairingSucceeded:(id)succeeded;	// 0x2b4931
- (void)dealloc;	// 0x2b48b1
@end
