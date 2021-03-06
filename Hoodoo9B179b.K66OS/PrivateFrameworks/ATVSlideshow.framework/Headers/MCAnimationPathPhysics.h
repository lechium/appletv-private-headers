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
@property(assign, nonatomic) float kineticFriction;	// G=0x35590379; S=0x35590389; @synthesize=_kineticFriction
@property(assign, nonatomic) float skinFriction;	// G=0x35590399; S=0x355903a9; @synthesize=_skinFriction
@property(assign, nonatomic) float staticFriction;	// G=0x35590359; S=0x35590369; @synthesize=_staticFriction
- (id)initWithImprint:(id)imprint;	// 0x355900c1
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x355902d9
- (id)imprint;	// 0x3559018d
// declared property getter: - (float)kineticFriction;	// 0x35590379
// declared property setter: - (void)setKineticFriction:(float)friction;	// 0x35590389
// declared property setter: - (void)setSkinFriction:(float)friction;	// 0x355903a9
// declared property setter: - (void)setStaticFriction:(float)friction;	// 0x35590369
// declared property getter: - (float)skinFriction;	// 0x35590399
// declared property getter: - (float)staticFriction;	// 0x35590359
@end

