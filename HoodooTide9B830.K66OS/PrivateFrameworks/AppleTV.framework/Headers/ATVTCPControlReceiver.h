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
@property(assign) Class connectionClass;	// G=0x328f3cf9; S=0x328f3d09; converted property
- (id)init;	// 0x328f3b35
- (BOOL)_start;	// 0x328f3eb9
// converted property getter: - (Class)connectionClass;	// 0x328f3cf9
- (void)connectionClosed:(id)closed;	// 0x328f3da9
- (void)dealloc;	// 0x328f3cad
- (void)handleNewConnectionFromAddress:(id)address inputStream:(id)stream outputStream:(id)stream3;	// 0x328f3d19
- (void)newBytesReceived:(id)received data:(id)data;	// 0x328f3e55
// converted property setter: - (void)setConnectionClass:(Class)aClass;	// 0x328f3d09
@end

