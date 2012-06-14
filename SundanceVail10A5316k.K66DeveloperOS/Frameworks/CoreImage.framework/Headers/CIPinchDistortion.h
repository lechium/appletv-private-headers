/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CIFilter.h"
#import "CoreImage-Structs.h"

@class CIVector, CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIPinchDistortion : CIFilter {
@private
	CIImage *inputImage;	// 36 = 0x24
	CIVector *inputCenter;	// 40 = 0x28
	NSNumber *inputRadius;	// 44 = 0x2c
	NSNumber *inputScale;	// 48 = 0x30
}
@property(copy, nonatomic) CIVector *inputCenter;	// G=0x36bf5875; S=0x36bf5889; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x36bf5841; S=0x36bf5851; @synthesize
@property(copy, nonatomic) NSNumber *inputRadius;	// G=0x36bf58ad; S=0x36bf58c1; @synthesize
@property(copy, nonatomic) NSNumber *inputScale;	// G=0x36bf58e5; S=0x36bf58f9; @synthesize
+ (id)customAttributes;	// 0x36bf4469
- (id)_pinchDistortionScaleGE1;	// 0x36bf497d
- (id)_pinchDistortionScaleLT1;	// 0x36bf47b9
- (CGRect)computeDOD:(float)dod scale:(float)scale;	// 0x36bf4bdd
// declared property getter: - (id)inputCenter;	// 0x36bf5875
// declared property getter: - (id)inputImage;	// 0x36bf5841
// declared property getter: - (id)inputRadius;	// 0x36bf58ad
// declared property getter: - (id)inputScale;	// 0x36bf58e5
- (id)outputImage;	// 0x36bf5191
- (void)setDefaults;	// 0x36bf4b41
// declared property setter: - (void)setInputCenter:(id)center;	// 0x36bf5889
// declared property setter: - (void)setInputImage:(id)image;	// 0x36bf5851
// declared property setter: - (void)setInputRadius:(id)radius;	// 0x36bf58c1
// declared property setter: - (void)setInputScale:(id)scale;	// 0x36bf58f9
@end

