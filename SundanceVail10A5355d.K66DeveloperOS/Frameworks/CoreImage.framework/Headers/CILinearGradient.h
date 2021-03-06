/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "CIFilter.h"

@class CIVector, CIColor;

__attribute__((visibility("hidden")))
@interface CILinearGradient : CIFilter {
	CIVector *inputPoint0;	// 36 = 0x24
	CIVector *inputPoint1;	// 40 = 0x28
	CIColor *inputColor0;	// 44 = 0x2c
	CIColor *inputColor1;	// 48 = 0x30
}
@property(retain, nonatomic) CIColor *inputColor0;	// G=0x3699ee29; S=0x3699ee39; @synthesize
@property(retain, nonatomic) CIColor *inputColor1;	// G=0x3699ee5d; S=0x3699ee6d; @synthesize
@property(retain, nonatomic) CIVector *inputPoint0;	// G=0x3699edc1; S=0x3699edd1; @synthesize
@property(retain, nonatomic) CIVector *inputPoint1;	// G=0x3699edf5; S=0x3699ee05; @synthesize
+ (id)customAttributes;	// 0x3699e939
- (id)_kernel;	// 0x3699e6f5
// declared property getter: - (id)inputColor0;	// 0x3699ee29
// declared property getter: - (id)inputColor1;	// 0x3699ee5d
// declared property getter: - (id)inputPoint0;	// 0x3699edc1
// declared property getter: - (id)inputPoint1;	// 0x3699edf5
- (id)outputImage;	// 0x3699ec3d
- (void)setDefaults;	// 0x3699eb65
// declared property setter: - (void)setInputColor0:(id)a0;	// 0x3699ee39
// declared property setter: - (void)setInputColor1:(id)a1;	// 0x3699ee6d
// declared property setter: - (void)setInputPoint0:(id)a0;	// 0x3699edd1
// declared property setter: - (void)setInputPoint1:(id)a1;	// 0x3699ee05
@end

