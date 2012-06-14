/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <UIKeyboard.h> // Unknown library
#import "SpringBoardUI-Structs.h"

@class SBDeviceLockViewWithKeyboard;

@interface SBDeviceLockKeyboard : UIKeyboard {
	SBDeviceLockViewWithKeyboard *_deviceLockView;	// 100 = 0x64
}
- (id)initWithFrame:(CGRect)frame deviceLockView:(id)view;	// 0x349b80e1
- (BOOL)canDismiss;	// 0x349b8145
- (BOOL)isActive;	// 0x349b8129
- (void)maximize;	// 0x349b81b1
- (void)minimize;	// 0x349b8191
@end

