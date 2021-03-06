/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISDataProvider.h"
#import "iTunesStore-Structs.h"
#import "NSCopying.h"

@class NSArray, NSString;

@interface ISHashedDownloadProvider : ISDataProvider <NSCopying> {
	int _fileDescriptor;	// 36 = 0x24
	NSArray *_hashes;	// 40 = 0x28
	NSString *_localFilePath;	// 44 = 0x2c
	CC_MD5state_st _md5Context;	// 48 = 0x30
	long long _numberOfBytesToHash;	// 140 = 0x8c
	long long _totalBytesWritten;	// 148 = 0x94
	long long _validatedBytes;	// 156 = 0x9c
}
@property(retain) NSArray *hashes;	// G=0x30f13e35; S=0x30f13e49; @synthesize=_hashes
@property(retain) NSString *localFilePath;	// G=0x30f13e6d; S=0x30f13e81; @synthesize=_localFilePath
@property(assign) long long numberOfBytesToHash;	// G=0x30f13ea5; S=0x30f13ed9; @synthesize=_numberOfBytesToHash
@property(assign) long long streamedBytes;	// G=0x30f13f0d; S=0x30f13f41; @synthesize=_totalBytesWritten
@property(assign) long long validatedBytes;	// G=0x30f13f75; S=0x30f13fa9; @synthesize=_validatedBytes
- (id)init;	// 0x30f12fd9
- (BOOL)_checkHashForByteCount:(long long)byteCount;	// 0x30f136b5
- (void)_closeFile;	// 0x30f1377d
- (BOOL)_openFile;	// 0x30f137a5
- (BOOL)_truncateToSize:(long long)size;	// 0x30f13895
- (long long)_verifiedBytesByInitializingHashForFileSize:(long long)fileSize;	// 0x30f138f9
- (BOOL)_writeDataWithHashing:(id)hashing returningError:(id *)error;	// 0x30f13a6d
- (BOOL)_writeDataWithoutHashing:(id)hashing returningError:(id *)error;	// 0x30f13d31
- (BOOL)canStreamContentLength:(long long)length error:(id *)error;	// 0x30f1313d
- (void)closeStream;	// 0x30f13429
- (id)copyWithZone:(NSZone *)zone;	// 0x30f13085
- (void)dealloc;	// 0x30f1301d
// declared property getter: - (id)hashes;	// 0x30f13e35
- (BOOL)isStream;	// 0x30f13469
// declared property getter: - (id)localFilePath;	// 0x30f13e6d
// declared property getter: - (long long)numberOfBytesToHash;	// 0x30f13ea5
- (BOOL)parseData:(id)data returningError:(id *)error;	// 0x30f1346d
- (void)resetStream;	// 0x30f13535
// declared property setter: - (void)setHashes:(id)hashes;	// 0x30f13e49
// declared property setter: - (void)setLocalFilePath:(id)path;	// 0x30f13e81
// declared property setter: - (void)setNumberOfBytesToHash:(long long)hash;	// 0x30f13ed9
// declared property setter: - (void)setStreamedBytes:(long long)bytes;	// 0x30f13f41
// declared property setter: - (void)setValidatedBytes:(long long)bytes;	// 0x30f13fa9
- (void)setup;	// 0x30f13591
// declared property getter: - (long long)streamedBytes;	// 0x30f13f0d
// declared property getter: - (long long)validatedBytes;	// 0x30f13f75
@end

