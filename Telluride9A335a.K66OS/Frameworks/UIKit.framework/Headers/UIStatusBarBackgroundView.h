/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImageView;

__attribute__((visibility("hidden")))
@interface UIStatusBarBackgroundView : UIView {
@private
	int _style;	// 48 = 0x30
	UIImageView *_glowView;	// 52 = 0x34
	BOOL _glowEnabled;	// 56 = 0x38
	BOOL _suppressGlow;	// 57 = 0x39
}
@property(readonly, assign) int style;	// G=0x339b0db9; converted property
- (id)initWithFrame:(CGRect)frame style:(int)style;	// 0x339b0935
- (id)_baseImageForStyle:(int)style;	// 0x339b0aad
- (id)_glowImageForStyle:(int)style;	// 0x33c84ae5
- (id)_imageNameForStyle:(int)style;	// 0x339b0b15
- (void)_setGlowAnimationEnabled:(BOOL)enabled waitForNextCycle:(BOOL)nextCycle;	// 0x3399e7b1
- (void)_startGlowAnimationWaitForNextCycle:(BOOL)nextCycle;	// 0x33c84709
- (void)_stopGlowAnimation;	// 0x3399e801
- (BOOL)_styleCanGlow:(int)glow;	// 0x33c846c5
- (void)dealloc;	// 0x33ae6c61
- (void)setGlowAnimationEnabled:(BOOL)enabled;	// 0x339b278d
- (void)setSuppressesGlow:(BOOL)glow;	// 0x3399e781
// converted property getter: - (int)style;	// 0x339b0db9
@end
