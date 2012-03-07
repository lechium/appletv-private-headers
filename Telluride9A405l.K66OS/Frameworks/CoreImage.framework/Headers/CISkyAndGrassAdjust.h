/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CIFilter.h"
#import "CoreImage-Structs.h"

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CISkyAndGrassAdjust : CIFilter {
@private
	CIImage *inputImage;	// 36 = 0x24
	NSNumber *inputSkyAmount;	// 40 = 0x28
	NSNumber *inputGrassAmount;	// 44 = 0x2c
}
@property(copy, nonatomic) NSNumber *inputGrassAmount;	// G=0x36ee866d; S=0x36ee867d; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x36ee8605; S=0x36ee8615; @synthesize
@property(copy, nonatomic) NSNumber *inputSkyAmount;	// G=0x36ee8639; S=0x36ee8649; @synthesize
+ (id)customAttributes;	// 0x36ee7e65
- (id)_kernel;	// 0x36ee81f5
// declared property getter: - (id)inputGrassAmount;	// 0x36ee866d
// declared property getter: - (id)inputImage;	// 0x36ee8605
// declared property getter: - (id)inputSkyAmount;	// 0x36ee8639
- (id)outputImage;	// 0x36ee8405
- (void)setDefaults;	// 0x36ee8385
// declared property setter: - (void)setInputGrassAmount:(id)amount;	// 0x36ee867d
// declared property setter: - (void)setInputImage:(id)image;	// 0x36ee8615
// declared property setter: - (void)setInputSkyAmount:(id)amount;	// 0x36ee8649
@end
