/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CIFilter.h"
#import "CoreImage-Structs.h"

@class NSNumber, CIImage;

__attribute__((visibility("hidden")))
@interface CISkyAndGrassAdjust : CIFilter {
@private
	CIImage *inputImage;	// 36 = 0x24
	NSNumber *inputSkyAmount;	// 40 = 0x28
	NSNumber *inputGrassAmount;	// 44 = 0x2c
}
@property(copy, nonatomic) NSNumber *inputGrassAmount;	// G=0x36e33b89; S=0x36e33b99; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x36e33b21; S=0x36e33b31; @synthesize
@property(copy, nonatomic) NSNumber *inputSkyAmount;	// G=0x36e33b55; S=0x36e33b65; @synthesize
+ (id)customAttributes;	// 0x36e33369
- (id)_kernel;	// 0x36e33701
// declared property getter: - (id)inputGrassAmount;	// 0x36e33b89
// declared property getter: - (id)inputImage;	// 0x36e33b21
// declared property getter: - (id)inputSkyAmount;	// 0x36e33b55
- (id)outputImage;	// 0x36e33901
- (void)setDefaults;	// 0x36e33891
// declared property setter: - (void)setInputGrassAmount:(id)amount;	// 0x36e33b99
// declared property setter: - (void)setInputImage:(id)image;	// 0x36e33b31
// declared property setter: - (void)setInputSkyAmount:(id)amount;	// 0x36e33b65
@end
