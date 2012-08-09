/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "CIFilter.h"

@class CIVector, CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CITriangleKaleidoscope : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
	CIVector *inputPoint;	// 40 = 0x28
	NSNumber *inputSize;	// 44 = 0x2c
	NSNumber *inputRotation;	// 48 = 0x30
	NSNumber *inputDecay;	// 52 = 0x34
}
@property(copy, nonatomic) NSNumber *inputDecay;	// G=0x37326545; S=0x37326559; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x373264b9; S=0x373264c9; @synthesize
@property(copy, nonatomic) CIVector *inputPoint;	// G=0x373264d9; S=0x373264ed; @synthesize
@property(copy, nonatomic) NSNumber *inputRotation;	// G=0x37326521; S=0x37326535; @synthesize
@property(copy, nonatomic) NSNumber *inputSize;	// G=0x373264fd; S=0x37326511; @synthesize
+ (id)customAttributes;	// 0x373254e1
- (id)_colorKernel;	// 0x37325851
- (id)_geomKernel;	// 0x37325a61
// declared property getter: - (id)inputDecay;	// 0x37326545
// declared property getter: - (id)inputImage;	// 0x373264b9
// declared property getter: - (id)inputPoint;	// 0x373264d9
// declared property getter: - (id)inputRotation;	// 0x37326521
// declared property getter: - (id)inputSize;	// 0x373264fd
- (id)outputImage;	// 0x37325d11
- (void)setDefaults;	// 0x37325c4d
// declared property setter: - (void)setInputDecay:(id)decay;	// 0x37326559
// declared property setter: - (void)setInputImage:(id)image;	// 0x373264c9
// declared property setter: - (void)setInputPoint:(id)point;	// 0x373264ed
// declared property setter: - (void)setInputRotation:(id)rotation;	// 0x37326535
// declared property setter: - (void)setInputSize:(id)size;	// 0x37326511
@end
