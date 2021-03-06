/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADBlipEffect.h"
#import "OfficeImport-Structs.h"


@interface OADLuminanceEffect : OADBlipEffect {
	float mBrightness;	// 8 = 0x8
	float mContrast;	// 12 = 0xc
}
@property(assign) float brightness;	// G=0x34a4772d; S=0x3487da95; converted property
@property(assign) float contrast;	// G=0x34a4773d; S=0x3487da71; converted property
- (id)init;	// 0x3487d9ed
// converted property getter: - (float)brightness;	// 0x34a4772d
// converted property getter: - (float)contrast;	// 0x34a4773d
- (id)copyWithZone:(NSZone *)zone;	// 0x34a476a9
- (unsigned)hash;	// 0x34a4774d
- (BOOL)isEqual:(id)equal;	// 0x34a477b5
// converted property setter: - (void)setBrightness:(float)brightness;	// 0x3487da95
// converted property setter: - (void)setContrast:(float)contrast;	// 0x3487da71
@end

