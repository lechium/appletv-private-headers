/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CIFilter.h"
#import "CoreImage-Structs.h"

@class CIImage;

__attribute__((visibility("hidden")))
@interface CIColorMap : CIFilter {
@private
	CIImage *inputImage;	// 36 = 0x24
	CIImage *inputGradientImage;	// 40 = 0x28
	CIImage *cachedGradientImage;	// 44 = 0x2c
}
@property(retain, nonatomic) CIImage *cachedGradientImage;	// G=0x36c148d5; S=0x36c148e5; @synthesize
@property(retain, nonatomic) CIImage *inputGradientImage;	// G=0x36c148c5; S=0x36c14505; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x36c14891; S=0x36c148a1; @synthesize
+ (id)customAttributes;	// 0x36c14289
- (id)_kernel;	// 0x36c1436d
// declared property getter: - (id)cachedGradientImage;	// 0x36c148d5
- (id)gradientImage;	// 0x36c14565
// declared property getter: - (id)inputGradientImage;	// 0x36c148c5
// declared property getter: - (id)inputImage;	// 0x36c14891
- (id)outputImage;	// 0x36c147b9
// declared property setter: - (void)setCachedGradientImage:(id)image;	// 0x36c148e5
// declared property setter: - (void)setInputGradientImage:(id)image;	// 0x36c14505
// declared property setter: - (void)setInputImage:(id)image;	// 0x36c148a1
@end

