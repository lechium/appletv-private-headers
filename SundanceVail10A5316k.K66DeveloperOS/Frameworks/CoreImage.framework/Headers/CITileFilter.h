/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CIFilter.h"
#import "CoreImage-Structs.h"

@class CIVector, CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CITileFilter : CIFilter {
@private
	CIImage *inputImage;	// 36 = 0x24
	CIVector *inputCenter;	// 40 = 0x28
	NSNumber *inputAngle;	// 44 = 0x2c
	NSNumber *inputWidth;	// 48 = 0x30
}
@property(retain) NSNumber *inputAngle;	// G=0x36c10af1; S=0x36c10b05; @synthesize
@property(retain) CIVector *inputCenter;	// G=0x36c10ab9; S=0x36c10acd; @synthesize
@property(retain) CIImage *inputImage;	// G=0x36c10a81; S=0x36c10a95; @synthesize
@property(retain) NSNumber *inputWidth;	// G=0x36c10b29; S=0x36c10b3d; @synthesize
+ (id)_filter_display_name;	// 0x36c10679
+ (id)customAttributes;	// 0x36c10689
// declared property getter: - (id)inputAngle;	// 0x36c10af1
// declared property getter: - (id)inputCenter;	// 0x36c10ab9
// declared property getter: - (id)inputImage;	// 0x36c10a81
// declared property getter: - (id)inputWidth;	// 0x36c10b29
- (void)setDefaults;	// 0x36c109d1
// declared property setter: - (void)setInputAngle:(id)angle;	// 0x36c10b05
// declared property setter: - (void)setInputCenter:(id)center;	// 0x36c10acd
// declared property setter: - (void)setInputImage:(id)image;	// 0x36c10a95
// declared property setter: - (void)setInputWidth:(id)width;	// 0x36c10b3d
@end
