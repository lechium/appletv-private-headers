/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCObjectLight.h"

@class MCAnimationPathKeyframed;

@interface MCAnimationKeyframe : MCObjectLight {
	MCAnimationPathKeyframed *mAnimationPath;	// 4 = 0x4
@private
	double mTimeOffset;	// 8 = 0x8
	int mTimeOffsetKind;	// 16 = 0x10
	float mPreControl;	// 20 = 0x14
	float mPostControl;	// 24 = 0x18
	BOOL mIsSnapshot;	// 28 = 0x1c
}
@property(assign) MCAnimationPathKeyframed *animationPath;	// G=0x36531055; S=0x36531069; @synthesize=mAnimationPath
@property(assign, nonatomic) float postControl;	// G=0x36531045; S=0x36530e49; @synthesize=mPostControl
@property(assign, nonatomic) float preControl;	// G=0x36531035; S=0x36530dc1; @synthesize=mPreControl
@property(assign, nonatomic) double timeOffset;	// G=0x3653100d; S=0x36530cc9; @synthesize=mTimeOffset
@property(assign, nonatomic) int timeOffsetKind;	// G=0x36531025; S=0x36530d51; @synthesize=mTimeOffsetKind
+ (id)keyPathsForValuesAffectingValueForKey:(id)key;	// 0x36530941
- (id)initWithImprint:(id)imprint;	// 0x365309f9
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x36530f89
// declared property getter: - (id)animationPath;	// 0x36531055
- (void)demolish;	// 0x36530b41
- (id)description;	// 0x36530ed1
- (id)imprint;	// 0x36530b55
- (BOOL)isSnapshot;	// 0x36531081
// declared property getter: - (float)postControl;	// 0x36531045
// declared property getter: - (float)preControl;	// 0x36531035
// declared property setter: - (void)setAnimationPath:(id)path;	// 0x36531069
// declared property setter: - (void)setPostControl:(float)control;	// 0x36530e49
// declared property setter: - (void)setPreControl:(float)control;	// 0x36530dc1
// declared property setter: - (void)setTimeOffset:(double)offset;	// 0x36530cc9
// declared property setter: - (void)setTimeOffsetKind:(int)kind;	// 0x36530d51
// declared property getter: - (double)timeOffset;	// 0x3653100d
// declared property getter: - (int)timeOffsetKind;	// 0x36531025
@end

