/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MCAnimationPath.h"

@class NSArray, NSSet, NSMutableSet;

@interface MCAnimationPathKeyframed : MCAnimationPath {
	NSMutableSet *mKeyframes;	// 20 = 0x14
	NSArray *mCachedOrderedKeyframes;	// 24 = 0x18
}
@property(readonly, assign) NSSet *keyframes;	// G=0x34a4cfad; 
+ (id)animationPathWithKey:(id)key;	// 0x34a4caf1
+ (id)keyPathsForValuesAffectingValueForKey:(id)key;	// 0x34a4ca71
+ (double)timeForKeyframe:(id)keyframe inPlug:(id)plug;	// 0x34a4d669
- (id)init;	// 0x34a4cb1d
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x34a4cb81
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x34a4e7a9
- (unsigned)countOfKeyframes;	// 0x34a4d101
- (id)createKeyframeWithFunction:(id)function atTime:(double)time offsetKind:(int)kind forDuration:(double)duration;	// 0x34a4dc69
- (id)createKeyframeWithPoint:(CGPoint)point atTime:(double)time;	// 0x34a4de9d
- (id)createKeyframeWithPoint:(CGPoint)point atTime:(double)time offsetKind:(int)kind;	// 0x34a4dec9
- (id)createKeyframeWithScalar:(float)scalar atTime:(double)time;	// 0x34a4da25
- (id)createKeyframeWithScalar:(float)scalar atTime:(double)time offsetKind:(int)kind;	// 0x34a4da49
- (id)createKeyframeWithVector:(XXStruct_Te64nB)vector atTime:(double)time;	// 0x34a4e115
- (id)createKeyframeWithVector:(XXStruct_Te64nB)vector atTime:(double)time offsetKind:(int)kind;	// 0x34a4e149
- (void)demolish;	// 0x34a4ccad
- (id)description;	// 0x34a4e751
- (id)imprint;	// 0x34a4ce65
// declared property getter: - (id)keyframes;	// 0x34a4cfad
- (id)orderedKeyframesInPlug:(id)plug;	// 0x34a4d1fd
- (void)removeAllKeyframes;	// 0x34a4e505
- (void)removeKeyframe:(id)keyframe;	// 0x34a4e375
@end

