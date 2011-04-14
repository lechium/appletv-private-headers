/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSString.h"
#import "Foundation-Structs.h"


@interface NSMutableString : NSString {
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x32418285
+ (void)initialize;	// 0x324289f9
+ (id)stringWithCapacity:(unsigned)capacity;	// 0x32418199
- (id)initWithCapacity:(unsigned)capacity;	// 0x32488de5
- (void)_cfAppendCString:(const char *)string length:(int)length;	// 0x32458459
- (void)_cfCapitalize:(const void *)capitalize;	// 0x3245854d
- (void)_cfLowercase:(const void *)lowercase;	// 0x324584a5
- (void)_cfNormalize:(long)normalize;	// 0x32458789
- (void)_cfPad:(CFStringRef)pad length:(unsigned)length padIndex:(unsigned)index;	// 0x324585a1
- (void)_cfTrim:(CFStringRef)trim;	// 0x324586a9
- (void)_cfTrimWS;	// 0x324580c5
- (void)_cfUppercase:(const void *)uppercase;	// 0x324584f9
- (unsigned)_replaceOccurrencesOfRegularExpressionPattern:(id)regularExpressionPattern withTemplate:(id)aTemplate options:(unsigned)options range:(NSRange)range;	// 0x324ea2dd
- (void)_trimWithCharacterSet:(id)characterSet;	// 0x324588a9
- (void)appendCharacters:(const unsigned short *)characters length:(unsigned)length;	// 0x3245840d
- (void)appendFormat:(id)format;	// 0x324890dd
- (void)appendString:(id)string;	// 0x32488d7d
- (Class)classForCoder;	// 0x32488bfd
- (void)deleteCharactersInRange:(NSRange)range;	// 0x32488d55
- (void)insertString:(id)string atIndex:(unsigned)index;	// 0x32488dc1
- (void)replaceCharactersInRange:(NSRange)range withCString:(const char *)cstring length:(unsigned)length;	// 0x32488ce5
- (void)replaceCharactersInRange:(NSRange)range withCharacters:(const unsigned short *)characters length:(unsigned)length;	// 0x32488c75
- (void)replaceCharactersInRange:(NSRange)range withString:(id)string;	// 0x32488c5d
- (unsigned)replaceOccurrencesOfString:(id)string withString:(id)string2 options:(unsigned)options range:(NSRange)range;	// 0x324891bd
- (void)setString:(id)string;	// 0x32489175
@end

