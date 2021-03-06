/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "CIFilter.h"

@class CIImage, NSNumber, NSData;

__attribute__((visibility("hidden")))
@interface CIColorCube : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
	NSNumber *inputCubeDimension;	// 40 = 0x28
	NSData *inputCubeData;	// 44 = 0x2c
	CIImage *_cubeImage;	// 48 = 0x30
}
@property(readonly, retain) CIImage *cubeImage;	// G=0x3159adc9; converted property
@property(retain, nonatomic) NSData *inputCubeData;	// G=0x3159b31d; S=0x3159a881; @synthesize
@property(copy, nonatomic) NSNumber *inputCubeDimension;	// G=0x3159b2f9; S=0x3159b30d; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x3159b2d9; S=0x3159b2e9; @synthesize
+ (id)customAttributes;	// 0x3159a8e1
- (id)_kernel;	// 0x3159ac05
// converted property getter: - (id)cubeImage;	// 0x3159adc9
- (void)dealloc;	// 0x3159a831
// declared property getter: - (id)inputCubeData;	// 0x3159b31d
// declared property getter: - (id)inputCubeDimension;	// 0x3159b2f9
// declared property getter: - (id)inputImage;	// 0x3159b2d9
- (id)outputImage;	// 0x3159b055
- (void)setDefaults;	// 0x3159ab61
// declared property setter: - (void)setInputCubeData:(id)data;	// 0x3159a881
// declared property setter: - (void)setInputCubeDimension:(id)dimension;	// 0x3159b30d
// declared property setter: - (void)setInputImage:(id)image;	// 0x3159b2e9
@end

