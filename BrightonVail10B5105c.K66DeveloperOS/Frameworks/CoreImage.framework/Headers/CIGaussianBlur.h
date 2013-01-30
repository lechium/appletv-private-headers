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
@interface CIGaussianBlur : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
	NSNumber *inputRadius;	// 40 = 0x28
}
@property(retain, nonatomic) CIImage *inputImage;	// G=0x33ceb3a5; S=0x33ceb3b5; @synthesize
@property(copy, nonatomic) NSNumber *inputRadius;	// G=0x33ceb3c5; S=0x33ceb3d9; @synthesize
+ (id)customAttributes;	// 0x33ceb079
- (BOOL)_isIdentity;	// 0x33ceb2c9
// declared property getter: - (id)inputImage;	// 0x33ceb3a5
// declared property getter: - (id)inputRadius;	// 0x33ceb3c5
- (id)outputImage;	// 0x33ceb311
- (void)setDefaults;	// 0x33ceb281
// declared property setter: - (void)setInputImage:(id)image;	// 0x33ceb3b5
// declared property setter: - (void)setInputRadius:(id)radius;	// 0x33ceb3d9
@end
