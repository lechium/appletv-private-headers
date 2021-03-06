/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import "TelephonyUI-Structs.h"
#import "TPBottomSingleButtonBar.h"

@class TPButton;

@interface TPBottomDoubleButtonBar : TPBottomSingleButtonBar {
	TPButton *_button2;	// 72 = 0x48
	UIView *_well2;	// 76 = 0x4c
	UIView *_wellContainer;	// 80 = 0x50
	unsigned _drawSeparator : 1;	// 84 = 0x54
}
@property(readonly, retain) TPButton *button2;	// G=0x3484c775; converted property
+ (float)_wellPadding;	// 0x3484c86d
- (id)initForCallFailureWithFrame:(CGRect)frame;	// 0x3484d3dd
- (id)initForEmergencyCallWithFrame:(CGRect)frame;	// 0x3484d1a5
- (id)initForIncomingCallWithFrame:(CGRect)frame;	// 0x3484d66d
- (id)initForVideoChatWithFrame:(CGRect)frame;	// 0x3484cea5
- (id)initWithFrame:(CGRect)frame style:(int)style;	// 0x3484d981
- (float)_buttonWidth;	// 0x3484c785
- (void)_updateButtonSettings:(id)settings;	// 0x3484cd21
// converted property getter: - (id)button2;	// 0x3484c775
- (void)dealloc;	// 0x3484ce31
- (void)drawRect:(CGRect)rect;	// 0x3484c821
- (void)setButton2:(id)a2 andStyle:(BOOL)style;	// 0x3484c98d
- (void)setButton:(id)button andStyle:(BOOL)style;	// 0x3484cb55
- (void)setDrawsSeparateWells:(BOOL)wells;	// 0x3484c8b5
@end

