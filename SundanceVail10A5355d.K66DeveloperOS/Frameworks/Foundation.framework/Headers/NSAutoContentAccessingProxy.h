/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSProxy.h"


__attribute__((visibility("hidden")))
@interface NSAutoContentAccessingProxy : NSProxy {
	id _target;	// 4 = 0x4
}
+ (id)proxyWithTarget:(id)target;	// 0x346cbee1
- (void)dealloc;	// 0x346cbfe9
- (void)finalize;	// 0x346cc049
- (void)forwardInvocation:(id)invocation;	// 0x346cbfad
- (id)forwardingTargetForSelector:(SEL)selector;	// 0x346cbf7d
- (id)methodSignatureForSelector:(SEL)selector;	// 0x346cbf8d
@end
