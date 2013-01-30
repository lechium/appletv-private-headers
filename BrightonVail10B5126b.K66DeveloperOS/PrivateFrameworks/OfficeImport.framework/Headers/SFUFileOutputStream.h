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

@interface SFUFileOutputStream : NSObject <SFUOutputStream> {
	FILE *mFile;	// 4 = 0x4
	NSString *mPath;	// 8 = 0x8
}
- (id)initWithPath:(id)path;	// 0x34ac791d
- (BOOL)canCreateInputStream;	// 0x34ac7d71
- (BOOL)canSeek;	// 0x34ac7c91
- (void)close;	// 0x34ac7d79
- (id)closeLocalStream;	// 0x34ac7d9d
- (void)dealloc;	// 0x34ac7a61
- (id)inputStream;	// 0x34ac7d75
- (long long)offset;	// 0x34ac7bb1
- (id)path;	// 0x34ac7ac5
- (void)seekToOffset:(long long)offset whence:(int)whence;	// 0x34ac7c95
- (void)writeBuffer:(const char *)buffer size:(unsigned long)size;	// 0x34ac7ad5
@end
