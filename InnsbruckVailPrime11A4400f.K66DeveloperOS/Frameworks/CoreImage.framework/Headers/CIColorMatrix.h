/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "CIFilter.h"

@class CIVector, CIImage;

__attribute__((visibility("hidden")))
@interface CIColorMatrix : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
	CIVector *inputRVector;	// 40 = 0x28
	CIVector *inputGVector;	// 44 = 0x2c
	CIVector *inputBVector;	// 48 = 0x30
	CIVector *inputAVector;	// 52 = 0x34
	CIVector *inputBiasVector;	// 56 = 0x38
}
@property(retain, nonatomic) CIVector *inputAVector;	// G=0x2d6fc6f9; S=0x2d6fc709; @synthesize
@property(retain, nonatomic) CIVector *inputBVector;	// G=0x2d6fc6d9; S=0x2d6fc6e9; @synthesize
@property(retain, nonatomic) CIVector *inputBiasVector;	// G=0x2d6fc719; S=0x2d6fc729; @synthesize
@property(retain, nonatomic) CIVector *inputGVector;	// G=0x2d6fc6b9; S=0x2d6fc6c9; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x2d6fc679; S=0x2d6fc689; @synthesize
@property(retain, nonatomic) CIVector *inputRVector;	// G=0x2d6fc699; S=0x2d6fc6a9; @synthesize
+ (id)customAttributes;	// 0x2d6fbbed
// declared property getter: - (id)inputAVector;	// 0x2d6fc6f9
// declared property getter: - (id)inputBVector;	// 0x2d6fc6d9
// declared property getter: - (id)inputBiasVector;	// 0x2d6fc719
// declared property getter: - (id)inputGVector;	// 0x2d6fc6b9
// declared property getter: - (id)inputImage;	// 0x2d6fc679
// declared property getter: - (id)inputRVector;	// 0x2d6fc699
- (id)outputImage;	// 0x2d6fc005
- (void)setDefaults;	// 0x2d6fbf09
// declared property setter: - (void)setInputAVector:(id)vector;	// 0x2d6fc709
// declared property setter: - (void)setInputBVector:(id)vector;	// 0x2d6fc6e9
// declared property setter: - (void)setInputBiasVector:(id)vector;	// 0x2d6fc729
// declared property setter: - (void)setInputGVector:(id)vector;	// 0x2d6fc6c9
// declared property setter: - (void)setInputImage:(id)image;	// 0x2d6fc689
// declared property setter: - (void)setInputRVector:(id)vector;	// 0x2d6fc6a9
@end

