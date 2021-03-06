/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCObjectLight.h"

@class MCAnimationPathKeyframed;

@interface MCAnimationKeyframe : MCObjectLight {
	double mTimeOffset;	// 4 = 0x4
	int mTimeOffsetKind;	// 12 = 0xc
	BOOL mIsSnapshot;	// 16 = 0x10
	float mPreControl;	// 20 = 0x14
	float mPostControl;	// 24 = 0x18
	MCAnimationPathKeyframed *mAnimationPath;	// 28 = 0x1c
}
@property(assign) MCAnimationPathKeyframed *animationPath;	// G=0x3558adad; S=0x3558adbd; @synthesize=mAnimationPath
@property(assign, nonatomic) float postControl;	// G=0x3558ad9d; S=0x3558aba1; @synthesize=mPostControl
@property(assign, nonatomic) float preControl;	// G=0x3558ad8d; S=0x3558ab1d; @synthesize=mPreControl
@property(assign, nonatomic) double timeOffset;	// G=0x3558ad65; S=0x3558aa2d; @synthesize=mTimeOffset
@property(assign, nonatomic) int timeOffsetKind;	// G=0x3558ad7d; S=0x3558aab1; @synthesize=mTimeOffsetKind
+ (id)keyPathsForValuesAffectingValueForKey:(id)key;	// 0x3558a699
- (id)initWithImprint:(id)imprint;	// 0x3558a74d
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x3558ace1
// declared property getter: - (id)animationPath;	// 0x3558adad
- (void)demolish;	// 0x3558a899
- (id)description;	// 0x3558ac25
- (id)imprint;	// 0x3558a8ad
- (BOOL)isSnapshot;	// 0x3558adcd
// declared property getter: - (float)postControl;	// 0x3558ad9d
// declared property getter: - (float)preControl;	// 0x3558ad8d
// declared property setter: - (void)setAnimationPath:(id)path;	// 0x3558adbd
// declared property setter: - (void)setPostControl:(float)control;	// 0x3558aba1
// declared property setter: - (void)setPreControl:(float)control;	// 0x3558ab1d
// declared property setter: - (void)setTimeOffset:(double)offset;	// 0x3558aa2d
// declared property setter: - (void)setTimeOffsetKind:(int)kind;	// 0x3558aab1
// declared property getter: - (double)timeOffset;	// 0x3558ad65
// declared property getter: - (int)timeOffsetKind;	// 0x3558ad7d
@end

