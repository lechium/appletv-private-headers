/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"


__attribute__((visibility("hidden")))
@interface BRFadeMaskLayer : BRControl {
	float _topFadeHeight;	// 84 = 0x54
	float _bottomFadeHeight;	// 88 = 0x58
	float _leftFadeWidth;	// 92 = 0x5c
	float _rightFadeWidth;	// 96 = 0x60
	CGFunctionRef _shadingFunction;	// 100 = 0x64
	CGColorRef _fillColor;	// 104 = 0x68
}
@property(assign) float bottomFadeHeight;	// G=0x359e15; S=0x359ddd; converted property
@property(assign) CGColorRef fillColor;	// G=0x359d85; S=0x359cc1; 
@property(assign) float leftFadeWidth;	// G=0x359e5d; S=0x359e25; converted property
@property(assign) float rightFadeWidth;	// G=0x359ea5; S=0x359e6d; converted property
@property(assign) float topFadeHeight;	// G=0x359dcd; S=0x359d95; converted property
- (id)init;	// 0x359ac5
- (id)initWithLayout:(id)layout;	// 0x359b25
// converted property getter: - (float)bottomFadeHeight;	// 0x359e15
- (void)dealloc;	// 0x359c65
- (void)drawRect:(CGRect)rect;	// 0x359eb5
// declared property getter: - (CGColorRef)fillColor;	// 0x359d85
// converted property getter: - (float)leftFadeWidth;	// 0x359e5d
// converted property getter: - (float)rightFadeWidth;	// 0x359ea5
// converted property setter: - (void)setBottomFadeHeight:(float)height;	// 0x359ddd
- (void)setEnableMaskAnimation:(BOOL)animation;	// 0x35a151
// declared property setter: - (void)setFillColor:(CGColorRef)color;	// 0x359cc1
// converted property setter: - (void)setLeftFadeWidth:(float)width;	// 0x359e25
// converted property setter: - (void)setRightFadeWidth:(float)width;	// 0x359e6d
// converted property setter: - (void)setTopFadeHeight:(float)height;	// 0x359d95
// converted property getter: - (float)topFadeHeight;	// 0x359dcd
@end

