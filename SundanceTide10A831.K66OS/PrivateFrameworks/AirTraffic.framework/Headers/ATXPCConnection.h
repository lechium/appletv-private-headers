/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

#import "AirTraffic-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, NSMutableSet;

@interface ATXPCConnection : NSObject {
	xpc_connection_s *_conn;	// 4 = 0x4
	dispatch_queue_s *_eventQueue;	// 8 = 0x8
	id _lockdownHandler;	// 12 = 0xc
	id _messageHandler;	// 16 = 0x10
	id _disconnectHandler;	// 20 = 0x14
	NSMutableSet *_outstandingMessages;	// 24 = 0x18
	BOOL _assertionHeld;	// 28 = 0x1c
	id _context;	// 32 = 0x20
}
@property(assign, nonatomic) BOOL assertionHeld;	// G=0x32c242c9; S=0x32c242d9; @synthesize=_assertionHeld
@property(retain, nonatomic) id context;	// G=0x32c242e9; S=0x32c242f9; @synthesize=_context
@property(copy, nonatomic) id disconnectHandler;	// G=0x32c24291; S=0x32c242a5; @synthesize=_disconnectHandler
@property(readonly, assign) dispatch_queue_s *eventQueue;	// G=0x32c23531; converted property
@property(copy, nonatomic) id lockdownHandler;	// G=0x32c24221; S=0x32c24235; @synthesize=_lockdownHandler
@property(copy, nonatomic) id messageHandler;	// G=0x32c24259; S=0x32c2426d; @synthesize=_messageHandler
@property(readonly, assign) NSString *serviceName;	// G=0x32c234f1; 
- (id)initWithServiceName:(id)serviceName onQueue:(dispatch_queue_s *)queue;	// 0x32c23229
- (id)initWithXPCConnection:(xpc_connection_s *)xpcconnection;	// 0x32c232e1
- (void)_handleLockdownMessage:(void *)message;	// 0x32c23cb9
- (void)_handleXPCError:(void *)error;	// 0x32c23a2d
- (void)_handleXPCMessage:(void *)message;	// 0x32c23c4d
- (int)_outstandingMessages;	// 0x32c240a1
- (void)_registerMessage:(id)message;	// 0x32c23ee1
- (void)_removeMessage:(id)message;	// 0x32c23fe1
- (void)_sendMessage:(id)message handler:(id)handler;	// 0x32c23565
- (void)_setEventHandlerOnConnection:(xpc_connection_s *)connection;	// 0x32c23cd5
// declared property getter: - (BOOL)assertionHeld;	// 0x32c242c9
// declared property getter: - (id)context;	// 0x32c242e9
- (void)dealloc;	// 0x32c233ed
// declared property getter: - (id)disconnectHandler;	// 0x32c24291
// converted property getter: - (dispatch_queue_s *)eventQueue;	// 0x32c23531
// declared property getter: - (id)lockdownHandler;	// 0x32c24221
// declared property getter: - (id)messageHandler;	// 0x32c24259
- (void)sendMessage:(id)message;	// 0x32c23695
- (void)sendMessage:(id)message withReply:(id)reply;	// 0x32c236a9
// declared property getter: - (id)serviceName;	// 0x32c234f1
// declared property setter: - (void)setAssertionHeld:(BOOL)held;	// 0x32c242d9
// declared property setter: - (void)setContext:(id)context;	// 0x32c242f9
// declared property setter: - (void)setDisconnectHandler:(id)handler;	// 0x32c242a5
// declared property setter: - (void)setLockdownHandler:(id)handler;	// 0x32c24235
// declared property setter: - (void)setMessageHandler:(id)handler;	// 0x32c2426d
- (void)shutdown;	// 0x32c23b95
@end
