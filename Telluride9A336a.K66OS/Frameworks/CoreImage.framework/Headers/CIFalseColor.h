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
@interface CIFalseColor : CIFilter {
@private
	CIImage *inputImage;	// 36 = 0x24
	CIColor *inputColor0;	// 40 = 0x28
	CIColor *inputColor1;	// 44 = 0x2c
}
@property(copy, nonatomic) CIColor *inputColor0;	// G=0x3456dce9; S=0x3456dcf9; @synthesize
@property(copy, nonatomic) CIColor *inputColor1;	// G=0x3456dd1d; S=0x3456dd2d; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x3456dcb5; S=0x3456dcc5; @synthesize
+ (id)customAttributes;	// 0x3456dac5
- (id)_kernel;	// 0x3456d791
// declared property getter: - (id)inputColor0;	// 0x3456dce9
// declared property getter: - (id)inputColor1;	// 0x3456dd1d
// declared property getter: - (id)inputImage;	// 0x3456dcb5
- (id)outputImage;	// 0x3456d955
- (void)setDefaults;	// 0x3456da45
// declared property setter: - (void)setInputColor0:(id)a0;	// 0x3456dcf9
// declared property setter: - (void)setInputColor1:(id)a1;	// 0x3456dd2d
// declared property setter: - (void)setInputImage:(id)image;	// 0x3456dcc5
@end

