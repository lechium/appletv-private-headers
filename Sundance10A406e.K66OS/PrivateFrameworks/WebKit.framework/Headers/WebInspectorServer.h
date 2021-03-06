/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import "WebInspectorXPCWrapperDelegate.h"
#import <NSObject.h> // Unknown library
#import "WebInspectorClientRegistryDelegate.h"

@class WebInspectorServerWebViewConnectionController, WebInspectorXPCWrapper;

@interface WebInspectorServer : NSObject <WebInspectorXPCWrapperDelegate, WebInspectorClientRegistryDelegate> {
	BOOL _isEnabled;	// 4 = 0x4
	int _notifyToken;	// 8 = 0x8
	WebInspectorXPCWrapper *_xpcConnection;	// 12 = 0xc
	WebInspectorServerWebViewConnectionController *_connectionController;	// 16 = 0x10
}
@property(readonly, assign) BOOL isEnabled;	// G=0x308386e5; converted property
@property(readonly, retain) WebInspectorXPCWrapper *xpcConnection;	// G=0x308386f5; converted property
- (id)init;	// 0x307def1d
- (void)dealloc;	// 0x30838595
- (void)didRegisterClient:(WebInspectorClient *)client;	// 0x307df6f9
- (void)didUnregisterClient:(WebInspectorClient *)client;	// 0x3083887d
// converted property getter: - (BOOL)isEnabled;	// 0x308386e5
- (void)pushListing;	// 0x307df709
- (void)setupXPCConnectionIfNeeded;	// 0x30838705
- (void)start;	// 0x307df0d1
- (void)stop;	// 0x30838649
// converted property getter: - (id)xpcConnection;	// 0x308386f5
- (void)xpcConnection:(id)connection receivedMessage:(id)message userInfo:(id)info;	// 0x308387b1
- (void)xpcConnectionFailed:(id)failed;	// 0x30838819
@end

