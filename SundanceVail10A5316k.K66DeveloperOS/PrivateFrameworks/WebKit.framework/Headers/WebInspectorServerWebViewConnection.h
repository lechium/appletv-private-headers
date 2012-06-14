/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library

@class WebInspectorRemoteChannel, WebInspectorServerWebViewConnectionController, NSString, NSNumber;

__attribute__((visibility("hidden")))
@interface WebInspectorServerWebViewConnection : NSObject {
@private
	WebInspectorRemoteChannel *_channel;	// 4 = 0x4
	WebInspectorServerWebViewConnectionController *_controller;	// 8 = 0x8
	NSString *_connectionIdentifier;	// 12 = 0xc
	NSString *_destination;	// 16 = 0x10
	NSNumber *_identifier;	// 20 = 0x14
}
@property(readonly, retain) NSString *connectionIdentifier;	// G=0x35066a09; converted property
@property(readonly, retain) NSNumber *identifier;	// G=0x35066a41; converted property
- (id)initWithController:(id)controller connectionIdentifier:(id)identifier destination:(id)destination identifier:(id)identifier4;	// 0x35066891
- (void)clearChannel;	// 0x35066a79
// converted property getter: - (id)connectionIdentifier;	// 0x35066a09
- (void)dealloc;	// 0x35066991
// converted property getter: - (id)identifier;	// 0x35066a41
- (void)receivedData:(id)data;	// 0x35066b81
- (void)receivedDidClose:(id)received;	// 0x35066c05
- (void)sendMessageToBackend:(id)backend;	// 0x35066b61
- (void)sendMessageToFrontend:(id)frontend;	// 0x35066aa9
- (BOOL)setupChannel;	// 0x35066935
@end
