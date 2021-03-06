/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "CIFilter.h"

@class CIVector, NSNumber, CIImage;

__attribute__((visibility("hidden")))
@interface CITileFilter : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
	CIVector *inputCenter;	// 40 = 0x28
	NSNumber *inputAngle;	// 44 = 0x2c
	NSNumber *inputWidth;	// 48 = 0x30
}
@property(retain) NSNumber *inputAngle;	// G=0x369c2a79; S=0x369c2a8d; @synthesize
@property(retain) CIVector *inputCenter;	// G=0x369c2a41; S=0x369c2a55; @synthesize
@property(retain) CIImage *inputImage;	// G=0x369c2a09; S=0x369c2a1d; @synthesize
@property(retain) NSNumber *inputWidth;	// G=0x369c2ab1; S=0x369c2ac5; @synthesize
+ (id)customAttributes;	// 0x369c21f9
- (id)_kernel;	// 0x369c2529
- (id)_kernel_name;	// 0x369c2521
- (id)_kernel_source;	// 0x369c2525
// declared property getter: - (id)inputAngle;	// 0x369c2a79
// declared property getter: - (id)inputCenter;	// 0x369c2a41
// declared property getter: - (id)inputImage;	// 0x369c2a09
// declared property getter: - (id)inputWidth;	// 0x369c2ab1
- (void)setDefaults;	// 0x369c2959
// declared property setter: - (void)setInputAngle:(id)angle;	// 0x369c2a8d
// declared property setter: - (void)setInputCenter:(id)center;	// 0x369c2a55
// declared property setter: - (void)setInputImage:(id)image;	// 0x369c2a1d
// declared property setter: - (void)setInputWidth:(id)width;	// 0x369c2ac5
@end

