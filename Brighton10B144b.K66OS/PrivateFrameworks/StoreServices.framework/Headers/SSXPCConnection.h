/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library

@protocol OS_xpc_object, OS_dispatch_queue;

@interface SSXPCConnection : NSObject {
	NSObject<OS_xpc_object> *_connection;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
	id _disconnectBlock;	// 12 = 0xc
	NSObject<OS_dispatch_queue> *_replyQueue;	// 16 = 0x10
	id _messageBlock;	// 20 = 0x14
}
@property(copy) id disconnectBlock;	// G=0x354e6bed; S=0x354e7189; 
@property(copy) id messageBlock;	// G=0x354e6db1; S=0x354e727d; 
- (id)init;	// 0x354e6a8d
- (id)initWithServiceName:(id)serviceName;	// 0x354e6aa1
- (id)initWithXPCConnection:(id)xpcconnection;	// 0x354e6ae9
- (id)_initSSXPCConnection;	// 0x354e6a3d
- (void)_reloadEventHandler;	// 0x354e7449
- (id)copyReplyQueue;	// 0x354e6f61
- (id)createXPCEndpoint;	// 0x354e6bd9
- (void)dealloc;	// 0x354e6b35
// declared property getter: - (id)disconnectBlock;	// 0x354e6bed
// declared property getter: - (id)messageBlock;	// 0x354e6db1
- (void)sendMessage:(id)message;	// 0x354e7071
- (void)sendMessage:(id)message withReply:(id)reply;	// 0x354e7085
- (void)sendSynchronousMessage:(id)message withReply:(id)reply;	// 0x354e70ad
// declared property setter: - (void)setDisconnectBlock:(id)block;	// 0x354e7189
// declared property setter: - (void)setMessageBlock:(id)block;	// 0x354e727d
- (void)setReplyQueue:(id)queue;	// 0x354e7371
@end

