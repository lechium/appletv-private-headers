/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ActorKit.framework/ActorKit
 */

#import <NSProxy.h> // Unknown library

@class NSInvocation, Protocol;

@interface NSInvocationUnifier : NSProxy {
	NSInvocation *_curry;	// 4 = 0x4
	Protocol *_protocol;	// 8 = 0x8
}
- (id)initWithInvocation:(id)invocation protocol:(id)protocol;	// 0x3132f1e5
- (void)dealloc;	// 0x3132f20d
- (void)forwardInvocation:(id)invocation;	// 0x3132f239
- (id)methodSignatureForSelector:(SEL)selector;	// 0x3132f3a5
@end
