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
@property(retain, nonatomic) CIColor *inputColor0;	// G=0x30d5d4d5; S=0x30d5d4e5; @synthesize
@property(retain, nonatomic) CIColor *inputColor1;	// G=0x30d5d4f5; S=0x30d5d505; @synthesize
@property(retain, nonatomic) CIVector *inputPoint0;	// G=0x30d5d495; S=0x30d5d4a5; @synthesize
@property(retain, nonatomic) CIVector *inputPoint1;	// G=0x30d5d4b5; S=0x30d5d4c5; @synthesize
+ (id)customAttributes;	// 0x30d5cfc9
- (id)_kernel;	// 0x30d5cd99
// declared property getter: - (id)inputColor0;	// 0x30d5d4d5
// declared property getter: - (id)inputColor1;	// 0x30d5d4f5
// declared property getter: - (id)inputPoint0;	// 0x30d5d495
// declared property getter: - (id)inputPoint1;	// 0x30d5d4b5
- (id)outputImage;	// 0x30d5d311
- (void)setDefaults;	// 0x30d5d239
// declared property setter: - (void)setInputColor0:(id)a0;	// 0x30d5d4e5
// declared property setter: - (void)setInputColor1:(id)a1;	// 0x30d5d505
// declared property setter: - (void)setInputPoint0:(id)a0;	// 0x30d5d4a5
// declared property setter: - (void)setInputPoint1:(id)a1;	// 0x30d5d4c5
@end
