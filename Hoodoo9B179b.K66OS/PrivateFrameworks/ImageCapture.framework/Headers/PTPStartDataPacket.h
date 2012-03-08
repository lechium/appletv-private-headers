/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <NSObject.h> // Unknown library


@interface PTPStartDataPacket : NSObject {
	unsigned _transactionID;	// 4 = 0x4
	unsigned long long _totalDataSize;	// 8 = 0x8
}
@property(assign) unsigned long long totalDataSize;	// G=0x358dca29; S=0x358dca41; converted property
@property(assign) unsigned long transactionID;	// G=0x358dca09; S=0x358dca19; converted property
- (id)initWithTCPBuffer:(void *)tcpbuffer;	// 0x358dcba5
- (id)initWithTransactionID:(unsigned long)transactionID totalDataSize:(unsigned long long)size;	// 0x358dca55
- (id)contentForTCP;	// 0x358dcb0d
- (id)description;	// 0x358dcaa9
// converted property setter: - (void)setTotalDataSize:(unsigned long long)size;	// 0x358dca41
// converted property setter: - (void)setTransactionID:(unsigned long)anId;	// 0x358dca19
// converted property getter: - (unsigned long long)totalDataSize;	// 0x358dca29
// converted property getter: - (unsigned long)transactionID;	// 0x358dca09
@end

