/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "CIFilter.h"

@class CIVector, CIImage;

__attribute__((visibility("hidden")))
@interface CICrop : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
	CIVector *inputRectangle;	// 40 = 0x28
}
@property(retain, nonatomic) CIImage *inputImage;	// G=0x372ec9fd; S=0x372eca0d; @synthesize
@property(copy, nonatomic) CIVector *inputRectangle;	// G=0x372eca1d; S=0x372eca31; @synthesize
+ (id)customAttributes;	// 0x372ec78d
- (id)_initFromProperties:(id)properties;	// 0x372ecb55
- (id)_outputProperties;	// 0x372eca41
// declared property getter: - (id)inputImage;	// 0x372ec9fd
// declared property getter: - (id)inputRectangle;	// 0x372eca1d
- (id)outputImage;	// 0x372ec96d
- (void)setDefaults;	// 0x372ec919
// declared property setter: - (void)setInputImage:(id)image;	// 0x372eca0d
// declared property setter: - (void)setInputRectangle:(id)rectangle;	// 0x372eca31
@end
