/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CIFilter.h"
#import "CoreImage-Structs.h"

@class CIImage, CIColor;

__attribute__((visibility("hidden")))
@interface CIWhitePointAdjust : CIFilter {
@private
	CIImage *inputImage;	// 36 = 0x24
	CIColor *inputColor;	// 40 = 0x28
}
@property(copy, nonatomic) CIColor *inputColor;	// G=0x36d6ea85; S=0x36d6ea95; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x36d6ea51; S=0x36d6ea61; @synthesize
+ (id)customAttributes;	// 0x36d6e8a9
- (id)_kernel;	// 0x36d6e61d
// declared property getter: - (id)inputColor;	// 0x36d6ea85
// declared property getter: - (id)inputImage;	// 0x36d6ea51
- (id)outputImage;	// 0x36d6e7ad
- (void)setDefaults;	// 0x36d6e85d
// declared property setter: - (void)setInputColor:(id)color;	// 0x36d6ea95
// declared property setter: - (void)setInputImage:(id)image;	// 0x36d6ea61
@end

