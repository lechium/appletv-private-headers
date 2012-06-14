/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import "SBDeviceLockKeypad.h"
#import "SpringBoardUI-Structs.h"

@class UIView;

@interface SBDeviceLockKeypadWildcat : SBDeviceLockKeypad {
	UIView *_glowView;	// 172 = 0xac
}
+ (id)keypadImage;	// 0x349b7629
+ (id)pressedImage;	// 0x349b7651
- (id)initWithFrame:(CGRect)frame;	// 0x349b7079
- (CGRect)_rectForKey:(int)key;	// 0x349b758d
- (float)_yFudge;	// 0x349b7589
- (BOOL)cancelKeyChar;	// 0x349b7679
- (void)dealloc;	// 0x349b7399
- (BOOL)deleteKeyChar;	// 0x349b7661
- (void)setHighlighted:(BOOL)highlighted;	// 0x349b73e5
@end

