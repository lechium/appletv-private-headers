/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UIButton.h> // Unknown library


@interface MPButton : UIButton {
	UIEdgeInsets _hitRectInsets;	// 180 = 0xb4
	double _holdDelayInterval;	// 196 = 0xc4
	unsigned _holding : 1;	// 204 = 0xcc
}
@property(assign, nonatomic) UIEdgeInsets hitRectInsets;	// G=0x31d9e505; S=0x31d9e529; @synthesize=_hitRectInsets
@property(assign, nonatomic) double holdDelayInterval;	// G=0x31d9e545; S=0x31d9e55d; @synthesize=_holdDelayInterval
+ (id)easyTouchButtonWithType:(int)type;	// 0x31d9e14d
+ (float)easyTouchDefaultCharge;	// 0x31d9e141
+ (UIEdgeInsets)easyTouchDefaultHitRectInsets;	// 0x31d9e131
- (id)initWithFrame:(CGRect)frame;	// 0x31d9e0e1
- (void)_delayedTriggerHold;	// 0x31d9e3b5
- (void)_handleTouchCancel;	// 0x31d9e415
- (void)_handleTouchDown;	// 0x31d9e469
- (void)_handleTouchUp;	// 0x31d9e4b1
- (BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x31d9e209
- (void)cancelTrackingWithEvent:(id)event;	// 0x31d9e251
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x31d9e295
- (CGRect)hitRect;	// 0x31d9e2dd
// declared property getter: - (UIEdgeInsets)hitRectInsets;	// 0x31d9e505
// declared property getter: - (double)holdDelayInterval;	// 0x31d9e545
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x31d9e379
// declared property setter: - (void)setHitRectInsets:(UIEdgeInsets)insets;	// 0x31d9e529
// declared property setter: - (void)setHoldDelayInterval:(double)interval;	// 0x31d9e55d
@end
