/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "SFUOutputStream.h"
#import <NSObject.h> // Unknown library

@class SFUCryptor;

__attribute__((visibility("hidden")))
@interface SFUCryptoOutputStream : NSObject <SFUOutputStream> {
@private
	id<SFUOutputStream> mBaseStream;	// 4 = 0x4
	SFUCryptor *mCryptor;	// 8 = 0x8
	BOOL mIsClosed;	// 12 = 0xc
	BOOL mComputeCrc32;	// 13 = 0xd
	unsigned mCrc32;	// 16 = 0x10
}
+ (unsigned long long)encodedLengthForDataLength:(unsigned long long)dataLength key:(id)key;	// 0x32a0f8e1
- (id)initForEncryptionWithOutputStream:(id)outputStream key:(id)key;	// 0x32a0f465
- (id)initForEncryptionWithOutputStream:(id)outputStream key:(id)key computeCrc32:(BOOL)a32;	// 0x32a0f95d
- (BOOL)canCreateInputStream;	// 0x32a0f461
- (BOOL)canSeek;	// 0x32a0f45d
- (void)close;	// 0x32a0f7a1
- (id)closeLocalStream;	// 0x32a0f7d9
- (unsigned)crc32;	// 0x32a0f6ed
- (void)dealloc;	// 0x32a0fd15
- (id)inputStream;	// 0x32a0f665
- (long long)offset;	// 0x32a0f645
- (void)seekToOffset:(long long)offset whence:(int)whence;	// 0x32a0f5bd
- (void)writeBuffer:(const char *)buffer size:(unsigned long)size;	// 0x32a0f489
@end

