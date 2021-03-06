/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCAnimationPath.h"


@interface MCAnimationPathPhysics : MCAnimationPath {
	float _staticFriction;	// 12 = 0xc
	float _kineticFriction;	// 16 = 0x10
	float _skinFriction;	// 20 = 0x14
}
@property(assign, nonatomic) float kineticFriction;	// G=0x30ad8339; S=0x30ad8349; @synthesize=_kineticFriction
@property(assign, nonatomic) float skinFriction;	// G=0x30ad8359; S=0x30ad8369; @synthesize=_skinFriction
@property(assign, nonatomic) float staticFriction;	// G=0x30ad8319; S=0x30ad8329; @synthesize=_staticFriction
- (id)initWithImprint:(id)imprint;	// 0x30ad8081
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x30ad8299
- (id)imprint;	// 0x30ad814d
// declared property getter: - (float)kineticFriction;	// 0x30ad8339
// declared property setter: - (void)setKineticFriction:(float)friction;	// 0x30ad8349
// declared property setter: - (void)setSkinFriction:(float)friction;	// 0x30ad8369
// declared property setter: - (void)setStaticFriction:(float)friction;	// 0x30ad8329
// declared property getter: - (float)skinFriction;	// 0x30ad8359
// declared property getter: - (float)staticFriction;	// 0x30ad8319
@end

