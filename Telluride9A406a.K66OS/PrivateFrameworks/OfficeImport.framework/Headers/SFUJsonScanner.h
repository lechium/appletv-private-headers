/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"

@class NSString, NSCharacterSet;

__attribute__((visibility("hidden")))
@interface SFUJsonScanner : NSObject {
@private
	NSString *mString;	// 4 = 0x4
	unsigned short *mCharacters;	// 8 = 0x8
	unsigned mLength;	// 12 = 0xc
	unsigned mOffset;	// 16 = 0x10
	NSCharacterSet *mWhitespaceCharacterSet;	// 20 = 0x14
	NSCharacterSet *mDecimalDigitCharacterSet;	// 24 = 0x18
}
- (id)initWithString:(id)string;	// 0x32afd181
- (void)appendCharactersInRange:(NSRange)range toString:(id)string;	// 0x32afcf59
- (void)dealloc;	// 0x32afd0f9
- (unsigned short)nextCharacter;	// 0x32afc661
- (id)parseArray;	// 0x32afcb39
- (BOOL)parseConstantString:(const char *)string;	// 0x32afcb05
- (id)parseDictionary;	// 0x32afcc41
- (id)parseFalse;	// 0x32afca25
- (id)parseHexCharacter;	// 0x32afcfe5
- (id)parseNull;	// 0x32afcabd
- (id)parseNumber;	// 0x32afc809
- (id)parseObject;	// 0x32afc751
- (id)parseString;	// 0x32afcd85
- (id)parseTrue;	// 0x32afca71
- (void)skipWhitespace;	// 0x32afd081
@end

