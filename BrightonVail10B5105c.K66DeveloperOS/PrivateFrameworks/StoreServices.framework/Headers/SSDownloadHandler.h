/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library

@class SSXPCConnection, NSArray;
@protocol OS_dispatch_queue, SSDownloadHandlerDelegate;

@interface SSDownloadHandler : NSObject {
	SSXPCConnection *_controlConnection;	// 4 = 0x4
	id<SSDownloadHandlerDelegate> _delegate;	// 8 = 0x8
	NSObject<OS_dispatch_queue> *_delegateQueue;	// 12 = 0xc
	NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
	NSArray *_downloadPhasesToIgnore;	// 20 = 0x14
	long long _handlerID;	// 24 = 0x18
	SSXPCConnection *_observerConnection;	// 32 = 0x20
	BOOL _sessionsNeedPowerAssertion;	// 36 = 0x24
	BOOL _sessionsShouldBlockOtherDownloads;	// 37 = 0x25
}
@property(assign) id<SSDownloadHandlerDelegate> delegate;	// G=0x358710f1; S=0x35871691; 
@property(copy) NSArray *downloadPhasesToIgnore;	// G=0x358712b5; S=0x3587173d; 
@property(readonly, assign) long long handlerIdentifier;	// G=0x35871465; 
@property(assign) BOOL sessionsNeedPowerAssertion;	// G=0x358714ed; S=0x35871851; 
@property(assign) BOOL sessionsShouldBlockOtherDownloads;	// G=0x358715c1; S=0x35871905; 
- (id)init;	// 0x35870d55
- (void)_connectToDaemon;	// 0x35871bcd
- (id)_controlConnection;	// 0x35871ed5
- (void)_handleMessage:(id)message fromServerConnection:(id)serverConnection;	// 0x35872085
- (id)_newSessionWithMessage:(id)message;	// 0x35872359
- (BOOL)_sendAuthenticationSessionWithMessage:(id)message;	// 0x358723c9
- (void)_sendDisconnectMessage;	// 0x358724bd
- (BOOL)_sendSessionCancelWithMessage:(id)message;	// 0x35872531
- (BOOL)_sendSessionHandleWithMessage:(id)message;	// 0x358725d9
- (BOOL)_sendSessionPauseWithMessage:(id)message;	// 0x35872681
- (void)_setValue:(id)value forProperty:(const char *)property;	// 0x3587272d
- (void)dealloc;	// 0x35870fb9
// declared property getter: - (id)delegate;	// 0x358710f1
- (id)description;	// 0x358719b9
// declared property getter: - (id)downloadPhasesToIgnore;	// 0x358712b5
// declared property getter: - (long long)handlerIdentifier;	// 0x35871465
- (void)resetDisavowedSessions;	// 0x3587147d
// declared property getter: - (BOOL)sessionsNeedPowerAssertion;	// 0x358714ed
// declared property getter: - (BOOL)sessionsShouldBlockOtherDownloads;	// 0x358715c1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x35871691
// declared property setter: - (void)setDownloadPhasesToIgnore:(id)ignore;	// 0x3587173d
// declared property setter: - (void)setSessionsNeedPowerAssertion:(BOOL)assertion;	// 0x35871851
// declared property setter: - (void)setSessionsShouldBlockOtherDownloads:(BOOL)blockOtherDownloads;	// 0x35871905
@end
