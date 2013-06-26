/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "CIFilter.h"

@class NSNumber, CIVector, CIImage;

__attribute__((visibility("hidden")))
@interface CIConvolution5X5 : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
	CIVector *inputWeights;	// 40 = 0x28
	NSNumber *inputBias;	// 44 = 0x2c
}
@property(retain, nonatomic) NSNumber *inputBias;	// G=0x2d76bafd; S=0x2d76bb0d; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x2d76babd; S=0x2d76bacd; @synthesize
@property(retain, nonatomic) CIVector *inputWeights;	// G=0x2d76badd; S=0x2d76baed; @synthesize
+ (id)customAttributes;	// 0x2d76b251
- (BOOL)_isIdentity;	// 0x2d76b4a1
// declared property getter: - (id)inputBias;	// 0x2d76bafd
// declared property getter: - (id)inputImage;	// 0x2d76babd
// declared property getter: - (id)inputWeights;	// 0x2d76badd
- (id)outputImage;	// 0x2d76b531
- (void)setDefaults;	// 0x2d76b419
// declared property setter: - (void)setInputBias:(id)bias;	// 0x2d76bb0d
// declared property setter: - (void)setInputImage:(id)image;	// 0x2d76bacd
// declared property setter: - (void)setInputWeights:(id)weights;	// 0x2d76baed
@end
