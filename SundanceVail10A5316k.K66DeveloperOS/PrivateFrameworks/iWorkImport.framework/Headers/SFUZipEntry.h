/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "SFUDataRepresentation.h"

@class SFUCryptoKey;
@protocol SFUZipArchiveDataRepresentation;

__attribute__((visibility("hidden")))
@interface SFUZipEntry : SFUDataRepresentation {
@private
	SFUDataRepresentation<SFUZipArchiveDataRepresentation> *mArchiveDataRepresentation;	// 20 = 0x14
	int mCompressionMethod;	// 24 = 0x18
	unsigned long long mCompressedSize;	// 28 = 0x1c
	unsigned long long mUncompressedSize;	// 36 = 0x24
	unsigned long long mOffset;	// 44 = 0x2c
	unsigned mCrc;	// 52 = 0x34
	unsigned long long mDataOffset;	// 56 = 0x38
	BOOL mHasDataOffset;	// 64 = 0x40
	unsigned long long mEncodedLength;	// 68 = 0x44
	BOOL mHasEncodedLength;	// 76 = 0x4c
	SFUCryptoKey *mCryptoKey;	// 80 = 0x50
}
@property(assign) long long dataLength;	// G=0x36cc0225; S=0x36cc0acd; converted property
- (id)initFromCentralFileHeader:(const char *)centralFileHeader dataRepresentation:(id)representation;	// 0x36cbfec5
- (id)initWithDataRepresentation:(id)dataRepresentation compressionMethod:(int)method compressedSize:(unsigned long long)size uncompressedSize:(unsigned long long)size4 offset:(unsigned long long)offset crc:(unsigned)crc;	// 0x36cc00bd
- (unsigned long long)backingFileDataOffset;	// 0x36cc0889
- (id)backingFilePath;	// 0x36cc0845
- (unsigned long long)calculateEncodedLength;	// 0x36cc0d61
- (void)copyToFile:(id)file;	// 0x36cc05ed
- (unsigned)crc;	// 0x36cc08c5
- (id)data;	// 0x36cc0475
// converted property getter: - (long long)dataLength;	// 0x36cc0225
- (unsigned long long)dataOffset;	// 0x36cc0b0d
- (void)dealloc;	// 0x36cc0175
- (long long)encodedLength;	// 0x36cc023d
- (id)inputStream;	// 0x36cc024d
- (BOOL)isBackedByFile;	// 0x36cc07fd
- (BOOL)isCompressed;	// 0x36cc07cd
- (BOOL)isEncrypted;	// 0x36cc07e5
- (BOOL)isReadable;	// 0x36cc01d9
- (void)readZip64ExtraField:(const char *)field size:(unsigned long)size;	// 0x36cc08d5
- (void)setCompressionFlags:(unsigned short)flags;	// 0x36cc0a15
- (void)setCryptoKey:(id)key;	// 0x36cc0a91
// converted property setter: - (void)setDataLength:(long long)length;	// 0x36cc0acd
@end

