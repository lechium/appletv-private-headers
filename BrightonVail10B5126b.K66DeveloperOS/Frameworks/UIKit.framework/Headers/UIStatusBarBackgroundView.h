/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImageView, UIColor, UIStatusBarCorners;

__attribute__((visibility("hidden")))
@interface UIStatusBarBackgroundView : UIView {
	int _style;	// 84 = 0x54
	UIColor *_tintColor;	// 88 = 0x58
	UIStatusBarCorners *_topCorners;	// 92 = 0x5c
	UIImageView *_glowView;	// 96 = 0x60
	BOOL _glowEnabled;	// 100 = 0x64
	BOOL _suppressGlow;	// 101 = 0x65
}
@property(readonly, assign) int style;	// G=0x32b3fd8d; converted property
@property(readonly, retain) UIColor *tintColor;	// G=0x32e06905; converted property
- (id)initWithFrame:(CGRect)frame style:(int)style tintColor:(id)color;	// 0x32b3f821
- (id)_baseImageForStyle:(int)style;	// 0x32b3fa99
- (id)_glowImageForStyle:(int)style;	// 0x32e06d81
- (id)_imageNameForStyle:(int)style;	// 0x32b3fb01
- (void)_setGlowAnimationEnabled:(BOOL)enabled waitForNextCycle:(BOOL)nextCycle;	// 0x32b3fce1
- (void)_startGlowAnimationWaitForNextCycle:(BOOL)nextCycle;	// 0x32e06981
- (void)_stopGlowAnimation;	// 0x32b3fd25
- (BOOL)_styleCanGlow:(int)glow;	// 0x32e0693d
- (BOOL)_topCornersAreRoundedForStyle:(int)style;	// 0x32b3fc41
- (void)dealloc;	// 0x32b8b2d5
- (void)setGlowAnimationEnabled:(BOOL)enabled;	// 0x32b412dd
- (void)setSuppressesGlow:(BOOL)glow;	// 0x32b3fcad
// converted property getter: - (int)style;	// 0x32b3fd8d
// converted property getter: - (id)tintColor;	// 0x32e06905
@end

