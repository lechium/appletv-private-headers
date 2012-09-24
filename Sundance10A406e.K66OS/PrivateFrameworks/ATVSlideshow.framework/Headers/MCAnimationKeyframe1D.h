/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCAnimationKeyframe.h"


@interface MCAnimationKeyframe1D : MCAnimationKeyframe {
	float mValue;	// 32 = 0x20
}
@property(assign, nonatomic) float value;	// G=0x3613c965; S=0x3613c815; @synthesize=mValue
+ (id)keyframeWithScalar:(float)scalar atTime:(double)time;	// 0x3613c679
+ (id)keyframeWithScalar:(float)scalar atTime:(double)time offsetKind:(int)kind;	// 0x3613c69d
- (id)initWithImprint:(id)imprint;	// 0x3613c729
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x3613c919
- (id)description;	// 0x3613c89d
- (id)imprint;	// 0x3613c799
// declared property setter: - (void)setValue:(float)value;	// 0x3613c815
// declared property getter: - (float)value;	// 0x3613c965
@end
