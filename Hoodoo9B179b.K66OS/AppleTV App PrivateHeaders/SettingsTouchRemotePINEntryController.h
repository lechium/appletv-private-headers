/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SettingsTouchRemotePINEntryController.h"
#import "SettingsPINEntryViewDelegate.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface SettingsTouchRemotePINEntryController : XXUnknownSuperclass <SettingsPINEntryViewDelegate> {
	NSDictionary *_remoteInfo;	// 68 = 0x44
}
- (id)initWithTouchRemoteInfo:(id)touchRemoteInfo;	// 0xce3b1
- (void).cxx_destruct;	// 0xce749
- (void)dealloc;	// 0xce63d
- (void)pinEntryComplete:(id)complete;	// 0xce6a9
@end

@interface SettingsTouchRemotePINEntryController (TouchRemoteResponse)
- (void)_pairingCanceled:(id)canceled;	// 0xce899
- (void)_pairingFailed:(id)failed;	// 0xce811
- (void)_pairingSucceeded:(id)succeeded;	// 0xce75d
@end

