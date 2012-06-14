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
	NSData *mData;	// 20 = 0x14
}
- (id)initWithData:(id)data;	// 0x3119bc69
- (id)bufferedInputStream;	// 0x3119bcbd
- (id)bufferedInputStreamWithBufferSize:(unsigned long)bufferSize;	// 0x312cfc3d
- (id)bufferedInputStreamWithOffset:(long long)offset length:(long long)length;	// 0x3119bd21
- (id)data;	// 0x312cfbed
- (long long)dataLength;	// 0x3119bcf9
- (void)dealloc;	// 0x311a5ab1
- (BOOL)hasSameLocationAs:(id)as;	// 0x312cfc79
- (id)inputStream;	// 0x312cfc01
- (id)inputStreamWithOffset:(long long)offset length:(long long)length;	// 0x312cfce9
- (BOOL)isReadable;	// 0x312cfbfd
@end

