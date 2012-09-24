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
@interface CICircularScreen : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
	CIVector *inputCenter;	// 40 = 0x28
	NSNumber *inputWidth;	// 44 = 0x2c
	NSNumber *inputSharpness;	// 48 = 0x30
}
@property(copy, nonatomic) CIVector *inputCenter;	// G=0x36b96c59; S=0x36b96c6d; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x36b96c39; S=0x36b96c49; @synthesize
@property(copy, nonatomic) NSNumber *inputSharpness;	// G=0x36b96ca1; S=0x36b96cb5; @synthesize
@property(copy, nonatomic) NSNumber *inputWidth;	// G=0x36b96c7d; S=0x36b96c91; @synthesize
+ (id)customAttributes;	// 0x36b965a1
- (id)_kernel;	// 0x36b968d9
// declared property getter: - (id)inputCenter;	// 0x36b96c59
// declared property getter: - (id)inputImage;	// 0x36b96c39
// declared property getter: - (id)inputSharpness;	// 0x36b96ca1
// declared property getter: - (id)inputWidth;	// 0x36b96c7d
- (id)outputImage;	// 0x36b96aa1
- (void)setDefaults;	// 0x36b964f9
// declared property setter: - (void)setInputCenter:(id)center;	// 0x36b96c6d
// declared property setter: - (void)setInputImage:(id)image;	// 0x36b96c49
// declared property setter: - (void)setInputSharpness:(id)sharpness;	// 0x36b96cb5
// declared property setter: - (void)setInputWidth:(id)width;	// 0x36b96c91
@end
