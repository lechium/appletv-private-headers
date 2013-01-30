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
@interface CITemperatureAndTint : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
	CIVector *inputNeutral;	// 40 = 0x28
	CIVector *inputTargetNeutral;	// 44 = 0x2c
}
@property(retain, nonatomic) CIImage *inputImage;	// G=0x30d24ba9; S=0x30d24bb9; @synthesize
@property(copy, nonatomic) CIVector *inputNeutral;	// G=0x30d236f5; S=0x30d23709; @dynamic
@property(copy, nonatomic) CIVector *inputTargetNeutral;	// G=0x30d24bc9; S=0x30d24bdd; @synthesize
+ (id)customAttributes;	// 0x30d234e9
// declared property getter: - (id)inputImage;	// 0x30d24ba9
// declared property getter: - (id)inputNeutral;	// 0x30d236f5
// declared property getter: - (id)inputTargetNeutral;	// 0x30d24bc9
- (id)outputImage;	// 0x30d241d9
- (void)setDefaults;	// 0x30d24161
// declared property setter: - (void)setInputImage:(id)image;	// 0x30d24bb9
// declared property setter: - (void)setInputNeutral:(id)neutral;	// 0x30d23709
// declared property setter: - (void)setInputTargetNeutral:(id)neutral;	// 0x30d24bdd
@end
