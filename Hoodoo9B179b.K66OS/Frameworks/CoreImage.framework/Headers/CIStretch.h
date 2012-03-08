/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CIFilter.h"
#import "CoreImage-Structs.h"

@class CIVector, CIImage;

__attribute__((visibility("hidden")))
@interface CIStretch : CIFilter {
@private
	CIImage *inputImage;	// 36 = 0x24
	CIVector *inputPoint;	// 40 = 0x28
}
@property(retain, nonatomic) CIImage *inputImage;	// G=0x36d99025; S=0x36d99035; @synthesize
@property(copy, nonatomic) CIVector *inputPoint;	// G=0x36d99059; S=0x36d99069; @synthesize
+ (id)customAttributes;	// 0x36d98ab9
- (id)_kernel;	// 0x36d98b85
// declared property getter: - (id)inputImage;	// 0x36d99025
// declared property getter: - (id)inputPoint;	// 0x36d99059
- (id)outputImage;	// 0x36d98d89
- (void)setDefaults;	// 0x36d98d75
// declared property setter: - (void)setInputImage:(id)image;	// 0x36d99035
// declared property setter: - (void)setInputPoint:(id)point;	// 0x36d99069
@end

