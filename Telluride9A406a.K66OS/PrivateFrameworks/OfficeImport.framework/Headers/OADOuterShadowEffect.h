/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADShadowEffect.h"
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface OADOuterShadowEffect : OADShadowEffect {
@private
	float mXScale;	// 24 = 0x18
	float mYScale;	// 28 = 0x1c
	float mXSkew;	// 32 = 0x20
	float mYSkew;	// 36 = 0x24
	int mAlignment;	// 40 = 0x28
	BOOL mRotateWithShape;	// 44 = 0x2c
}
@property(assign) int alignment;	// G=0x329dec41; S=0x329e36ed; converted property
@property(assign) BOOL rotateWithShape;	// G=0x329dec51; S=0x329a6925; converted property
@property(assign) float xScale;	// G=0x329dec01; S=0x329ee88d; converted property
@property(assign) float xSkew;	// G=0x329dec21; S=0x329efe7d; converted property
@property(assign) float yScale;	// G=0x329dec11; S=0x329efe6d; converted property
@property(assign) float ySkew;	// G=0x329dec31; S=0x329ee87d; converted property
- (id)init;	// 0x3296aa49
// converted property getter: - (int)alignment;	// 0x329dec41
- (id)copyWithZone:(NSZone *)zone;	// 0x329e22f9
- (unsigned)hash;	// 0x32ac0d51
- (BOOL)isEqual:(id)equal;	// 0x329dea65
// converted property getter: - (BOOL)rotateWithShape;	// 0x329dec51
// converted property setter: - (void)setAlignment:(int)alignment;	// 0x329e36ed
// converted property setter: - (void)setRotateWithShape:(BOOL)shape;	// 0x329a6925
// converted property setter: - (void)setXScale:(float)scale;	// 0x329ee88d
// converted property setter: - (void)setXSkew:(float)skew;	// 0x329efe7d
// converted property setter: - (void)setYScale:(float)scale;	// 0x329efe6d
// converted property setter: - (void)setYSkew:(float)skew;	// 0x329ee87d
// converted property getter: - (float)xScale;	// 0x329dec01
// converted property getter: - (float)xSkew;	// 0x329dec21
// converted property getter: - (float)yScale;	// 0x329dec11
// converted property getter: - (float)ySkew;	// 0x329dec31
@end
