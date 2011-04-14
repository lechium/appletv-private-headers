/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"
#import "SFUInputStream.h"

@protocol SFUBufferedInputStream;

__attribute__((visibility("hidden")))
@interface SFUZipInflateInputStream : NSObject <SFUInputStream> {
@private
	z_stream_s mStream;	// 4 = 0x4
	long long mOffset;	// 60 = 0x3c
	id<SFUBufferedInputStream> mInput;	// 68 = 0x44
	char *mOutBuffer;	// 72 = 0x48
	unsigned mOutBufferSize;	// 76 = 0x4c
	BOOL mReachedEnd;	// 80 = 0x50
	BOOL mIsFromZip;	// 81 = 0x51
	unsigned mCalculatedCrc;	// 84 = 0x54
	unsigned mCheckCrc;	// 88 = 0x58
}
- (id)initWithInput:(id)input;	// 0x31b6e871
- (id)initWithOffset:(long long)offset end:(long long)end uncompressedSize:(unsigned long long)size crc:(unsigned long)crc dataRepresentation:(id)representation;	// 0x31a2cd89
- (BOOL)canSeek;	// 0x31b6e79d
- (void)close;	// 0x31a2d0d5
- (id)closeLocalStream;	// 0x31a2d105
- (void)dealloc;	// 0x31a2d115
- (void)disableSystemCaching;	// 0x31b6e7d9
- (void)enableSystemCaching;	// 0x31b6e7b9
- (long long)offset;	// 0x31a2cfa5
- (unsigned long)readToBuffer:(char *)buffer size:(unsigned long)size;	// 0x31a2cfbd
- (unsigned long)readToOwnBuffer:(const char **)ownBuffer size:(unsigned long)size;	// 0x31b6e9d9
- (void)seekToOffset:(long long)offset;	// 0x31b6e7f9
- (void)setupInflateStream;	// 0x31a2cf31
- (long long)totalCompressedBytesConsumed;	// 0x31b6e7a1
@end

