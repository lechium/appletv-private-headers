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
@property(readonly, assign) int numParameters;	// G=0x30c28e71; converted property
@property(assign) unsigned long parameter1;	// G=0x30c28eb5; S=0x30c28ec5; converted property
@property(assign) unsigned long parameter2;	// G=0x30c28ed5; S=0x30c28ee9; converted property
@property(assign) unsigned long parameter3;	// G=0x30c28efd; S=0x30c28f11; converted property
@property(assign) unsigned long parameter4;	// G=0x30c28f25; S=0x30c28f39; converted property
@property(assign) unsigned long parameter5;	// G=0x30c28f4d; S=0x30c28f61; converted property
@property(assign) unsigned short responseCode;	// G=0x30c28e31; S=0x30c28e41; converted property
@property(assign) unsigned long transactionID;	// G=0x30c28e51; S=0x30c28e61; converted property
- (id)initWithResponseCode:(unsigned short)responseCode transactionID:(unsigned long)anId;	// 0x30c297f9
- (id)initWithResponseCode:(unsigned short)responseCode transactionID:(unsigned long)anId numParameters:(unsigned long)parameters parameters:(unsigned *)parameters4;	// 0x30c28f75
- (id)initWithResponseCode:(unsigned short)responseCode transactionID:(unsigned long)anId parameter1:(unsigned long)a1;	// 0x30c29789
- (id)initWithResponseCode:(unsigned short)responseCode transactionID:(unsigned long)anId parameter1:(unsigned long)a1 parameter2:(unsigned long)a2;	// 0x30c2970d
- (id)initWithResponseCode:(unsigned short)responseCode transactionID:(unsigned long)anId parameter1:(unsigned long)a1 parameter2:(unsigned long)a2 parameter3:(unsigned long)a3;	// 0x30c2967d
- (id)initWithResponseCode:(unsigned short)responseCode transactionID:(unsigned long)anId parameter1:(unsigned long)a1 parameter2:(unsigned long)a2 parameter3:(unsigned long)a3 parameter4:(unsigned long)a4;	// 0x30c295e5
- (id)initWithResponseCode:(unsigned short)responseCode transactionID:(unsigned long)anId parameter1:(unsigned long)a1 parameter2:(unsigned long)a2 parameter3:(unsigned long)a3 parameter4:(unsigned long)a4 parameter5:(unsigned long)a5;	// 0x30c2953d
- (id)initWithTCPBuffer:(void *)tcpbuffer;	// 0x30c29475
- (id)initWithUSBBuffer:(void *)usbbuffer;	// 0x30c293ad
- (id)contentForTCP;	// 0x30c292c5
- (id)contentForUSB;	// 0x30c291dd
- (id)contentForUSBUsingBuffer:(void *)usbusingBuffer capacity:(unsigned long)capacity;	// 0x30c29101
- (id)description;	// 0x30c28ff9
// converted property getter: - (int)numParameters;	// 0x30c28e71
// converted property getter: - (unsigned long)parameter1;	// 0x30c28eb5
// converted property getter: - (unsigned long)parameter2;	// 0x30c28ed5
// converted property getter: - (unsigned long)parameter3;	// 0x30c28efd
// converted property getter: - (unsigned long)parameter4;	// 0x30c28f25
// converted property getter: - (unsigned long)parameter5;	// 0x30c28f4d
- (unsigned long)parameterAtIndex:(unsigned long)index;	// 0x30c28e81
// converted property getter: - (unsigned short)responseCode;	// 0x30c28e31
// converted property setter: - (void)setParameter1:(unsigned long)a1;	// 0x30c28ec5
// converted property setter: - (void)setParameter2:(unsigned long)a2;	// 0x30c28ee9
// converted property setter: - (void)setParameter3:(unsigned long)a3;	// 0x30c28f11
// converted property setter: - (void)setParameter4:(unsigned long)a4;	// 0x30c28f39
// converted property setter: - (void)setParameter5:(unsigned long)a5;	// 0x30c28f61
- (void)setPparameter:(unsigned long)pparameter atIndex:(unsigned long)index;	// 0x30c28e9d
// converted property setter: - (void)setResponseCode:(unsigned short)code;	// 0x30c28e41
// converted property setter: - (void)setTransactionID:(unsigned long)anId;	// 0x30c28e61
// converted property getter: - (unsigned long)transactionID;	// 0x30c28e51
@end
