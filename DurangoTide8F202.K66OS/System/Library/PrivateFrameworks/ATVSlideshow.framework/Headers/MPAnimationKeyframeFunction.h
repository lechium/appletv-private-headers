/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MPAnimationKeyframe.h"
#import "ATVSlideshow-Structs.h"

@class NSDictionary, NSString;

@interface MPAnimationKeyframeFunction : MPAnimationKeyframe {
	double _duration;	// 20 = 0x14
	NSString *_function;	// 28 = 0x1c
	NSDictionary *_functionParameters;	// 32 = 0x20
	double _functionTimeOffset;	// 36 = 0x24
	double _functionTimeFactor;	// 44 = 0x2c
	double _innerEaseInControl;	// 52 = 0x34
	double _innerEaseOutControl;	// 60 = 0x3c
}
@property(assign) double duration;	// G=0x313ff95d; S=0x313ff975; converted property
@property(retain) NSString *function;	// G=0x314002b5; S=0x314002c5; converted property
@property(retain) NSDictionary *functionParameters;	// G=0x31400491; S=0x314004a1; converted property
@property(assign) double functionTimeFactor;	// G=0x313ffd21; S=0x313ffd39; converted property
@property(assign) double functionTimeOffset;	// G=0x313ffb45; S=0x313ffb5d; converted property
@property(assign) double innerEaseInControl;	// G=0x313ffefd; S=0x313fff15; converted property
@property(assign) double innerEaseOutControl;	// G=0x314000d9; S=0x314000f1; converted property
+ (id)keyframeFunctionWithFunction:(id)function atTime:(double)time offsetType:(int)type withDuration:(double)duration;	// 0x313ff185
+ (id)keyframeFunctionWithFunction:(id)function atTime:(double)time withDuration:(double)duration;	// 0x313ff129
- (id)initKeyframeFunctionWithFunction:(id)function atTime:(double)time offsetType:(int)type withDuration:(double)duration;	// 0x313ff1e1
- (id)initWithCoder:(id)coder;	// 0x313ff51d
- (id)copyWithZone:(NSZone *)zone;	// 0x313ff6cd
- (void)dealloc;	// 0x313ff815
- (id)description;	// 0x313ff88d
// converted property getter: - (double)duration;	// 0x313ff95d
- (void)encodeWithCoder:(id)coder;	// 0x313ff2e5
// converted property getter: - (id)function;	// 0x314002b5
// converted property getter: - (id)functionParameters;	// 0x31400491
// converted property getter: - (double)functionTimeFactor;	// 0x313ffd21
// converted property getter: - (double)functionTimeOffset;	// 0x313ffb45
// converted property getter: - (double)innerEaseInControl;	// 0x313ffefd
// converted property getter: - (double)innerEaseOutControl;	// 0x314000d9
- (id)keyframe;	// 0x3140077d
// converted property setter: - (void)setDuration:(double)duration;	// 0x313ff975
// converted property setter: - (void)setFunction:(id)function;	// 0x314002c5
// converted property setter: - (void)setFunctionParameters:(id)parameters;	// 0x314004a1
// converted property setter: - (void)setFunctionTimeFactor:(double)factor;	// 0x313ffd39
// converted property setter: - (void)setFunctionTimeOffset:(double)offset;	// 0x313ffb5d
// converted property setter: - (void)setInnerEaseInControl:(double)control;	// 0x313fff15
// converted property setter: - (void)setInnerEaseOutControl:(double)control;	// 0x314000f1
@end

