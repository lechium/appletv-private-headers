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
	TPButton *_button2;	// 120 = 0x78
	UIView *_well1;	// 124 = 0x7c
	UIView *_well2;	// 128 = 0x80
	UIView *_wellContainer;	// 132 = 0x84
}
@property(readonly, retain) TPButton *button2;	// G=0x3510e97d; converted property
+ (float)_wellPadding;	// 0x3510da85
- (id)initForCallFailureWithFrame:(CGRect)frame;	// 0x3510df55
- (id)initForEmergencyCallWithFrame:(CGRect)frame;	// 0x3510e1cd
- (id)initForIncomingCallWithFrame:(CGRect)frame;	// 0x3510dc79
- (id)initForVideoChatWithFrame:(CGRect)frame;	// 0x3510e3b5
- (id)initWithFrame:(CGRect)frame style:(int)style;	// 0x3510dacd
- (float)_buttonWidth;	// 0x3510d9f1
- (void)_layoutButtons;	// 0x3510ebdd
- (void)_layoutWells;	// 0x3510ea45
- (void)_updateButtonSettings:(id)settings;	// 0x3510e705
// converted property getter: - (id)button2;	// 0x3510e97d
- (void)dealloc;	// 0x3510e679
- (void)layoutSubviews;	// 0x3510ef25
- (void)setButton2:(id)a2 andStyle:(BOOL)style;	// 0x3510e8d5
- (void)setButton:(id)button andStyle:(BOOL)style;	// 0x3510e829
- (void)setDrawsSeparateWells:(BOOL)wells;	// 0x3510e98d
- (void)setWellAlpha:(float)alpha;	// 0x3510ef79
@end

