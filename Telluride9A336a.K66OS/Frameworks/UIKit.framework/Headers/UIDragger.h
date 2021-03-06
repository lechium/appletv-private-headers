/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

@class UIView, UIImageView, NSArray;

@interface UIDragger : NSObject {
	/*function-pointer*/ void *_interpolator;	// 4 = 0x4
	UIView *_target;	// 8 = 0x8
	id _delegate;	// 12 = 0xc
	SEL _action;	// 16 = 0x10
	CGPoint _startLocation;	// 20 = 0x14
	CGPoint _stopLocation;	// 28 = 0x1c
	double _duration;	// 36 = 0x24
	BOOL _showFinger;	// 44 = 0x2c
	unsigned _port;	// 48 = 0x30
	NSArray *_modes;	// 52 = 0x34
	unsigned long long _startTimestamp;	// 56 = 0x38
	unsigned long long _stopTimestamp;	// 64 = 0x40
	unsigned long long _lastTimestamp;	// 72 = 0x48
	BOOL _waitingForSmoothScrolling;	// 80 = 0x50
	UIImageView *_fingerView;	// 84 = 0x54
}
- (id)init;	// 0x352b8351
- (void)_continueDrag:(id)drag;	// 0x352b8895
- (double)_delayUntilNextEvent;	// 0x352b8755
- (void)_postMouseEvent:(int)event timestamp:(unsigned long long)timestamp location:(CGPoint)location;	// 0x352b8641
- (void)_smoothScrollingDidEnd:(id)_smoothScrolling;	// 0x352b8859
- (void)_smoothScrollingWillStart:(id)_smoothScrolling;	// 0x352b8845
- (void)_stopDrag:(id)drag;	// 0x352b8869
- (void)dealloc;	// 0x352b8511
- (void)dragDidEnd;	// 0x352b87e9
- (void)run;	// 0x352b8a85
- (void)setAction:(SEL)action;	// 0x352b85e1
- (void)setDelegate:(id)delegate;	// 0x352b85d1
- (void)setDuration:(double)duration;	// 0x352b8619
- (void)setInterpolation:(/*function-pointer*/ void *)interpolation;	// 0x352b85b1
- (void)setStartLocation:(CGPoint)location;	// 0x352b85f1
- (void)setStopLocation:(CGPoint)location;	// 0x352b8605
- (void)setTarget:(id)target;	// 0x352b85c1
- (void)showFinger;	// 0x352b862d
@end

