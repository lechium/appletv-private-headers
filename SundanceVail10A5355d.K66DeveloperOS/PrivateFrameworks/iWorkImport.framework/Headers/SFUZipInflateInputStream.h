/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "SFUInputStream.h"
#import <NSObject.h> // Unknown library

@protocol SFUBufferedInputStream;

@interface SFUZipInflateInputStream : NSObject <SFUInputStream> {
	z_stream_s mStream;	// 4 = 0x4
	long long mOffset;	// 60 = 0x3c
	id<SFUBufferedInputStream> mInput;	// 68 = 0x44
	char *mOutBuffer;	// 72 = 0x48
	unsigned long long mOutBufferSize;	// 76 = 0x4c
	BOOL mReachedEnd;	// 84 = 0x54
	BOOL mIsFromZip;	// 85 = 0x55
	unsigned long mCalculatedCrc;	// 88 = 0x58
	unsigned long mCheckCrc;	// 92 = 0x5c
}
- (id)initWithInput:(id)input;	// 0x34c5e259
- (id)initWithOffset:(long long)offset end:(long long)end uncompressedSize:(unsigned long long)size crc:(unsigned long)crc dataRepresentation:(id)representation;	// 0x34c5e059
- (BOOL)canSeek;	// 0x34c5e6bd
- (void)close;	// 0x34c5e715
- (id)closeLocalStream;	// 0x34c5e751
- (void)dealloc;	// 0x34c5e3f9
- (void)disableSystemCaching;	// 0x34c5e6d5
- (void)enableSystemCaching;	// 0x34c5e6f5
- (long long)offset;	// 0x34c5e6c1
- (unsigned long)readToBuffer:(char *)buffer size:(unsigned long)size;	// 0x34c5e585
- (unsigned long)readToOwnBuffer:(const char **)ownBuffer size:(unsigned long)size;	// 0x34c5e469
- (void)seekToOffset:(long long)offset;	// 0x34c5e6b9
- (void)setupInflateStream;	// 0x34c5e775
- (long long)totalCompressedBytesConsumed;	// 0x34c5e761
@end

