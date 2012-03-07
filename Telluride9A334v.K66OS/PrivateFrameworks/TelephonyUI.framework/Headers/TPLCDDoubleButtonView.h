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
	TPWellButtonView *_leftWellButtonView;	// 80 = 0x50
	TPWellButtonView *_rightWellButtonView;	// 84 = 0x54
}
@property(readonly, retain, nonatomic) TPButton *leftButton;	// G=0x31a62ba1; 
@property(readonly, retain, nonatomic) TPButton *rightButton;	// G=0x31a62bc1; 
- (id)initWithDefaultSizeForOrientation:(int)orientation;	// 0x31a62dd5
- (CGRect)_leftWellFrame;	// 0x31a62be1
- (CGRect)_rightWellFrame;	// 0x31a62c21
- (void)dealloc;	// 0x31a62cd5
- (CGRect)fullSizedContentViewFrame;	// 0x31a62d35
// declared property getter: - (id)leftButton;	// 0x31a62ba1
// declared property getter: - (id)rightButton;	// 0x31a62bc1
- (BOOL)shouldCenterContentView;	// 0x31a62b99
- (BOOL)shouldCenterText;	// 0x31a62b95
- (BOOL)showImageViewOnLeftSide;	// 0x31a62b9d
@end
