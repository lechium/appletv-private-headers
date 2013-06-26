/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <UIKit/UIKeyboard.h>
#import "SpringBoardUI-Structs.h"

@class SBDeviceLockViewWithKeyboard;

@interface SBDeviceLockKeyboard : UIKeyboard {
	SBDeviceLockViewWithKeyboard *_deviceLockView;	// 116 = 0x74
}
- (id)initWithFrame:(CGRect)frame deviceLockView:(id)view;	// 0x3277ec51
- (BOOL)canDismiss;	// 0x3277ecb9
- (BOOL)isActive;	// 0x3277ec9d
- (void)maximize;	// 0x3277ed6d
- (void)minimize;	// 0x3277ed4d
- (BOOL)shouldSaveMinimizationState;	// 0x3277ed29
@end
