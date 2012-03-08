/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSData.h> // Unknown library

@class NSString, NSDate;

@interface NSPageData : NSData {
@private
	NSData *data;	// 4 = 0x4
	NSDate *_originalFileModDate;	// 8 = 0x8
	NSString *_originalFilePath;	// 12 = 0xc
}
@property(readonly, retain) NSData *data;	// G=0x35ecf95d; converted property
+ (int)_umask;	// 0x35ecf065
+ (void)initialize;	// 0x35ecf01d
- (id)init;	// 0x35ecf0b5
- (id)initFromSerializerStream:(id)serializerStream length:(unsigned)length;	// 0x35ecf85d
- (id)initWithBytes:(const void *)bytes length:(unsigned)length;	// 0x35ecf14d
- (id)initWithBytesNoCopy:(void *)bytesNoCopy length:(unsigned)length;	// 0x35ecf0fd
- (id)initWithContentsOfFile:(id)file;	// 0x35ecf24d
- (id)initWithContentsOfMappedFile:(id)mappedFile;	// 0x35ecf301
- (id)initWithContentsOfMappedFile:(id)mappedFile withFileAttributes:(id)fileAttributes;	// 0x35ecf315
- (id)initWithData:(id)data;	// 0x35ecf19d
- (id)initWithDataNoCopy:(id)dataNoCopy;	// 0x35ecf931
- (id)_mappedFile;	// 0x35ecf3f5
- (void)_setOriginalFileInfoFromFileAttributes:(id)fileAttributes;	// 0x35ecf1e9
- (const void *)bytes;	// 0x35ecf095
// converted property getter: - (id)data;	// 0x35ecf95d
- (void)dealloc;	// 0x35ecf405
- (id)deserializer;	// 0x35ecf8ad
- (unsigned)length;	// 0x35ecf075
- (unsigned)writeFd:(int)fd;	// 0x35ecf995
- (unsigned)writeFile:(id)file;	// 0x35ecf9f1
- (unsigned)writePath:(id)path docInfo:(id)info errorHandler:(id)handler remapContents:(BOOL)contents hardLinkPath:(id)path5;	// 0x35ecf479
@end

