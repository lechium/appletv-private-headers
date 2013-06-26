/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIView.h"
#import "UIKit-Structs.h"

@class UIImageView, UINavigationBar, UIColor, _UINavigationControllerPalette, _UIBackdropView;

__attribute__((visibility("hidden")))
@interface _UINavigationPaletteBackground : UIView {
	UIColor *_barTintColor;	// 96 = 0x60
	UIImageView *_shadowView;	// 100 = 0x64
	_UINavigationControllerPalette *_palette;	// 104 = 0x68
	UINavigationBar *_bar;	// 108 = 0x6c
	_UIBackdropView *_adaptiveBackdrop;	// 112 = 0x70
	struct {
		unsigned barTranslucence : 3;
		unsigned barStyle : 3;
		unsigned barWantsAdaptiveBackdrop : 1;
		unsigned barForcesOpaqueBackground : 1;
	} _navbarFlags;	// 116 = 0x74
}
@property(assign, nonatomic) BOOL barForcesOpaqueBackground;	// G=0x2f5d15c5; S=0x2f5d15a1; 
@property(assign, nonatomic) int barStyle;	// G=0x2f5d14f9; S=0x2f5d14b9; 
@property(retain, nonatomic) UIColor *barTintColor;	// G=0x2f5d14a9; S=0x2f5d1451; 
@property(assign, nonatomic) BOOL barWantsAdaptiveBackdrop;	// G=0x2f5d158d; S=0x2f5d1569; 
@property(retain, nonatomic, getter=_shadowView, setter=_setShadowView:) UIView *shadowView;	// G=0x2f5d1cad; S=0x2f5d1cbd; @synthesize=_shadowView
@property(assign, nonatomic, getter=isTranslucent) BOOL translucent;	// G=0x2f5d154d; S=0x2f5d150d; 
- (id)initWithNavigationBar:(id)navigationBar forPalette:(id)palette;	// 0x2f5d120d
- (void)_setFrame:(CGRect)frame forceUpdateBackgroundImage:(BOOL)image;	// 0x2f5d15d9
// declared property setter: - (void)_setShadowView:(id)view;	// 0x2f5d1cbd
// declared property getter: - (id)_shadowView;	// 0x2f5d1cad
- (void)_syncWithBarStyles;	// 0x2f5d129d
// declared property getter: - (BOOL)barForcesOpaqueBackground;	// 0x2f5d15c5
// declared property getter: - (int)barStyle;	// 0x2f5d14f9
// declared property getter: - (id)barTintColor;	// 0x2f5d14a9
// declared property getter: - (BOOL)barWantsAdaptiveBackdrop;	// 0x2f5d158d
- (void)dealloc;	// 0x2f5d13d9
- (void)didMoveToSuperview;	// 0x2f5d1c59
- (BOOL)forcesOpaqueConsultingInternalForcingAndBarTranslucence;	// 0x2f5d17d1
// declared property getter: - (BOOL)isTranslucent;	// 0x2f5d154d
// declared property setter: - (void)setBarForcesOpaqueBackground:(BOOL)background;	// 0x2f5d15a1
// declared property setter: - (void)setBarStyle:(int)style;	// 0x2f5d14b9
// declared property setter: - (void)setBarTintColor:(id)color;	// 0x2f5d1451
// declared property setter: - (void)setBarWantsAdaptiveBackdrop:(BOOL)backdrop;	// 0x2f5d1569
- (void)setBounds:(CGRect)bounds;	// 0x2f5d16ed
- (void)setFrame:(CGRect)frame;	// 0x2f5d16c1
// declared property setter: - (void)setTranslucent:(BOOL)translucent;	// 0x2f5d150d
- (void)updateBackgroundView;	// 0x2f5d1811
@end
