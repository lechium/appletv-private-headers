/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCAnimationPath.h"
#import "ATVSlideshow-Structs.h"

@class NSArray, NSMutableSet, NSSet;

@interface MCAnimationPathKeyframed : MCAnimationPath {
	NSMutableSet *mKeyframes;	// 12 = 0xc
	NSArray *mCachedOrderedKeyframes;	// 16 = 0x10
}
@property(readonly, assign) NSSet *keyframes;	// G=0x3558ed91; 
+ (id)animationPathWithKey:(id)key;	// 0x3558e8dd
+ (id)keyPathsForValuesAffectingValueForKey:(id)key;	// 0x3558e85d
+ (double)timeForKeyframe:(id)keyframe inPlug:(id)plug;	// 0x3558f44d
- (id)init;	// 0x3558e909
- (id)initWithImprint:(id)imprint;	// 0x3558e96d
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x3558ffcd
- (void)addKeyframe:(id)keyframe;	// 0x3558fa21
- (unsigned)countOfKeyframes;	// 0x3558eee5
- (id)createKeyframeWithFunction:(id)function atTime:(double)time offsetKind:(int)kind forDuration:(double)duration;	// 0x3558f881
- (id)createKeyframeWithPoint:(CGPoint)point atTime:(double)time;	// 0x3558f8e9
- (id)createKeyframeWithPoint:(CGPoint)point atTime:(double)time offsetKind:(int)kind;	// 0x3558f915
- (id)createKeyframeWithScalar:(float)scalar atTime:(double)time;	// 0x3558f7f5
- (id)createKeyframeWithScalar:(float)scalar atTime:(double)time offsetKind:(int)kind;	// 0x3558f819
- (id)createKeyframeWithVector:(XXStruct_Te64nB)vector atTime:(double)time;	// 0x3558f975
- (id)createKeyframeWithVector:(XXStruct_Te64nB)vector atTime:(double)time offsetKind:(int)kind;	// 0x3558f9a9
- (void)demolish;	// 0x3558ea91
- (id)description;	// 0x3558ff75
- (id)imprint;	// 0x3558ec49
// declared property getter: - (id)keyframes;	// 0x3558ed91
- (id)orderedKeyframesInPlug:(id)plug;	// 0x3558efe1
- (void)removeAllKeyframes;	// 0x3558fd29
- (void)removeKeyframe:(id)keyframe;	// 0x3558fb99
@end
