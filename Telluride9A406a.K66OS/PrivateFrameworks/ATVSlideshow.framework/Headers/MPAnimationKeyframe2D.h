/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MPAnimationKeyframe.h"
#import "ATVSlideshow-Structs.h"


@interface MPAnimationKeyframe2D : MPAnimationKeyframe {
@private
	CGPoint _point;	// 20 = 0x14
}
@property(assign, nonatomic) CGPoint point;	// G=0x348f99e5; S=0x348f9a01; @synthesize=_point
+ (id)keyframe2DWithPoint:(CGPoint)point atTime:(double)time;	// 0x348f9531
+ (id)keyframe2DWithPoint:(CGPoint)point atTime:(double)time offsetType:(int)type;	// 0x348f9581
- (id)initKeyframe2DWithPoint:(CGPoint)point atTime:(double)time offsetType:(int)type;	// 0x348f95d1
- (id)initWithCoder:(id)coder;	// 0x348f9779
- (id)copyWithZone:(NSZone *)zone;	// 0x348f9665
- (id)description;	// 0x348f988d
- (void)encodeWithCoder:(id)coder;	// 0x348f96bd
- (id)keyframe;	// 0x348fbb2d
// declared property getter: - (CGPoint)point;	// 0x348f99e5
// declared property setter: - (void)setPoint:(CGPoint)point;	// 0x348f9a01
@end

