/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "TCPServer.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ATVTCPControlReceiver : TCPServer {
@private
	Class connClass;	// 52 = 0x34
	NSMutableArray *_openConnections;	// 56 = 0x38
}
@property(assign) Class connectionClass;	// G=0x301b19c5; S=0x301b19d5; converted property
- (id)init;	// 0x301b1801
- (BOOL)_start;	// 0x301b1b85
// converted property getter: - (Class)connectionClass;	// 0x301b19c5
- (void)connectionClosed:(id)closed;	// 0x301b1a75
- (void)dealloc;	// 0x301b1979
- (void)handleNewConnectionFromAddress:(id)address inputStream:(id)stream outputStream:(id)stream3;	// 0x301b19e5
- (void)newBytesReceived:(id)received data:(id)data;	// 0x301b1b21
// converted property setter: - (void)setConnectionClass:(Class)aClass;	// 0x301b19d5
@end

