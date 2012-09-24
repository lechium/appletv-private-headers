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
@interface CIPerspectiveTransformWithExtent : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
	CIVector *inputExtent;	// 40 = 0x28
	CIVector *inputTopLeft;	// 44 = 0x2c
	CIVector *inputTopRight;	// 48 = 0x30
	CIVector *inputBottomRight;	// 52 = 0x34
	CIVector *inputBottomLeft;	// 56 = 0x38
}
@property(copy, nonatomic) CIVector *inputBottomLeft;	// G=0x369cbeb5; S=0x369cbec9; @synthesize
@property(copy, nonatomic) CIVector *inputBottomRight;	// G=0x369cbe7d; S=0x369cbe91; @synthesize
@property(copy, nonatomic) CIVector *inputExtent;	// G=0x369cbdd5; S=0x369cbde9; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x369cbda1; S=0x369cbdb1; @synthesize
@property(copy, nonatomic) CIVector *inputTopLeft;	// G=0x369cbe0d; S=0x369cbe21; @synthesize
@property(copy, nonatomic) CIVector *inputTopRight;	// G=0x369cbe45; S=0x369cbe59; @synthesize
+ (id)customAttributes;	// 0x369cad61
- (id)_kernel;	// 0x369cb0f5
// declared property getter: - (id)inputBottomLeft;	// 0x369cbeb5
// declared property getter: - (id)inputBottomRight;	// 0x369cbe7d
// declared property getter: - (id)inputExtent;	// 0x369cbdd5
// declared property getter: - (id)inputImage;	// 0x369cbda1
// declared property getter: - (id)inputTopLeft;	// 0x369cbe0d
// declared property getter: - (id)inputTopRight;	// 0x369cbe45
- (id)outputImage;	// 0x369cb301
- (void)setDefaults;	// 0x369caff9
// declared property setter: - (void)setInputBottomLeft:(id)left;	// 0x369cbec9
// declared property setter: - (void)setInputBottomRight:(id)right;	// 0x369cbe91
// declared property setter: - (void)setInputExtent:(id)extent;	// 0x369cbde9
// declared property setter: - (void)setInputImage:(id)image;	// 0x369cbdb1
// declared property setter: - (void)setInputTopLeft:(id)left;	// 0x369cbe21
// declared property setter: - (void)setInputTopRight:(id)right;	// 0x369cbe59
@end
