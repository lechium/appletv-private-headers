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
@interface CIFaceBalance : CIFilter {
@private
	CIImage *inputImage;	// 36 = 0x24
	NSNumber *inputOrigI;	// 40 = 0x28
	NSNumber *inputOrigQ;	// 44 = 0x2c
	NSNumber *inputStrength;	// 48 = 0x30
	NSNumber *inputWarmth;	// 52 = 0x34
}
@property(retain, nonatomic) CIImage *inputImage;	// G=0x36bc7929; S=0x36bc7939; @synthesize
@property(copy, nonatomic) NSNumber *inputOrigI;	// G=0x36bc795d; S=0x36bc7971; @synthesize
@property(copy, nonatomic) NSNumber *inputOrigQ;	// G=0x36bc7995; S=0x36bc79a9; @synthesize
@property(copy, nonatomic) NSNumber *inputStrength;	// G=0x36bc79cd; S=0x36bc79e1; @synthesize
@property(copy, nonatomic) NSNumber *inputWarmth;	// G=0x36bc7a05; S=0x36bc7a19; @synthesize
+ (id)customAttributes;	// 0x36bc6e21
- (id)_initFromProperties:(id)properties;	// 0x36bc7d51
- (BOOL)_isIdentity;	// 0x36bc7589
- (id)_kernel;	// 0x36bc73f1
- (id)_outputProperties;	// 0x36bc7a41
// declared property getter: - (id)inputImage;	// 0x36bc7929
// declared property getter: - (id)inputOrigI;	// 0x36bc795d
// declared property getter: - (id)inputOrigQ;	// 0x36bc7995
// declared property getter: - (id)inputStrength;	// 0x36bc79cd
// declared property getter: - (id)inputWarmth;	// 0x36bc7a05
- (id)outputImage;	// 0x36bc76c9
- (void)setDefaults;	// 0x36bc7321
// declared property setter: - (void)setInputImage:(id)image;	// 0x36bc7939
// declared property setter: - (void)setInputOrigI:(id)i;	// 0x36bc7971
// declared property setter: - (void)setInputOrigQ:(id)q;	// 0x36bc79a9
// declared property setter: - (void)setInputStrength:(id)strength;	// 0x36bc79e1
// declared property setter: - (void)setInputWarmth:(id)warmth;	// 0x36bc7a19
@end

