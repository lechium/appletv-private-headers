/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "ImageCapture-Structs.h"
#import "PTPTransport.h"

@class NSString, NSMutableData;

@interface PTPHostUSBTransport : PTPTransport {
	unsigned _locationID;	// 24 = 0x18
	unsigned short _vendorID;	// 28 = 0x1c
	unsigned short _productID;	// 30 = 0x1e
	NSString *_usbSerialNumberString;	// 32 = 0x20
	IOUSBInterfaceStruct300Ref *_interfaceInterfaceRef;	// 36 = 0x24
	unsigned char _bulkPipeIn;	// 40 = 0x28
	unsigned char _bulkPipeOut;	// 41 = 0x29
	unsigned char _interruptPipeIn;	// 42 = 0x2a
	unsigned _readBufferSize;	// 44 = 0x2c
	unsigned _writeBufferSize;	// 48 = 0x30
	unsigned _eventDataBufferSize;	// 52 = 0x34
	char *_readBuffer;	// 56 = 0x38
	char *_writeBuffer;	// 60 = 0x3c
	char *_eventDataBuffer;	// 64 = 0x40
	NSMutableData *_eventData;	// 68 = 0x44
	unsigned char _headerBuffer[12];	// 72 = 0x48
	BOOL _headerBufferFound;	// 84 = 0x54
	int _maxPacketSizeBulkIn;	// 88 = 0x58
	int _maxPacketSizeBulkOut;	// 92 = 0x5c
	int _maxPacketSizeInterruptIn;	// 96 = 0x60
	CFRunLoopSourceRef _CFRunLoopSource;	// 100 = 0x64
	BOOL _delegateNeedsData;	// 104 = 0x68
	BOOL _delegateNeedsResponse;	// 105 = 0x69
	BOOL _connected;	// 106 = 0x6a
	BOOL _busy;	// 107 = 0x6b
	unsigned _canceledTransactionID;	// 108 = 0x6c
}
@property(assign) BOOL connected;	// G=0x301f1155; S=0x301f1cd1; converted property
@property(readonly, assign) unsigned short productID;	// G=0x301f1135; converted property
@property(readonly, retain) NSString *usbSerialNumberString;	// G=0x301f1145; converted property
@property(readonly, assign) unsigned short vendorID;	// G=0x301f1125; converted property
- (id)initWithLocationID:(unsigned long)locationID delegate:(id)delegate;	// 0x301f13dd
- (void)abortPendingIO;	// 0x301f1231
- (unsigned short)cancelRequest:(id)request;	// 0x301f36c9
- (void)cancelTransaction:(id)transaction;	// 0x301f129d
- (void)clearBulkInPipeStall;	// 0x301f1201
- (void)clearPipeStall:(unsigned char)stall;	// 0x301f116d
// converted property getter: - (BOOL)connected;	// 0x301f1155
- (void)dealloc;	// 0x301f21a9
- (id)description;	// 0x301f1399
- (void)deviceReset;	// 0x301f19b9
- (unsigned short)deviceStatus;	// 0x301f1af5
- (void)dumpData:(void *)data length:(int)length comment:(id)comment;	// 0x301f2f31
- (BOOL)handleBulkData:(unsigned long)data result:(int)result;	// 0x301f3349
- (void)handleInterruptData:(unsigned long)data;	// 0x301f3175
- (unsigned long)locationID;	// 0x301f1115
// converted property getter: - (unsigned short)productID;	// 0x301f1135
- (int)readBulkDataWithTimeout:(unsigned long)timeout;	// 0x301f162d
- (int)readInterruptData;	// 0x301f14f9
- (BOOL)sendCancel:(id)cancel;	// 0x301f1165
- (BOOL)sendData:(id)data;	// 0x301f2a11
- (void)sendDataPackets:(id)packets;	// 0x301f2b1d
- (BOOL)sendEvent:(id)event;	// 0x301f1169
- (BOOL)sendRequest:(id)request needsData:(BOOL)data;	// 0x301f1319
- (BOOL)sendResponse:(id)response;	// 0x301f12c1
// converted property setter: - (void)setConnected:(BOOL)connected;	// 0x301f1cd1
- (BOOL)startInitiator;	// 0x301f2291
- (void)stop;	// 0x301f28c9
// converted property getter: - (id)usbSerialNumberString;	// 0x301f1145
// converted property getter: - (unsigned short)vendorID;	// 0x301f1125
- (BOOL)writeBulkData:(id)data;	// 0x301f1819
@end

