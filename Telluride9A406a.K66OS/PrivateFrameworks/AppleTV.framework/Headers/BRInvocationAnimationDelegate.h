/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSInvocation;

@interface BRInvocationAnimationDelegate : NSObject {
@private
	NSInvocation *_startInvocation;	// 4 = 0x4
	NSInvocation *_endInvocation;	// 8 = 0x8
	id _endTarget;	// 12 = 0xc
}
@property(readonly, retain) NSInvocation *endInvocation;	// G=0x33142d79; converted property
@property(readonly, retain) NSInvocation *startInvocation;	// G=0x33142d69; converted property
+ (id)delegateWithEndInvocation:(id)endInvocation;	// 0x33142ae1
+ (id)delegateWithStartInvocation:(id)startInvocation;	// 0x33142b31
+ (id)delegateWithStartInvocation:(id)startInvocation endInvocation:(id)invocation;	// 0x33142b81
+ (id)delegateWithTarget:(id)target endSelector:(SEL)selector;	// 0x33142bd1
+ (id)delegateWithTarget:(id)target startSelector:(SEL)selector;	// 0x33142c05
+ (id)delegateWithTarget:(id)target startSelector:(SEL)selector endSelector:(SEL)selector3;	// 0x33142c3d
- (id)initWithStartInvocation:(id)startInvocation endInvocation:(id)invocation;	// 0x331429cd
- (void)animationDidStart:(id)animation;	// 0x33142d89
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x33142e35
- (void)dealloc;	// 0x33142a6d
// converted property getter: - (id)endInvocation;	// 0x33142d79
// converted property getter: - (id)startInvocation;	// 0x33142d69
@end

