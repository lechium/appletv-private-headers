/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CoreImage-Structs.h"
#import "CIFilter.h"

@class NSNumber, CIVector, CIImage;

__attribute__((visibility("hidden")))
@interface CIMirror : CIFilter {
	CIImage *inputImage;	// 36 = 0x24
	CIVector *inputPoint;	// 40 = 0x28
	NSNumber *inputAngle;	// 44 = 0x2c
}
@property(copy, nonatomic) NSNumber *inputAngle;	// G=0x37325009; S=0x3732501d; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x37324fc5; S=0x37324fd5; @synthesize
@property(copy, nonatomic) CIVector *inputPoint;	// G=0x37324fe5; S=0x37324ff9; @synthesize
+ (id)customAttributes;	// 0x37322fc1
- (id)_kernel;	// 0x373231f9
- (Rectangle)computeDOD:(vec2)dod tst:(vec3)tst off:(vec4)off mtx:(vec4)mtx;	// 0x37323489
// declared property getter: - (id)inputAngle;	// 0x37325009
// declared property getter: - (id)inputImage;	// 0x37324fc5
// declared property getter: - (id)inputPoint;	// 0x37324fe5
- (id)outputImage;	// 0x37324051
- (void)setDefaults;	// 0x37323401
// declared property setter: - (void)setInputAngle:(id)angle;	// 0x3732501d
// declared property setter: - (void)setInputImage:(id)image;	// 0x37324fd5
// declared property setter: - (void)setInputPoint:(id)point;	// 0x37324ff9
@end
