/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSCopying.h"
#import "NSMutableCopying.h"
#import "NSCharacterSet.h"
#import "Foundation-Structs.h"


@interface NSMutableCharacterSet : NSCharacterSet <NSCopying, NSMutableCopying> {
}
+ (id)alphanumericCharacterSet;	// 0x34d8fd95
+ (id)capitalizedLetterCharacterSet;	// 0x34d8feb5
+ (id)characterSetWithBitmapRepresentation:(id)bitmapRepresentation;	// 0x34d8ff8d
+ (id)characterSetWithCharactersInString:(id)string;	// 0x34d6fdc1
+ (id)characterSetWithContentsOfFile:(id)file;	// 0x34d8ffd5
+ (id)characterSetWithRange:(NSRange)range;	// 0x34d8f935
+ (id)controlCharacterSet;	// 0x34d8fb9d
+ (id)decimalDigitCharacterSet;	// 0x34d6c499
+ (id)decomposableCharacterSet;	// 0x34d8fddd
+ (id)illegalCharacterSet;	// 0x34d8fe25
+ (id)letterCharacterSet;	// 0x34d8fc75
+ (id)lowercaseLetterCharacterSet;	// 0x34d8fcbd
+ (id)newlineCharacterSet;	// 0x34d8ff45
+ (id)nonBaseCharacterSet;	// 0x34d8fd4d
+ (id)punctuationCharacterSet;	// 0x34d8fe6d
+ (id)symbolCharacterSet;	// 0x34d8fefd
+ (id)uppercaseLetterCharacterSet;	// 0x34d8fd05
+ (id)whitespaceAndNewlineCharacterSet;	// 0x34d8fc2d
+ (id)whitespaceCharacterSet;	// 0x34d8fbe5
- (id)init;	// 0x34d758a1
- (id)initWithCoder:(id)coder;	// 0x34d9001d
- (void)addCharactersInRange:(NSRange)range;	// 0x34d8f9d9
- (void)addCharactersInString:(id)string;	// 0x34d8fa59
- (id)copyWithZone:(NSZone *)zone;	// 0x34d8f96d
- (void)formIntersectionWithCharacterSet:(id)characterSet;	// 0x34d8fb19
- (void)formUnionWithCharacterSet:(id)characterSet;	// 0x34d8fad9
- (void)invert;	// 0x34d8fb59
- (BOOL)isMutable;	// 0x34d8fb99
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x34d8f999
- (void)removeCharactersInRange:(NSRange)range;	// 0x34d8fa19
- (void)removeCharactersInString:(id)string;	// 0x34d8fa99
@end
