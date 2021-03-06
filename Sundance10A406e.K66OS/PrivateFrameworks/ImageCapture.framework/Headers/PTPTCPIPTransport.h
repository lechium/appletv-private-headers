/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "ImageCapture-Structs.h"
#import "PTPTransport.h"

@class NSString, PTPTCPIPConnection, NSMutableData;

@interface PTPTCPIPTransport : PTPTransport {
	CFSocketRef _socket;	// 152 = 0x98
	NSString *_hostName;	// 156 = 0x9c
	unsigned short _hostPort;	// 160 = 0xa0
	NSString *_hostGUID;	// 164 = 0xa4
	NSString *_targetName;	// 168 = 0xa8
	NSString *_targetAddress;	// 172 = 0xac
	unsigned long _targetPort;	// 176 = 0xb0
	NSString *_targetGUID;	// 180 = 0xb4
	id _connectionRequestResponse;	// 184 = 0xb8
	unsigned long _connectionNumber;	// 188 = 0xbc
	PTPTCPIPConnection *_tempConnection;	// 192 = 0xc0
	NSMutableData *_tempData;	// 196 = 0xc4
	PTPTCPIPConnection *_cdConnection;	// 200 = 0xc8
	PTPTCPIPConnection *_eventConnection;	// 204 = 0xcc
	NSMutableData *_cdData;	// 208 = 0xd0
	NSMutableData *_eventData;	// 212 = 0xd4
	BOOL _delegateNeedsData;	// 216 = 0xd8
}
@property(readonly, retain) NSString *targetAddress;	// G=0x305ee7c5; converted property
@property(readonly, retain) NSString *targetGUID;	// G=0x305ee7e5; converted property
@property(readonly, retain) NSString *targetName;	// G=0x305ee7b5; converted property
@property(readonly, assign) unsigned long targetPort;	// G=0x305ee7d5; converted property
- (id)initForAcceptedSocketWithDelegate:(id)delegate andHostGUID:(id)guid andHostName:(id)name;	// 0x305ee3b5
- (id)initWithHostPort:(unsigned long)hostPort hostName:(id)name hostGUID:(id)guid bonjourServiceType:(id)type bonjourTXTRecords:(id)records delegate:(id)delegate;	// 0x305ee285
- (id)initWithTargetAddress:(id)targetAddress targetPort:(unsigned long)port targetGUID:(id)guid targetName:(id)name hostGUID:(id)guid5 hostName:(id)name6 delegate:(id)delegate;	// 0x305ee4d5
- (void)acceptConnectionFromSocket:(int)socket;	// 0x305ef9f1
- (void)cancelTransaction:(id)transaction;	// 0x305ef971
- (BOOL)connected;	// 0x305eef79
- (void)dealloc;	// 0x305ee679
- (id)description;	// 0x305eefa9
- (void)didCloseConnection:(id)connection withError:(XXStruct_K5nmsA)error;	// 0x305efab9
- (void)handleData:(id)data from:(id)from;	// 0x305efc49
- (void)releaseConnections;	// 0x305ef99d
- (BOOL)sendCancel:(id)cancel;	// 0x305eeff9
- (void)sendData:(id)data;	// 0x305ef6a5
- (void)sendDataPackets:(id)packets;	// 0x305ef2ed
- (BOOL)sendEvent:(id)event;	// 0x305ef92d
- (id)sendRequest:(id)request receiveData:(id)data timeout:(unsigned long)timeout;	// 0x305ef03d
- (id)sendRequest:(id)request sendData:(id)data timeout:(unsigned long)timeout;	// 0x305ef181
- (BOOL)sendResponse:(id)response;	// 0x305ef8e9
- (BOOL)sendStartData:(id)data;	// 0x305eefb5
- (BOOL)startInitiator;	// 0x305ee8e1
- (BOOL)startResponder;	// 0x305ee7f5
- (void)stop;	// 0x305eef19
// converted property getter: - (id)targetAddress;	// 0x305ee7c5
// converted property getter: - (id)targetGUID;	// 0x305ee7e5
// converted property getter: - (id)targetName;	// 0x305ee7b5
// converted property getter: - (unsigned long)targetPort;	// 0x305ee7d5
- (int)waitForCallbackThreadConditionSignalWithTimeout:(long)timeout;	// 0x305f08d9
- (int)waitForCallbackThreadConditionSignalWithTimeoutForConnection:(long)connection;	// 0x305f09b1
- (BOOL)waitForConnectionWithTimeout:(double)timeout;	// 0x305ee869
@end

