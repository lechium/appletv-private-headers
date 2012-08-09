/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <NSObject.h> // Unknown library

@class CAStateController, CALayer, NSString, NSMutableArray, CAStateTransition;

__attribute__((visibility("hidden")))
@interface CAStateControllerTransition : NSObject {
	CAStateController *_controller;	// 4 = 0x4
	CALayer *_layer;	// 8 = 0x8
	CAStateTransition *_transition;	// 12 = 0xc
	double _beginTime;	// 16 = 0x10
	double _duration;	// 24 = 0x18
	float _speed;	// 32 = 0x20
	NSString *_masterKey;	// 36 = 0x24
	NSMutableArray *_animations;	// 40 = 0x28
}
@property(readonly, assign, nonatomic) double beginTime;	// G=0x33ce14e1; @synthesize=_beginTime
@property(readonly, assign, nonatomic) double duration;	// G=0x33ce14f9; @synthesize=_duration
@property(readonly, assign, nonatomic) CALayer *layer;	// G=0x33ce14c1; @synthesize=_layer
@property(readonly, assign, nonatomic) float speed;	// G=0x33ce1511; @synthesize=_speed
@property(readonly, assign, nonatomic) CAStateTransition *transition;	// G=0x33ce14d1; @synthesize=_transition
- (id)init;	// 0x33ce10cd
- (void)addAnimation:(id)animation;	// 0x33ce1115
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x33ce1369
// declared property getter: - (double)beginTime;	// 0x33ce14e1
- (void)dealloc;	// 0x33ce1439
// declared property getter: - (double)duration;	// 0x33ce14f9
- (void)invalidate;	// 0x33ce11cd
// declared property getter: - (id)layer;	// 0x33ce14c1
- (void)removeAnimationFromLayer:(id)layer forKey:(id)key;	// 0x33ce1181
// declared property getter: - (float)speed;	// 0x33ce1511
// declared property getter: - (id)transition;	// 0x33ce14d1
@end
