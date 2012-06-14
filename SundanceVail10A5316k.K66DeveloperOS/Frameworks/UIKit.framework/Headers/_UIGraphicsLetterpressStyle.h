/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class UIColor;

@interface _UIGraphicsLetterpressStyle : NSObject <NSCopying> {
@private
	UIColor *embossHighlightColor;	// 4 = 0x4
	UIColor *embossShadowColor;	// 8 = 0x8
	float embossSize;	// 12 = 0xc
	UIColor *innerShadowColor;	// 16 = 0x10
	CGPoint innerShadowOffset;	// 20 = 0x14
	float innerShadowBlur;	// 28 = 0x1c
	int innerShadowBlendMode;	// 32 = 0x20
	UIColor *outerShadowColor;	// 36 = 0x24
	CGPoint outerShadowOffset;	// 40 = 0x28
	float outerShadowBlur;	// 48 = 0x30
	int outerShadowBlendMode;	// 52 = 0x34
	UIColor *topGradientColor;	// 56 = 0x38
	UIColor *bottomGradientColor;	// 60 = 0x3c
	float innerOpacity;	// 64 = 0x40
}
@property(retain, nonatomic) UIColor *bottomGradientColor;	// G=0x302285d9; S=0x302285e9; @synthesize
@property(readonly, assign, nonatomic) UIEdgeInsets edgeInsets;	// G=0x302281a9; 
@property(retain, nonatomic) UIColor *embossHighlightColor;	// G=0x30228441; S=0x30228451; @synthesize
@property(retain, nonatomic) UIColor *embossShadowColor;	// G=0x30228461; S=0x30228471; @synthesize
@property(assign, nonatomic) float embossSize;	// G=0x30228481; S=0x30228491; @synthesize
@property(assign, nonatomic) float innerOpacity;	// G=0x302285f9; S=0x30228609; @synthesize
@property(assign, nonatomic) int innerShadowBlendMode;	// G=0x3022850d; S=0x3022851d; @synthesize
@property(assign, nonatomic) float innerShadowBlur;	// G=0x302284ed; S=0x302284fd; @synthesize
@property(retain, nonatomic) UIColor *innerShadowColor;	// G=0x302284a1; S=0x302284b1; @synthesize
@property(assign, nonatomic) CGPoint innerShadowOffset;	// G=0x302284c1; S=0x302284d9; @synthesize
@property(assign, nonatomic) int outerShadowBlendMode;	// G=0x30228599; S=0x302285a9; @synthesize
@property(assign, nonatomic) float outerShadowBlur;	// G=0x30228579; S=0x30228589; @synthesize
@property(retain, nonatomic) UIColor *outerShadowColor;	// G=0x3022852d; S=0x3022853d; @synthesize
@property(assign, nonatomic) CGPoint outerShadowOffset;	// G=0x3022854d; S=0x30228565; @synthesize
@property(retain, nonatomic) UIColor *topGradientColor;	// G=0x302285b9; S=0x302285c9; @synthesize
+ (id)defaultLetterpressStyle;	// 0x302277f9
+ (id)old2xLetterpressStyle;	// 0x30227a01
// declared property getter: - (id)bottomGradientColor;	// 0x302285d9
- (id)copyWithZone:(NSZone *)zone;	// 0x30227cc5
- (void)dealloc;	// 0x30227c11
// declared property getter: - (UIEdgeInsets)edgeInsets;	// 0x302281a9
// declared property getter: - (id)embossHighlightColor;	// 0x30228441
// declared property getter: - (id)embossShadowColor;	// 0x30228461
// declared property getter: - (float)embossSize;	// 0x30228481
// declared property getter: - (float)innerOpacity;	// 0x302285f9
// declared property getter: - (int)innerShadowBlendMode;	// 0x3022850d
// declared property getter: - (float)innerShadowBlur;	// 0x302284ed
// declared property getter: - (id)innerShadowColor;	// 0x302284a1
// declared property getter: - (CGPoint)innerShadowOffset;	// 0x302284c1
- (BOOL)isEqual:(id)equal;	// 0x30227e5d
// declared property getter: - (int)outerShadowBlendMode;	// 0x30228599
// declared property getter: - (float)outerShadowBlur;	// 0x30228579
// declared property getter: - (id)outerShadowColor;	// 0x3022852d
// declared property getter: - (CGPoint)outerShadowOffset;	// 0x3022854d
// declared property setter: - (void)setBottomGradientColor:(id)color;	// 0x302285e9
// declared property setter: - (void)setEmbossHighlightColor:(id)color;	// 0x30228451
// declared property setter: - (void)setEmbossShadowColor:(id)color;	// 0x30228471
// declared property setter: - (void)setEmbossSize:(float)size;	// 0x30228491
// declared property setter: - (void)setInnerOpacity:(float)opacity;	// 0x30228609
// declared property setter: - (void)setInnerShadowBlendMode:(int)mode;	// 0x3022851d
// declared property setter: - (void)setInnerShadowBlur:(float)blur;	// 0x302284fd
// declared property setter: - (void)setInnerShadowColor:(id)color;	// 0x302284b1
// declared property setter: - (void)setInnerShadowOffset:(CGPoint)offset;	// 0x302284d9
// declared property setter: - (void)setOuterShadowBlendMode:(int)mode;	// 0x302285a9
// declared property setter: - (void)setOuterShadowBlur:(float)blur;	// 0x30228589
// declared property setter: - (void)setOuterShadowColor:(id)color;	// 0x3022853d
// declared property setter: - (void)setOuterShadowOffset:(CGPoint)offset;	// 0x30228565
// declared property setter: - (void)setTopGradientColor:(id)color;	// 0x302285c9
// declared property getter: - (id)topGradientColor;	// 0x302285b9
@end

