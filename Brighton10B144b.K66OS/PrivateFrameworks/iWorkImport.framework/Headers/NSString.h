/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <NSString.h> // Unknown library


@interface NSString (GQCustomNumberFormatAdditions)
+ (id)customNumberFormatDecimalFormatStringWithDigits:(unsigned)digits digitString:(id)string includeDecimalSeparator:(BOOL)separator;	// 0x368c4561
+ (id)customNumberFormatDecimalTokenDisplayStringWithDigits:(unsigned)digits digitString:(id)string;	// 0x368c445d
+ (id)customNumberFormatDecimalTokenRepresentedStringWithDigits:(unsigned)digits digitString:(id)string;	// 0x368c44f5
+ (id)customNumberFormatIntegerFormatStringWithDigits:(unsigned)digits digitString:(id)string;	// 0x368c43f1
+ (id)customNumberFormatIntegerTokenDisplayStringWithDigits:(unsigned)digits separator:(BOOL)separator digitString:(id)string;	// 0x368c4299
+ (id)customNumberFormatIntegerTokenRepresentedStringWithDigits:(unsigned)digits separator:(BOOL)separator digitString:(id)string;	// 0x368c4361
+ (id)customNumberFormatTokenStringOfType:(int)type content:(id)content;	// 0x368c3f0d
- (id)currencyCodeFromCustomNumberFormatCurrencyToken;	// 0x368c4659
- (BOOL)customFormatIntegerTokenUsesSeparator;	// 0x368c413d
- (id)digitPlaceholderStringInDigitToken;	// 0x368c45d9
- (id)formatStringFromCustomNumberFormatScaleToken;	// 0x368c46d9
- (int)fractionAccuracyFromCustomNumberFormatFractionToken;	// 0x368c46ad
- (BOOL)isSpecialCustomNumberFormatToken;	// 0x368c3fc5
- (BOOL)isSpecialCustomNumberFormatTokenOfType:(int)type;	// 0x368c400d
- (unsigned)numberOfDigitsInCustomNumberFormatDecimalToken;	// 0x368c4445
- (unsigned)numberOfDigitsInCustomNumberFormatIntegerToken;	// 0x368c40d9
- (unsigned short)scaleCharacterInCustomNumberFormatScaleToken;	// 0x368c46ed
- (unsigned short)spaceCharacterInCustomNumberFormatSpaceToken;	// 0x368c4705
- (id)stringByInsertingGroupingSeparators;	// 0x368c4175
@end

@interface NSString (GQFormatStringUtilities)
+ (id)numberSymbols;	// 0x36923af1
- (id)createRangesOfEscapedCharactersInNumberFormatPattern;	// 0x36923eb9
- (id)createStringBySubstitutingCharactersCFNumberFormatterDoesntUnderstand;	// 0x36923b41
- (int)indexOfFirstNonPrefixCharacterInNumberFormatSubpattern;	// 0x36924429
- (int)indexOfLastNonSuffixCharacterInNumberFormatSubpattern;	// 0x36924339
- (int)indexOfNumberFormatSubpatternSeparator;	// 0x36924125
- (BOOL)isNumberFormatPattern;	// 0x36923e41
- (id)negativeSubpatternOfNumberFormatPattern;	// 0x369242a9
- (id)numberPortionOfNumberFormatSubpattern;	// 0x369242ed
- (id)positiveSubpatternOfNumberFormatPattern;	// 0x3692426d
- (id)prefixOfNumberFormatSubpattern;	// 0x369244fd
- (id)stringByRemovingEscapedCharactersFromNumberFormatPattern;	// 0x36924011
- (id)suffixOfNumberFormatSubpattern;	// 0x369243f9
@end

