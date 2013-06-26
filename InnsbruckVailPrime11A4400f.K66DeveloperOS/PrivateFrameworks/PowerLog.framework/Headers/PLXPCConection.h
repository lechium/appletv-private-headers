/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PowerLog.framework/PowerLog
 */

#import </libobjc.A.h>

@class NSMutableArray;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface PLXPCConection : NSObject {
	NSMutableArray *_xpcClientList;	// 4 = 0x4
	NSObject<OS_xpc_object> *_pConnection;	// 8 = 0x8
	NSObject<OS_dispatch_queue> *_pConnectionQueue;	// 12 = 0xc
}
+ (id)sharedInstance;	// 0x323f1381
- (id)init;	// 0x323f1435
- (void)PLXPCClientListLock;	// 0x323f1a2d
- (void)PLXPCClientListUnLock;	// 0x323f1a3d
- (void)PLXPCConnectionLock;	// 0x323f1a4d
- (void)PLXPCConnectionUnLock;	// 0x323f1a5d
- (void)PLXPCInvalidateConnection;	// 0x323f1535
- (void)PLXPCRegisterClient:(id)client;	// 0x323f1b41
- (BOOL)PLXPCSendMessage:(id)message;	// 0x323f1afd
- (id)PLXPCSendMessageWithReply:(id)reply;	// 0x323f1a6d
- (id)_PLCopyConnection;	// 0x323f1591
- (void)dealloc;	// 0x323f14e9
@end
