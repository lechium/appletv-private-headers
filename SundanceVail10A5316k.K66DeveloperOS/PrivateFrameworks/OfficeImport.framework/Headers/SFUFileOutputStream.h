/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "SFUOutputStream.h"
#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface SFUFileOutputStream : NSObject <SFUOutputStream> {
@private
	FILE *mFile;	// 4 = 0x4
	NSString *mPath;	// 8 = 0x8
}
- (id)initWithPath:(id)path;	// 0x312cb92d
- (BOOL)canCreateInputStream;	// 0x312cbd81
- (BOOL)canSeek;	// 0x312cbca1
- (void)close;	// 0x312cbd89
- (id)closeLocalStream;	// 0x312cbdad
- (void)dealloc;	// 0x312cba71
- (id)inputStream;	// 0x312cbd85
- (long long)offset;	// 0x312cbbc1
- (id)path;	// 0x312cbad5
- (void)seekToOffset:(long long)offset whence:(int)whence;	// 0x312cbca5
- (void)writeBuffer:(const char *)buffer size:(unsigned long)size;	// 0x312cbae5
@end

