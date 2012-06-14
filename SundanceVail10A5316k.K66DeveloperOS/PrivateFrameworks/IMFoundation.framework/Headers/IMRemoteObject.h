/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <NSObject.h> // Unknown library

@class NSString;
@protocol OS_xpc_object;

@interface IMRemoteObject : NSObject {
	id _internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSObject<OS_xpc_object> *connection;	// G=0x34a8c501; 
@property(readonly, assign, nonatomic) BOOL isValid;	// G=0x34a8bf71; 
@property(assign, nonatomic) unsigned maxSendQueueSize;	// G=0x34a8c62d; S=0x34a8c64d; 
@property(assign, nonatomic) int pid;	// G=0x34a8c521; S=0x34a8c5a1; 
@property(readonly, assign, nonatomic) NSString *portName;	// G=0x34a8c671; 
+ (void)_registerIMRemoteObject:(id)object;	// 0x34a8b441
+ (id)_remoteObjects;	// 0x34a8b3c9
+ (void)_unregisterIMRemoteObject:(id)object;	// 0x34a8b495
+ (void)initialize;	// 0x34a8b4e9
- (id)initWithConnection:(id)connection protocol:(id)protocol;	// 0x34a8b8f5
- (id)initWithConnection:(id)connection protocol:(id)protocol alreadyConfigured:(BOOL)configured;	// 0x34a8b941
- (id)initWithPortName:(id)portName protocol:(id)protocol;	// 0x34a8b919
- (void)_cleanupMachBitsCanPost:(BOOL)post;	// 0x34a8b965
- (id)_initWithConnection:(id)connection portName:(id)name protocol:(id)protocol alreadyConfigured:(BOOL)configured;	// 0x34a8b5a1
- (void)_portDidBecomeInvalid;	// 0x34a8bec5
- (id)_queue;	// 0x34a8c8ad
- (void)_systemShutdown:(id)shutdown;	// 0x34a8c009
// declared property getter: - (id)connection;	// 0x34a8c501
- (void)dealloc;	// 0x34a8bcb1
- (id)description;	// 0x34a8c829
- (void)finalize;	// 0x34a8bab9
- (void)forwardInvocation:(id)invocation;	// 0x34a8c315
- (unsigned)forwardXPCObject:(id)object;	// 0x34a8c119
- (void)invalidate;	// 0x34a8c6ed
// declared property getter: - (BOOL)isValid;	// 0x34a8bf71
// declared property getter: - (unsigned)maxSendQueueSize;	// 0x34a8c62d
- (id)methodSignatureForSelector:(SEL)selector;	// 0x34a8c09d
// declared property getter: - (int)pid;	// 0x34a8c521
// declared property getter: - (id)portName;	// 0x34a8c671
// declared property setter: - (void)setMaxSendQueueSize:(unsigned)size;	// 0x34a8c64d
// declared property setter: - (void)setPid:(int)pid;	// 0x34a8c5a1
- (void)setPortName:(id)name;	// 0x34a8c691
@end

