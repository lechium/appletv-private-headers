/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CIFilter.h"
#import "CoreImage-Structs.h"

@class NSNumber, CIImage;

__attribute__((visibility("hidden")))
@interface CIStraightenFilter : CIFilter {
@private
	CIImage *inputImage;	// 36 = 0x24
	NSNumber *inputAngle;	// 40 = 0x28
}
@property(copy, nonatomic) NSNumber *inputAngle;	// G=0x36dfbead; S=0x36dfbebd; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x36dfbe79; S=0x36dfbe89; @synthesize
+ (id)customAttributes;	// 0x36dfba21
// declared property getter: - (id)inputAngle;	// 0x36dfbead
// declared property getter: - (id)inputImage;	// 0x36dfbe79
- (id)outputImage;	// 0x36dfbbf9
// declared property setter: - (void)setInputAngle:(id)angle;	// 0x36dfbebd
// declared property setter: - (void)setInputImage:(id)image;	// 0x36dfbe89
@end

