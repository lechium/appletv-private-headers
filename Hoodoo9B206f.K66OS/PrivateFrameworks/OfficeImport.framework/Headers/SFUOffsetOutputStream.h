/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "SFUOutputStream.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SFUOffsetOutputStream : NSObject <SFUOutputStream> {
@private
	id<SFUOutputStream> mOutputStream;	// 4 = 0x4
	long long mInitialOffset;	// 8 = 0x8
}
- (id)initWithOutputStream:(id)outputStream;	// 0x34655c59
- (BOOL)canCreateInputStream;	// 0x34655e45
- (BOOL)canSeek;	// 0x34655ce9
- (void)close;	// 0x34655f09
- (id)closeLocalStream;	// 0x34655c49
- (void)dealloc;	// 0x34655f29
- (id)inputStream;	// 0x34655e69
- (long long)offset;	// 0x34655d59
- (void)seekToOffset:(long long)offset whence:(int)whence;	// 0x34655d0d
- (void)writeBuffer:(const char *)buffer size:(unsigned long)size;	// 0x34655cbd
@end
