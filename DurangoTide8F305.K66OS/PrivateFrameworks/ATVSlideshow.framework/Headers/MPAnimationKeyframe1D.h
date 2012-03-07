/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MPAnimationKeyframe.h"
#import "ATVSlideshow-Structs.h"


@interface MPAnimationKeyframe1D : MPAnimationKeyframe {
@private
	float _scalar;	// 20 = 0x14
}
@property(assign) float scalar;	// G=0x331e0945; S=0x331e0955; converted property
+ (id)keyframe1DWithScalar:(float)scalar atTime:(double)time;	// 0x331e05a1
+ (id)keyframe1DWithScalar:(float)scalar atTime:(double)time offsetType:(int)type;	// 0x331e05f9
- (id)initKeyframe1DWithScalar:(float)scalar atTime:(double)time offsetType:(int)type;	// 0x331e0651
- (id)initWithCoder:(id)coder;	// 0x331e077d
- (id)copyWithZone:(NSZone *)zone;	// 0x331e07f1
- (id)description;	// 0x331e0849
- (void)encodeWithCoder:(id)coder;	// 0x331e06e5
- (id)keyframe;	// 0x331e374d
// converted property getter: - (float)scalar;	// 0x331e0945
// converted property setter: - (void)setScalar:(float)scalar;	// 0x331e0955
@end
