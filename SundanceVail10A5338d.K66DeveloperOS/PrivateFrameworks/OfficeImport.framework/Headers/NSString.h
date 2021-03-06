/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSString.h> // Unknown library


@interface NSString (CSVStringExtensions)
- (id)_copyCsvRows:(unsigned *)rows usingDelimiter:(id)delimiter columnCountIsConstant:(BOOL *)constant;	// 0x33b3df21
- (id)copyCsvRows:(unsigned *)rows;	// 0x33b3e30d
@end

@interface NSString (SFAAdditions)
+ (id)stringWithXmlChars:(const char *)xmlChars;	// 0x33a45491
- (id)initFromXmlNode:(xmlNode *)xmlNode attribute:(const char *)attribute ns:(const xmlNs *)ns;	// 0x33b4c429
- (id)initWithXmlChars:(const char *)xmlChars;	// 0x33a454cd
@end

@interface NSString (CPStringAdditions)
+ (id)stringWithBytes:(const void *)bytes length:(unsigned)length codePointMapper:(/*function-pointer*/ void *)mapper;	// 0x33b09bc1
+ (id)stringWithBytes:(const void *)bytes length:(unsigned)length fontFamilyName:(id)name;	// 0x33b08029
- (BOOL)startsWithString:(id)string;	// 0x33a34a65
- (id)stringByFixingSymbolCharacters;	// 0x33b50d25
- (id)stringByFixingSymbolCharactersForFont:(CTFontRef)font;	// 0x33b50e09
@end

@interface NSString (CPStringAdditions_XmlString)
+ (id)stringWithXmlString:(const char *)xmlString;	// 0x33a2f905
- (id)initFromXmlNode:(xmlNode *)xmlNode ns:(const char *)ns attributeName:(const char *)name;	// 0x33a8acc1
- (id)initWithContentOfXmlNode:(xmlNode *)xmlNode;	// 0x33a29425
- (id)initWithValueOfXmlAttribute:(xmlAttr *)xmlAttribute;	// 0x33a28f79
- (id)initWithXmlString:(const char *)xmlString;	// 0x33950d89
- (id)componentsSeparatedByWhitespace;	// 0x33a93dd5
- (const char *)xmlString;	// 0x33a3e2cd
@end

@interface NSString (OCBStringAdditions)
+ (id)stringWithCsString:(const CsString *)csString;	// 0x339680ed
+ (id)stringWithOcText:(const OcText *)ocText;	// 0x339db169
- (id)initWithCsString:(const CsString *)csString;	// 0x33964ab5
- (id)initWithOcText:(const OcText *)ocText;	// 0x339db1a5
- (void)copyToCsString:(CsString *)csString;	// 0x33baeba5
- (void)copyToOcText:(OcText *)ocText;	// 0x33ace765
- (void)copyToOcText:(OcText *)ocText encoding:(int)encoding;	// 0x33ace779
- (id)dataUsingWordEncoding:(int)encoding;	// 0x33ace84d
- (int)languageTypeAtIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x33baec59
@end

@interface NSString (Crypto)
- (id)getDataUsingOfficeCryptographicEncoding;	// 0x33bb458d
@end

@interface NSString (WideStringCat)
+ (id)stringWithWideCString:(int *)wideCString;	// 0x33bbd1b1
- (id)initWithWideCString:(int *)wideCString;	// 0x33bbd129
- (int *)cWideString;	// 0x33bbd231
@end

@interface NSString (OCStringAdditions)
+ (id)mapString:(id)string;	// 0x33bbd415
+ (bool)skipString:(id)string;	// 0x33bbd51d
@end

@interface NSString (TSUAdditions)
+ (id)listSeparator;	// 0x33c15a31
+ (id)stringByBase64EncodingBytes:(const char *)bytes length:(int)length;	// 0x33c17051
+ (id)stringByBase64EncodingBytes:(const char *)bytes length:(int)length breakLines:(BOOL)lines;	// 0x33c17081
+ (id)stringByHexEncodingData:(id)data;	// 0x33c175d9
+ (id)stringByIndentingString:(id)string;	// 0x33c154d5
+ (id)stringByIndentingString:(id)string times:(unsigned)times;	// 0x33c153e9
+ (id)stringWithUUID;	// 0x33c153b1
+ (id)stringWithXMLString:(const char *)xmlstring;	// 0x33c17349
- (BOOL)containsOnlyCharactersFromSet:(id)set;	// 0x33c17521
- (unsigned)countInstancesOfString:(id)string options:(unsigned)options;	// 0x33c164bd
- (id)encodeStringBase64;	// 0x33c17241
- (id)escapeForIcuRegex;	// 0x33c16591
- (id)escapeXML;	// 0x33c17369
- (BOOL)isChildOfPath:(id)path;	// 0x33c169dd
- (BOOL)isDescendantOfPath:(id)path;	// 0x33c168f9
- (id)md5Hash;	// 0x33c16071
- (id)stringByAddingCSVEscapes;	// 0x33c15af9
- (id)stringByExpandingTableFormatting;	// 0x33c154e9
- (id)stringByFixingBrokenSurrogatePairs;	// 0x33c15ea5
- (id)stringByMakingFirstCharacterLowercase;	// 0x33c17285
- (id)stringByRemovingCharactersInSet:(id)set;	// 0x33c16325
- (id)stringByRemovingCharactersInSet:(id)set options:(unsigned)options;	// 0x33c1617d
- (id)stringByReplacingInstancesOfCharactersInSet:(id)set withString:(id)string;	// 0x33c16339
- (id)stringByTrimmingCharactersInSetFromFront:(id)front;	// 0x33c16fe1
- (id)stringByUniquingPathInsideDirectory:(id)directory;	// 0x33c15c9d
- (id)stringQuotedIfContainsCharacterSet:(id)set;	// 0x33c15965
- (id)stringWithPathRelativeTo:(id)to;	// 0x33c16d01
- (id)stringWithPathRelativeTo:(id)to allowBacktracking:(BOOL)backtracking;	// 0x33c16e81
- (id)stringWithRealpath;	// 0x33c16b79
- (id)substringWithComposedCharacterSequencesToFileSystemLength:(unsigned)fileSystemLength;	// 0x33c16c41
- (id)substringWithComposedCharacterSequencesToIndex:(unsigned)index;	// 0x33c16bc5
- (id)tolerantStringByAppendingPathExtension:(id)extension;	// 0x33c1756d
- (id)unescapeXML;	// 0x33c17445
@end

@interface NSString (EmailAddressAdditions)
- (BOOL)isLegalEmailAddress;	// 0x33c178bd
- (id)uncommentedAddress;	// 0x33c17681
- (id)uncommentedAddressRespectingGroups;	// 0x33c17849
@end

@interface NSString (SFUCryptoUtilsAdditions)
- (id)sha256HexHashString;	// 0x33c17a01
@end

@interface NSString (TSUVersionComparison)
- (int)compareToVersionString:(id)versionString;	// 0x33c17ac5
@end

@interface NSString (NSURLAdditionsAdditions)
- (BOOL)containsPercentEscapes;	// 0x33c17f71
- (id)stringByPercentEscaping;	// 0x33c18175
@end

@interface NSString (SFUJsonAdditions)
- (void)appendJsonStringToString:(id)string;	// 0x33c1dd25
@end

@interface NSString (TSUCustomNumberFormatAdditions)
+ (id)customNumberFormatDecimalFormatStringWithDigits:(unsigned)digits digitString:(id)string includeDecimalSeparator:(BOOL)separator;	// 0x33c26a6d
+ (id)customNumberFormatDecimalTokenDisplayStringWithDigits:(unsigned)digits digitString:(id)string;	// 0x33c26965
+ (id)customNumberFormatDecimalTokenRepresentedStringWithDigits:(unsigned)digits digitString:(id)string;	// 0x33c269fd
+ (id)customNumberFormatIntegerFormatStringWithDigits:(unsigned)digits digitString:(id)string;	// 0x33c26869
+ (id)customNumberFormatIntegerTokenDisplayStringWithDigits:(unsigned)digits separator:(BOOL)separator digitString:(id)string;	// 0x33c26701
+ (id)customNumberFormatIntegerTokenRepresentedStringWithDigits:(unsigned)digits separator:(BOOL)separator digitString:(id)string;	// 0x33c267d9
+ (id)customNumberFormatTokenStringOfType:(int)type content:(id)content;	// 0x33c26355
- (id)currencyCodeFromCustomNumberFormatCurrencyToken;	// 0x33c26b65
- (BOOL)customFormatIntegerTokenUsesSeparator;	// 0x33c26551
- (id)digitPlaceholderStringInDigitToken;	// 0x33c26ae5
- (id)formatStringFromCustomNumberFormatScaleToken;	// 0x33c26be5
- (int)fractionAccuracyFromCustomNumberFormatFractionToken;	// 0x33c26bb9
- (BOOL)isSpecialCustomNumberFormatToken;	// 0x33c263b1
- (BOOL)isSpecialCustomNumberFormatTokenOfType:(int)type;	// 0x33c263f9
- (unsigned)numberOfDigitsInCustomNumberFormatDecimalToken;	// 0x33c268bd
- (unsigned)numberOfDigitsInCustomNumberFormatIntegerToken;	// 0x33c26465
- (unsigned short)scaleCharacterInCustomNumberFormatScaleToken;	// 0x33c26bf9
- (unsigned short)spaceCharacterInCustomNumberFormatSpaceToken;	// 0x33c26c11
- (id)stringByInsertingFormatGroupingSeparators;	// 0x33c26615
@end

@interface NSString (TSUDateFormatStringUtilities)
- (id)stringByReplacing2DigitYearStringWith4DigitYearString;	// 0x33c26fb9
- (id)stringByReplacing4DigitYearStringWith2DigitYearString;	// 0x33c26f41
@end

@interface NSString (TSUNumberFormatStringUtilities)
+ (id)numberSymbols;	// 0x33c2d9f9
- (id)createRangesOfEscapedCharactersInNumberFormatPattern;	// 0x33c2e0d5
- (id)createStringBySubstitutingCharactersCFNumberFormatterDoesntUnderstand;	// 0x33c2db25
- (int)indexOfFirstNonPrefixCharacterInNumberFormatSubpattern;	// 0x33c2e6b9
- (int)indexOfLastNonSuffixCharacterInNumberFormatSubpattern;	// 0x33c2e555
- (int)indexOfNumberFormatSubpatternSeparator;	// 0x33c2e341
- (BOOL)isNumberFormatPattern;	// 0x33c2e05d
- (id)negativeSubpatternOfNumberFormatPattern;	// 0x33c2e4c5
- (id)numberPortionOfNumberFormatSubpattern;	// 0x33c2e509
- (id)positiveSubpatternOfNumberFormatPattern;	// 0x33c2e489
- (id)prefixOfNumberFormatSubpattern;	// 0x33c2e7fd
- (id)stringByRemovingEscapedCharactersFromNumberFormatPattern;	// 0x33c2e22d
- (id)suffixOfNumberFormatSubpattern;	// 0x33c2e689
@end

@interface NSString (NSStringAppKitStubAdditions)
- (NSRange)oi_rangeOfCharactersFromSet:(id)set index:(int)index;	// 0x33a862c1
- (double)oi_realSizeWithFontName:(id)fontName size:(int)size bold:(bool)bold italic:(bool)italic;	// 0x33c38879
- (double)oi_sizeWithFontName:(id)fontName size:(int)size;	// 0x339d1c99
- (double)oi_sizeWithFontName:(id)fontName size:(int)size bold:(bool)bold italic:(bool)italic;	// 0x339d1cc1
@end

