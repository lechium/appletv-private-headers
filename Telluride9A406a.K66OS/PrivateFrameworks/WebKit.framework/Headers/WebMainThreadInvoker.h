/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSProxy.h> // Unknown library


__attribute__((visibility("hidden")))
@interface WebMainThreadInvoker : NSProxy {
@private
	id target;	// 4 = 0x4
	id exception;	// 8 = 0x8
}
- (id)initWithTarget:(id)target;	// 0x303039dd
- (void)forwardInvocation:(id)invocation;	// 0x30303a81
- (void)handleException:(id)exception;	// 0x30303a11
- (id)methodSignatureForSelector:(SEL)selector;	// 0x303039ed
@end

