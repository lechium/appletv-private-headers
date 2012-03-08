/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRSingleton.h"

@class NSConditionLock, NSInvocation, NSThread;

@interface ATVHIDThread : BRSingleton {
@private
	NSThread *_hidThread;	// 4 = 0x4
	CFRunLoopRef _runLoop;	// 8 = 0x8
	NSConditionLock *_startLock;	// 12 = 0xc
	CFRunLoopSourceRef _invocationRunLoopSource;	// 16 = 0x10
	NSInvocation *_pendingInvocation;	// 20 = 0x14
	NSConditionLock *_invocationLock;	// 24 = 0x18
}
+ (void)setSingleton:(id)singleton;	// 0x32f84bc9
+ (id)singleton;	// 0x32f84bb9
- (id)init;	// 0x32f84bd9
- (void)_hidThreadLoop;	// 0x32f84f09
- (void)_invocationHandler;	// 0x32f850d1
- (void)dealloc;	// 0x32f84cd5
- (BOOL)invokeOnHIDThread:(id)thread;	// 0x32f84d35
@end

