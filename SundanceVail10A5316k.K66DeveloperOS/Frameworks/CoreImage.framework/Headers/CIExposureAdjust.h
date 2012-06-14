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
@interface CIExposureAdjust : CIFilter {
@private
	CIImage *inputImage;	// 36 = 0x24
	NSNumber *inputEV;	// 40 = 0x28
}
@property(copy, nonatomic) NSNumber *inputEV;	// G=0x36bad8a5; S=0x36bad8b9; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x36bad871; S=0x36bad881; @synthesize
+ (id)customAttributes;	// 0x36bad479
- (BOOL)_isIdentity;	// 0x36bad6c9
// declared property getter: - (id)inputEV;	// 0x36bad8a5
// declared property getter: - (id)inputImage;	// 0x36bad871
- (id)outputImage;	// 0x36bad711
- (void)setDefaults;	// 0x36bad679
// declared property setter: - (void)setInputEV:(id)ev;	// 0x36bad8b9
// declared property setter: - (void)setInputImage:(id)image;	// 0x36bad881
@end
