/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSSimpleCString.h"
#import "Foundation-Structs.h"


@interface NSConstantString : NSSimpleCString {
}
- (id)initWithCharactersNoCopy:(unsigned short *)charactersNoCopy length:(unsigned)length;	// 0x3736bb19
- (const char *)_fastCStringContents:(BOOL)contents;	// 0x3736bcf5
- (BOOL)_isDeallocating;	// 0x3736bf05
- (BOOL)_tryRetain;	// 0x3736bf01
- (id)autorelease;	// 0x3736bef9
- (const char *)cString;	// 0x3736bf4d
- (unsigned)cStringLength;	// 0x3736bc75
- (BOOL)canBeConvertedToEncoding:(unsigned)encoding;	// 0x3736bca9
- (unsigned short)characterAtIndex:(unsigned)index;	// 0x3736bb35
- (int)compare:(id)compare options:(unsigned)options range:(NSRange)range;	// 0x3736be95
- (id)copy;	// 0x3736bced
- (id)copyWithZone:(NSZone *)zone;	// 0x3736bcf1
- (void)dealloc;	// 0x3736bf15
- (unsigned)fastestEncoding;	// 0x3736bc89
- (void)finalize;	// 0x3736bf31
- (void)getCharacters:(unsigned short *)characters range:(NSRange)range;	// 0x3736bbb9
- (unsigned)hash;	// 0x3736bed5
- (BOOL)isEqual:(id)equal;	// 0x3736bd11
- (BOOL)isEqualToString:(id)string;	// 0x3736bde1
- (unsigned)length;	// 0x3736bc61
- (const char *)lossyCString;	// 0x3736bf61
- (oneway void)release;	// 0x3736bf11
- (id)retain;	// 0x3736befd
- (unsigned)retainCount;	// 0x3736bf09
- (unsigned)smallestEncoding;	// 0x3736bc99
@end
