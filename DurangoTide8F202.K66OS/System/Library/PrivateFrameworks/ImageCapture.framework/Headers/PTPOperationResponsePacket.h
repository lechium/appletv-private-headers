/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <NSObject.h> // Unknown library


@interface PTPOperationResponsePacket : NSObject {
	int _numParameters;	// 4 = 0x4
	unsigned short _responseCode;	// 8 = 0x8
	unsigned _transactionID;	// 12 = 0xc
	unsigned _parameters[5];	// 16 = 0x10
}
@property(readonly, assign) int numParameters;	// G=0x301edd45; converted property
@property(assign) unsigned long parameter1;	// G=0x301edd89; S=0x301edd99; converted property
@property(assign) unsigned long parameter2;	// G=0x301edda9; S=0x301eddb9; converted property
@property(assign) unsigned long parameter3;	// G=0x301eddc9; S=0x301eddd9; converted property
@property(assign) unsigned long parameter4;	// G=0x301edde9; S=0x301eddf9; converted property
@property(assign) unsigned long parameter5;	// G=0x301ede09; S=0x301ede19; converted property
@property(assign) unsigned short responseCode;	// G=0x301edd05; S=0x301edd15; converted property
@property(assign) unsigned long transactionID;	// G=0x301edd25; S=0x301edd35; converted property
- (id)initWithResponseCode:(unsigned short)responseCode transactionID:(unsigned long)anId;	// 0x301ee06d
- (id)initWithResponseCode:(unsigned short)responseCode transactionID:(unsigned long)anId numParameters:(unsigned long)parameters parameters:(unsigned *)parameters4;	// 0x301ee0c5
- (id)initWithResponseCode:(unsigned short)responseCode transactionID:(unsigned long)anId parameter1:(unsigned long)a1;	// 0x301ee009
- (id)initWithResponseCode:(unsigned short)responseCode transactionID:(unsigned long)anId parameter1:(unsigned long)a1 parameter2:(unsigned long)a2;	// 0x301edf9d
- (id)initWithResponseCode:(unsigned short)responseCode transactionID:(unsigned long)anId parameter1:(unsigned long)a1 parameter2:(unsigned long)a2 parameter3:(unsigned long)a3;	// 0x301edf29
- (id)initWithResponseCode:(unsigned short)responseCode transactionID:(unsigned long)anId parameter1:(unsigned long)a1 parameter2:(unsigned long)a2 parameter3:(unsigned long)a3 parameter4:(unsigned long)a4;	// 0x301edead
- (id)initWithResponseCode:(unsigned short)responseCode transactionID:(unsigned long)anId parameter1:(unsigned long)a1 parameter2:(unsigned long)a2 parameter3:(unsigned long)a3 parameter4:(unsigned long)a4 parameter5:(unsigned long)a5;	// 0x301ede29
- (id)initWithTCPBuffer:(void *)tcpbuffer;	// 0x301ee571
- (id)initWithUSBBuffer:(void *)usbbuffer;	// 0x301ee149
- (id)contentForTCP;	// 0x301ee3bd
- (id)contentForUSB;	// 0x301ee2e5
- (id)contentForUSBUsingBuffer:(void *)usbusingBuffer capacity:(unsigned long)capacity;	// 0x301ee20d
- (id)description;	// 0x301ee495
// converted property getter: - (int)numParameters;	// 0x301edd45
// converted property getter: - (unsigned long)parameter1;	// 0x301edd89
// converted property getter: - (unsigned long)parameter2;	// 0x301edda9
// converted property getter: - (unsigned long)parameter3;	// 0x301eddc9
// converted property getter: - (unsigned long)parameter4;	// 0x301edde9
// converted property getter: - (unsigned long)parameter5;	// 0x301ede09
- (unsigned long)parameterAtIndex:(unsigned long)index;	// 0x301edd55
// converted property getter: - (unsigned short)responseCode;	// 0x301edd05
// converted property setter: - (void)setParameter1:(unsigned long)a1;	// 0x301edd99
// converted property setter: - (void)setParameter2:(unsigned long)a2;	// 0x301eddb9
// converted property setter: - (void)setParameter3:(unsigned long)a3;	// 0x301eddd9
// converted property setter: - (void)setParameter4:(unsigned long)a4;	// 0x301eddf9
// converted property setter: - (void)setParameter5:(unsigned long)a5;	// 0x301ede19
- (void)setPparameter:(unsigned long)pparameter atIndex:(unsigned long)index;	// 0x301edd71
// converted property setter: - (void)setResponseCode:(unsigned short)code;	// 0x301edd15
// converted property setter: - (void)setTransactionID:(unsigned long)anId;	// 0x301edd35
// converted property getter: - (unsigned long)transactionID;	// 0x301edd25
@end

