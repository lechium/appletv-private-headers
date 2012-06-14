/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library

@class WebInspectorServer, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface WebInspectorServerWebViewConnectionController : NSObject {
@private
	WebInspectorServer *_server;	// 4 = 0x4
	NSMutableDictionary *_openConnections;	// 8 = 0x8
	BOOL _hasScheduledPush;	// 12 = 0xc
}
- (id)initWithServer:(id)server;	// 0x350930c5
- (id)_listingForWebView:(id)webView pageId:(id)anId registry:(id)registry;	// 0x350932a9
- (void)_pushListing:(id)listing;	// 0x35093475
- (void)_receivedConnectionDied:(id)died;	// 0x35093b61
- (void)_receivedData:(id)data;	// 0x35093951
- (void)_receivedDidClose:(id)_received;	// 0x350939ad
- (void)_receivedGetListing:(id)listing;	// 0x35093a85
- (void)_receivedIndicate:(id)indicate;	// 0x35093ac1
- (void)_receivedSetup:(id)setup;	// 0x35093811
- (void)closeAllConnections;	// 0x35093155
- (void)connectionClosing:(id)closing;	// 0x35093e75
- (void)dealloc;	// 0x35093109
- (void)pushListing;	// 0x350937a5
- (void)pushListing:(id)listing;	// 0x3509367d
- (void)receivedMessage:(id)message userInfo:(id)info;	// 0x35093ccd
- (void)sendMessageToFrontend:(id)frontend userInfo:(id)info;	// 0x35093f3d
@end

