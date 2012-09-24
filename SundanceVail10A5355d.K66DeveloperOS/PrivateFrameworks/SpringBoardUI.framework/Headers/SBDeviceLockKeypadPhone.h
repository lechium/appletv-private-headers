/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import "SBDeviceLockKeypad.h"
#import "SpringBoardUI-Structs.h"

@class UIButton, UIImage;

@interface SBDeviceLockKeypadPhone : SBDeviceLockKeypad {
	UIButton *_emergencyCallButton;	// 172 = 0xac
	UIButton *_poundButton;	// 176 = 0xb0
	UIImage *_deleteIcon;	// 180 = 0xb4
}
@property(assign) BOOL showsEmergencyCallButton;	// G=0x36395b15; S=0x36395b2d; converted property
+ (id)keypadImage;	// 0x36395d09
+ (id)pressedImage;	// 0x36395d31
- (id)initWithFrame:(CGRect)frame;	// 0x36395885
- (void)_updateCancelAndDeleteButtons;	// 0x36395da9
- (float)_yFudge;	// 0x36395b11
- (BOOL)cancelKeyChar;	// 0x36395d71
- (void)dealloc;	// 0x36395a99
- (BOOL)deleteKeyChar;	// 0x36395d59
- (BOOL)emergencyKeyChar;	// 0x36395d89
- (void)setDeleteEnabled:(BOOL)enabled;	// 0x36395cc9
// converted property setter: - (void)setShowsEmergencyCallButton:(BOOL)button;	// 0x36395b2d
// converted property getter: - (BOOL)showsEmergencyCallButton;	// 0x36395b15
@end
