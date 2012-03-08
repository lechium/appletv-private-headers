/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "CIFilter.h"
#import "CoreImage-Structs.h"

@class CIImage, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CIRedEyeCorrections : CIFilter {
@private
	CIImage *inputImage;	// 36 = 0x24
	NSString *inputCameraModel;	// 40 = 0x28
	NSArray *inputCorrectionInfo;	// 44 = 0x2c
}
@property(retain, nonatomic) NSString *inputCameraModel;	// G=0x30233949; S=0x30233959; @synthesize
@property(retain, nonatomic) NSArray *inputCorrectionInfo;	// G=0x3023397d; S=0x3023398d; @synthesize
@property(retain, nonatomic) CIImage *inputImage;	// G=0x30233915; S=0x30233925; @synthesize
- (id)_initFromProperties:(id)properties;	// 0x30234431
- (BOOL)_isIdentity;	// 0x30233571
- (id)_outputProperties;	// 0x302339b1
// declared property getter: - (id)inputCameraModel;	// 0x30233949
// declared property getter: - (id)inputCorrectionInfo;	// 0x3023397d
// declared property getter: - (id)inputImage;	// 0x30233915
- (id)outputImage;	// 0x302335a1
- (void)setDefaults;	// 0x30233535
// declared property setter: - (void)setInputCameraModel:(id)model;	// 0x30233959
// declared property setter: - (void)setInputCorrectionInfo:(id)info;	// 0x3023398d
// declared property setter: - (void)setInputImage:(id)image;	// 0x30233925
@end

