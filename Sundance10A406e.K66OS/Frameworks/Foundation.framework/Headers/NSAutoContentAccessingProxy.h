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
+ (id)proxyWithTarget:(id)target;	// 0x355975fd
- (void)dealloc;	// 0x35597705
- (void)finalize;	// 0x35597765
- (void)forwardInvocation:(id)invocation;	// 0x355976c9
- (id)forwardingTargetForSelector:(SEL)selector;	// 0x35597699
- (id)methodSignatureForSelector:(SEL)selector;	// 0x355976a9
@end

