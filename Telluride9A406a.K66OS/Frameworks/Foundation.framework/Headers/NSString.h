/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"
#import "NSMutableCopying.h"


@interface NSString : NSObject <NSCopying, NSMutableCopying, NSCoding> {
}
+ (id)_web_stringRepresentationForBytes:(long long)bytes;	// 0x35e895cd
+ (id)allocWithZone:(NSZone *)zone;	// 0x35dd6c8d
+ (const unsigned *)availableStringEncodings;	// 0x35e75719
+ (unsigned)defaultCStringEncoding;	// 0x35e7530d
+ (void)initialize;	// 0x35df2fe9
+ (id)localizedNameOfStringEncoding:(unsigned)stringEncoding;	// 0x35e75795
+ (id)localizedStringWithFormat:(id)format;	// 0x35e21dbd
+ (id)pathWithComponents:(id)components;	// 0x35de3b31
+ (id)string;	// 0x35e029b9
+ (id)stringWithBytes:(const void *)bytes length:(unsigned)length encoding:(unsigned)encoding;	// 0x35e72529
+ (id)stringWithCString:(const char *)cstring;	// 0x35e7245d
+ (id)stringWithCString:(const char *)cstring encoding:(unsigned)encoding;	// 0x35e1ca51
+ (id)stringWithCString:(const char *)cstring length:(unsigned)length;	// 0x35e724e5
+ (id)stringWithCharacters:(const unsigned short *)characters length:(unsigned)length;	// 0x35dd9af9
+ (id)stringWithContentsOfFile:(id)file;	// 0x35e72631
+ (id)stringWithContentsOfFile:(id)file encoding:(unsigned)encoding error:(id *)error;	// 0x35e72749
+ (id)stringWithContentsOfFile:(id)file usedEncoding:(unsigned *)encoding error:(id *)error;	// 0x35e72795
+ (id)stringWithContentsOfURL:(id)url;	// 0x35e72671
+ (id)stringWithContentsOfURL:(id)url encoding:(unsigned)encoding error:(id *)error;	// 0x35e726b1
+ (id)stringWithContentsOfURL:(id)url usedEncoding:(unsigned *)encoding error:(id *)error;	// 0x35e726fd
+ (id)stringWithFormat:(id)format;	// 0x35dd7c09
+ (id)stringWithFormat:(id)format locale:(id)locale;	// 0x35e725c1
+ (id)stringWithString:(id)string;	// 0x35dfb43d
+ (id)stringWithUTF8String:(const char *)utf8String;	// 0x35de3e4d
- (id)initWithBytesNoCopy:(void *)bytesNoCopy length:(unsigned)length encoding:(unsigned)encoding freeWhenDone:(BOOL)done;	// 0x35e74959
- (id)initWithCString:(const char *)cstring;	// 0x35e73eb1
- (id)initWithCString:(const char *)cstring encoding:(unsigned)encoding;	// 0x35e73f45
- (id)initWithCString:(const char *)cstring length:(unsigned)length;	// 0x35e73e65
- (id)initWithCStringNoCopy:(char *)cstringNoCopy length:(unsigned)length freeWhenDone:(BOOL)done;	// 0x35e74949
- (id)initWithCharacters:(const unsigned short *)characters length:(unsigned)length;	// 0x35e73fbd
- (id)initWithCharactersNoCopy:(unsigned short *)charactersNoCopy length:(unsigned)length freeWhenDone:(BOOL)done;	// 0x35e74939
- (id)initWithCoder:(id)coder;	// 0x35df739d
- (id)initWithContentsOfFile:(id)file;	// 0x35e7427d
- (id)initWithContentsOfFile:(id)file encoding:(unsigned)encoding error:(id *)error;	// 0x35e74531
- (id)initWithContentsOfFile:(id)file usedEncoding:(unsigned *)encoding error:(id *)error;	// 0x35e747bd
- (id)initWithContentsOfURL:(id)url;	// 0x35e742e5
- (id)initWithContentsOfURL:(id)url encoding:(unsigned)encoding error:(id *)error;	// 0x35e7434d
- (id)initWithContentsOfURL:(id)url usedEncoding:(unsigned *)encoding error:(id *)error;	// 0x35e745c5
- (id)initWithData:(id)data encoding:(unsigned)encoding;	// 0x35e740d1
- (id)initWithData:(id)data usedEncoding:(unsigned *)encoding;	// 0x35e748dd
- (id)initWithFormat:(id)format;	// 0x35dd9ac9
- (id)initWithFormat:(id)format arguments:(void *)arguments;	// 0x35df2679
- (id)initWithFormat:(id)format locale:(id)locale;	// 0x35dfa6dd
- (id)initWithFormat:(id)format locale:(id)locale arguments:(void *)arguments;	// 0x35e74969
- (id)initWithString:(id)string;	// 0x35e7402d
- (id)initWithUTF8String:(const char *)utf8String;	// 0x35dea9e1
- (const char *)UTF8String;	// 0x35dda111
- (id)__escapeString5991;	// 0x35e29069
- (unsigned long)_cfTypeID;	// 0x35dfed9d
- (id)_copyFormatStringWithConfiguration:(id)configuration;	// 0x35e751e9
- (id)_createSubstringWithRange:(NSRange)range;	// 0x35e2f005
- (unsigned char)_encodingCantBeStoredInEightBitCFString;	// 0x35ddea8d
- (const char *)_fastCStringContents:(BOOL)contents;	// 0x35dd89e1
- (const unsigned short *)_fastCharacterContents;	// 0x35dd89e5
- (unsigned long)_fastestEncodingInCFStringEncoding;	// 0x35dd89e9
- (void)_flushRegularExpressionCaches;	// 0x35dd4c0d
- (void)_getBlockStart:(unsigned *)start end:(unsigned *)end contentsEnd:(unsigned *)end3 forRange:(NSRange)range stopAtLineSeparators:(BOOL)lineSeparators;	// 0x35e72c09
- (BOOL)_getCString:(char *)string maxLength:(unsigned)length encoding:(unsigned long)encoding;	// 0x35dfb6a9
- (id)_initWithBytesOfUnknownEncoding:(char *)unknownEncoding length:(unsigned)length copy:(BOOL)copy usedEncoding:(unsigned *)encoding;	// 0x35e74129
- (id)_initWithDataOfUnknownEncoding:(id)unknownEncoding;	// 0x35e741c9
- (BOOL)_isCString;	// 0x35e727e1
- (id)_newSubstringWithRange:(NSRange)range zone:(NSZone *)zone;	// 0x35dde291
- (NSRange)_rangeOfRegularExpressionPattern:(id)regularExpressionPattern options:(unsigned)options range:(NSRange)range locale:(id)locale;	// 0x35ec963d
- (unsigned long)_smallestEncodingInCFStringEncoding;	// 0x35e2f12d
- (id)_stringByReplacingOccurrencesOfRegularExpressionPattern:(id)regularExpressionPattern withTemplate:(id)aTemplate options:(unsigned)options range:(NSRange)range;	// 0x35ec97ad
- (id)_stringByResolvingSymlinksInPathUsingCache:(BOOL)pathUsingCache;	// 0x35ddd975
- (id)_stringByStandardizingPathUsingCache:(BOOL)cache;	// 0x35ddb9d1
- (id)_stringRepresentation;	// 0x35e00991
- (id)_web_HTTPStyleLanguageCode;	// 0x35e874c9
- (id)_web_HTTPStyleLanguageCodeWithoutRegion;	// 0x35e875a1
- (id)_web_URLFragment;	// 0x35e8956d
- (id)_web_characterSetFromContentTypeHeader_nowarn;	// 0x35e8a1d1
- (int)_web_countOfString:(id)string;	// 0x35e88da1
- (id)_web_domainFromHost;	// 0x35e89095
- (BOOL)_web_domainMatches:(id)matches;	// 0x35e88f91
- (unsigned long)_web_extractFourCharCode;	// 0x35e89ae9
- (id)_web_fileNameFromContentDispositionHeader_nowarn;	// 0x35e8a295
- (id)_web_filenameByFixingIllegalCharacters;	// 0x35e899a5
- (id)_web_fixedCarbonPOSIXPath;	// 0x35e8934d
- (BOOL)_web_hasCaseInsensitivePrefix:(id)prefix;	// 0x35e17615
- (BOOL)_web_hasCountryCodeTLD;	// 0x35e88f11
- (BOOL)_web_isCaseInsensitiveEqualToString:(id)string;	// 0x35de3591
- (BOOL)_web_isFileURL;	// 0x35e8954d
- (BOOL)_web_isJavaScriptURL;	// 0x35e8a53d
- (BOOL)_web_looksLikeAbsoluteURL;	// 0x35e894f9
- (BOOL)_web_looksLikeIPAddress;	// 0x35e88e29
- (id)_web_mimeTypeFromContentTypeHeader_nowarn;	// 0x35e89f21
- (id)_web_parseAsKeyValuePairHandleQuotes_nowarn:(BOOL)nowarn;	// 0x35e89d85
- (id)_web_parseAsKeyValuePair_nowarn;	// 0x35e89d71
- (NSRange)_web_rangeOfURLHost;	// 0x35e19775
- (NSRange)_web_rangeOfURLResourceSpecifier_nowarn;	// 0x35e19935
- (NSRange)_web_rangeOfURLScheme_nowarn;	// 0x35e199a1
- (NSRange)_web_rangeOfURLUserPasswordHostPort;	// 0x35e19871
- (id)_web_splitAtNonDateCommas_nowarn;	// 0x35e89b51
- (id)_web_stringByCollapsingNonPrintingCharacters;	// 0x35e897c1
- (id)_web_stringByExpandingTildeInPath;	// 0x35e892d5
- (id)_web_stringByReplacingValidPercentEscapes_nowarn;	// 0x35e8a3ad
- (id)_web_stringByTrimmingWhitespace;	// 0x35e8922d
- (BOOL)boolValue;	// 0x35ded135
- (const char *)cString;	// 0x35e75509
- (unsigned)cStringLength;	// 0x35dd85fd
- (const char *)cStringUsingEncoding:(unsigned)encoding;	// 0x35df4a51
- (BOOL)canBeConvertedToEncoding:(unsigned)encoding;	// 0x35e17569
- (id)capitalizedString;	// 0x35e72aa9
- (int)caseInsensitiveCompare:(id)compare;	// 0x35dec0a1
- (unsigned short)characterAtIndex:(unsigned)index;	// 0x35e72441
- (Class)classForCoder;	// 0x35e17f89
- (id)commonPrefixWithString:(id)string options:(unsigned)options;	// 0x35e1ede1
- (int)compare:(id)compare;	// 0x35de812d
- (int)compare:(id)compare options:(unsigned)options;	// 0x35de35b5
- (int)compare:(id)compare options:(unsigned)options range:(NSRange)range;	// 0x35dd8f39
- (int)compare:(id)compare options:(unsigned)options range:(NSRange)range locale:(id)locale;	// 0x35dd8f65
- (unsigned)completePathIntoString:(id *)string caseSensitive:(BOOL)sensitive matchesIntoArray:(id *)array filterTypes:(id)types;	// 0x35e66a89
- (id)componentsSeparatedByCharactersInSet:(id)set;	// 0x35e1c805
- (id)componentsSeparatedByString:(id)string;	// 0x35dd9859
- (id)copyWithZone:(NSZone *)zone;	// 0x35e72805
- (id)dataUsingEncoding:(unsigned)encoding;	// 0x35dd9b81
- (id)dataUsingEncoding:(unsigned)encoding allowLossyConversion:(BOOL)conversion;	// 0x35dd9b95
- (XXStruct_9isexA)decimalValue;	// 0x35e854ed
- (id)decomposedStringWithCanonicalMapping;	// 0x35e72aed
- (id)decomposedStringWithCompatibilityMapping;	// 0x35e72b31
- (id)description;	// 0x35dd7d59
- (id)displayableString;	// 0x35e735f1
- (double)doubleValue;	// 0x35e174f5
- (void)encodeWithCoder:(id)coder;	// 0x35e17da5
- (void)enumerateLinesUsingBlock:(id)block;	// 0x35e73565
- (void)enumerateLinguisticTagsInRange:(NSRange)range scheme:(id)scheme options:(unsigned)options orthography:(id)orthography usingBlock:(id)block;	// 0x35ef46d5
- (void)enumerateSubstringsInRange:(NSRange)range options:(unsigned)options usingBlock:(id)block;	// 0x35e1d179
- (unsigned)fastestEncoding;	// 0x35dd8a05
- (const char *)fileSystemRepresentation;	// 0x35ddcb55
- (float)floatValue;	// 0x35e068d9
- (id)formatConfiguration;	// 0x35e75265
- (BOOL)getBytes:(char *)bytes maxLength:(unsigned)length filledLength:(unsigned *)length3 encoding:(unsigned)encoding allowLossyConversion:(BOOL)conversion range:(NSRange)range remainingRange:(NSRange *)range7;	// 0x35dfb719
- (BOOL)getBytes:(void *)bytes maxLength:(unsigned)length usedLength:(unsigned *)length3 encoding:(unsigned)encoding options:(unsigned)options range:(NSRange)range remainingRange:(NSRange *)range7;	// 0x35dd845d
- (void)getCString:(char *)string;	// 0x35e754c1
- (void)getCString:(char *)string maxLength:(unsigned)length;	// 0x35e75481
- (BOOL)getCString:(char *)string maxLength:(unsigned)length encoding:(unsigned)encoding;	// 0x35e755e5
- (void)getCString:(char *)string maxLength:(unsigned)length range:(NSRange)range remainingRange:(NSRange *)range4;	// 0x35e75335
- (void)getCharacters:(unsigned short *)characters;	// 0x35dd9821
- (void)getCharacters:(unsigned short *)characters range:(NSRange)range;	// 0x35e15121
- (BOOL)getExternalRepresentation:(id *)representation extendedAttributes:(id *)attributes forWritingToURLOrPath:(id)urlorPath usingEncoding:(unsigned)encoding error:(id *)error;	// 0x35e73ac1
- (BOOL)getFileSystemRepresentation:(char *)representation maxLength:(unsigned)length;	// 0x35ddd4a5
- (void)getLineStart:(unsigned *)start end:(unsigned *)end contentsEnd:(unsigned *)end3 forRange:(NSRange)range;	// 0x35e7314d
- (void)getParagraphStart:(unsigned *)start end:(unsigned *)end contentsEnd:(unsigned *)end3 forRange:(NSRange)range;	// 0x35e73185
- (BOOL)hasPrefix:(id)prefix;	// 0x35e04b21
- (BOOL)hasSuffix:(id)suffix;	// 0x35e13989
- (unsigned)hash;	// 0x35e7283d
- (int)intValue;	// 0x35df1b3d
- (int)integerValue;	// 0x35e173c1
- (BOOL)isAbsolutePath;	// 0x35de4235
- (BOOL)isEqual:(id)equal;	// 0x35dd8e95
- (BOOL)isEqualToString:(id)string;	// 0x35dd8edd
- (BOOL)isNSString__;	// 0x35ddd1d1
- (id)lastPathComponent;	// 0x35e1388d
- (unsigned)length;	// 0x35e72425
- (unsigned)lengthOfBytesUsingEncoding:(unsigned)bytesUsingEncoding;	// 0x35dda029
- (NSRange)lineRangeForRange:(NSRange)range;	// 0x35e731bd
- (id)linguisticTagsInRange:(NSRange)range scheme:(id)scheme options:(unsigned)options orthography:(id)orthography tokenRanges:(id *)ranges;	// 0x35ef45e1
- (int)localizedCaseInsensitiveCompare:(id)compare;	// 0x35e21e35
- (int)localizedCompare:(id)compare;	// 0x35e0687d
- (int)localizedStandardCompare:(id)compare;	// 0x35e72841
- (long long)longLongValue;	// 0x35e08065
- (const char *)lossyCString;	// 0x35e75545
- (id)lowercaseString;	// 0x35de31a5
- (unsigned)maximumLengthOfBytesUsingEncoding:(unsigned)bytesUsingEncoding;	// 0x35e054f5
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x35e04df1
- (NSRange)paragraphRangeForRange:(NSRange)range;	// 0x35e731f9
- (id)pathComponents;	// 0x35e04c05
- (id)pathExtension;	// 0x35dd7d5d
- (id)precomposedStringWithCanonicalMapping;	// 0x35e17fd5
- (id)precomposedStringWithCompatibilityMapping;	// 0x35e72b75
- (id)propertyList;	// 0x35e74b21
- (id)propertyListFromStringsFileFormat;	// 0x35e74bf5
- (id)quotedStringRepresentation;	// 0x35e14101
- (NSRange)rangeOfCharacterFromSet:(id)set;	// 0x35df9275
- (NSRange)rangeOfCharacterFromSet:(id)set options:(unsigned)options;	// 0x35dfb65d
- (NSRange)rangeOfCharacterFromSet:(id)set options:(unsigned)options range:(NSRange)range;	// 0x35df92c1
- (NSRange)rangeOfComposedCharacterSequenceAtIndex:(unsigned)index;	// 0x35e1efd1
- (NSRange)rangeOfComposedCharacterSequencesForRange:(NSRange)range;	// 0x35e728a1
- (NSRange)rangeOfString:(id)string;	// 0x35dd49c1
- (NSRange)rangeOfString:(id)string options:(unsigned)options;	// 0x35dfeef9
- (NSRange)rangeOfString:(id)string options:(unsigned)options range:(NSRange)range;	// 0x35dd99fd
- (NSRange)rangeOfString:(id)string options:(unsigned)options range:(NSRange)range locale:(id)locale;	// 0x35dd4a0d
- (NSRange)significantText;	// 0x35ed44b1
- (unsigned)smallestEncoding;	// 0x35e75581
- (id)standardizedURLPath;	// 0x35e818e9
- (id)stringByAbbreviatingWithTildeInPath;	// 0x35e048fd
- (id)stringByAddingPercentEscapes;	// 0x35e81d41
- (id)stringByAddingPercentEscapesUsingEncoding:(unsigned)encoding;	// 0x35de1dd9
- (id)stringByAppendingFormat:(id)format;	// 0x35dfb585
- (id)stringByAppendingPathComponent:(id)component;	// 0x35dd6d45
- (id)stringByAppendingPathExtension:(id)extension;	// 0x35dd8679
- (id)stringByAppendingString:(id)string;	// 0x35dd80c9
- (id)stringByConvertingPathToURL;	// 0x35e67759
- (id)stringByConvertingURLToPath;	// 0x35e6778d
- (id)stringByDeletingLastPathComponent;	// 0x35e1305d
- (id)stringByDeletingPathExtension;	// 0x35dff27d
- (id)stringByExpandingTildeInPath;	// 0x35ddc651
- (id)stringByFoldingWithOptions:(unsigned)options locale:(id)locale;	// 0x35e72bb9
- (id)stringByPaddingToLength:(unsigned)length withString:(id)string startingAtIndex:(unsigned)index;	// 0x35e72941
- (id)stringByRemovingPercentEscapes;	// 0x35e81d09
- (id)stringByReplacingCharactersInRange:(NSRange)range withString:(id)string;	// 0x35e243f5
- (id)stringByReplacingOccurrencesOfString:(id)string withString:(id)string2;	// 0x35dd7f81
- (id)stringByReplacingOccurrencesOfString:(id)string withString:(id)string2 options:(unsigned)options range:(NSRange)range;	// 0x35dd7fc1
- (id)stringByReplacingPercentEscapesUsingEncoding:(unsigned)encoding;	// 0x35dfca7d
- (id)stringByResolvingSymlinksInPath;	// 0x35e13049
- (id)stringByStandardizingPath;	// 0x35ddb9bd
- (id)stringByTrimmingCharactersInSet:(id)set;	// 0x35e14681
- (id)stringsByAppendingPaths:(id)paths;	// 0x35e66935
- (id)substringFromIndex:(unsigned)index;	// 0x35dd4ccd
- (id)substringToIndex:(unsigned)index;	// 0x35dd4c45
- (id)substringWithRange:(NSRange)range;	// 0x35dde199
- (id)uppercaseString;	// 0x35dec31d
- (id)urlPathRelativeToPath:(id)path;	// 0x35e81d81
- (BOOL)writeToFile:(id)file atomically:(BOOL)atomically;	// 0x35e73db1
- (BOOL)writeToFile:(id)file atomically:(BOOL)atomically encoding:(unsigned)encoding error:(id *)error;	// 0x35e73d95
- (BOOL)writeToURL:(id)url atomically:(BOOL)atomically;	// 0x35e73ded
- (BOOL)writeToURL:(id)url atomically:(BOOL)atomically encoding:(unsigned)encoding error:(id *)error;	// 0x35e73c55
@end

