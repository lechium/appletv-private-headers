/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCObject.h"

@class NSString, MCAnimationPath;

@interface MCAnimationKeyframe : MCObject {
	double mTimeOffset;	// 12 = 0xc
	int mTimeOffsetKind;	// 20 = 0x14
	NSString *mTimeOffsetArgument;	// 24 = 0x18
	double mPreControl;	// 28 = 0x1c
	double mPostControl;	// 36 = 0x24
	MCAnimationPath *mAnimationPath;	// 44 = 0x2c
}
@property(assign) MCAnimationPath *animationPath;	// G=0x315382d1; S=0x315382e1; @synthesize=mAnimationPath
@property(assign, nonatomic) double postControl;	// G=0x315382b9; S=0x3153814d; @synthesize=mPostControl
@property(assign, nonatomic) double preControl;	// G=0x315382a1; S=0x315380c9; @synthesize=mPreControl
@property(assign, nonatomic) double timeOffset;	// G=0x31538279; S=0x31537d39; @synthesize=mTimeOffset
@property(copy, nonatomic) NSString *timeOffsetArgument;	// G=0x31537e29; S=0x31537f39; 
@property(assign, nonatomic) int timeOffsetKind;	// G=0x31538291; S=0x31537dbd; @synthesize=mTimeOffsetKind
+ (id)keyPathsForValuesAffectingValueForKey:(id)key;	// 0x31537965
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x31537a19
// declared property getter: - (id)animationPath;	// 0x315382d1
- (void)demolish;	// 0x31537b61
- (id)description;	// 0x315381d1
- (id)imprint;	// 0x31537bc1
// declared property getter: - (double)postControl;	// 0x315382b9
// declared property getter: - (double)preControl;	// 0x315382a1
// declared property setter: - (void)setAnimationPath:(id)path;	// 0x315382e1
// declared property setter: - (void)setPostControl:(double)control;	// 0x3153814d
// declared property setter: - (void)setPreControl:(double)control;	// 0x315380c9
// declared property setter: - (void)setTimeOffset:(double)offset;	// 0x31537d39
// declared property setter: - (void)setTimeOffsetArgument:(id)argument;	// 0x31537f39
// declared property setter: - (void)setTimeOffsetKind:(int)kind;	// 0x31537dbd
// declared property getter: - (double)timeOffset;	// 0x31538279
// declared property getter: - (id)timeOffsetArgument;	// 0x31537e29
// declared property getter: - (int)timeOffsetKind;	// 0x31538291
@end

