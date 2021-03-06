/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "SFUOutputStream.h"
#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface SFUFileOutputStream : NSObject <SFUOutputStream> {
@private
	FILE *mFile;	// 4 = 0x4
	NSString *mPath;	// 8 = 0x8
}
- (id)initWithPath:(id)path;	// 0x34e5d0b1
- (BOOL)canCreateInputStream;	// 0x34e5d091
- (BOOL)canSeek;	// 0x34e5d08d
- (void)close;	// 0x34e5d1fd
- (id)closeLocalStream;	// 0x34e5d099
- (void)dealloc;	// 0x34e5d225
- (id)inputStream;	// 0x34e5d095
- (long long)offset;	// 0x34e5d379
- (id)path;	// 0x34e5d07d
- (void)seekToOffset:(long long)offset whence:(int)whence;	// 0x34e5d289
- (void)writeBuffer:(const char *)buffer size:(unsigned long)size;	// 0x34e5d459
@end

