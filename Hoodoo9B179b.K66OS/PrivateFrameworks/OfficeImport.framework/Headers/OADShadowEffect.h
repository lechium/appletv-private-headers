/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADEffect.h"

@class OADColor;

__attribute__((visibility("hidden")))
@interface OADShadowEffect : OADEffect {
@private
	OADColor *mColor;	// 8 = 0x8
	float mBlurRadius;	// 12 = 0xc
	float mDistance;	// 16 = 0x10
	float mAngle;	// 20 = 0x14
}
@property(assign) float angle;	// G=0x328f5ded; S=0x32881dc9; converted property
@property(assign) float blurRadius;	// G=0x328f5dcd; S=0x32881cc9; converted property
@property(retain) id color;	// G=0x328f5dbd; S=0x32881c1d; converted property
@property(assign) float distance;	// G=0x328f5ddd; S=0x32881db9; converted property
- (id)initWithShadowEffect:(id)shadowEffect type:(int)type;	// 0x328f93bd
- (id)initWithType:(int)type;	// 0x32881ad9
// converted property getter: - (float)angle;	// 0x328f5ded
// converted property getter: - (float)blurRadius;	// 0x328f5dcd
// converted property getter: - (id)color;	// 0x328f5dbd
- (void)dealloc;	// 0x32882329
// converted property getter: - (float)distance;	// 0x328f5ddd
- (unsigned)hash;	// 0x329d9fc1
- (BOOL)isEqual:(id)equal;	// 0x328f5c61
// converted property setter: - (void)setAngle:(float)angle;	// 0x32881dc9
// converted property setter: - (void)setBlurRadius:(float)radius;	// 0x32881cc9
// converted property setter: - (void)setColor:(id)color;	// 0x32881c1d
// converted property setter: - (void)setDistance:(float)distance;	// 0x32881db9
- (void)setStyleColor:(id)color;	// 0x328f953d
@end

