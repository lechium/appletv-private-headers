/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface SFUDataRepresentation : NSObject {
@private
	BOOL mHasHash;	// 4 = 0x4
	unsigned mHash;	// 8 = 0x8
}
- (id)bufferedInputStream;	// 0x31a2ab55
- (id)bufferedInputStreamWithBufferSize:(unsigned long)bufferSize;	// 0x31b717f1
- (CGDataProviderRef)cgDataProvider;	// 0x31b71c49
- (int)compare:(id)compare;	// 0x31b71ee9
- (long long)dataLength;	// 0x31b718e1
- (long long)encodedLength;	// 0x31b718cd
- (BOOL)hasSameLocationAs:(id)as;	// 0x31b71721
- (unsigned)hash;	// 0x31b71d05
- (id)inputStream;	// 0x31b71851
- (BOOL)isEncrypted;	// 0x31b7171d
- (BOOL)isEqual:(id)equal;	// 0x31b720d5
- (BOOL)isReadable;	// 0x31b71719
- (unsigned long)readIntoData:(id)data;	// 0x31b7195d
- (xmlDoc *)xmlDocument;	// 0x31a2c485
- (xmlTextReader *)xmlReader;	// 0x31a4bf61
- (xmlTextReader *)xmlReaderForGzippedData;	// 0x31b717d9
- (xmlTextReader *)xmlReaderForGzippedDataWithInputStream:(id *)inputStream;	// 0x31b71b15
@end

