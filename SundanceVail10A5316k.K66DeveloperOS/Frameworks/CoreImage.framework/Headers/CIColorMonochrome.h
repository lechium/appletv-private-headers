/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CIFilter.h"
#import "CoreImage-Structs.h"

@class CIImage, CIColor, NSNumber;

__attribute__((visibility("hidden")))
@interface CIColorMonochrome : CIFilter {
@private
	CIImage *inputImage;	// 36 = 0x24
	CIColor *inputColor;	// 40 = 0x28
	NSNumber *inputIntensity;	// 44 = 0x2c
}
@property(retain, nonatomic) CIColor *inputColor;	// G=0x36beed35; S=0x36beed45; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x36beed01; S=0x36beed11; @synthesize
@property(retain, nonatomic) NSNumber *inputIntensity;	// G=0x36beed69; S=0x36beed79; @synthesize
+ (id)customAttributes;	// 0x36bee8c9
- (id)_kernel;	// 0x36bee701
// declared property getter: - (id)inputColor;	// 0x36beed35
// declared property getter: - (id)inputImage;	// 0x36beed01
// declared property getter: - (id)inputIntensity;	// 0x36beed69
- (id)outputImage;	// 0x36beebe1
- (void)setDefaults;	// 0x36beeb51
// declared property setter: - (void)setInputColor:(id)color;	// 0x36beed45
// declared property setter: - (void)setInputImage:(id)image;	// 0x36beed11
// declared property setter: - (void)setInputIntensity:(id)intensity;	// 0x36beed79
@end

