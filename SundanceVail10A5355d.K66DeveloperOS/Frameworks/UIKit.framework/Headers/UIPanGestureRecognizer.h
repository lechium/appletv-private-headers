/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIGestureRecognizer.h"
#import "UIKit-Structs.h"

@class UIPanGestureVelocitySample, NSMutableArray;

@interface UIPanGestureRecognizer : UIGestureRecognizer {
	CGPoint _firstScreenLocation;	// 56 = 0x38
	CGPoint _lastScreenLocation;	// 64 = 0x40
	double _lastTouchTime;	// 72 = 0x48
	id _velocitySample;	// 80 = 0x50
	id _previousVelocitySample;	// 84 = 0x54
	NSMutableArray *_touches;	// 88 = 0x58
	unsigned _lastTouchCount;	// 92 = 0x5c
	unsigned _minimumNumberOfTouches;	// 96 = 0x60
	unsigned _maximumNumberOfTouches;	// 100 = 0x64
	float _hysteresis;	// 104 = 0x68
	CGPoint _lastUnadjustedScreenLocation;	// 108 = 0x6c
	unsigned _failsPastMaxTouches : 1;	// 116 = 0x74
	unsigned _canPanHorizontally : 1;	// 116 = 0x74
	unsigned _canPanVertically : 1;	// 116 = 0x74
	unsigned _ignoresStationaryTouches : 1;	// 116 = 0x74
	NSMutableArray *_movingTouches;	// 120 = 0x78
}
@property(readonly, assign, getter=_previousVelocitySample) UIPanGestureVelocitySample *_previousVelocitySample;	// G=0x33ae7aa1; @synthesize
@property(readonly, assign, getter=_velocitySample) UIPanGestureVelocitySample *_velocitySample;	// G=0x33ae79f5; @synthesize
@property(assign) BOOL failsPastMaxTouches;	// G=0x33ca3715; S=0x33a35125; converted property
@property(assign, nonatomic) unsigned maximumNumberOfTouches;	// G=0x33ca3d25; S=0x33a35395; @synthesize=_maximumNumberOfTouches
@property(assign, nonatomic) unsigned minimumNumberOfTouches;	// G=0x33ca3d15; S=0x33a738bd; @synthesize=_minimumNumberOfTouches
- (id)initWithCoder:(id)coder;	// 0x33ca35b5
- (id)initWithTarget:(id)target action:(SEL)action;	// 0x33a34fb1
- (CGPoint)_adjustScreenLocation:(CGPoint)location;	// 0x33b01f79
- (BOOL)_canPanHorizontally;	// 0x33b320d5
- (BOOL)_canPanVertically;	// 0x33b02e49
- (void)_centroidMovedTo:(CGPoint)to atTime:(double)time;	// 0x33b01d21
- (CADoublePoint)_convertPoint:(CGPoint)point fromScreenCoordinatesToView:(id)view;	// 0x33b02c29
- (CADoublePoint)_convertPoint:(CGPoint)point toScreenCoordinatesFromView:(id)view;	// 0x33b0305d
- (CADoublePoint)_convertVelocitySample:(id)sample fromScreenCoordinatesToView:(id)view;	// 0x33b04a01
- (void)_handleEndedTouches:(id)touches withFinalStateAdjustments:(id)finalStateAdjustments;	// 0x33ca3935
- (float)_hysteresis;	// 0x33b02db1
- (BOOL)_ignoresStationaryTouches;	// 0x33ca3751
- (int)_lastTouchCount;	// 0x33ca3729
- (UIOffset)_offsetInViewFromScreenLocation:(CGPoint)screenLocation toScreenLocation:(CGPoint)screenLocation2;	// 0x33b31ff9
// declared property getter: - (id)_previousVelocitySample;	// 0x33ae7aa1
- (void)_removeHysteresisFromTranslation;	// 0x33b02e5d
- (void)_resetGestureRecognizer;	// 0x33ae7881
- (void)_resetVelocitySamples;	// 0x33ae7909
- (void)_setCanPanHorizontally:(BOOL)horizontally;	// 0x33ca3765
- (void)_setCanPanVertically:(BOOL)vertically;	// 0x33ca377d
- (void)_setHysteresis:(float)hysteresis;	// 0x33a35231
- (void)_setIgnoresStationaryTouches:(BOOL)touches;	// 0x33ca3739
- (CGPoint)_shiftPanLocationToNewScreenLocation:(CGPoint)newScreenLocation lockingToAxis:(int)axis;	// 0x33b342d9
- (BOOL)_shouldTryToBeginWithEvent:(id)event;	// 0x33b02a19
- (void)_touchesListChangedFrom:(id)from to:(id)to;	// 0x33b572e9
- (BOOL)_updateMovingTouchesArraySavingOldArray:(id *)array;	// 0x33ca3795
// declared property getter: - (id)_velocitySample;	// 0x33ae79f5
- (BOOL)_willScrollX;	// 0x33b02a91
- (BOOL)_willScrollY;	// 0x33b02dc1
- (void)dealloc;	// 0x33a17a45
- (void)encodeWithCoder:(id)coder;	// 0x33ca3685
// converted property getter: - (BOOL)failsPastMaxTouches;	// 0x33ca3715
- (CGPoint)locationInView:(id)view;	// 0x33ca3b55
- (CGPoint)locationOfTouch:(unsigned)touch inView:(id)view;	// 0x33ca3be9
// declared property getter: - (unsigned)maximumNumberOfTouches;	// 0x33ca3d25
// declared property getter: - (unsigned)minimumNumberOfTouches;	// 0x33ca3d15
- (unsigned)numberOfTouches;	// 0x33b20919
// converted property setter: - (void)setFailsPastMaxTouches:(BOOL)touches;	// 0x33a35125
// declared property setter: - (void)setMaximumNumberOfTouches:(unsigned)touches;	// 0x33a35395
// declared property setter: - (void)setMinimumNumberOfTouches:(unsigned)touches;	// 0x33a738bd
- (void)setTranslation:(CGPoint)translation inView:(id)view;	// 0x33b02f81
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x33ae1125
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x33b208c1
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x33ae2bed
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x33b017e1
- (CGPoint)translationInView:(id)view;	// 0x33b02b71
- (CGPoint)velocityInView:(id)view;	// 0x33b048e9
@end

