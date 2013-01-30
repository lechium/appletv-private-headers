/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MCAnimationKeyframe.h"


@interface MCAnimationKeyframeVector : MCAnimationKeyframe {
	XXStruct_Te64nB mVector;	// 32 = 0x20
}
@property(assign, nonatomic) XXStruct_Te64nB vector;	// G=0x33248b29; S=0x33248a5d; @synthesize=mVector
+ (id)keyframeWithVector:(XXStruct_Te64nB)vector atTime:(double)time;	// 0x332487a1
+ (id)keyframeWithVector:(XXStruct_Te64nB)vector atTime:(double)time offsetKind:(int)kind;	// 0x332487d5
- (id)initWithImprint:(id)imprint;	// 0x33248871
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x33248ad1
- (id)imprint;	// 0x33248961
// declared property setter: - (void)setVector:(XXStruct_Te64nB)vector;	// 0x33248a5d
// declared property getter: - (XXStruct_Te64nB)vector;	// 0x33248b29
@end
