/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "CIFilter.h"

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CISkyAndGrassAdjust : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
	NSNumber *inputSkyAmount;	// 40 = 0x28
	NSNumber *inputGrassAmount;	// 44 = 0x2c
}
@property(copy, nonatomic) NSNumber *inputGrassAmount;	// G=0x31597c0d; S=0x31597c21; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x31597bc9; S=0x31597bd9; @synthesize
@property(copy, nonatomic) NSNumber *inputSkyAmount;	// G=0x31597be9; S=0x31597bfd; @synthesize
+ (id)customAttributes;	// 0x31597459
- (id)_kernel;	// 0x315977e1
// declared property getter: - (id)inputGrassAmount;	// 0x31597c0d
// declared property getter: - (id)inputImage;	// 0x31597bc9
// declared property getter: - (id)inputSkyAmount;	// 0x31597be9
- (id)outputImage;	// 0x315979e9
- (void)setDefaults;	// 0x31597979
// declared property setter: - (void)setInputGrassAmount:(id)amount;	// 0x31597c21
// declared property setter: - (void)setInputImage:(id)image;	// 0x31597bd9
// declared property setter: - (void)setInputSkyAmount:(id)amount;	// 0x31597bfd
@end
