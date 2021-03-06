/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import "TelephonyUI-Structs.h"
#import "TPBottomBar.h"

@class UIView, TPButton, UIImageView;

@interface TPBottomSingleButtonBar : TPBottomBar {
	id _delegate;	// 56 = 0x38
	UIImageView *_backgroundView;	// 60 = 0x3c
	UIView *_well;	// 64 = 0x40
	TPButton *_button;	// 68 = 0x44
}
@property(readonly, retain) TPButton *button;	// G=0x31a56cd5; converted property
+ (id)_backgroundImage;	// 0x31a57529
- (id)initForEndCallWithFrame:(CGRect)frame;	// 0x31a57899
- (id)initForEndVideoWithFrame:(CGRect)frame;	// 0x31a576f9
- (id)initForIncomingCallWaitingWithFrame:(CGRect)frame;	// 0x31a573b5
- (id)initForTTYWithFrame:(CGRect)frame;	// 0x31a57611
- (id)initForVoiceControlWithFrame:(CGRect)frame;	// 0x31a56ce5
- (void)addBackgroundAndWellIfNecessary;	// 0x31a56db9
// converted property getter: - (id)button;	// 0x31a56cd5
- (void)dealloc;	// 0x31a5759d
- (void)setButton:(id)button andStyle:(BOOL)style;	// 0x31a570e9
@end

