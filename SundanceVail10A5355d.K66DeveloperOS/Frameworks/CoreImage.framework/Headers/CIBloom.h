/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "CIFilter.h"

@class NSNumber, CIImage;

__attribute__((visibility("hidden")))
@interface CIBloom : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
	NSNumber *inputRadius;	// 40 = 0x28
	NSNumber *inputIntensity;	// 44 = 0x2c
}
@property(retain, nonatomic) CIImage *inputImage;	// G=0x369b6c55; S=0x369b6c65; @synthesize
@property(copy, nonatomic) NSNumber *inputIntensity;	// G=0x369b6cc1; S=0x369b6cd5; @synthesize
@property(copy, nonatomic) NSNumber *inputRadius;	// G=0x369b6c89; S=0x369b6c9d; @synthesize
+ (id)customAttributes;	// 0x369b6569
- (BOOL)_isIdentity;	// 0x369b6a79
- (id)_kernel;	// 0x369b6859
// declared property getter: - (id)inputImage;	// 0x369b6c55
// declared property getter: - (id)inputIntensity;	// 0x369b6cc1
// declared property getter: - (id)inputRadius;	// 0x369b6c89
- (id)outputImage;	// 0x369b6af9
- (void)setDefaults;	// 0x369b6a11
// declared property setter: - (void)setInputImage:(id)image;	// 0x369b6c65
// declared property setter: - (void)setInputIntensity:(id)intensity;	// 0x369b6cd5
// declared property setter: - (void)setInputRadius:(id)radius;	// 0x369b6c9d
@end
