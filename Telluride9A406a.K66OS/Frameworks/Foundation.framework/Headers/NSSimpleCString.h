/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSString.h"


@interface NSSimpleCString : NSString {
@private
	char *bytes;	// 4 = 0x4
	int numBytes;	// 8 = 0x8
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x35e6fc69
- (id)initWithCStringNoCopy:(char *)cstringNoCopy length:(unsigned)length;	// 0x35e6fc71
- (const char *)_fastCStringContents:(BOOL)contents;	// 0x35e6fec5
- (id)_newSubstringWithRange:(NSRange)range zone:(NSZone *)zone;	// 0x35e70411
- (unsigned)cStringLength;	// 0x35e6fdc5
- (BOOL)canBeConvertedToEncoding:(unsigned)encoding;	// 0x35e6fdf5
- (unsigned short)characterAtIndex:(unsigned)index;	// 0x35e6fc91
- (int)compare:(id)compare options:(unsigned)options range:(NSRange)range;	// 0x35e70171
- (id)copyWithZone:(NSZone *)zone;	// 0x35e6fe39
- (void)dealloc;	// 0x35e70729
- (unsigned)fastestEncoding;	// 0x35e6fdd5
- (void)finalize;	// 0x35e7076d
- (BOOL)getBytes:(void *)bytes maxLength:(unsigned)length usedLength:(unsigned *)length3 encoding:(unsigned)encoding options:(unsigned)options range:(NSRange)range remainingRange:(NSRange *)range7;	// 0x35e70361
- (void)getCharacters:(unsigned short *)characters range:(NSRange)range;	// 0x35e6fd11
- (BOOL)hasPrefix:(id)prefix;	// 0x35e7020d
- (BOOL)hasSuffix:(id)suffix;	// 0x35e702a5
- (unsigned)hash;	// 0x35e70341
- (BOOL)isEqual:(id)equal;	// 0x35e6fee1
- (BOOL)isEqualToString:(id)string;	// 0x35e700c5
- (unsigned)length;	// 0x35e6fdb5
- (unsigned)smallestEncoding;	// 0x35e6fde5
- (id)stringByAppendingString:(id)string;	// 0x35e70509
@end

