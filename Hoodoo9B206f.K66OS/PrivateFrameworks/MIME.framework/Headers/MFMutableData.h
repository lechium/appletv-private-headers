/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import "MIME-Structs.h"
#import <NSMutableData.h> // Unknown library
#import "NSMutableCopying.h"
#import "NSCopying.h"


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
@property(assign) unsigned length;	// G=0x35e4ef3d; S=0x35e507c5; converted property
- (id)init;	// 0x35e514b9
- (id)initWithBytes:(const void *)bytes length:(unsigned)length;	// 0x35e51225
- (id)initWithBytesNoCopy:(void *)bytesNoCopy length:(unsigned)length;	// 0x35e51175
- (id)initWithBytesNoCopy:(void *)bytesNoCopy length:(unsigned)length freeWhenDone:(BOOL)done;	// 0x35e51149
- (id)initWithCapacity:(unsigned)capacity;	// 0x35e50f29
- (id)initWithContentsOfFile:(id)file;	// 0x35e50fe1
- (id)initWithContentsOfFile:(id)file options:(unsigned)options error:(id *)error;	// 0x35e51001
- (id)initWithContentsOfMappedFile:(id)mappedFile;	// 0x35e51091
- (id)initWithContentsOfURL:(id)url;	// 0x35e510b1
- (id)initWithContentsOfURL:(id)url options:(unsigned)options error:(id *)error;	// 0x35e510d1
- (id)initWithData:(id)data;	// 0x35e50f8d
- (id)initWithLength:(unsigned)length;	// 0x35e50edd
- (void)_flushToDisk:(unsigned)disk capacity:(unsigned)capacity;	// 0x35e50191
- (id)_initWithFd:(int)fd path:(id)path mutable:(BOOL)aMutable;	// 0x35e51185
- (void)_mapMutableData:(BOOL)data;	// 0x35e4fffd
- (void)appendBytes:(const void *)bytes length:(unsigned)length;	// 0x35e50bb1
- (void)appendData:(id)data;	// 0x35e50b5d
- (const void *)bytes;	// 0x35e50d5d
- (id)copyWithZone:(NSZone *)zone;	// 0x35e50ea5
- (void)dealloc;	// 0x35e50dc5
// converted property getter: - (unsigned)length;	// 0x35e4ef3d
- (BOOL)mf_immutable;	// 0x35e4ef4d
- (void)mf_makeImmutable;	// 0x35e506f5
- (void *)mutableBytes;	// 0x35e50c85
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x35e50e65
// converted property setter: - (void)setLength:(unsigned)length;	// 0x35e507c5
- (void)setMappingThreshold:(unsigned)threshold;	// 0x35e50765
- (id)subdataWithRange:(NSRange)range;	// 0x35e50aa1
- (BOOL)writeToFile:(id)file atomically:(BOOL)atomically;	// 0x35e506c5
- (BOOL)writeToFile:(id)file options:(unsigned)options error:(id *)error;	// 0x35e50495
- (BOOL)writeToURL:(id)url atomically:(BOOL)atomically;	// 0x35e50695
- (BOOL)writeToURL:(id)url options:(unsigned)options error:(id *)error;	// 0x35e50405
@end
