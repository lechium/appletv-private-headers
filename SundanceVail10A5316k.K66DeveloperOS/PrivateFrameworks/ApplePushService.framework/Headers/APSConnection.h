/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
 */

#import "ApplePushService-Structs.h"
#import <NSObject.h> // Unknown library

@class NSArray, NSMutableDictionary, CUTWeakReference, NSString, NSData;
@protocol OS_dispatch_source, OS_xpc_object, APSConnectionDelegate, OS_dispatch_queue;

@interface APSConnection : NSObject {
	CUTWeakReference *_delegateReference;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_ivarQueue;	// 8 = 0x8
	NSString *_environmentName;	// 12 = 0xc
	NSData *_publicToken;	// 16 = 0x10
	unsigned _messageSize;	// 20 = 0x14
	NSString *_connectionPortName;	// 24 = 0x18
	unsigned _connectionPort;	// 28 = 0x1c
	unsigned _connectionServerPort;	// 32 = 0x20
	CFMachPortRef _connectionSeverCFMachPort;	// 36 = 0x24
	NSArray *_enabledTopics;	// 40 = 0x28
	NSArray *_ignoredTopics;	// 44 = 0x2c
	NSMutableDictionary *_subtopics;	// 48 = 0x30
	BOOL _enableCriticalReliability;	// 52 = 0x34
	BOOL _enableStatusNotifications;	// 53 = 0x35
	BOOL _isConnected;	// 54 = 0x36
	NSMutableDictionary *_idsToOutgoingMessages;	// 56 = 0x38
	unsigned _nextOutgoingMessageID;	// 60 = 0x3c
	NSObject<OS_dispatch_queue> *_machQueue;	// 64 = 0x40
	NSObject<OS_dispatch_source> *_mach_source;	// 68 = 0x44
	NSObject<OS_xpc_object> *_connection;	// 72 = 0x48
	NSObject<OS_dispatch_queue> *_delegateQueue;	// 76 = 0x4c
}
@property(assign, nonatomic) id<APSConnectionDelegate> delegate;	// G=0x31ba1e95; S=0x31ba1f99; 
@property(readonly, assign, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;	// G=0x31ba6cf9; @synthesize=_delegateQueue
@property(readonly, assign) BOOL isConnected;	// G=0x31ba445d; converted property
@property(readonly, assign, nonatomic) NSObject<OS_dispatch_queue> *ivarQueue;	// G=0x31ba6d09; @synthesize=_ivarQueue
@property(assign, nonatomic) unsigned messageSize;	// G=0x31ba41d9; S=0x31ba40fd; 
@property(readonly, assign, nonatomic) NSData *publicToken;	// G=0x31ba3ed1; 
+ (void)_blockingXPCCallWithArgumentBlock:(id)argumentBlock resultHandler:(id)handler;	// 0x31ba581d
+ (void)_setTokenState;	// 0x31ba61dd
+ (id)connectionsDebuggingState;	// 0x31ba6041
+ (SecIdentity *)copyIdentity;	// 0x31ba42bd
+ (double)keepAliveIntervalForEnvironmentName:(id)environmentName;	// 0x31ba5e19
+ (void)notifySafeToSendFilter;	// 0x31ba63e1
+ (void)requestCourierConnection;	// 0x31ba5c8d
- (id)initWithEnvironmentName:(id)environmentName;	// 0x31ba16c1
- (id)initWithEnvironmentName:(id)environmentName namedDelegatePort:(id)port;	// 0x31ba16e1
- (id)initWithEnvironmentName:(id)environmentName namedDelegatePort:(id)port queue:(id)queue;	// 0x31ba1725
- (id)initWithEnvironmentName:(id)environmentName queue:(id)queue;	// 0x31ba1705
- (void)_addEnableCriticalReliabilityToXPCMessage:(id)xpcmessage;	// 0x31ba4aa5
- (void)_addEnableStatusNotificationsToXPCMessage:(id)xpcmessage;	// 0x31ba4acd
- (void)_callDelegateOnIvarQueueWithBlock:(id)block;	// 0x31ba2125
- (void)_cancelConnection;	// 0x31ba32a9
- (void)_cancelConnectionOnIvarQueue;	// 0x31ba3221
- (void)_connectIfNecessary;	// 0x31ba31a5
- (void)_connectIfNecessaryOnIvarQueue;	// 0x31ba21f9
- (void)_deliverConnectionStatusChange:(BOOL)change;	// 0x31ba5329
- (void)_deliverMessage:(id)message;	// 0x31ba4af5
- (void)_deliverOutgoingMessageResultWithID:(unsigned)anId error:(id)error;	// 0x31ba54e9
- (void)_deliverPublicToken:(id)token;	// 0x31ba521d
- (void)_deliverPublicTokenOnIvarQueue:(id)queue;	// 0x31ba5099
- (void)_disconnect;	// 0x31ba3365
- (void)_disconnectFromDealloc;	// 0x31ba33e1
- (void)_disconnectOnIvarQueue;	// 0x31ba3325
- (void)_sendOutgoingMessage:(id)message fake:(BOOL)fake;	// 0x31ba6461
- (void)_setEnableCriticalReliability:(BOOL)reliability sendToDaemon:(BOOL)daemon;	// 0x31ba4545
- (void)_setEnableStatusNotifications:(BOOL)notifications sendToDaemon:(BOOL)daemon;	// 0x31ba47f5
- (void)_setEnabledTopics:(id)topics sendToDaemon:(BOOL)daemon;	// 0x31ba37a5
- (void)_setIgnoredTopics:(id)topics sendToDaemon:(BOOL)daemon;	// 0x31ba3a39
- (void)cancelOutgoingMessage:(id)message;	// 0x31ba6ad9
- (void)dealloc;	// 0x31ba1d21
// declared property getter: - (id)delegate;	// 0x31ba1e95
// declared property getter: - (id)delegateQueue;	// 0x31ba6cf9
- (BOOL)hasIdentity;	// 0x31ba5aa9
// converted property getter: - (BOOL)isConnected;	// 0x31ba445d
// declared property getter: - (id)ivarQueue;	// 0x31ba6d09
// declared property getter: - (unsigned)messageSize;	// 0x31ba41d9
// declared property getter: - (id)publicToken;	// 0x31ba3ed1
- (void)removeFromRunLoop;	// 0x31ba36a5
- (void)scheduleInRunLoop:(id)runLoop;	// 0x31ba345d
- (void)sendFakeMessage:(id)message;	// 0x31ba6ce5
- (void)sendOutgoingMessage:(id)message;	// 0x31ba6ac5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x31ba1f99
- (void)setEnableCriticalReliability:(BOOL)reliability;	// 0x31ba47e1
- (void)setEnableStatusNotifications:(BOOL)notifications;	// 0x31ba4a91
- (void)setEnabledTopics:(id)topics;	// 0x31ba3a25
- (void)setIgnoredTopics:(id)topics;	// 0x31ba3d1d
// declared property setter: - (void)setMessageSize:(unsigned)size;	// 0x31ba40fd
- (void)setSubtopic:(id)subtopic forEnabledTopic:(id)enabledTopic;	// 0x31ba3d31
@end

