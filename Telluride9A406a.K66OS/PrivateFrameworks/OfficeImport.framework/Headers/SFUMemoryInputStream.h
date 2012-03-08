/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "SFUBufferedInputStream.h"
#import <NSObject.h> // Unknown library

@class NSData;

__attribute__((visibility("hidden")))
@interface SFUMemoryInputStream : NSObject <SFUBufferedInputStream> {
@private
	NSData *mData;	// 4 = 0x4
	char *mStart;	// 8 = 0x8
	char *mCurrent;	// 12 = 0xc
	char *mEnd;	// 16 = 0x10
}
- (id)initWithData:(id)data;	// 0x32afded5
- (id)initWithData:(id)data offset:(unsigned long)offset length:(unsigned long)length;	// 0x329faed5
- (BOOL)canSeek;	// 0x32afdec5
- (void)close;	// 0x329fb139
- (id)closeLocalStream;	// 0x32afded1
- (void)dealloc;	// 0x329fb0ed
- (void)disableSystemCaching;	// 0x32afdec9
- (void)enableSystemCaching;	// 0x32afdecd
- (long long)offset;	// 0x32afdea1
- (unsigned long)readToBuffer:(char *)buffer size:(unsigned long)size;	// 0x32afdf79
- (unsigned long)readToOwnBuffer:(const char **)ownBuffer size:(unsigned long)size;	// 0x329fb0a9
- (void)seekToOffset:(long long)offset;	// 0x329fb011
- (BOOL)seekWithinBufferToOffset:(long long)offset;	// 0x32afdf11
@end

