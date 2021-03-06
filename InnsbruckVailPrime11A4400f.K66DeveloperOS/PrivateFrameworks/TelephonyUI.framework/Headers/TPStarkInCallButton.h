/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import "TelephonyUI-Structs.h"
#import <UIKit/UIButton.h>

@class UIView, UILabel, NSLayoutConstraint, UIColor;

@interface TPStarkInCallButton : UIButton {
	BOOL _toggledOn;	// 226 = 0xe2
	UILabel *_buttonLabel;	// 228 = 0xe4
	NSLayoutConstraint *_horizontalPositioningConstraint;	// 232 = 0xe8
	int _inCallButtonType;	// 236 = 0xec
	UIColor *_unhighlightedBackgroundColor;	// 240 = 0xf0
	UIView *_toggledOnView;	// 244 = 0xf4
}
@property(retain) UILabel *buttonLabel;	// G=0x329d2b71; S=0x329d2b85; @synthesize=_buttonLabel
@property(retain) NSLayoutConstraint *horizontalPositioningConstraint;	// G=0x329d2bb5; S=0x329d2bc9; @synthesize=_horizontalPositioningConstraint
@property(readonly, assign) int inCallButtonType;	// G=0x329d2bf9; @synthesize=_inCallButtonType
@property(readonly, assign) int specialLayoutType;	// G=0x329d2519; 
@property(assign, nonatomic) BOOL toggledOn;	// G=0x329d2c0d; S=0x329d27ad; @synthesize=_toggledOn
@property(retain) UIView *toggledOnView;	// G=0x329d2c61; S=0x329d2c75; @synthesize=_toggledOnView
@property(retain) UIColor *unhighlightedBackgroundColor;	// G=0x329d2c1d; S=0x329d2c31; @synthesize=_unhighlightedBackgroundColor
- (id)initForButtonType:(int)buttonType;	// 0x329d16c9
// declared property getter: - (id)buttonLabel;	// 0x329d2b71
- (void)dealloc;	// 0x329d2ae5
// declared property getter: - (id)horizontalPositioningConstraint;	// 0x329d2bb5
// declared property getter: - (int)inCallButtonType;	// 0x329d2bf9
- (CGSize)intrinsicContentSize;	// 0x329d2551
// declared property setter: - (void)setButtonLabel:(id)label;	// 0x329d2b85
- (void)setEnabled:(BOOL)enabled;	// 0x329d2691
- (void)setHighlighted:(BOOL)highlighted;	// 0x329d2591
// declared property setter: - (void)setHorizontalPositioningConstraint:(id)constraint;	// 0x329d2bc9
- (void)setSelected:(BOOL)selected;	// 0x329d273d
// declared property setter: - (void)setToggledOn:(BOOL)on;	// 0x329d27ad
// declared property setter: - (void)setToggledOnView:(id)view;	// 0x329d2c75
// declared property setter: - (void)setUnhighlightedBackgroundColor:(id)color;	// 0x329d2c31
// declared property getter: - (int)specialLayoutType;	// 0x329d2519
// declared property getter: - (BOOL)toggledOn;	// 0x329d2c0d
// declared property getter: - (id)toggledOnView;	// 0x329d2c61
// declared property getter: - (id)unhighlightedBackgroundColor;	// 0x329d2c1d
@end

