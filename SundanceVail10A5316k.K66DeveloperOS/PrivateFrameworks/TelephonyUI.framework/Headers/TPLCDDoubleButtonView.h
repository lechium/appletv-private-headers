/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import "TelephonyUI-Structs.h"
#import "TPLCDView.h"

@class TPButton, TPWellButtonView;

@interface TPLCDDoubleButtonView : TPLCDView {
	TPWellButtonView *_leftWellButtonView;	// 128 = 0x80
	TPWellButtonView *_rightWellButtonView;	// 132 = 0x84
}
@property(readonly, assign, nonatomic) TPButton *leftButton;	// G=0x35117239; 
@property(readonly, assign, nonatomic) TPButton *rightButton;	// G=0x35117259; 
- (id)initWithDefaultSizeForOrientation:(int)orientation;	// 0x35116f8d
- (CGRect)_leftWellFrame;	// 0x35116f31
- (CGRect)_rightWellFrame;	// 0x35116e55
- (void)dealloc;	// 0x351171d5
- (CGRect)fullSizedContentViewFrame;	// 0x35117279
// declared property getter: - (id)leftButton;	// 0x35117239
// declared property getter: - (id)rightButton;	// 0x35117259
- (BOOL)shouldCenterContentView;	// 0x35117339
- (BOOL)shouldCenterText;	// 0x35117335
- (BOOL)showImageViewOnLeftSide;	// 0x3511733d
@end

