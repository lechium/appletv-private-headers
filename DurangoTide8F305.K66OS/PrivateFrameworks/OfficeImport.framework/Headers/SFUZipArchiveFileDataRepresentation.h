/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "SFUDataRepresentation.h"
#import "SFUZipArchiveDataRepresentation.h"

@class SFUFileDataRepresentation;

__attribute__((visibility("hidden")))
@interface SFUZipArchiveFileDataRepresentation : SFUDataRepresentation <SFUZipArchiveDataRepresentation> {
@private
	SFUFileDataRepresentation *mFileRepresentation;	// 12 = 0xc
	int mFd;	// 16 = 0x10
}
- (id)initWithPath:(id)path;	// 0x3450240d
- (id)bufferedInputStreamWithOffset:(long long)offset length:(long long)length;	// 0x34504b99
- (long long)dataLength;	// 0x34502bd1
- (void)dealloc;	// 0x3451dcf5
- (BOOL)hasSameLocationAs:(id)as;	// 0x34645e25
- (id)inputStream;	// 0x34502dcd
- (id)inputStreamWithOffset:(long long)offset length:(long long)length;	// 0x34504bf9
- (BOOL)isEncrypted;	// 0x34645e01
- (BOOL)isReadable;	// 0x34645ee1
- (id)path;	// 0x34645e05
@end

