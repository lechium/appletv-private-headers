/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "CIFilter.h"

@class CIImage;

__attribute__((visibility("hidden")))
@interface CIColorMap : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
	CIImage *inputGradientImage;	// 40 = 0x28
	CIImage *cachedGradientImage;	// 44 = 0x2c
}
@property(retain, nonatomic) CIImage *cachedGradientImage;	// G=0x315c378d; S=0x315c379d; @synthesize
@property(retain, nonatomic) CIImage *inputGradientImage;	// G=0x315c377d; S=0x315c33d1; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x315c375d; S=0x315c376d; @synthesize
+ (id)customAttributes;	// 0x315c3155
- (id)_kernel;	// 0x315c3239
// declared property getter: - (id)cachedGradientImage;	// 0x315c378d
- (id)gradientImage;	// 0x315c3431
// declared property getter: - (id)inputGradientImage;	// 0x315c377d
// declared property getter: - (id)inputImage;	// 0x315c375d
- (id)outputImage;	// 0x315c3685
// declared property setter: - (void)setCachedGradientImage:(id)image;	// 0x315c379d
// declared property setter: - (void)setInputGradientImage:(id)image;	// 0x315c33d1
// declared property setter: - (void)setInputImage:(id)image;	// 0x315c376d
@end

