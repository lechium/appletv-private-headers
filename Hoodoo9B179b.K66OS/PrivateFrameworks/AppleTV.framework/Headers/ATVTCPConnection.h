/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "NSStreamDelegate.h"

@class NSData, NSMutableData, NSMutableArray, NSInputStream, NSOutputStream, ATVTCPControlReceiver;

__attribute__((visibility("hidden")))
@interface ATVTCPConnection : NSObject <NSStreamDelegate> {
@private
	id _delegate;	// 4 = 0x4
	NSData *_peerAddress;	// 8 = 0x8
	ATVTCPControlReceiver *_server;	// 12 = 0xc
	NSMutableArray *_requests;	// 16 = 0x10
	NSInputStream *_istream;	// 20 = 0x14
	NSOutputStream *_ostream;	// 24 = 0x18
	NSMutableData *_ibuffer;	// 28 = 0x1c
	NSMutableData *_obuffer;	// 32 = 0x20
	BOOL _isValid;	// 36 = 0x24
}
@property(assign) id delegate;	// G=0x301b1d75; S=0x301b1d85; converted property
@property(readonly, assign) BOOL isValid;	// G=0x301b1db5; converted property
@property(readonly, retain) NSData *peerAddress;	// G=0x301b1d95; converted property
@property(readonly, retain) ATVTCPControlReceiver *server;	// G=0x301b1da5; converted property
- (id)init;	// 0x301b1ba9
- (id)initWithPeerAddress:(id)peerAddress inputStream:(id)stream outputStream:(id)stream3 forServer:(id)server;	// 0x301b1bc1
- (void)dealloc;	// 0x301b1d15
// converted property getter: - (id)delegate;	// 0x301b1d75
- (void)invalidate;	// 0x301b1dc5
// converted property getter: - (BOOL)isValid;	// 0x301b1db5
// converted property getter: - (id)peerAddress;	// 0x301b1d95
- (BOOL)processIncomingBytes;	// 0x301b1ee5
// converted property getter: - (id)server;	// 0x301b1da5
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x301b1d85
- (void)stream:(id)stream handleEvent:(unsigned)event;	// 0x301b1f7d
@end

