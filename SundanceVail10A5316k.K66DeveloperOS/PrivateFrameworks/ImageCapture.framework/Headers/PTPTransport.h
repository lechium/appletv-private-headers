/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "ImageCapture-Structs.h"
#import <NSObject.h> // Unknown library

@class PTPOperationResponsePacket, PTPWrappedBytes;

@interface PTPTransport : NSObject {
	unsigned short _type;	// 4 = 0x4
	int _role;	// 8 = 0x8
	int _connectionStatus;	// 12 = 0xc
	id _delegate;	// 16 = 0x10
	BOOL _timedOut;	// 20 = 0x14
	BOOL _responseReceived;	// 21 = 0x15
	PTPOperationResponsePacket *_response;	// 24 = 0x18
	opaque_pthread_t *_callbackThread;	// 28 = 0x1c
	opaque_pthread_mutex_t _callbackThreadMutex;	// 32 = 0x20
	opaque_pthread_cond_t _callbackThreadCondition;	// 76 = 0x4c
	BOOL _callbackThreadConditionSignaled;	// 104 = 0x68
	CFRunLoopRef _callbackThreadRunLoop;	// 108 = 0x6c
	CFRunLoopSourceRef _callbackDummyMachPortRLSrc;	// 112 = 0x70
	unsigned char _headerBuffer[12];	// 116 = 0x74
	BOOL _headerBufferFound;	// 128 = 0x80
	BOOL _delegateNeedsResponse;	// 129 = 0x81
	BOOL _busy;	// 130 = 0x82
	unsigned long _canceledTransactionID;	// 132 = 0x84
	PTPWrappedBytes *_dataForTransaction;	// 136 = 0x88
	unsigned long long _excessReceivedDataSize;	// 140 = 0x8c
}
@property(readonly, assign) CFRunLoopRef callbackThreadRunLoop;	// G=0x328cb74d; converted property
@property(readonly, assign) int connectionStatus;	// G=0x328cb9e1; converted property
@property(readonly, assign) unsigned long long excessReceivedDataSize;	// G=0x328cbc31; converted property
@property(retain) PTPOperationResponsePacket *response;	// G=0x328cb90d; S=0x328cb91d; converted property
@property(assign) BOOL responseReceived;	// G=0x328cb969; S=0x328cb979; converted property
@property(readonly, assign) int role;	// G=0x328cbb8d; converted property
@property(assign) BOOL timedOut;	// G=0x328cbba1; S=0x328cbbb1; converted property
@property(readonly, assign) unsigned short type;	// G=0x328cb9d1; converted property
- (id)init;	// 0x328cb505
- (void)abortPendingIO;	// 0x328cbc1d
- (void *)callbackThreadFunction;	// 0x328cb5d9
// converted property getter: - (CFRunLoopRef)callbackThreadRunLoop;	// 0x328cb74d
- (void)cancelTransaction:(id)transaction;	// 0x328cbc21
- (void)cleanupCallbackThread;	// 0x328cb5c5
- (BOOL)connected;	// 0x328cbb9d
// converted property getter: - (int)connectionStatus;	// 0x328cb9e1
- (void)dealloc;	// 0x328cb599
- (void)deviceReset;	// 0x328cbc2d
- (unsigned short)deviceStatus;	// 0x328cbc25
- (void)endCallbackThread;	// 0x328cbacd
// converted property getter: - (unsigned long long)excessReceivedDataSize;	// 0x328cbc31
- (int)lockCallbackThreadMutex;	// 0x328cb75d
// converted property getter: - (id)response;	// 0x328cb90d
// converted property getter: - (BOOL)responseReceived;	// 0x328cb969
// converted property getter: - (int)role;	// 0x328cbb8d
- (void)sendData:(id)data;	// 0x328cbc11
- (BOOL)sendEvent:(id)event;	// 0x328cbc19
- (id)sendRequest:(id)request receiveData:(id)data timeout:(unsigned long)timeout;	// 0x328cbc09
- (id)sendRequest:(id)request sendData:(id)data timeout:(unsigned long)timeout;	// 0x328cbc0d
- (BOOL)sendResponse:(id)response;	// 0x328cbc15
- (void)setDelegate:(id)delegate;	// 0x328cb959
// converted property setter: - (void)setResponse:(id)response;	// 0x328cb91d
// converted property setter: - (void)setResponseReceived:(BOOL)received;	// 0x328cb979
// converted property setter: - (void)setTimedOut:(BOOL)anOut;	// 0x328cbbb1
- (int)signalCallbackThreadCondition;	// 0x328cb82d
- (BOOL)startCallbackThread;	// 0x328cb9f1
- (BOOL)startInitiator;	// 0x328cbb65
- (BOOL)startResponder;	// 0x328cbb4d
- (void)stop;	// 0x328cbb7d
// converted property getter: - (BOOL)timedOut;	// 0x328cbba1
// converted property getter: - (unsigned short)type;	// 0x328cb9d1
- (int)unlockCallbackThreadMutex;	// 0x328cb7c5
- (int)waitForCallbackThreadConditionSignalWithTimeout:(long)timeout;	// 0x328cb859
@end

