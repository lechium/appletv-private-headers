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
+ (id)proxyForwardingMessagesToObject:(id)object onQueue:(id)queue;	// 0x2f8e7ded
- (void)dealloc;	// 0x2f8e7e35
- (id)description;	// 0x2f8e8005
- (void)forwardInvocation:(id)invocation;	// 0x2f8e7e75
- (id)proxy:(id)proxy detailedSignatureForSelector:(SEL)selector;	// 0x2f8e80a1
- (BOOL)respondsToSelector:(SEL)selector;	// 0x2f8e7fd9
@end
