/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "CIFilter.h"

@class NSNumber, CIVector, CIColor;

__attribute__((visibility("hidden")))
@interface CIRadialGradient : CIFilter {
	CIVector *inputCenter;	// 36 = 0x24
	NSNumber *inputRadius0;	// 40 = 0x28
	NSNumber *inputRadius1;	// 44 = 0x2c
	CIColor *inputColor0;	// 48 = 0x30
	CIColor *inputColor1;	// 52 = 0x34
}
@property(retain, nonatomic) CIVector *inputCenter;	// G=0x3532a071; S=0x3532a081; @synthesize
@property(retain, nonatomic) CIColor *inputColor0;	// G=0x3532a10d; S=0x3532a11d; @synthesize
@property(retain, nonatomic) CIColor *inputColor1;	// G=0x3532a141; S=0x3532a151; @synthesize
@property(retain, nonatomic) NSNumber *inputRadius0;	// G=0x3532a0a5; S=0x3532a0b5; @synthesize
@property(retain, nonatomic) NSNumber *inputRadius1;	// G=0x3532a0d9; S=0x3532a0e9; @synthesize
+ (id)customAttributes;	// 0x353298b9
- (id)_kernel;	// 0x353296d1
// declared property getter: - (id)inputCenter;	// 0x3532a071
// declared property getter: - (id)inputColor0;	// 0x3532a10d
// declared property getter: - (id)inputColor1;	// 0x3532a141
// declared property getter: - (id)inputRadius0;	// 0x3532a0a5
// declared property getter: - (id)inputRadius1;	// 0x3532a0d9
- (id)outputImage;	// 0x35329d51
- (void)setDefaults;	// 0x35329c41
// declared property setter: - (void)setInputCenter:(id)center;	// 0x3532a081
// declared property setter: - (void)setInputColor0:(id)a0;	// 0x3532a11d
// declared property setter: - (void)setInputColor1:(id)a1;	// 0x3532a151
// declared property setter: - (void)setInputRadius0:(id)a0;	// 0x3532a0b5
// declared property setter: - (void)setInputRadius1:(id)a1;	// 0x3532a0e9
@end

