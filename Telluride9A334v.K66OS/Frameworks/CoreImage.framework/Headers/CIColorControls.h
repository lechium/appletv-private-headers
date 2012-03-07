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
@interface CIColorControls : CIFilter {
@private
	CIImage *inputImage;	// 36 = 0x24
	NSNumber *inputSaturation;	// 40 = 0x28
	NSNumber *inputBrightness;	// 44 = 0x2c
	NSNumber *inputContrast;	// 48 = 0x30
}
@property(copy, nonatomic) NSNumber *inputBrightness;	// G=0x3588843d; S=0x3588844d; @synthesize
@property(copy, nonatomic) NSNumber *inputContrast;	// G=0x35888471; S=0x35888481; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x358883d5; S=0x358883e5; @synthesize
@property(copy, nonatomic) NSNumber *inputSaturation;	// G=0x35888409; S=0x35888419; @synthesize
+ (id)customAttributes;	// 0x35887d69
// declared property getter: - (id)inputBrightness;	// 0x3588843d
// declared property getter: - (id)inputContrast;	// 0x35888471
// declared property getter: - (id)inputImage;	// 0x358883d5
// declared property getter: - (id)inputSaturation;	// 0x35888409
- (id)outputImage;	// 0x358881a5
- (void)setDefaults;	// 0x35888129
// declared property setter: - (void)setInputBrightness:(id)brightness;	// 0x3588844d
// declared property setter: - (void)setInputContrast:(id)contrast;	// 0x35888481
// declared property setter: - (void)setInputImage:(id)image;	// 0x358883e5
// declared property setter: - (void)setInputSaturation:(id)saturation;	// 0x35888419
@end
