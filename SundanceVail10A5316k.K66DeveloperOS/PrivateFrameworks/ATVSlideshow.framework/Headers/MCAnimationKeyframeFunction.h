/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCAnimationKeyframe.h"

@class NSDictionary, NSString;

@interface MCAnimationKeyframeFunction : MCAnimationKeyframe {
@private
	double mDuration;	// 32 = 0x20
	NSString *mFunction;	// 40 = 0x28
	NSDictionary *mFunctionParameters;	// 44 = 0x2c
	double mFunctionTimeOffset;	// 48 = 0x30
	double mFunctionTimeFactor;	// 56 = 0x38
	float mInnerEaseInControl;	// 64 = 0x40
	float mInnerEaseOutControl;	// 68 = 0x44
}
@property(assign, nonatomic) double duration;	// G=0x365322b9; S=0x365318c5; @synthesize=mDuration
@property(copy, nonatomic) NSString *function;	// G=0x3653194d; S=0x36531a51; @synthesize=mFunction
@property(retain, nonatomic) NSDictionary *functionParameters;	// G=0x36531ba9; S=0x36531cad; @synthesize=mFunctionParameters
@property(assign, nonatomic) double functionTimeFactor;	// G=0x365322e9; S=0x36531e8d; @synthesize=mFunctionTimeFactor
@property(assign, nonatomic) double functionTimeOffset;	// G=0x365322d1; S=0x36531e05; @synthesize=mFunctionTimeOffset
@property(assign, nonatomic) float innerEaseInControl;	// G=0x36532301; S=0x36531f15; @synthesize=mInnerEaseInControl
@property(assign, nonatomic) float innerEaseOutControl;	// G=0x36532311; S=0x36531f9d; @synthesize=mInnerEaseOutControl
+ (id)keyframeWithFunction:(id)function atTime:(double)time offsetKind:(int)kind forDuration:(double)duration;	// 0x3653138d
- (id)init;	// 0x3653142d
- (id)initWithImprint:(id)imprint;	// 0x36531489
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x36532119
- (void)demolish;	// 0x36531661
- (id)description;	// 0x36532025
// declared property getter: - (double)duration;	// 0x365322b9
// declared property getter: - (id)function;	// 0x3653194d
// declared property getter: - (id)functionParameters;	// 0x36531ba9
// declared property getter: - (double)functionTimeFactor;	// 0x365322e9
// declared property getter: - (double)functionTimeOffset;	// 0x365322d1
- (id)imprint;	// 0x365316d9
// declared property getter: - (float)innerEaseInControl;	// 0x36532301
// declared property getter: - (float)innerEaseOutControl;	// 0x36532311
// declared property setter: - (void)setDuration:(double)duration;	// 0x365318c5
// declared property setter: - (void)setFunction:(id)function;	// 0x36531a51
// declared property setter: - (void)setFunctionParameters:(id)parameters;	// 0x36531cad
// declared property setter: - (void)setFunctionTimeFactor:(double)factor;	// 0x36531e8d
// declared property setter: - (void)setFunctionTimeOffset:(double)offset;	// 0x36531e05
// declared property setter: - (void)setInnerEaseInControl:(float)control;	// 0x36531f15
// declared property setter: - (void)setInnerEaseOutControl:(float)control;	// 0x36531f9d
@end

