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
@property(assign, nonatomic) UIEdgeInsets hitRectInsets;	// G=0x3485cd15; S=0x3485cd39; @synthesize=_hitRectInsets
@property(assign, nonatomic) double holdDelayInterval;	// G=0x3485cd55; S=0x3485cd6d; @synthesize=_holdDelayInterval
+ (id)easyTouchButtonWithType:(int)type;	// 0x3485c95d
+ (float)easyTouchDefaultCharge;	// 0x3485c951
+ (UIEdgeInsets)easyTouchDefaultHitRectInsets;	// 0x3485c941
- (id)initWithFrame:(CGRect)frame;	// 0x3485c8f1
- (void)_delayedTriggerHold;	// 0x3485cbc5
- (void)_handleTouchCancel;	// 0x3485cc25
- (void)_handleTouchDown;	// 0x3485cc79
- (void)_handleTouchUp;	// 0x3485ccc1
- (BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x3485ca19
- (void)cancelTrackingWithEvent:(id)event;	// 0x3485ca61
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x3485caa5
- (CGRect)hitRect;	// 0x3485caed
// declared property getter: - (UIEdgeInsets)hitRectInsets;	// 0x3485cd15
// declared property getter: - (double)holdDelayInterval;	// 0x3485cd55
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x3485cb89
// declared property setter: - (void)setHitRectInsets:(UIEdgeInsets)insets;	// 0x3485cd39
// declared property setter: - (void)setHoldDelayInterval:(double)interval;	// 0x3485cd6d
@end

