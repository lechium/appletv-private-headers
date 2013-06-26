/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import "MIME-Structs.h"
#import <Foundation/NSMutableData.h>
#import "NSCopying.h"
#import "NSMutableCopying.h"


@interface MFMutableData : NSMutableData <NSCopying, NSMutableCopying> {
	void *_bytes;	// 4 = 0x4
	unsigned _length;	// 8 = 0x8
	unsigned _mappedLength;	// 12 = 0xc
	unsigned _capacity;	// 16 = 0x10
	unsigned _threshold;	// 20 = 0x14
	char *_path;	// 24 = 0x18
	int _fd;	// 28 = 0x1c
	unsigned _flushFrom;	// 32 = 0x20
	BOOL _flush;	// 36 = 0x24
	BOOL _immutable;	// 37 = 0x25
	BOOL _vm;	// 38 = 0x26
}
@property(assign) unsigned length;	// G=0x312cb655; S=0x312cb98d; converted property
- (id)init;	// 0x312caf01
- (id)initWithBytes:(const void *)bytes length:(unsigned)length;	// 0x312caf15
- (id)initWithBytesNoCopy:(void *)bytesNoCopy length:(unsigned)length;	// 0x312cb239
- (id)initWithBytesNoCopy:(void *)bytesNoCopy length:(unsigned)length freeWhenDone:(BOOL)done;	// 0x312cb249
- (id)initWithCapacity:(unsigned)capacity;	// 0x312cb439
- (id)initWithContentsOfFile:(id)file;	// 0x312cb3d1
- (id)initWithContentsOfFile:(id)file options:(unsigned)options error:(id *)error;	// 0x312cb319
- (id)initWithContentsOfMappedFile:(id)mappedFile;	// 0x312cb2f9
- (id)initWithContentsOfURL:(id)url;	// 0x312cb2d9
- (id)initWithContentsOfURL:(id)url options:(unsigned)options error:(id *)error;	// 0x312cb275
- (id)initWithData:(id)data;	// 0x312cb3f1
- (id)initWithLength:(unsigned)length;	// 0x312cb4c9
- (void)_flushToDisk:(unsigned)disk capacity:(unsigned)capacity;	// 0x312cbfe5
- (id)_initWithFd:(int)fd path:(id)path mutable:(BOOL)aMutable;	// 0x312cb191
- (void)_mapMutableData:(BOOL)data;	// 0x312cc215
- (void)appendBytes:(const void *)bytes length:(unsigned)length;	// 0x312cb795
- (void)appendData:(id)data;	// 0x312cb891
- (const void *)bytes;	// 0x312cb665
- (id)copyWithZone:(NSZone *)zone;	// 0x312cb541
- (void)dealloc;	// 0x312cb5bd
// converted property getter: - (unsigned)length;	// 0x312cb655
- (BOOL)mf_immutable;	// 0x312cc37d
- (void)mf_makeImmutable;	// 0x312cbcc5
- (void *)mutableBytes;	// 0x312cb6c9
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x312cb579
// converted property setter: - (void)setLength:(unsigned)length;	// 0x312cb98d
- (void)setMappingThreshold:(unsigned)threshold;	// 0x312cbc69
- (id)subdataWithRange:(NSRange)range;	// 0x312cb8d9
- (BOOL)writeToFile:(id)file atomically:(BOOL)atomically;	// 0x312cbd39
- (BOOL)writeToFile:(id)file options:(unsigned)options error:(id *)error;	// 0x312cbd91
- (BOOL)writeToURL:(id)url atomically:(BOOL)atomically;	// 0x312cbd65
- (BOOL)writeToURL:(id)url options:(unsigned)options error:(id *)error;	// 0x312cbf59
@end
