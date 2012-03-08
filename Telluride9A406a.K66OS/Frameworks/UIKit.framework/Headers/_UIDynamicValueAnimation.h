/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "_UIDynamicAnimation.h"
#import "UIKit-Structs.h"

@class NSMutableArray, NSArray;

@interface _UIDynamicValueAnimation : _UIDynamicAnimation {
@private
	id _applier;	// 16 = 0x10
	id _viewApplier;	// 20 = 0x14
	double _value;	// 24 = 0x18
	double _velocity;	// 32 = 0x20
	double _unitSize;	// 40 = 0x28
	double _friction;	// 48 = 0x30
	double _decelerationFactor;	// 56 = 0x38
	double _decelerationLnFactor;	// 64 = 0x40
	double _multiplier;	// 72 = 0x48
	NSMutableArray *_activeValues;	// 80 = 0x50
	void *_stepFunction;	// 84 = 0x54
}
@property(copy, nonatomic) NSArray *activeValues;	// G=0x35a1e989; S=0x35a1dd99; @synthesize=_activeValues
@property(assign, nonatomic) double friction;	// G=0x35a1e971; S=0x35a1e585; @synthesize=_friction
@property(assign, nonatomic) double value;	// G=0x35a1e945; S=0x35a1e95d; @synthesize=_value
@property(assign, nonatomic) double velocity;	// G=0x35a1e6c9; S=0x35a1e931; @synthesize=_velocity
- (id)init;	// 0x35a1d355
- (id)initWithValue:(double)value velocity:(double)velocity unitSize:(double)size;	// 0x35a1d14d
- (BOOL)_animateForInterval:(double)interval;	// 0x35a1df39
- (void)_appendSubclassDescription:(id)description atLevel:(int)level;	// 0x35a1e719
- (double)_multiplier;	// 0x35a1e69d
- (void)_setDecelerationFactor:(double)factor;	// 0x35a1e611
- (void)_setMultiplier:(double)multiplier;	// 0x35a1e6b5
- (void)_setVelocity:(double)velocity;	// 0x35a1e6f1
- (void)_stopAnimation;	// 0x35a1d4b1
- (void)_updateStepFunction;	// 0x35a1d529
// declared property getter: - (id)activeValues;	// 0x35a1e989
- (void)addActiveValue:(id)value;	// 0x35a1dc81
- (void)dealloc;	// 0x35a1d399
// declared property getter: - (double)friction;	// 0x35a1e971
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x35a1e575
- (void)removeActiveValue:(id)value;	// 0x35a1dd21
- (void)runWithCompletion:(id)completion;	// 0x35a1e4fd
- (void)runWithValueApplier:(id)valueApplier completion:(id)completion;	// 0x35a1e4d9
- (void)runWithValueApplier:(id)valueApplier completion:(id)completion forScreen:(id)screen runLoopMode:(id)mode;	// 0x35a1e3dd
// declared property setter: - (void)setActiveValues:(id)values;	// 0x35a1dd99
// declared property setter: - (void)setFriction:(double)friction;	// 0x35a1e585
// declared property setter: - (void)setValue:(double)value;	// 0x35a1e95d
// declared property setter: - (void)setVelocity:(double)velocity;	// 0x35a1e931
// declared property getter: - (double)value;	// 0x35a1e945
// declared property getter: - (double)velocity;	// 0x35a1e6c9
@end

