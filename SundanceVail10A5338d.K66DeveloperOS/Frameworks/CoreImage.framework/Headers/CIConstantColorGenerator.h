/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "CIFilter.h"

@class CIColor;

__attribute__((visibility("hidden")))
@interface CIConstantColorGenerator : CIFilter {
	CIColor *inputColor;	// 36 = 0x24
}
@property(copy, nonatomic) CIColor *inputColor;	// G=0x35325f11; S=0x35325f25; @synthesize
+ (id)customAttributes;	// 0x35325d5d
// declared property getter: - (id)inputColor;	// 0x35325f11
- (id)outputImage;	// 0x35325ee5
- (void)setDefaults;	// 0x35325e9d
// declared property setter: - (void)setInputColor:(id)color;	// 0x35325f25
@end
