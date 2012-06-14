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
@property(assign) float angle;	// G=0x3115df59; S=0x310e0971; converted property
@property(assign) float blurRadius;	// G=0x3115df39; S=0x310e0951; converted property
@property(retain) id color;	// G=0x3115de65; S=0x310e0981; converted property
@property(assign) float distance;	// G=0x3115df49; S=0x310e0961; converted property
- (id)initWithShadowEffect:(id)shadowEffect type:(int)type;	// 0x3115ddb1
- (id)initWithType:(int)type;	// 0x310e05c9
// converted property getter: - (float)angle;	// 0x3115df59
// converted property getter: - (float)blurRadius;	// 0x3115df39
// converted property getter: - (id)color;	// 0x3115de65
- (void)dealloc;	// 0x3110a599
// converted property getter: - (float)distance;	// 0x3115df49
- (unsigned)hash;	// 0x312540e9
- (BOOL)isEqual:(id)equal;	// 0x311b2e21
// converted property setter: - (void)setAngle:(float)angle;	// 0x310e0971
// converted property setter: - (void)setBlurRadius:(float)radius;	// 0x310e0951
// converted property setter: - (void)setColor:(id)color;	// 0x310e0981
// converted property setter: - (void)setDistance:(float)distance;	// 0x310e0961
- (void)setStyleColor:(id)color;	// 0x3115df69
@end

