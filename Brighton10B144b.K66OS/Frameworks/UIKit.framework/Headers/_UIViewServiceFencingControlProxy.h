/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "_UIQueueingProxy.h"
#import "XPCProxyTarget.h"

@class _UIViewServiceFencingController;

__attribute__((visibility("hidden")))
@interface _UIViewServiceFencingControlProxy : _UIQueueingProxy <XPCProxyTarget> {
	_UIViewServiceFencingController *_fencingController;	// 24 = 0x18
}
+ (id)proxyWithTarget:(id)target fencingController:(id)controller;	// 0x32f381e1
- (void)__beginFencingMessagesWithSendRight:(id)sendRight connectionCount:(unsigned)count;	// 0x32f382f5
- (void)__endFencingMessagesForSendRight:(id)sendRight;	// 0x32f38325
- (void)dealloc;	// 0x32f3821d
- (id)methodSignatureForSelector:(SEL)selector;	// 0x32f38269
- (id)proxy:(id)proxy detailedSignatureForSelector:(SEL)selector;	// 0x32f38349
@end
