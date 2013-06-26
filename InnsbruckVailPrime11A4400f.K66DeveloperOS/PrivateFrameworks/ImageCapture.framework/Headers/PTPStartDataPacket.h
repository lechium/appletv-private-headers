/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import </libobjc.A.h>


@interface PTPStartDataPacket : NSObject {
	unsigned long _transactionID;	// 4 = 0x4
	unsigned long long _totalDataSize;	// 8 = 0x8
}
@property(assign) unsigned long long totalDataSize;	// G=0x31296245; S=0x3129625d; converted property
@property(assign) unsigned long transactionID;	// G=0x31296225; S=0x31296235; converted property
- (id)initWithTCPBuffer:(void *)tcpbuffer;	// 0x312960b1
- (id)initWithTransactionID:(unsigned long)transactionID totalDataSize:(unsigned long long)size;	// 0x3129605d
- (id)contentForTCP;	// 0x3129612d
- (id)description;	// 0x312961c5
// converted property setter: - (void)setTotalDataSize:(unsigned long long)size;	// 0x3129625d
// converted property setter: - (void)setTransactionID:(unsigned long)anId;	// 0x31296235
// converted property getter: - (unsigned long long)totalDataSize;	// 0x31296245
// converted property getter: - (unsigned long)transactionID;	// 0x31296225
@end
