/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, _UIViewServiceInterface, NSError, XPCMachSendRight, _UIAsyncInvocation, _UIViewServiceXPCProxy, NSArray;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _UIRemoteViewControllerConnectionRequest : NSObject {
	id _handler;	// 4 = 0x4
	NSString *_viewServiceBundleIdentifier;	// 8 = 0x8
	NSString *_viewControllerClassName;	// 12 = 0xc
	BOOL _propagateAppearanceCustomizations;	// 16 = 0x10
	_UIAsyncInvocation *_cancelInvocationForCurrentOperation;	// 20 = 0x14
	struct {
		_UIViewServiceInterface *interface;
		_UIViewServiceXPCProxy *viewControllerOperatorProxy;
		_UIViewServiceXPCProxy *serviceViewControllerProxy;
		_UIViewServiceXPCProxy *textEffectsOperatorProxy;
		unsigned hostedWindowContextID;
		NSArray *serviceViewControllerSupportedInterfaceOrientations;
		XPCMachSendRight *serviceAccessibilityServerPortWrapper;
		CGAffineTransform serviceRootLayerTransform;
		CGRect serviceRootLayerFrame;
		CGAffineTransform textEffectsRootLayerTransform;
		CGRect textEffectsRootLayerFrame;
		unsigned textEffectsWindowContextID;
		unsigned textEffectsWindowAboveStatusBarContextID;
	} _connectionInfo;	// 24 = 0x18
	NSObject<OS_dispatch_queue> *_queue;	// 140 = 0x8c
	BOOL _isCancelledOrComplete;	// 144 = 0x90
	NSError *_error;	// 148 = 0x94
	_UIAsyncInvocation *_requestCancellationInvocation;	// 152 = 0x98
}
+ (id)requestViewController:(id)controller fromServiceWithBundleIdentifier:(id)bundleIdentifier propagateAppearanceCustomizations:(BOOL)customizations connectionHandler:(id)handler;	// 0x31fc77d5
- (void)_cancelUnconditionallyThen:(id)then;	// 0x31fc8115
- (id)_cancelWithError:(id)error;	// 0x31fc9f09
- (void)_connectToServiceViewController;	// 0x31fc99a9
- (void)_connectToTextEffectsOperator;	// 0x31fc919d
- (void)_connectToViewControllerOperator;	// 0x31fc87f5
- (void)_connectToViewService;	// 0x31fc84e9
- (void)_didFinishEstablishingConnection;	// 0x31fc9d99
- (void)_sendServiceTextEffectsRequest;	// 0x31fc95b1
- (void)_sendServiceViewControllerRequest;	// 0x31fc8c09
- (void)dealloc;	// 0x31fc7ff9
@end
