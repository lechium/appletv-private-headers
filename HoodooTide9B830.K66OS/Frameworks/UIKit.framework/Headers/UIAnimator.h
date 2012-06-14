/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, CADisplayLink;

@interface UIAnimator : NSObject {
	NSMutableArray *_animations;	// 4 = 0x4
	double _lastUpdateTime;	// 8 = 0x8
	CADisplayLink *_lcdHeartbeat;	// 16 = 0x10
	CADisplayLink *_tvHeartbeat;	// 20 = 0x14
	int _lcdCount;	// 24 = 0x18
	int _tvCount;	// 28 = 0x1c
}
+ (void)disableAnimation;	// 0x300acb35
+ (void)enableAnimation;	// 0x300b47ed
+ (id)sharedAnimator;	// 0x300c5099
- (void)_LCDHeartbeatCallback:(id)callback;	// 0x3016adcd
- (void)_TVHeartbeatCallback:(id)callback;	// 0x301fcead
- (void)_addAnimation:(id)animation withDuration:(double)duration start:(BOOL)start startTime:(double)time;	// 0x3016a9d1
- (void)_advance:(BOOL)advance withTimestamp:(double)timestamp;	// 0x3016ae05
- (void)_startAnimation:(id)animation withStartTime:(double)startTime;	// 0x3016aaf1
- (void)addAnimation:(id)animation withDuration:(double)duration start:(BOOL)start;	// 0x3016a971
- (void)addAnimations:(id)animations withDuration:(double)duration start:(BOOL)start;	// 0x301fcce1
- (void)dealloc;	// 0x301fcbe1
- (float)fractionForAnimation:(id)animation;	// 0x301fce89
- (void)removeAnimationsForTarget:(id)target;	// 0x300c5151
- (void)removeAnimationsForTarget:(id)target ofKind:(Class)kind;	// 0x3013b639
- (void)startAnimation:(id)animation;	// 0x301fce5d
- (void)stopAnimation:(id)animation;	// 0x3016b301
@end
