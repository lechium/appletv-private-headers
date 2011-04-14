/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OADShadowEffect.h"


__attribute__((visibility("hidden")))
@interface OADPresetShadowEffect : OADShadowEffect {
@private
	int mPresetShadowType;	// 24 = 0x18
}
@property(assign) int presetShadowType;	// G=0x31a8a4f9; S=0x31a8a4e9; converted property
- (id)init;	// 0x31a8a3d9
- (id)copyWithZone:(NSZone *)zone;	// 0x31ab6289
- (id)equivalentOuterShadowEffect;	// 0x31ab5f65
- (unsigned)hash;	// 0x31ab5e9d
- (BOOL)isEqual:(id)equal;	// 0x31ab5ed5
// converted property getter: - (int)presetShadowType;	// 0x31a8a4f9
// converted property setter: - (void)setPresetShadowType:(int)type;	// 0x31a8a4e9
@end

