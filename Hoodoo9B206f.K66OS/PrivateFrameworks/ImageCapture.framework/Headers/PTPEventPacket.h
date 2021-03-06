/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <NSObject.h> // Unknown library


@interface PTPEventPacket : NSObject {
	int _numParameters;	// 4 = 0x4
	unsigned short _eventCode;	// 8 = 0x8
	unsigned _transactionID;	// 12 = 0xc
	unsigned _parameters[3];	// 16 = 0x10
}
@property(assign) unsigned short eventCode;	// G=0x30c25c61; S=0x30c25c71; converted property
@property(assign) unsigned long parameter1;	// G=0x30c25ca1; S=0x30c25cb1; converted property
@property(assign) unsigned long parameter2;	// G=0x30c25cc1; S=0x30c25cd5; converted property
@property(assign) unsigned long parameter3;	// G=0x30c25ce9; S=0x30c25cfd; converted property
@property(assign) unsigned long transactionID;	// G=0x30c25c81; S=0x30c25c91; converted property
- (id)initWithEventCode:(unsigned short)eventCode transactionID:(unsigned long)anId;	// 0x30c25d11
- (id)initWithEventCode:(unsigned short)eventCode transactionID:(unsigned long)anId parameter1:(unsigned long)a1;	// 0x30c2639d
- (id)initWithEventCode:(unsigned short)eventCode transactionID:(unsigned long)anId parameter1:(unsigned long)a1 parameter2:(unsigned long)a2;	// 0x30c26321
- (id)initWithEventCode:(unsigned short)eventCode transactionID:(unsigned long)anId parameter1:(unsigned long)a1 parameter2:(unsigned long)a2 parameter3:(unsigned long)a3;	// 0x30c26291
- (id)initWithTCPBuffer:(void *)tcpbuffer;	// 0x30c261c9
- (id)initWithUSBBuffer:(void *)usbbuffer;	// 0x30c26101
- (id)contentForTCP;	// 0x30c26019
- (id)contentForUSB;	// 0x30c25f31
- (id)contentForUSBUsingBuffer:(void *)usbusingBuffer capacity:(unsigned long)capacity;	// 0x30c25e55
- (id)description;	// 0x30c25d71
// converted property getter: - (unsigned short)eventCode;	// 0x30c25c61
// converted property getter: - (unsigned long)parameter1;	// 0x30c25ca1
// converted property getter: - (unsigned long)parameter2;	// 0x30c25cc1
// converted property getter: - (unsigned long)parameter3;	// 0x30c25ce9
// converted property setter: - (void)setEventCode:(unsigned short)code;	// 0x30c25c71
// converted property setter: - (void)setParameter1:(unsigned long)a1;	// 0x30c25cb1
// converted property setter: - (void)setParameter2:(unsigned long)a2;	// 0x30c25cd5
// converted property setter: - (void)setParameter3:(unsigned long)a3;	// 0x30c25cfd
// converted property setter: - (void)setTransactionID:(unsigned long)anId;	// 0x30c25c91
// converted property getter: - (unsigned long)transactionID;	// 0x30c25c81
@end

