/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OADBlipEffect.h"


__attribute__((visibility("hidden")))
@interface OADLuminanceEffect : OADBlipEffect {
@private
	float mBrightness;	// 8 = 0x8
	float mContrast;	// 12 = 0xc
}
@property(assign) float brightness;	// G=0x32aba769; S=0x328e3f2d; converted property
@property(assign) float contrast;	// G=0x32aba779; S=0x328e3f09; converted property
- (id)init;	// 0x328e3ea1
// converted property getter: - (float)brightness;	// 0x32aba769
// converted property getter: - (float)contrast;	// 0x32aba779
- (id)copyWithZone:(NSZone *)zone;	// 0x32abab4d
- (unsigned)hash;	// 0x32aba9fd
- (BOOL)isEqual:(id)equal;	// 0x32abaa65
// converted property setter: - (void)setBrightness:(float)brightness;	// 0x328e3f2d
// converted property setter: - (void)setContrast:(float)contrast;	// 0x328e3f09
@end

