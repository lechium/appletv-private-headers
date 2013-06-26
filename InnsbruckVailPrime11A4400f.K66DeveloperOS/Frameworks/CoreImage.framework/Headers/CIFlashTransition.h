/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "CIFilter.h"

@class CIImage, NSNumber, CIVector, CIColor;

__attribute__((visibility("hidden")))
@interface CIFlashTransition : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
	CIImage *inputTargetImage;	// 40 = 0x28
	CIVector *inputCenter;	// 44 = 0x2c
	CIVector *inputExtent;	// 48 = 0x30
	CIColor *inputColor;	// 52 = 0x34
	NSNumber *inputTime;	// 56 = 0x38
	NSNumber *inputMaxStriationRadius;	// 60 = 0x3c
	NSNumber *inputStriationStrength;	// 64 = 0x40
	NSNumber *inputStriationContrast;	// 68 = 0x44
	NSNumber *inputFadeThreshold;	// 72 = 0x48
}
@property(retain, nonatomic) CIVector *inputCenter;	// G=0x2d760621; S=0x2d760631; @synthesize
@property(retain, nonatomic) CIColor *inputColor;	// G=0x2d760661; S=0x2d760671; @synthesize
@property(retain, nonatomic) CIVector *inputExtent;	// G=0x2d760641; S=0x2d760651; @synthesize
@property(retain, nonatomic) NSNumber *inputFadeThreshold;	// G=0x2d760701; S=0x2d760711; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x2d7605e1; S=0x2d7605f1; @synthesize
@property(retain, nonatomic) NSNumber *inputMaxStriationRadius;	// G=0x2d7606a1; S=0x2d7606b1; @synthesize
@property(retain, nonatomic) NSNumber *inputStriationContrast;	// G=0x2d7606e1; S=0x2d7606f1; @synthesize
@property(retain, nonatomic) NSNumber *inputStriationStrength;	// G=0x2d7606c1; S=0x2d7606d1; @synthesize
@property(retain, nonatomic) CIImage *inputTargetImage;	// G=0x2d760601; S=0x2d760611; @synthesize
@property(retain, nonatomic) NSNumber *inputTime;	// G=0x2d760681; S=0x2d760691; @synthesize
+ (id)customAttributes;	// 0x2d75f341
- (id)_colorKernel;	// 0x2d75fb11
- (id)_geomKernel;	// 0x2d75fd8d
// declared property getter: - (id)inputCenter;	// 0x2d760621
// declared property getter: - (id)inputColor;	// 0x2d760661
// declared property getter: - (id)inputExtent;	// 0x2d760641
// declared property getter: - (id)inputFadeThreshold;	// 0x2d760701
// declared property getter: - (id)inputImage;	// 0x2d7605e1
// declared property getter: - (id)inputMaxStriationRadius;	// 0x2d7606a1
// declared property getter: - (id)inputStriationContrast;	// 0x2d7606e1
// declared property getter: - (id)inputStriationStrength;	// 0x2d7606c1
// declared property getter: - (id)inputTargetImage;	// 0x2d760601
// declared property getter: - (id)inputTime;	// 0x2d760681
- (id)outputImage;	// 0x2d75ff29
- (void)setDefaults;	// 0x2d75f969
// declared property setter: - (void)setInputCenter:(id)center;	// 0x2d760631
// declared property setter: - (void)setInputColor:(id)color;	// 0x2d760671
// declared property setter: - (void)setInputExtent:(id)extent;	// 0x2d760651
// declared property setter: - (void)setInputFadeThreshold:(id)threshold;	// 0x2d760711
// declared property setter: - (void)setInputImage:(id)image;	// 0x2d7605f1
// declared property setter: - (void)setInputMaxStriationRadius:(id)radius;	// 0x2d7606b1
// declared property setter: - (void)setInputStriationContrast:(id)contrast;	// 0x2d7606f1
// declared property setter: - (void)setInputStriationStrength:(id)strength;	// 0x2d7606d1
// declared property setter: - (void)setInputTargetImage:(id)image;	// 0x2d760611
// declared property setter: - (void)setInputTime:(id)time;	// 0x2d760691
@end
