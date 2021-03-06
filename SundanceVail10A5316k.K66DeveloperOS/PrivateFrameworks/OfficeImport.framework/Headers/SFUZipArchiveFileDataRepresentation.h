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
	SFUFileDataRepresentation *mFileRepresentation;	// 20 = 0x14
	int mFd;	// 24 = 0x18
}
- (id)initWithPath:(id)path;	// 0x310d42d1
- (id)bufferedInputStreamWithOffset:(long long)offset length:(long long)length;	// 0x310d6ed1
- (long long)dataLength;	// 0x310d5069
- (void)dealloc;	// 0x3110a90d
- (BOOL)hasSameLocationAs:(id)as;	// 0x312cfb05
- (id)inputStream;	// 0x310d4b9d
- (id)inputStreamWithOffset:(long long)offset length:(long long)length;	// 0x310d6f45
- (BOOL)isEncrypted;	// 0x312cfb01
- (BOOL)isReadable;	// 0x312cfadd
- (id)path;	// 0x312cfbcd
@end

