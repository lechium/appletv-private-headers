/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSString.h> // Unknown library


@interface NSString (CSVStringExtensions)
- (id)_copyCsvRows:(unsigned *)rows usingDelimiter:(id)delimiter columnCountIsConstant:(BOOL *)constant;	// 0x311ecf21
- (id)copyCsvRows:(unsigned *)rows;	// 0x311ed30d
@end

@interface NSString (SFAAdditions)
+ (id)stringWithXmlChars:(const char *)xmlChars;	// 0x310f4491
- (id)initFromXmlNode:(xmlNode *)xmlNode attribute:(const char *)attribute ns:(const xmlNs *)ns;	// 0x311fb429
- (id)initWithXmlChars:(const char *)xmlChars;	// 0x310f44cd
@end

@interface NSString (CPStringAdditions)
+ (id)stringWithBytes:(const void *)bytes length:(unsigned)length codePointMapper:(/*function-pointer*/ void *)mapper;	// 0x311b8bc1
+ (id)stringWithBytes:(const void *)bytes length:(unsigned)length fontFamilyName:(id)name;	// 0x311b7029
- (BOOL)startsWithString:(id)string;	// 0x310e3a65
- (id)stringByFixingSymbolCharacters;	// 0x311ffd25
- (id)stringByFixingSymbolCharactersForFont:(CTFontRef)font;	// 0x311ffe09
@end

@interface NSString (CPStringAdditions_XmlString)
+ (id)stringWithXmlString:(const char *)xmlString;	// 0x310de905
- (id)initFromXmlNode:(xmlNode *)xmlNode ns:(const char *)ns attributeName:(const char *)name;	// 0x31139cc1
- (id)initWithContentOfXmlNode:(xmlNode *)xmlNode;	// 0x310d8425
- (id)initWithValueOfXmlAttribute:(xmlAttr *)xmlAttribute;	// 0x310d7f79
- (id)initWithXmlString:(const char *)xmlString;	// 0x30fffd89
- (id)componentsSeparatedByWhitespace;	// 0x31142dd5
- (const char *)xmlString;	// 0x310ed2cd
@end

@interface NSString (OCBStringAdditions)
+ (id)stringWithCsString:(const CsString *)csString;	// 0x310170ed
+ (id)stringWithOcText:(const OcText *)ocText;	// 0x3108a169
- (id)initWithCsString:(const CsString *)csString;	// 0x31013ab5
- (id)initWithOcText:(const OcText *)ocText;	// 0x3108a1a5
- (void)copyToCsString:(CsString *)csString;	// 0x3125dba5
- (void)copyToOcText:(OcText *)ocText;	// 0x3117d765
- (void)copyToOcText:(OcText *)ocText encoding:(int)encoding;	// 0x3117d779
- (id)dataUsingWordEncoding:(int)encoding;	// 0x3117d84d
- (int)languageTypeAtIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x3125dc59
@end

@interface NSString (Crypto)
- (id)getDataUsingOfficeCryptographicEncoding;	// 0x3126358d
@end

@interface NSString (WideStringCat)
+ (id)stringWithWideCString:(int *)wideCString;	// 0x3126c1b1
- (id)initWithWideCString:(int *)wideCString;	// 0x3126c129
- (int *)cWideString;	// 0x3126c231
@end

@interface NSString (OCStringAdditions)
+ (id)mapString:(id)string;	// 0x3126c415
+ (bool)skipString:(id)string;	// 0x3126c51d
@end

@interface NSString (TSUAdditions)
+ (id)listSeparator;	// 0x312c4a31
+ (id)stringByBase64EncodingBytes:(const char *)bytes length:(int)length;	// 0x312c6051
+ (id)stringByBase64EncodingBytes:(const char *)bytes length:(int)length breakLines:(BOOL)lines;	// 0x312c6081
+ (id)stringByHexEncodingData:(id)data;	// 0x312c65d9
+ (id)stringByIndentingString:(id)string;	// 0x312c44d5
+ (id)stringByIndentingString:(id)string times:(unsigned)times;	// 0x312c43e9
+ (id)stringWithUUID;	// 0x312c43b1
+ (id)stringWithXMLString:(const char *)xmlstring;	// 0x312c6349
- (BOOL)containsOnlyCharactersFromSet:(id)set;	// 0x312c6521
- (unsigned)countInstancesOfString:(id)string options:(unsigned)options;	// 0x312c54bd
- (id)encodeStringBase64;	// 0x312c6241
- (id)escapeForIcuRegex;	// 0x312c5591
- (id)escapeXML;	// 0x312c6369
- (BOOL)isChildOfPath:(id)path;	// 0x312c59dd
- (BOOL)isDescendantOfPath:(id)path;	// 0x312c58f9
- (id)md5Hash;	// 0x312c5071
- (id)stringByAddingCSVEscapes;	// 0x312c4af9
- (id)stringByExpandingTableFormatting;	// 0x312c44e9
- (id)stringByFixingBrokenSurrogatePairs;	// 0x312c4ea5
- (id)stringByMakingFirstCharacterLowercase;	// 0x312c6285
- (id)stringByRemovingCharactersInSet:(id)set;	// 0x312c5325
- (id)stringByRemovingCharactersInSet:(id)set options:(unsigned)options;	// 0x312c517d
- (id)stringByReplacingInstancesOfCharactersInSet:(id)set withString:(id)string;	// 0x312c5339
- (id)stringByTrimmingCharactersInSetFromFront:(id)front;	// 0x312c5fe1
- (id)stringByUniquingPathInsideDirectory:(id)directory;	// 0x312c4c9d
- (id)stringQuotedIfContainsCharacterSet:(id)set;	// 0x312c4965
- (id)stringWithPathRelativeTo:(id)to;	// 0x312c5d01
- (id)stringWithPathRelativeTo:(id)to allowBacktracking:(BOOL)backtracking;	// 0x312c5e81
- (id)stringWithRealpath;	// 0x312c5b79
- (id)substringWithComposedCharacterSequencesToFileSystemLength:(unsigned)fileSystemLength;	// 0x312c5c41
- (id)substringWithComposedCharacterSequencesToIndex:(unsigned)index;	// 0x312c5bc5
- (id)tolerantStringByAppendingPathExtension:(id)extension;	// 0x312c656d
- (id)unescapeXML;	// 0x312c6445
@end

@interface NSString (EmailAddressAdditions)
- (BOOL)isLegalEmailAddress;	// 0x312c68bd
- (id)uncommentedAddress;	// 0x312c6681
- (id)uncommentedAddressRespectingGroups;	// 0x312c6849
@end

@interface NSString (SFUCryptoUtilsAdditions)
- (id)sha256HexHashString;	// 0x312c6a01
@end

@interface NSString (TSUVersionComparison)
- (int)compareToVersionString:(id)versionString;	// 0x312c6ac5
@end

@interface NSString (NSURLAdditionsAdditions)
- (BOOL)containsPercentEscapes;	// 0x312c6f71
- (id)stringByPercentEscaping;	// 0x312c7175
@end

@interface NSString (SFUJsonAdditions)
- (void)appendJsonStringToString:(id)string;	// 0x312ccd25
@end

@interface NSString (TSUCustomNumberFormatAdditions)
+ (id)customNumberFormatDecimalFormatStringWithDigits:(unsigned)digits digitString:(id)string includeDecimalSeparator:(BOOL)separator;	// 0x312d5a6d
+ (id)customNumberFormatDecimalTokenDisplayStringWithDigits:(unsigned)digits digitString:(id)string;	// 0x312d5965
+ (id)customNumberFormatDecimalTokenRepresentedStringWithDigits:(unsigned)digits digitString:(id)string;	// 0x312d59fd
+ (id)customNumberFormatIntegerFormatStringWithDigits:(unsigned)digits digitString:(id)string;	// 0x312d5869
+ (id)customNumberFormatIntegerTokenDisplayStringWithDigits:(unsigned)digits separator:(BOOL)separator digitString:(id)string;	// 0x312d5701
+ (id)customNumberFormatIntegerTokenRepresentedStringWithDigits:(unsigned)digits separator:(BOOL)separator digitString:(id)string;	// 0x312d57d9
+ (id)customNumberFormatTokenStringOfType:(int)type content:(id)content;	// 0x312d5355
- (id)currencyCodeFromCustomNumberFormatCurrencyToken;	// 0x312d5b65
- (BOOL)customFormatIntegerTokenUsesSeparator;	// 0x312d5551
- (id)digitPlaceholderStringInDigitToken;	// 0x312d5ae5
- (id)formatStringFromCustomNumberFormatScaleToken;	// 0x312d5be5
- (int)fractionAccuracyFromCustomNumberFormatFractionToken;	// 0x312d5bb9
- (BOOL)isSpecialCustomNumberFormatToken;	// 0x312d53b1
- (BOOL)isSpecialCustomNumberFormatTokenOfType:(int)type;	// 0x312d53f9
- (unsigned)numberOfDigitsInCustomNumberFormatDecimalToken;	// 0x312d58bd
- (unsigned)numberOfDigitsInCustomNumberFormatIntegerToken;	// 0x312d5465
- (unsigned short)scaleCharacterInCustomNumberFormatScaleToken;	// 0x312d5bf9
- (unsigned short)spaceCharacterInCustomNumberFormatSpaceToken;	// 0x312d5c11
- (id)stringByInsertingFormatGroupingSeparators;	// 0x312d5615
@end

@interface NSString (TSUDateFormatStringUtilities)
- (id)stringByReplacing2DigitYearStringWith4DigitYearString;	// 0x312d5fb9
- (id)stringByReplacing4DigitYearStringWith2DigitYearString;	// 0x312d5f41
@end

@interface NSString (TSUNumberFormatStringUtilities)
+ (id)numberSymbols;	// 0x312dc9f9
- (id)createRangesOfEscapedCharactersInNumberFormatPattern;	// 0x312dd0d5
- (id)createStringBySubstitutingCharactersCFNumberFormatterDoesntUnderstand;	// 0x312dcb25
- (int)indexOfFirstNonPrefixCharacterInNumberFormatSubpattern;	// 0x312dd6b9
- (int)indexOfLastNonSuffixCharacterInNumberFormatSubpattern;	// 0x312dd555
- (int)indexOfNumberFormatSubpatternSeparator;	// 0x312dd341
- (BOOL)isNumberFormatPattern;	// 0x312dd05d
- (id)negativeSubpatternOfNumberFormatPattern;	// 0x312dd4c5
- (id)numberPortionOfNumberFormatSubpattern;	// 0x312dd509
- (id)positiveSubpatternOfNumberFormatPattern;	// 0x312dd489
- (id)prefixOfNumberFormatSubpattern;	// 0x312dd7fd
- (id)stringByRemovingEscapedCharactersFromNumberFormatPattern;	// 0x312dd22d
- (id)suffixOfNumberFormatSubpattern;	// 0x312dd689
@end

@interface NSString (NSStringAppKitStubAdditions)
- (NSRange)oi_rangeOfCharactersFromSet:(id)set index:(int)index;	// 0x311352c1
- (double)oi_realSizeWithFontName:(id)fontName size:(int)size bold:(bool)bold italic:(bool)italic;	// 0x312e7879
- (double)oi_sizeWithFontName:(id)fontName size:(int)size;	// 0x31080c99
- (double)oi_sizeWithFontName:(id)fontName size:(int)size bold:(bool)bold italic:(bool)italic;	// 0x31080cc1
@end

