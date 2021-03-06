/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSData.h> // Unknown library
#import "NSCopying.h"
#import "NSMutableCopying.h"
#import "MIME-Structs.h"

@class NSString;

@interface MFData : NSData <NSCopying, NSMutableCopying> {
	NSData *_internal;	// 4 = 0x4
	NSString *_path;	// 8 = 0x8
	NSData *_parent;	// 12 = 0xc
	BOOL _subdata;	// 16 = 0x10
}
+ (void)setDefaultMappingThresholdInBytes:(unsigned)bytes;	// 0x345e61b5
- (id)init;	// 0x345e61c5
- (id)initWithBytes:(const void *)bytes length:(unsigned)length;	// 0x345e6269
- (id)initWithBytesNoCopy:(void *)bytesNoCopy length:(unsigned)length;	// 0x345e6711
- (id)initWithBytesNoCopy:(void *)bytesNoCopy length:(unsigned)length freeWhenDone:(BOOL)done;	// 0x345e6735
- (id)initWithContentsOfFile:(id)file;	// 0x345e6acd
- (id)initWithContentsOfFile:(id)file options:(unsigned)options error:(id *)error;	// 0x345e6961
- (id)initWithContentsOfMappedFile:(id)mappedFile;	// 0x345e68d9
- (id)initWithContentsOfURL:(id)url;	// 0x345e68b9
- (id)initWithContentsOfURL:(id)url options:(unsigned)options error:(id *)error;	// 0x345e67d1
- (id)initWithData:(id)data;	// 0x345e6d65
- (id)initWithImmutableData:(id)immutableData;	// 0x345e6d79
- (id)_initWithData:(id)data maybeMutable:(BOOL)aMutable;	// 0x345e6be5
- (id)_initWithFile:(id)file;	// 0x345e61d9
- (id)_initWithRange:(NSRange)range from:(id)from retainingParent:(BOOL)parent;	// 0x345e6fa5
- (const void *)bytes;	// 0x345e6f0d
- (id)copyWithZone:(NSZone *)zone;	// 0x345e6d8d
- (id)data;	// 0x345e7121
- (void)dealloc;	// 0x345e6e09
- (unsigned)length;	// 0x345e6eed
- (BOOL)mf_immutable;	// 0x345e7335
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x345e6dd1
- (id)subdataWithRange:(NSRange)range;	// 0x345e6f2d
- (BOOL)writeToFile:(id)file atomically:(BOOL)atomically;	// 0x345e7159
- (BOOL)writeToFile:(id)file options:(unsigned)options error:(id *)error;	// 0x345e71b1
- (BOOL)writeToURL:(id)url atomically:(BOOL)atomically;	// 0x345e7185
- (BOOL)writeToURL:(id)url options:(unsigned)options error:(id *)error;	// 0x345e72a9
@end

