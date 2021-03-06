/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <NSString.h> // Unknown library


@interface NSString (WebKitExtras)
+ (id)_web_stringWithData:(id)data textEncodingName:(id)name;	// 0x323597b5
+ (id)_webkit_localCacheDirectoryWithBundleIdentifier:(id)bundleIdentifier;	// 0x322fe8a5
- (id)_web_stringByAbbreviatingWithTildeInPath;	// 0x323592e9
- (id)_web_stringByStrippingReturnCharacters;	// 0x32359375
- (id)_webkit_filenameByFixingIllegalCharacters;	// 0x32359439
- (BOOL)_webkit_hasCaseInsensitivePrefix:(id)prefix;	// 0x3230d2d5
- (BOOL)_webkit_hasCaseInsensitiveSubstring:(id)substring;	// 0x3235942d
- (BOOL)_webkit_hasCaseInsensitiveSuffix:(id)suffix;	// 0x32359421
- (BOOL)_webkit_isCaseInsensitiveEqualToString:(id)string;	// 0x322fc311
- (id)_webkit_stringByCollapsingNonPrintingCharacters;	// 0x3235943d
- (id)_webkit_stringByCollapsingWhitespaceCharacters;	// 0x3235961d
- (id)_webkit_stringByTrimmingWhitespace;	// 0x323080d5
@end

@interface NSString (WebNSDataExtrasInternal)
- (id)_web_capitalizeRFC822HeaderFieldName;	// 0x3235b1c5
@end

@interface NSString (WebStringDrawing)
+ (BOOL)_web_ascentRoundingEnabled;	// 0x322ee335
+ (void)_web_setAscentRoundingEnabled:(BOOL)enabled;	// 0x322f0d39
+ (void)_web_setWordRoundingAllowed:(BOOL)allowed;	// 0x322eed8d
+ (void)_web_setWordRoundingEnabled:(BOOL)enabled;	// 0x322ee2d5
+ (BOOL)_web_wordRoundingAllowed;	// 0x322eed7d
+ (BOOL)_web_wordRoundingEnabled;	// 0x322ee2c5
- (CGSize)__web_drawAtPoint:(CGPoint)point forWidth:(float)width withFont:(GSFontRef)font ellipsis:(int)ellipsis letterSpacing:(float)spacing includeEmoji:(BOOL)emoji measureOnly:(BOOL)only;	// 0x322ee3a1
- (CGSize)__web_drawAtPoint:(CGPoint)point forWidth:(float)width withFont:(GSFontRef)font ellipsis:(int)ellipsis letterSpacing:(float)spacing includeEmoji:(BOOL)emoji measureOnly:(BOOL)only renderedStringOut:(id *)anOut;	// 0x322ee401
- (CGSize)__web_drawAtPoint:(CGPoint)point forWidth:(float)width withFont:(GSFontRef)font ellipsis:(int)ellipsis letterSpacing:(float)spacing includeEmoji:(BOOL)emoji measureOnly:(BOOL)only renderedStringOut:(id *)anOut drawUnderline:(BOOL)underline;	// 0x322ee46d
- (CGSize)__web_drawInRect:(CGRect)rect withFont:(GSFontRef)font ellipsis:(int)ellipsis alignment:(int)alignment letterSpacing:(float)spacing lineSpacing:(float)spacing6 includeEmoji:(BOOL)emoji truncationRect:(CGRect *)rect8 measureOnly:(BOOL)only;	// 0x322eee81
- (CGSize)__web_drawInRect:(CGRect)rect withFont:(GSFontRef)font ellipsis:(int)ellipsis alignment:(int)alignment letterSpacing:(float)spacing lineSpacing:(float)spacing6 includeEmoji:(BOOL)emoji truncationRect:(CGRect *)rect8 measureOnly:(BOOL)only renderedStringOut:(id *)anOut;	// 0x322eef01
- (CGSize)__web_drawInRect:(CGRect)rect withFont:(GSFontRef)font ellipsis:(int)ellipsis alignment:(int)alignment letterSpacing:(float)spacing lineSpacing:(float)spacing6 includeEmoji:(BOOL)emoji truncationRect:(CGRect *)rect8 measureOnly:(BOOL)only renderedStringOut:(id *)anOut drawUnderline:(BOOL)underline;	// 0x322eef85
- (CGSize)_web_drawAtPoint:(CGPoint)point forWidth:(float)width withAttributes:(id)attributes;	// 0x3235cd15
- (CGSize)_web_drawAtPoint:(CGPoint)point forWidth:(float)width withFont:(GSFontRef)font ellipsis:(int)ellipsis;	// 0x3235c40d
- (CGSize)_web_drawAtPoint:(CGPoint)point forWidth:(float)width withFont:(GSFontRef)font ellipsis:(int)ellipsis letterSpacing:(float)spacing;	// 0x3235c461
- (CGSize)_web_drawAtPoint:(CGPoint)point forWidth:(float)width withFont:(GSFontRef)font ellipsis:(int)ellipsis letterSpacing:(float)spacing includeEmoji:(BOOL)emoji;	// 0x322ee345
- (CGSize)_web_drawAtPoint:(CGPoint)point withFont:(GSFontRef)font;	// 0x3235c381
- (CGSize)_web_drawInRect:(CGRect)rect withAttributes:(id)attributes;	// 0x3235cf29
- (CGSize)_web_drawInRect:(CGRect)rect withFont:(GSFontRef)font ellipsis:(int)ellipsis alignment:(int)alignment;	// 0x3235c521
- (CGSize)_web_drawInRect:(CGRect)rect withFont:(GSFontRef)font ellipsis:(int)ellipsis alignment:(int)alignment lineSpacing:(int)spacing;	// 0x3235c4b9
- (CGSize)_web_drawInRect:(CGRect)rect withFont:(GSFontRef)font ellipsis:(int)ellipsis alignment:(int)alignment lineSpacing:(int)spacing includeEmoji:(BOOL)emoji truncationRect:(CGRect *)rect7;	// 0x322f0ccd
- (CGSize)_web_drawInRect:(CGRect)rect withFont:(GSFontRef)font ellipsis:(int)ellipsis alignment:(int)alignment lineSpacing:(int)spacing includeEmoji:(BOOL)emoji truncationRect:(CGRect *)rect7 measureOnly:(BOOL)only;	// 0x322eee01
- (id)_web_securedStringIncludingLastCharacter:(BOOL)character;	// 0x3235c5e5
- (CGSize)_web_sizeForWidth:(float)width withAttributes:(id)attributes;	// 0x3235cc0d
- (CGSize)_web_sizeInRect:(CGRect)rect withAttributes:(id)attributes;	// 0x3235ce1d
- (CGSize)_web_sizeInRect:(CGRect)rect withFont:(GSFontRef)font ellipsis:(int)ellipsis;	// 0x3235c585
- (CGSize)_web_sizeInRect:(CGRect)rect withFont:(GSFontRef)font ellipsis:(int)ellipsis lineSpacing:(int)spacing;	// 0x322eed9d
- (CGSize)_web_sizeWithFont:(GSFontRef)font;	// 0x322ee285
- (CGSize)_web_sizeWithFont:(GSFontRef)font forWidth:(float)width ellipsis:(int)ellipsis;	// 0x3235c3d1
- (CGSize)_web_sizeWithFont:(GSFontRef)font forWidth:(float)width ellipsis:(int)ellipsis letterSpacing:(float)spacing;	// 0x322ecea9
- (CGSize)_web_sizeWithFont:(GSFontRef)font forWidth:(float)width ellipsis:(int)ellipsis letterSpacing:(float)spacing resultRange:(NSRange *)range;	// 0x322ecef5
- (id)_web_stringForWidth:(float)width withFont:(GSFontRef)font ellipsis:(int)ellipsis letterSpacing:(float)spacing includeEmoji:(BOOL)emoji;	// 0x3235c8e1
@end

@interface NSString (WebNSStringExtrasIOS)
- (id)_web_bestURLForUserTypedString;	// 0x32318685
- (id)_web_possibleURLPrefixesForUserTypedString;	// 0x3235d341
- (id)_web_possibleURLsForForUserTypedString:(BOOL)userTypedString;	// 0x323186f1
- (id)_web_possibleURLsForUserTypedString;	// 0x323186dd
@end

@interface NSString (WebNSURLExtras)
- (id)_web_decodeHostName;	// 0x3235e019
- (id)_web_decodeHostNameWithRange:(NSRange)range;	// 0x3235e009
- (id)_web_encodeHostName;	// 0x3235e01d
- (id)_web_encodeHostNameWithRange:(NSRange)range;	// 0x3235e011
- (BOOL)_web_hostNameNeedsDecodingWithRange:(NSRange)range;	// 0x3235dfe9
- (BOOL)_web_hostNameNeedsEncodingWithRange:(NSRange)range;	// 0x3235dff9
- (BOOL)_web_isUserVisibleURL;	// 0x3235dd49
- (id)_webkit_URLFragment;	// 0x3235e151
- (BOOL)_webkit_isFTPDirectoryURL;	// 0x3235df85
- (BOOL)_webkit_isFileURL;	// 0x3235dd55
- (BOOL)_webkit_isJavaScriptURL;	// 0x3230d2b5
- (BOOL)_webkit_looksLikeAbsoluteURL;	// 0x3235e105
- (id)_webkit_queryKeysAndValues;	// 0x32318211
- (NSRange)_webkit_rangeOfURLScheme;	// 0x3235e021
- (id)_webkit_scriptIfJavaScriptURL;	// 0x3230d269
- (id)_webkit_stringByReplacingValidPercentEscapes;	// 0x3235dd9d
- (id)_webkit_unescapedQueryValue;	// 0x32318461
@end

