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
@interface CIColorPosterize : CIFilter {
@private
	CIImage *inputImage;	// 36 = 0x24
	NSNumber *inputLevels;	// 40 = 0x28
}
@property(retain, nonatomic) CIImage *inputImage;	// G=0x36c06039; S=0x36c06049; @synthesize
@property(copy, nonatomic) NSNumber *inputLevels;	// G=0x36c0606d; S=0x36c06081; @synthesize
+ (id)customAttributes;	// 0x36c05a81
- (BOOL)_isIdentity;	// 0x36c05e81
- (id)_kernel;	// 0x36c05ca1
// declared property getter: - (id)inputImage;	// 0x36c06039
// declared property getter: - (id)inputLevels;	// 0x36c0606d
- (id)outputImage;	// 0x36c05ec9
- (void)setDefaults;	// 0x36c05e39
// declared property setter: - (void)setInputImage:(id)image;	// 0x36c06049
// declared property setter: - (void)setInputLevels:(id)levels;	// 0x36c06081
@end

