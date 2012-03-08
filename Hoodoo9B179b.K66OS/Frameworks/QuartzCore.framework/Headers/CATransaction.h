/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <NSObject.h> // Unknown library
#import "QuartzCore-Structs.h"


@interface CATransaction : NSObject {
}
+ (void)activate;	// 0x34f65d61
+ (double)animationDuration;	// 0x34f65cf1
+ (id)animationTimingFunction;	// 0x34f65ca5
+ (void)begin;	// 0x34ea5771
+ (BOOL)beginWithoutBlocking;	// 0x34f65b25
+ (void)commit;	// 0x34ea5e0d
+ (id)completionBlock;	// 0x34f65c41
+ (unsigned)currentState;	// 0x34f65d79
+ (BOOL)disableActions;	// 0x34f65c65
+ (void)flush;	// 0x34ece8c1
+ (void)lock;	// 0x34e9fb05
+ (void)setAnimationDuration:(double)duration;	// 0x34f65cc9
+ (void)setAnimationTimingFunction:(id)function;	// 0x34f65c89
+ (void)setCompletionBlock:(id)block;	// 0x34f65bfd
+ (void)setDisableActions:(BOOL)actions;	// 0x34ea5ae1
+ (void)setValue:(id)value forKey:(id)key;	// 0x34ea5799
+ (void)synchronize;	// 0x34ed0be9
+ (void)unlock;	// 0x34e9fc2d
+ (id)valueForKey:(id)key;	// 0x34f65b69
- (void)_addTimer:(CFRunLoopTimerRef)timer;	// 0x34f65b01
@end

