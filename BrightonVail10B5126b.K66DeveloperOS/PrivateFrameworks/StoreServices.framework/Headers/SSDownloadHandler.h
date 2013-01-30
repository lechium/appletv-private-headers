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
@property(assign) id<SSDownloadHandlerDelegate> delegate;	// G=0x354ee961; S=0x354eef01; 
@property(copy) NSArray *downloadPhasesToIgnore;	// G=0x354eeb25; S=0x354eefad; 
@property(readonly, assign) long long handlerIdentifier;	// G=0x354eecd5; 
@property(assign) BOOL sessionsNeedPowerAssertion;	// G=0x354eed5d; S=0x354ef0c1; 
@property(assign) BOOL sessionsShouldBlockOtherDownloads;	// G=0x354eee31; S=0x354ef175; 
- (id)init;	// 0x354ee5c5
- (void)_connectToDaemon;	// 0x354ef43d
- (id)_controlConnection;	// 0x354ef745
- (void)_handleMessage:(id)message fromServerConnection:(id)serverConnection;	// 0x354ef8f5
- (id)_newSessionWithMessage:(id)message;	// 0x354efbc9
- (BOOL)_sendAuthenticationSessionWithMessage:(id)message;	// 0x354efc39
- (void)_sendDisconnectMessage;	// 0x354efd2d
- (BOOL)_sendSessionCancelWithMessage:(id)message;	// 0x354efda1
- (BOOL)_sendSessionHandleWithMessage:(id)message;	// 0x354efe49
- (BOOL)_sendSessionPauseWithMessage:(id)message;	// 0x354efef1
- (void)_setValue:(id)value forProperty:(const char *)property;	// 0x354eff9d
- (void)dealloc;	// 0x354ee829
// declared property getter: - (id)delegate;	// 0x354ee961
- (id)description;	// 0x354ef229
// declared property getter: - (id)downloadPhasesToIgnore;	// 0x354eeb25
// declared property getter: - (long long)handlerIdentifier;	// 0x354eecd5
- (void)resetDisavowedSessions;	// 0x354eeced
// declared property getter: - (BOOL)sessionsNeedPowerAssertion;	// 0x354eed5d
// declared property getter: - (BOOL)sessionsShouldBlockOtherDownloads;	// 0x354eee31
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x354eef01
// declared property setter: - (void)setDownloadPhasesToIgnore:(id)ignore;	// 0x354eefad
// declared property setter: - (void)setSessionsNeedPowerAssertion:(BOOL)assertion;	// 0x354ef0c1
// declared property setter: - (void)setSessionsShouldBlockOtherDownloads:(BOOL)blockOtherDownloads;	// 0x354ef175
@end
