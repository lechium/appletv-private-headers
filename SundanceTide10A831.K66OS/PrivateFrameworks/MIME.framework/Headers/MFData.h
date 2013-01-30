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
+ (void)setDefaultMappingThresholdInBytes:(unsigned)bytes;	// 0x328931fd
- (id)init;	// 0x3289320d
- (id)initWithBytes:(const void *)bytes length:(unsigned)length;	// 0x328932b1
- (id)initWithBytesNoCopy:(void *)bytesNoCopy length:(unsigned)length;	// 0x32893759
- (id)initWithBytesNoCopy:(void *)bytesNoCopy length:(unsigned)length freeWhenDone:(BOOL)done;	// 0x3289377d
- (id)initWithContentsOfFile:(id)file;	// 0x32893b15
- (id)initWithContentsOfFile:(id)file options:(unsigned)options error:(id *)error;	// 0x328939a9
- (id)initWithContentsOfMappedFile:(id)mappedFile;	// 0x32893921
- (id)initWithContentsOfURL:(id)url;	// 0x32893901
- (id)initWithContentsOfURL:(id)url options:(unsigned)options error:(id *)error;	// 0x32893819
- (id)initWithData:(id)data;	// 0x32893dad
- (id)initWithImmutableData:(id)immutableData;	// 0x32893dc1
- (id)_initWithData:(id)data maybeMutable:(BOOL)aMutable;	// 0x32893c2d
- (id)_initWithFile:(id)file;	// 0x32893221
- (id)_initWithRange:(NSRange)range from:(id)from retainingParent:(BOOL)parent;	// 0x32893fed
- (const void *)bytes;	// 0x32893f55
- (id)copyWithZone:(NSZone *)zone;	// 0x32893dd5
- (id)data;	// 0x32894169
- (void)dealloc;	// 0x32893e51
- (unsigned)length;	// 0x32893f35
- (BOOL)mf_immutable;	// 0x3289437d
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x32893e19
- (id)subdataWithRange:(NSRange)range;	// 0x32893f75
- (BOOL)writeToFile:(id)file atomically:(BOOL)atomically;	// 0x328941a1
- (BOOL)writeToFile:(id)file options:(unsigned)options error:(id *)error;	// 0x328941f9
- (BOOL)writeToURL:(id)url atomically:(BOOL)atomically;	// 0x328941cd
- (BOOL)writeToURL:(id)url options:(unsigned)options error:(id *)error;	// 0x328942f1
@end
