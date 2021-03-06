/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CIFilter.h"
#import "CoreImage-Structs.h"

@class CIImage;

__attribute__((visibility("hidden")))
@interface CILumaMap : CIFilter {
@private
	CIImage *inputImage;	// 36 = 0x24
	CIImage *_tableImage;	// 40 = 0x28
}
@property(retain, nonatomic) CIImage *inputImage;	// G=0x36bf8849; S=0x36bf8859; @synthesize
+ (id)customAttributes;	// 0x36bf845d
- (id)_kernel;	// 0x36bf8461
// declared property getter: - (id)inputImage;	// 0x36bf8849
- (const char *)lumaTable;	// 0x36bf860d
- (id)outputImage;	// 0x36bf8611
- (void)setDefaults;	// 0x36bf85f9
// declared property setter: - (void)setInputImage:(id)image;	// 0x36bf8859
@end

