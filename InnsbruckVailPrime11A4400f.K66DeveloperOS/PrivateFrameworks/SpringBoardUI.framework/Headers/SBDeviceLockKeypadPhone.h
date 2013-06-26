/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import "SpringBoardUI-Structs.h"
#import "SBDeviceLockKeypad.h"

@class UIImage, UIButton;

@interface SBDeviceLockKeypadPhone : SBDeviceLockKeypad {
	UIButton *_emergencyCallButton;	// 188 = 0xbc
	UIButton *_poundButton;	// 192 = 0xc0
	UIImage *_deleteIcon;	// 196 = 0xc4
}
@property(assign) BOOL showsEmergencyCallButton;	// G=0x3277d519; S=0x3277d531; converted property
+ (id)keypadImage;	// 0x3277d755
+ (id)pressedImage;	// 0x3277d7a5
- (id)initWithFrame:(CGRect)frame;	// 0x3277d23d
- (void)_updateCancelAndDeleteButtons;	// 0x3277d845
- (float)_yFudge;	// 0x3277d515
- (BOOL)cancelKeyChar;	// 0x3277d80d
- (void)dealloc;	// 0x3277d49d
- (BOOL)deleteKeyChar;	// 0x3277d7f5
- (BOOL)emergencyKeyChar;	// 0x3277d825
- (void)setDeleteEnabled:(BOOL)enabled;	// 0x3277d715
// converted property setter: - (void)setShowsEmergencyCallButton:(BOOL)button;	// 0x3277d531
// converted property getter: - (BOOL)showsEmergencyCallButton;	// 0x3277d519
@end
