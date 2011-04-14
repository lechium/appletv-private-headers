/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OADShade.h"


__attribute__((visibility("hidden")))
@interface OADLinearShade : OADShade {
@private
	float mAngle;	// 12 = 0xc
	BOOL mIsAngleOverridden;	// 16 = 0x10
	BOOL mScaled;	// 17 = 0x11
	BOOL mIsScaledOverridden;	// 18 = 0x12
}
@property(assign) float angle;	// G=0x319d6081; S=0x3196d1e5; converted property
@property(assign) BOOL scaled;	// G=0x31ab2ddd; S=0x3196d1c9; converted property
+ (id)defaultProperties;	// 0x3196d185
- (id)initWithDefaults;	// 0x319d5835
// converted property getter: - (float)angle;	// 0x319d6081
- (id)copyWithZone:(NSZone *)zone;	// 0x31a5fbe9
- (unsigned)hash;	// 0x31ab3975
- (BOOL)isAngleOverridden;	// 0x319d60ad
- (BOOL)isEqual:(id)equal;	// 0x31ab3841
- (BOOL)isScaledOverridden;	// 0x31ab2da9
// converted property getter: - (BOOL)scaled;	// 0x31ab2ddd
// converted property setter: - (void)setAngle:(float)angle;	// 0x3196d1e5
// converted property setter: - (void)setScaled:(BOOL)scaled;	// 0x3196d1c9
@end

