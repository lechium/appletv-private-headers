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
	float _topFadeHeight;	// 80 = 0x50
	float _bottomFadeHeight;	// 84 = 0x54
	float _leftFadeWidth;	// 88 = 0x58
	float _rightFadeWidth;	// 92 = 0x5c
	CGFunctionRef _shadingFunction;	// 96 = 0x60
	CGColorRef _fillColor;	// 100 = 0x64
}
@property(assign) float bottomFadeHeight;	// G=0x31f1b1; S=0x31f179; converted property
@property(assign) CGColorRef fillColor;	// G=0x31f121; S=0x31f05d; 
@property(assign) float leftFadeWidth;	// G=0x31f1f9; S=0x31f1c1; converted property
@property(assign) float rightFadeWidth;	// G=0x31f241; S=0x31f209; converted property
@property(assign) float topFadeHeight;	// G=0x31f169; S=0x31f131; converted property
- (id)init;	// 0x31ee79
- (id)initWithLayout:(id)layout;	// 0x31eed9
// converted property getter: - (float)bottomFadeHeight;	// 0x31f1b1
- (void)dealloc;	// 0x31f019
- (void)drawRect:(CGRect)rect;	// 0x31f251
// declared property getter: - (CGColorRef)fillColor;	// 0x31f121
// converted property getter: - (float)leftFadeWidth;	// 0x31f1f9
// converted property getter: - (float)rightFadeWidth;	// 0x31f241
// converted property setter: - (void)setBottomFadeHeight:(float)height;	// 0x31f179
- (void)setEnableMaskAnimation:(BOOL)animation;	// 0x31f4ed
// declared property setter: - (void)setFillColor:(CGColorRef)color;	// 0x31f05d
// converted property setter: - (void)setLeftFadeWidth:(float)width;	// 0x31f1c1
// converted property setter: - (void)setRightFadeWidth:(float)width;	// 0x31f209
// converted property setter: - (void)setTopFadeHeight:(float)height;	// 0x31f131
// converted property getter: - (float)topFadeHeight;	// 0x31f169
@end
