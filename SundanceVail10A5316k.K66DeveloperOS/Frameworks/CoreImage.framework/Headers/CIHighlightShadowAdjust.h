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
@interface CIHighlightShadowAdjust : CIFilter {
@private
	CIImage *inputImage;	// 36 = 0x24
	NSNumber *inputRadius;	// 40 = 0x28
	NSNumber *inputShadowAmount;	// 44 = 0x2c
	NSNumber *inputHighlightAmount;	// 48 = 0x30
	NSNumber *_inputRadius;	// 52 = 0x34
}
@property(copy, nonatomic) NSNumber *inputHighlightAmount;	// G=0x36bc3a8d; S=0x36bc3aa1; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x36bc3a21; S=0x36bc3a31; @synthesize
@property(copy, nonatomic) NSNumber *inputRadius;	// G=0x36bc3ac5; S=0x36bc3ad9; @synthesize=_inputRadius
@property(copy, nonatomic) NSNumber *inputShadowAmount;	// G=0x36bc3a55; S=0x36bc3a69; @synthesize
+ (id)customAttributes;	// 0x36bc26e9
- (id)_initFromProperties:(id)properties;	// 0x36bc3cd9
- (BOOL)_isIdentity;	// 0x36bc3459
- (id)_kernelS;	// 0x36bc3009
- (id)_kernelSH;	// 0x36bc2e51
- (id)_kernelSH_v1;	// 0x36bc2b01
- (id)_kernelSHnoB_v1;	// 0x36bc2cb9
- (id)_kernelSnoB;	// 0x36bc31c1
- (id)_outputProperties;	// 0x36bc3b01
// declared property getter: - (id)inputHighlightAmount;	// 0x36bc3a8d
// declared property getter: - (id)inputImage;	// 0x36bc3a21
// declared property getter: - (id)inputRadius;	// 0x36bc3ac5
// declared property getter: - (id)inputShadowAmount;	// 0x36bc3a55
- (id)outputImage;	// 0x36bc3551
- (void)setDefaults;	// 0x36bc3359
// declared property setter: - (void)setInputHighlightAmount:(id)amount;	// 0x36bc3aa1
// declared property setter: - (void)setInputImage:(id)image;	// 0x36bc3a31
// declared property setter: - (void)setInputRadius:(id)radius;	// 0x36bc3ad9
// declared property setter: - (void)setInputShadowAmount:(id)amount;	// 0x36bc3a69
@end
