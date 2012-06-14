/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import "WebInspectorServerConnection.h"


__attribute__((visibility("hidden")))
@interface WebInspectorServerConnectionHTTP : WebInspectorServerConnection {
@private
	int _socketFileDescriptor;	// 8 = 0x8
	CFReadStreamRef _readStream;	// 12 = 0xc
	CFWriteStreamRef _writeStream;	// 16 = 0x10
	BOOL _isWebSocketServer;	// 20 = 0x14
	BOOL _shouldCloseAfterSendingResponse;	// 21 = 0x15
	CFHTTPMessageRef _httpMessage;	// 24 = 0x18
	CFHTTPMessageRef _httpResponse;	// 28 = 0x1c
	CFDataRef _incomingWebSocketData;	// 32 = 0x20
	CFDataRef _outgoingData;	// 36 = 0x24
}
- (id)initWithSocketFileDescriptor:(int)socketFileDescriptor;	// 0x34593c31
- (void)_sendPendingData;	// 0x34595535
- (void)clearChannel;	// 0x345954c1
- (void)close;	// 0x345955c9
- (void)dealloc;	// 0x34595711
- (void)handleReadEvent:(unsigned long)event;	// 0x34593dd1
- (void)handleWriteEvent:(unsigned long)event;	// 0x34593da5
- (void)read:(const char *)read length:(long)length;	// 0x34595401
- (void)readHTTPMessage:(const char *)message length:(long)length;	// 0x34595291
- (void)readWebSocketMessage:(const char *)message length:(long)length;	// 0x34595151
- (void)send;	// 0x34595501
- (void)sendHTTPDynamicJSONListingResponse;	// 0x345945a5
- (void)sendHTTPInspectorPageResponse:(id)response;	// 0x345943a5
- (void)sendHTTPResponse;	// 0x34595075
- (void)sendWebSocketMessage:(id)message;	// 0x34595435
- (void)sendWebSocketResponse:(id)response;	// 0x34593e31
- (void)shutdown;	// 0x345955b9
@end
