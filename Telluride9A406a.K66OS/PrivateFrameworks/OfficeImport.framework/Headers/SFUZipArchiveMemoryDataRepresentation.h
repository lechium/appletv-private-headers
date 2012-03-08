/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "SFUDataRepresentation.h"
#import "SFUZipArchiveDataRepresentation.h"

@class NSData;

__attribute__((visibility("hidden")))
@interface SFUZipArchiveMemoryDataRepresentation : SFUDataRepresentation <SFUZipArchiveDataRepresentation> {
@private
	NSData *mData;	// 12 = 0xc
}
- (id)initWithData:(id)data;	// 0x329fad19
- (id)bufferedInputStream;	// 0x329fad71
- (id)bufferedInputStreamWithBufferSize:(unsigned long)bufferSize;	// 0x32b0078d
- (id)bufferedInputStreamWithOffset:(long long)offset length:(long long)length;	// 0x329fadd1
- (id)data;	// 0x32b006f9
- (long long)dataLength;	// 0x329fada9
- (void)dealloc;	// 0x32a04db1
- (BOOL)hasSameLocationAs:(id)as;	// 0x32b0071d
- (id)inputStream;	// 0x32b007c5
- (id)inputStreamWithOffset:(long long)offset length:(long long)length;	// 0x32b0070d
- (BOOL)isReadable;	// 0x32b00709
@end

