/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import </libobjc.A.h>

@class _WebSafeForwarder;

@interface _WebSafeAsyncForwarder : NSObject {
	_WebSafeForwarder *_forwarder;	// 4 = 0x4
}
- (id)initWithForwarder:(id)forwarder;	// 0x33940cb9
- (void)forwardInvocation:(id)invocation;	// 0x33930555
- (id)methodSignatureForSelector:(SEL)selector;	// 0x33930531
- (BOOL)respondsToSelector:(SEL)selector;	// 0x339a1001
@end

