/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebInspectorServerConnection.h"

@class NSString, WebInspectorServerXPC;

__attribute__((visibility("hidden")))
@interface WebInspectorServerConnectionXPC : WebInspectorServerConnection {
@private
	WebInspectorServerXPC *_server;	// 8 = 0x8
	NSString *_destination;	// 12 = 0xc
	NSString *_identifier;	// 16 = 0x10
}
@property(readonly, retain) NSString *identifier;	// G=0x30329bcd; converted property
- (id)initWithServer:(id)server destination:(id)destination identifier:(id)identifier;	// 0x30329975
- (void)clearChannel;	// 0x30329b7d
- (void)dealloc;	// 0x30329c05
// converted property getter: - (id)identifier;	// 0x30329bcd
- (void)receivedData:(id)data;	// 0x30329a4d
- (void)receivedDidClose:(id)received;	// 0x30329a01
- (void)sendWebSocketMessage:(id)message;	// 0x30329ad1
- (BOOL)setupChannel;	// 0x30329c65
@end

