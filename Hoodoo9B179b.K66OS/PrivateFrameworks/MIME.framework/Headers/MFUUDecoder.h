/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import "MFBaseFilterDataConsumer.h"


@interface MFUUDecoder : MFBaseFilterDataConsumer {
	unsigned _begin;	// 12 = 0xc
	unsigned _end;	// 16 = 0x10
	unsigned _length;	// 20 = 0x14
	unsigned _readBytes;	// 24 = 0x18
	unsigned char _encoded[4];	// 28 = 0x1c
	BOOL _beginComplete;	// 32 = 0x20
	BOOL _dataComplete;	// 33 = 0x21
	BOOL _validLength;	// 34 = 0x22
	BOOL _lineComplete;	// 35 = 0x23
	BOOL _passthrough;	// 36 = 0x24
}
- (int)appendData:(id)data;	// 0x31d69321
- (void)done;	// 0x31d69761
@end

