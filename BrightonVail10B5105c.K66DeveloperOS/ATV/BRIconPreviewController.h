/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRImageControl, BRTextControl;

__attribute__((visibility("hidden")))
@interface BRIconPreviewController : BRControl {
	BRTextControl *_message;	// 84 = 0x54
	BRTextControl *_instruction;	// 88 = 0x58
	BRImageControl *_image;	// 92 = 0x5c
	float _iconHeightFactor;	// 96 = 0x60
	float _horizontalPosition;	// 100 = 0x64
	float _verticalPosition;	// 104 = 0x68
	float _messageVerticalPosition;	// 108 = 0x6c
}
- (id)init;	// 0x3269c1
- (id)accessibilityLabel;	// 0x3271dd
- (void)dealloc;	// 0x326ad9
- (void)layoutSubcontrols;	// 0x326b51
- (void)setIconHeightFactor:(float)factor;	// 0x32717d
- (void)setIconHorizontalPosition:(float)position;	// 0x32719d
- (void)setIconVerticalPosition:(float)position;	// 0x3271bd
- (void)setImage:(id)image;	// 0x3270c5
- (void)setInstructions:(id)instructions;	// 0x3270e5
- (void)setMessage:(id)message;	// 0x32700d
- (void)setMessageVerticalPosition:(float)position;	// 0x3270a5
@end
