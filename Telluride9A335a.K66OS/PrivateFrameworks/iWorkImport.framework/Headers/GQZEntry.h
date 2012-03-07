/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import <NSObject.h> // Unknown library

@protocol GQZArchiveInputStream;

__attribute__((visibility("hidden")))
@interface GQZEntry : NSObject {
@private
	id<GQZArchiveInputStream> mInput;	// 4 = 0x4
	int mCompressionMethod;	// 8 = 0x8
	unsigned long long mCompressedSize;	// 12 = 0xc
	unsigned long long mUncompressedSize;	// 20 = 0x14
	unsigned long long mOffset;	// 28 = 0x1c
	unsigned mCrc;	// 36 = 0x24
}
- (id)initFromCentralFileHeader:(const char *)centralFileHeader inputStream:(id)stream;	// 0x304abfc5
- (id)data;	// 0x304abd19
- (void)dealloc;	// 0x304ac231
- (id)inputStream;	// 0x304abb35
- (void)readZip64ExtraField:(const char *)field size:(unsigned long)size;	// 0x304abe69
- (xmlDoc *)recoverXmlDocument;	// 0x304ac3e9
- (xmlDoc *)xmlDocument;	// 0x304ac439
- (xmlTextReader *)xmlReader:(BOOL)reader;	// 0x304ac27d
@end
