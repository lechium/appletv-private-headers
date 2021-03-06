/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray;
@protocol _UIQueueingServiceWebViewControllerProxyDelegate;

__attribute__((visibility("hidden")))
@interface _UIQueueingServiceWebViewControllerProxy : NSObject {
	NSMutableArray *_queuedInvocations;	// 4 = 0x4
	id _serviceViewControllerProxy;	// 8 = 0x8
	id<_UIQueueingServiceWebViewControllerProxyDelegate> _delegate;	// 12 = 0xc
}
@property(assign, nonatomic) id<_UIQueueingServiceWebViewControllerProxyDelegate> delegate;	// G=0x330bc4cd; S=0x330bc4dd; @synthesize=_delegate
@property(retain, nonatomic) id serviceViewControllerProxy;	// G=0x330bc4bd; S=0x330bc279; @synthesize=_serviceViewControllerProxy
- (id)init;	// 0x330bc1ad
- (void)dealloc;	// 0x330bc215
// declared property getter: - (id)delegate;	// 0x330bc4cd
- (void)forwardInvocation:(id)invocation;	// 0x330bc435
- (id)methodSignatureForSelector:(SEL)selector;	// 0x330bc3b5
// declared property getter: - (id)serviceViewControllerProxy;	// 0x330bc4bd
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x330bc4dd
// declared property setter: - (void)setServiceViewControllerProxy:(id)proxy;	// 0x330bc279
@end

