/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library
#import "StoreServices-Structs.h"


@interface SSXPCConnection : NSObject {
@private
	xpc_connection_s *_connection;	// 4 = 0x4
	dispatch_queue_s *_dispatchQueue;	// 8 = 0x8
	id _disconnectBlock;	// 12 = 0xc
	dispatch_queue_s *_replyQueue;	// 16 = 0x10
	id _messageBlock;	// 20 = 0x14
}
@property(copy) id disconnectBlock;	// G=0x30ece55d; S=0x30ece9c9; 
@property(copy) id messageBlock;	// G=0x30ece70d; S=0x30eceabd; 
- (id)init;	// 0x30ece3f9
- (id)initWithServiceName:(id)serviceName;	// 0x30ece40d
- (id)initWithXPCConnection:(xpc_connection_s *)xpcconnection;	// 0x30ece459
- (id)_initSSXPCConnection;	// 0x30ece3a9
- (void)_reloadEventHandler;	// 0x30ecec59
- (dispatch_queue_s *)copyReplyQueue;	// 0x30ece8a9
- (xpc_endpoint_s *)createXPCEndpoint;	// 0x30ece549
- (void)dealloc;	// 0x30ece4a5
// declared property getter: - (id)disconnectBlock;	// 0x30ece55d
// declared property getter: - (id)messageBlock;	// 0x30ece70d
- (void)sendMessage:(void *)message;	// 0x30ece98d
- (void)sendMessage:(void *)message withReply:(id)reply;	// 0x30ece9a1
// declared property setter: - (void)setDisconnectBlock:(id)block;	// 0x30ece9c9
// declared property setter: - (void)setMessageBlock:(id)block;	// 0x30eceabd
- (void)setReplyQueue:(dispatch_queue_s *)queue;	// 0x30ecebb1
@end

