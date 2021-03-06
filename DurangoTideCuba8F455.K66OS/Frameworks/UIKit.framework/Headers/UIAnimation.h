/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library


@interface UIAnimation : NSObject {
	id _target;	// 4 = 0x4
	SEL _action;	// 8 = 0x8
	id _delegate;	// 12 = 0xc
	struct {
		unsigned curve : 4;
		unsigned tvOutput : 1;
		unsigned reserved : 27;
	} _animationFlags;	// 16 = 0x10
@private
	double _startTime;	// 20 = 0x14
	double _duration;	// 28 = 0x1c
	int _state;	// 36 = 0x24
}
@property(assign) SEL action;	// G=0x30148161; S=0x301476d1; converted property
@property(assign) id delegate;	// G=0x301479dd; S=0x301476c1; converted property
@property(readonly, assign) int state;	// G=0x3014781d; converted property
@property(readonly, retain) id target;	// G=0x30147ba1; converted property
- (id)initWithTarget:(id)target;	// 0x301475bd
// converted property getter: - (SEL)action;	// 0x30148161
- (void)dealloc;	// 0x30148271
// converted property getter: - (id)delegate;	// 0x301479dd
- (float)fractionForTime:(double)time;	// 0x30147d09
- (void)markStart:(double)start;	// 0x301479b9
- (void)markStop;	// 0x30148151
- (float)progressForFraction:(float)fraction;	// 0x30147db5
// converted property setter: - (void)setAction:(SEL)action;	// 0x301476d1
- (void)setAnimationCurve:(int)curve;	// 0x301c356d
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x301476c1
- (void)setDuration:(double)duration;	// 0x3014782d
- (void)setProgress:(float)progress;	// 0x301f7f91
// converted property getter: - (int)state;	// 0x3014781d
- (void)stopAnimation;	// 0x301f82a1
// converted property getter: - (id)target;	// 0x30147ba1
- (BOOL)tvOutput;	// 0x301479a5
@end

