/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import </libobjc.A.h>
#import "CoreUI-Structs.h"
#import "CUIThemeGradientDrawing.h"


@interface CUIThemeGradient : NSObject <CUIThemeGradientDrawing> {
	id gradientEvaluator;	// 4 = 0x4
	CGFunctionRef colorShader;	// 8 = 0x8
	CGColorSpaceRef colorSpace;	// 12 = 0xc
}
@property(readonly, assign) CGFunctionRef colorShader;	// G=0x30788ac5; converted property
- (id)initWithColors:(id)colors colorlocations:(id)colorlocations colorMidpoints:(id)midpoints opacities:(id)opacities opacityLocations:(id)locations opacityMidpoints:(id)midpoints6 smoothingCoefficient:(float)coefficient fillColor:(id)color colorSpace:(CGColorSpaceRef)space;	// 0x30787bfd
- (id)initWithColors:(id)colors colorlocations:(id)colorlocations colorMidpoints:(id)midpoints opacities:(id)opacities opacityLocations:(id)locations opacityMidpoints:(id)midpoints6 smoothingCoefficient:(float)coefficient fillColor:(id)color colorSpace:(CGColorSpaceRef)space dither:(BOOL)dither;	// 0x30787c4d
- (id)_colorFromPSDGradientColor:(psdGradientColor)psdgradientColor;	// 0x30787eb1
- (id)_initWithGradientEvaluator:(id)gradientEvaluator colorSpace:(CGColorSpaceRef)space;	// 0x30787b91
- (CGFunctionRef)_newColorShaderForDistance:(float)distance;	// 0x30788959
- (id)_psdGradientColorStopsWithColors:(id)colors locations:(id)locations colorSpace:(CGColorSpaceRef)space;	// 0x30787985
- (psdGradientColor)_psdGradientColorWithColor:(id)color colorSpace:(CGColorSpaceRef)space;	// 0x30787869
- (id)_psdGradientOpacityStopsWithOpacities:(id)opacities locations:(id)locations;	// 0x307876b1
- (int)blendMode;	// 0x307888c5
- (id)colorLocations;	// 0x30788269
// converted property getter: - (CGFunctionRef)colorShader;	// 0x30788ac5
- (id)colorStops;	// 0x30787f51
- (void)dealloc;	// 0x307888e5
- (void)drawFromPoint:(CGPoint)point toPoint:(CGPoint)point2 options:(unsigned)options;	// 0x30788c05
- (void)drawFromPoint:(CGPoint)point toPoint:(CGPoint)point2 options:(unsigned)options withContext:(CGContextRef)context;	// 0x30788c39
- (void)drawInRect:(CGRect)rect angle:(float)angle;	// 0x30788bf1
- (void)drawInRect:(CGRect)rect angle:(float)angle withContext:(CGContextRef)context;	// 0x30788b6d
- (void)drawInRect:(CGRect)rect relativeCenterPosition:(CGPoint)position withContext:(CGContextRef)context;	// 0x30788c19
- (id)fillColor;	// 0x30788835
- (id)interpolatedColorAtLocation:(float)location;	// 0x30788d69
- (BOOL)isDithered;	// 0x30788811
- (id)opacityLocations;	// 0x30788609
- (id)opacityStops;	// 0x30788449
- (float)smoothingCoefficient;	// 0x307887f1
@end

