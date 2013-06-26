/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "CIFilter.h"

@class NSNumber, CIImage, CIColor;

__attribute__((visibility("hidden")))
@interface CIColorMonochrome : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
	CIColor *inputColor;	// 40 = 0x28
	NSNumber *inputIntensity;	// 44 = 0x2c
}
@property(retain, nonatomic) CIColor *inputColor;	// G=0x2d737db1; S=0x2d737dc1; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x2d737d91; S=0x2d737da1; @synthesize
@property(retain, nonatomic) NSNumber *inputIntensity;	// G=0x2d737dd1; S=0x2d737de1; @synthesize
+ (id)customAttributes;	// 0x2d737961
- (id)_kernel;	// 0x2d7377a1
// declared property getter: - (id)inputColor;	// 0x2d737db1
// declared property getter: - (id)inputImage;	// 0x2d737d91
// declared property getter: - (id)inputIntensity;	// 0x2d737dd1
- (id)outputImage;	// 0x2d737c69
- (void)setDefaults;	// 0x2d737bd1
// declared property setter: - (void)setInputColor:(id)color;	// 0x2d737dc1
// declared property setter: - (void)setInputImage:(id)image;	// 0x2d737da1
// declared property setter: - (void)setInputIntensity:(id)intensity;	// 0x2d737de1
@end
