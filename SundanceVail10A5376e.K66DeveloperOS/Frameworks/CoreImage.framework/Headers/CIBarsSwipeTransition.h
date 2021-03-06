/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "CIFilter.h"

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIBarsSwipeTransition : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
	CIImage *inputTargetImage;	// 40 = 0x28
	NSNumber *inputAngle;	// 44 = 0x2c
	NSNumber *inputWidth;	// 48 = 0x30
	NSNumber *inputBarOffset;	// 52 = 0x34
	NSNumber *inputTime;	// 56 = 0x38
}
@property(retain) NSNumber *inputAngle;	// G=0x37359541; S=0x37359555; @synthesize
@property(retain) NSNumber *inputBarOffset;	// G=0x37359589; S=0x3735959d; @synthesize
@property(retain) CIImage *inputImage;	// G=0x373594f9; S=0x3735950d; @synthesize
@property(retain) CIImage *inputTargetImage;	// G=0x3735951d; S=0x37359531; @synthesize
@property(retain) NSNumber *inputTime;	// G=0x373595ad; S=0x373595c1; @synthesize
@property(retain) NSNumber *inputWidth;	// G=0x37359565; S=0x37359579; @synthesize
+ (id)customAttributes;	// 0x37357ee1
- (id)_kernel;	// 0x373583a9
// declared property getter: - (id)inputAngle;	// 0x37359541
// declared property getter: - (id)inputBarOffset;	// 0x37359589
// declared property getter: - (id)inputImage;	// 0x373594f9
// declared property getter: - (id)inputTargetImage;	// 0x3735951d
// declared property getter: - (id)inputTime;	// 0x373595ad
// declared property getter: - (id)inputWidth;	// 0x37359565
- (id)outputImage;	// 0x37358599
- (void)setDefaults;	// 0x373582e9
// declared property setter: - (void)setInputAngle:(id)angle;	// 0x37359555
// declared property setter: - (void)setInputBarOffset:(id)offset;	// 0x3735959d
// declared property setter: - (void)setInputImage:(id)image;	// 0x3735950d
// declared property setter: - (void)setInputTargetImage:(id)image;	// 0x37359531
// declared property setter: - (void)setInputTime:(id)time;	// 0x373595c1
// declared property setter: - (void)setInputWidth:(id)width;	// 0x37359579
@end

