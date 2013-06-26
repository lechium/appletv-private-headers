/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "CIFilter.h"

@class NSNumber, CIVector, CIColor;

__attribute__((visibility("hidden")))
@interface CIStarShineGenerator : CIFilter {
	CIVector *inputCenter;	// 36 = 0x24
	CIColor *inputColor;	// 40 = 0x28
	NSNumber *inputRadius;	// 44 = 0x2c
	NSNumber *inputCrossScale;	// 48 = 0x30
	NSNumber *inputCrossAngle;	// 52 = 0x34
	NSNumber *inputCrossOpacity;	// 56 = 0x38
	NSNumber *inputCrossWidth;	// 60 = 0x3c
	NSNumber *inputEpsilon;	// 64 = 0x40
}
@property(retain, nonatomic) CIVector *inputCenter;	// G=0x2d761359; S=0x2d761369; @synthesize
@property(retain, nonatomic) CIColor *inputColor;	// G=0x2d761379; S=0x2d761389; @synthesize
@property(retain, nonatomic) NSNumber *inputCrossAngle;	// G=0x2d7613d9; S=0x2d7613e9; @synthesize
@property(retain, nonatomic) NSNumber *inputCrossOpacity;	// G=0x2d761439; S=0x2d761449; @synthesize
@property(retain, nonatomic) NSNumber *inputCrossScale;	// G=0x2d7613f9; S=0x2d761409; @synthesize
@property(retain, nonatomic) NSNumber *inputCrossWidth;	// G=0x2d761419; S=0x2d761429; @synthesize
@property(retain, nonatomic) NSNumber *inputEpsilon;	// G=0x2d7613b9; S=0x2d7613c9; @synthesize
@property(retain, nonatomic) NSNumber *inputRadius;	// G=0x2d761399; S=0x2d7613a9; @synthesize
+ (id)customAttributes;	// 0x2d760721
- (id)_kernel;	// 0x2d760f01
// declared property getter: - (id)inputCenter;	// 0x2d761359
// declared property getter: - (id)inputColor;	// 0x2d761379
// declared property getter: - (id)inputCrossAngle;	// 0x2d7613d9
// declared property getter: - (id)inputCrossOpacity;	// 0x2d761439
// declared property getter: - (id)inputCrossScale;	// 0x2d7613f9
// declared property getter: - (id)inputCrossWidth;	// 0x2d761419
// declared property getter: - (id)inputEpsilon;	// 0x2d7613b9
// declared property getter: - (id)inputRadius;	// 0x2d761399
- (id)outputImage;	// 0x2d761129
- (void)setDefaults;	// 0x2d760d61
// declared property setter: - (void)setInputCenter:(id)center;	// 0x2d761369
// declared property setter: - (void)setInputColor:(id)color;	// 0x2d761389
// declared property setter: - (void)setInputCrossAngle:(id)angle;	// 0x2d7613e9
// declared property setter: - (void)setInputCrossOpacity:(id)opacity;	// 0x2d761449
// declared property setter: - (void)setInputCrossScale:(id)scale;	// 0x2d761409
// declared property setter: - (void)setInputCrossWidth:(id)width;	// 0x2d761429
// declared property setter: - (void)setInputEpsilon:(id)epsilon;	// 0x2d7613c9
// declared property setter: - (void)setInputRadius:(id)radius;	// 0x2d7613a9
@end
