/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "_UITargetedProxy.h"
#import "XPCProxyTarget.h"

@class NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _UIQueueRedirectingProxy : _UITargetedProxy <XPCProxyTarget> {
	NSObject<OS_dispatch_queue> *_targetQueue;	// 8 = 0x8
}
+ (id)proxyForwardingMessagesToObject:(id)object onQueue:(id)queue;	// 0x3102fe29
- (void)dealloc;	// 0x3102fe71
- (id)description;	// 0x31030045
- (void)forwardInvocation:(id)invocation;	// 0x3102feb1
- (BOOL)isBlock;	// 0x31030041
- (id)proxy:(id)proxy detailedSignatureForSelector:(SEL)selector;	// 0x310300dd
- (BOOL)respondsToSelector:(SEL)selector;	// 0x31030015
@end

