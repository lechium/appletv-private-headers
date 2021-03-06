/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIImageView.h"
#import "UIKit-Structs.h"

@class UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface UISearchBarBackground : UIImageView {
@private
	UIColor *_tintColor;	// 52 = 0x34
	UIImage *_backgroundImage;	// 56 = 0x38
	unsigned _barStyle : 3;	// 60 = 0x3c
	unsigned _isTranslucent : 1;	// 60 = 0x3c
	unsigned _usesEmbeddedAppearance : 1;	// 60 = 0x3c
}
@property(retain, nonatomic) UIImage *backgroundImage;	// G=0x358f4605; S=0x3574604d; 
@property(assign, nonatomic) int barStyle;	// G=0x358f45f1; S=0x358f45a5; 
@property(retain, nonatomic) UIColor *tintColor;	// G=0x358f4701; S=0x358f44cd; @synthesize=_tintColor
@property(assign, nonatomic, getter=isTranslucent) BOOL translucent;	// G=0x358f455d; S=0x358f4525; 
@property(assign, nonatomic) BOOL usesEmbeddedAppearance;	// G=0x358f4591; S=0x356c2d45; 
- (id)initWithFrame:(CGRect)frame;	// 0x356c1e8d
- (void)_updateBackgroundImage;	// 0x356c1f9d
// declared property getter: - (id)backgroundImage;	// 0x358f4605
// declared property getter: - (int)barStyle;	// 0x358f45f1
- (void)dealloc;	// 0x357dc045
// declared property getter: - (BOOL)isTranslucent;	// 0x358f455d
// declared property setter: - (void)setBackgroundImage:(id)image;	// 0x3574604d
// declared property setter: - (void)setBarStyle:(int)style;	// 0x358f45a5
- (void)setBounds:(CGRect)bounds;	// 0x358f463d
- (void)setFrame:(CGRect)frame;	// 0x356c1ed9
// declared property setter: - (void)setTintColor:(id)color;	// 0x358f44cd
// declared property setter: - (void)setTranslucent:(BOOL)translucent;	// 0x358f4525
// declared property setter: - (void)setUsesEmbeddedAppearance:(BOOL)appearance;	// 0x356c2d45
// declared property getter: - (id)tintColor;	// 0x358f4701
// declared property getter: - (BOOL)usesEmbeddedAppearance;	// 0x358f4591
@end

