/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIInternalEvent.h"

@class NSTimer;

__attribute__((visibility("hidden")))
@interface UIMotionEvent : UIInternalEvent {
@private
	id _motionAccelerometer;	// 16 = 0x10
	int _subtype;	// 20 = 0x14
	int _shakeState;	// 24 = 0x18
	int _stateMachineState;	// 28 = 0x1c
	double _shakeStartTime;	// 32 = 0x20
	double _lastMovementTime;	// 40 = 0x28
	double _highLevelTime;	// 48 = 0x30
	double _lowEndTimeout;	// 56 = 0x38
	NSTimer *_idleTimer;	// 64 = 0x40
	BOOL _sentMotionBegan;	// 68 = 0x44
	float _lowPassState[10];	// 72 = 0x48
	unsigned _lowPassStateIndex;	// 112 = 0x70
	unsigned _highPassStateIndex;	// 116 = 0x74
	float _highPassState[2];	// 120 = 0x78
	int notifyToken;	// 128 = 0x80
}
@property(assign, nonatomic) int shakeState;	// G=0x358a533d; S=0x358a534d; @synthesize=_shakeState
@property(readonly, assign) int subtype;	// G=0x358a4c15; converted property
- (void)_accelerometerDidDetectMovementWithTimestamp:(double)_accelerometer;	// 0x358a4cc9
- (float)_determineShakeLevelX:(float)x y:(float)y z:(float)z currentState:(int)state;	// 0x358a5195
- (void)_enablePeakDetectionIfNecessary;	// 0x356813c9
- (int)_feedStateMachine:(float)machine currentState:(int)state timestamp:(double)timestamp;	// 0x358a4f35
- (float)_highPass:(float)pass;	// 0x358a50a5
- (void)_idleTimerFired;	// 0x356e5bb9
- (id)_init;	// 0x356a3349
- (float)_lowPass:(float)pass;	// 0x358a5115
- (void)_resetLowPassState;	// 0x356e5cb1
- (void)_setSubtype:(int)subtype;	// 0x358a4c25
- (int)_shakeState;	// 0x358a532d
- (void)_willResume;	// 0x356b8a59
- (void)_willSuspend;	// 0x356e5b51
- (void)accelerometer:(id)accelerometer didAccelerateWithTimeStamp:(double)timeStamp x:(float)x y:(float)y z:(float)z eventType:(int)type;	// 0x358a4dcd
- (void)dealloc;	// 0x358a4b6d
- (id)description;	// 0x358a4c35
// declared property setter: - (void)setShakeState:(int)state;	// 0x358a534d
// declared property getter: - (int)shakeState;	// 0x358a533d
// converted property getter: - (int)subtype;	// 0x358a4c15
- (int)type;	// 0x358a4c11
@end

