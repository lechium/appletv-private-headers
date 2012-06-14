/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface Buffer : NSObject {
@private
	char *buf;	// 4 = 0x4
	int index;	// 8 = 0x8
	int bitMask;	// 12 = 0xc
	int length;	// 16 = 0x10
}
- (id)initWithData:(char *)data length:(unsigned)length;	// 0x332f3810
- (id)initWithData:(char *)data offset:(unsigned)offset length:(unsigned)length;	// 0x332f3ae0
- (int)getBits:(unsigned)bits;	// 0x332f364c
- (int)getByte;	// 0x332f3760
- (id)getBytes:(unsigned)bytes;	// 0x332f3a3c
- (int)getIndex;	// 0x332f35e8
- (int)getInt;	// 0x332f37a8
- (int)getLength;	// 0x332f35d4
- (long long)getLong;	// 0x332f383c
- (id)getNullTerminatedString;	// 0x332f3940
- (int)getShort;	// 0x332f3714
- (id)getString:(unsigned)string;	// 0x332f388c
- (char *)getUnreadData;	// 0x332f3624
- (int)getUnreadLength;	// 0x332f35fc
@end
