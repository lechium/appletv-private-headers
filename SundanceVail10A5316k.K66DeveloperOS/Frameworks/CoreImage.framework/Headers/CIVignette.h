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
@interface CIVignette : CIFilter {
@private
	CIImage *inputImage;	// 36 = 0x24
	NSNumber *inputIntensity;	// 40 = 0x28
	NSNumber *inputRadius;	// 44 = 0x2c
}
@property(retain, nonatomic) CIImage *inputImage;	// G=0x36bf2ca1; S=0x36bf2cb1; @synthesize
@property(copy, nonatomic) NSNumber *inputIntensity;	// G=0x36bf2cd5; S=0x36bf2ce9; @synthesize
@property(copy, nonatomic) NSNumber *inputRadius;	// G=0x36bf2d0d; S=0x36bf2d21; @synthesize
+ (id)customAttributes;	// 0x36bf24c1
- (BOOL)_isIdentity;	// 0x36bf2a29
- (id)_kernel;	// 0x36bf27f1
// declared property getter: - (id)inputImage;	// 0x36bf2ca1
// declared property getter: - (id)inputIntensity;	// 0x36bf2cd5
// declared property getter: - (id)inputRadius;	// 0x36bf2d0d
- (id)outputImage;	// 0x36bf2a71
- (void)setDefaults;	// 0x36bf29b9
// declared property setter: - (void)setInputImage:(id)image;	// 0x36bf2cb1
// declared property setter: - (void)setInputIntensity:(id)intensity;	// 0x36bf2ce9
// declared property setter: - (void)setInputRadius:(id)radius;	// 0x36bf2d21
@end

