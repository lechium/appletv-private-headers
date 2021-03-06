/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIControl.h"
#import "UIKit-Structs.h"
#import "NSCoding.h"

@class UIColor, UIImage;

@interface UISwitch : UIControl <NSCoding> {
	id _control;	// 108 = 0x6c
	float _enabledAlpha;	// 112 = 0x70
}
@property(assign, nonatomic) float enabledAlpha;	// G=0x3049449d; S=0x302f044d; @synthesize=_enabledAlpha
@property(retain, nonatomic) UIImage *offImage;	// G=0x304943ed; S=0x304943cd; 
@property(assign, nonatomic, getter=isOn) BOOL on;	// G=0x302f5149; S=0x302f046d; @dynamic
@property(retain, nonatomic, getter=_onColor, setter=_setOnColor:) UIColor *onColor;	// G=0x304942fd; S=0x304942ed; 
@property(retain, nonatomic) UIImage *onImage;	// G=0x3049442d; S=0x3049440d; 
@property(retain, nonatomic) UIColor *onTintColor;	// G=0x3049432d; S=0x302f063d; 
@property(retain, nonatomic) UIColor *thumbTintColor;	// G=0x304943ad; S=0x3049438d; 
@property(retain, nonatomic) UIColor *tintColor;	// G=0x3049436d; S=0x3049434d; 
- (id)init;	// 0x30493a75
- (id)initWithCoder:(id)coder;	// 0x30493ac9
- (id)initWithFrame:(CGRect)frame;	// 0x302eea81
- (void)_animateToOn:(BOOL)on withDuration:(float)duration sendAction:(BOOL)action;	// 0x303dcd99
- (void)_commonInitNewLook;	// 0x302eec19
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;	// 0x304942d5
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;	// 0x304942d1
- (void)_encodeFrameWithCoder:(id)coder;	// 0x30493d7d
- (void)_handlePanNL:(id)nl;	// 0x304937e1
- (void)_handleTapNL:(id)nl;	// 0x30493a11
- (CGSize)_intrinsicSizeWithinSize:(CGSize)size;	// 0x302eebd1
- (void)_onAnimationDidStop:(id)_onAnimation finished:(id)finished context:(void *)context;	// 0x30494239
// declared property getter: - (id)_onColor;	// 0x304942fd
- (id)_onTintColor;	// 0x3049431d
- (void)_populateArchivedSubviews:(id)subviews;	// 0x3049444d
- (id)_scriptingInfo;	// 0x304944cd
// declared property setter: - (void)_setOnColor:(id)color;	// 0x304942ed
- (void)_setOnTintColor:(id)color;	// 0x3049430d
- (BOOL)_useOldSize;	// 0x302eeb05
- (UIEdgeInsets)alignmentRectInsets;	// 0x304942d9
- (void)dealloc;	// 0x303bc7bd
- (unsigned long long)defaultAccessibilityTraits;	// 0x304afc15
// declared property getter: - (float)enabledAlpha;	// 0x3049449d
- (void)encodeWithCoder:(id)coder;	// 0x30494015
- (BOOL)isAccessibilityElementByDefault;	// 0x304afc11
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x304afc29
// declared property getter: - (BOOL)isOn;	// 0x302f5149
// declared property getter: - (id)offImage;	// 0x304943ed
// declared property getter: - (id)onImage;	// 0x3049442d
// declared property getter: - (id)onTintColor;	// 0x3049432d
- (void)setAlpha:(float)alpha;	// 0x302f1361
- (void)setAlternateColors:(BOOL)colors;	// 0x304944ad
- (void)setEnabled:(BOOL)enabled;	// 0x302f516d
// declared property setter: - (void)setEnabledAlpha:(float)alpha;	// 0x302f044d
- (void)setFrame:(CGRect)frame;	// 0x302eeb3d
// declared property setter: - (void)setOffImage:(id)image;	// 0x304943cd
// declared property setter: - (void)setOn:(BOOL)on;	// 0x302f046d
- (void)setOn:(BOOL)on animated:(BOOL)animated;	// 0x302f0481
// declared property setter: - (void)setOnImage:(id)image;	// 0x3049440d
// declared property setter: - (void)setOnTintColor:(id)color;	// 0x302f063d
// declared property setter: - (void)setThumbTintColor:(id)color;	// 0x3049438d
// declared property setter: - (void)setTintColor:(id)color;	// 0x3049434d
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x302eeba1
// declared property getter: - (id)thumbTintColor;	// 0x304943ad
// declared property getter: - (id)tintColor;	// 0x3049436d
@end

