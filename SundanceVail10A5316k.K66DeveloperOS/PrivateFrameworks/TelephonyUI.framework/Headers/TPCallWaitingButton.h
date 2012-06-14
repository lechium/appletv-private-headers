/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import "TelephonyUI-Structs.h"
#import <UIImageView.h> // Unknown library

@class TPButton;

@interface TPCallWaitingButton : UIImageView {
	TPButton *_innerButton;	// 96 = 0x60
	unsigned _type : 1;	// 100 = 0x64
}
@property(assign, getter=isEnabled) BOOL enabled;	// G=0x35114231; S=0x35114211; converted property
+ (id)_buttonForType:(int)type;	// 0x35113a55
+ (CGSize)defaultSizeForType:(int)type;	// 0x35113a91
+ (float)defaultVerticalCenteringOffset;	// 0x35113ae9
- (id)initBottomForIncomingCallWaiting;	// 0x35113ea5
- (id)initBottomForSecondIncomingCallWaiting;	// 0x35113f65
- (id)initBottomForTTYWithTitle:(id)title;	// 0x3511406d
- (id)initTopForIncomingCallWaiting;	// 0x35113d1d
- (id)initTopForTTY;	// 0x35113de1
- (id)initWithFrame:(CGRect)frame type:(int)type;	// 0x35113af1
- (void)addTarget:(id)target action:(SEL)action forControlEvents:(unsigned)controlEvents;	// 0x35114181
- (void)addTarget:(id)target action:(SEL)action forEvents:(int)events;	// 0x351141d1
- (void)dealloc;	// 0x35114135
// converted property getter: - (BOOL)isEnabled;	// 0x35114231
- (void)removeTarget:(id)target forControlEvents:(unsigned)controlEvents;	// 0x351141a1
- (void)removeTarget:(id)target forEvents:(int)events;	// 0x351141f1
// converted property setter: - (void)setEnabled:(BOOL)enabled;	// 0x35114211
@end

