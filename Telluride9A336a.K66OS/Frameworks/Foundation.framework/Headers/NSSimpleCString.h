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
+ (id)allocWithZone:(NSZone *)zone;	// 0x336e4c69
- (id)initWithCStringNoCopy:(char *)cstringNoCopy length:(unsigned)length;	// 0x336e4c71
- (const char *)_fastCStringContents:(BOOL)contents;	// 0x336e4ec5
- (id)_newSubstringWithRange:(NSRange)range zone:(NSZone *)zone;	// 0x336e5411
- (unsigned)cStringLength;	// 0x336e4dc5
- (BOOL)canBeConvertedToEncoding:(unsigned)encoding;	// 0x336e4df5
- (unsigned short)characterAtIndex:(unsigned)index;	// 0x336e4c91
- (int)compare:(id)compare options:(unsigned)options range:(NSRange)range;	// 0x336e5171
- (id)copyWithZone:(NSZone *)zone;	// 0x336e4e39
- (void)dealloc;	// 0x336e5729
- (unsigned)fastestEncoding;	// 0x336e4dd5
- (void)finalize;	// 0x336e576d
- (BOOL)getBytes:(void *)bytes maxLength:(unsigned)length usedLength:(unsigned *)length3 encoding:(unsigned)encoding options:(unsigned)options range:(NSRange)range remainingRange:(NSRange *)range7;	// 0x336e5361
- (void)getCharacters:(unsigned short *)characters range:(NSRange)range;	// 0x336e4d11
- (BOOL)hasPrefix:(id)prefix;	// 0x336e520d
- (BOOL)hasSuffix:(id)suffix;	// 0x336e52a5
- (unsigned)hash;	// 0x336e5341
- (BOOL)isEqual:(id)equal;	// 0x336e4ee1
- (BOOL)isEqualToString:(id)string;	// 0x336e50c5
- (unsigned)length;	// 0x336e4db5
- (unsigned)smallestEncoding;	// 0x336e4de5
- (id)stringByAppendingString:(id)string;	// 0x336e5509
@end
