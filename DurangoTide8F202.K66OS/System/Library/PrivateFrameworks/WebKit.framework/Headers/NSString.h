/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSString.h> // Unknown library
#import "WebKit-Structs.h"


@interface NSString (WebKitExtras)
+ (id)_web_stringWithData:(id)data textEncodingName:(id)name;	// 0x32c693f9
+ (id)_webkit_localCacheDirectoryWithBundleIdentifier:(id)bundleIdentifier;	// 0x32c116fd
- (id)_web_stringByAbbreviatingWithTildeInPath;	// 0x32c692d5
- (id)_web_stringByStrippingReturnCharacters;	// 0x32c69355
- (id)_webkit_filenameByFixingIllegalCharacters;	// 0x32c69789
- (BOOL)_webkit_hasCaseInsensitivePrefix:(id)prefix;	// 0x32c1a699
- (BOOL)_webkit_hasCaseInsensitiveSubstring:(id)substring;	// 0x32c6977d
- (BOOL)_webkit_hasCaseInsensitiveSuffix:(id)suffix;	// 0x32c69771
- (BOOL)_webkit_isCaseInsensitiveEqualToString:(id)string;	// 0x32c0fd11
- (id)_webkit_stringByCollapsingNonPrintingCharacters;	// 0x32c6941d
- (id)_webkit_stringByCollapsingWhitespaceCharacters;	// 0x32c695dd
- (id)_webkit_stringByTrimmingWhitespace;	// 0x32c1da45
@end

@interface NSString (WebNSDataExtrasInternal)
- (id)_web_capitalizeRFC822HeaderFieldName;	// 0x32c6a6e5
@end

@interface NSString (WebNSURLExtras)
- (id)_web_decodeHostName;	// 0x32c2f301
- (id)_web_decodeHostNameWithRange:(NSRange)range;	// 0x32c6b911
- (id)_web_encodeHostName;	// 0x32c6b955
- (id)_web_encodeHostNameWithRange:(NSRange)range;	// 0x32c6b931
- (BOOL)_web_hostNameNeedsDecodingWithRange:(NSRange)range;	// 0x32c6b8b5
- (BOOL)_web_hostNameNeedsEncodingWithRange:(NSRange)range;	// 0x32c6b8e5
- (BOOL)_web_isUserVisibleURL;	// 0x32c6bed9
- (id)_web_mapHostNameWithRange:(NSRange)range encode:(BOOL)encode makeString:(BOOL)string;	// 0x32c2f341
- (id)_webkit_URLFragment;	// 0x32c6bae9
- (BOOL)_webkit_isFTPDirectoryURL;	// 0x32c6b85d
- (BOOL)_webkit_isFileURL;	// 0x32c6b995
- (BOOL)_webkit_isJavaScriptURL;	// 0x32c1a67d
- (BOOL)_webkit_looksLikeAbsoluteURL;	// 0x32c6baad
- (id)_webkit_queryKeysAndValues;	// 0x32c2d2e5
- (NSRange)_webkit_rangeOfURLScheme;	// 0x32c6b9d1
- (id)_webkit_scriptIfJavaScriptURL;	// 0x32c1a63d
- (id)_webkit_stringByReplacingValidPercentEscapes;	// 0x32c6c055
- (id)_webkit_unescapedQueryValue;	// 0x32c2d471
@end

@interface NSString (WebNSUserDefaultsPrivate)
- (id)_webkit_HTTPStyleLanguageCode;	// 0x32c18111
@end

@interface NSString (WebNSStringExtrasIPhone)
- (id)_web_bestURLForUserTypedString;	// 0x32c88095
- (id)_web_possibleURLPrefixesForUserTypedString;	// 0x32c88065
- (id)_web_possibleURLsForForUserTypedString:(BOOL)userTypedString;	// 0x32c880e1
- (id)_web_possibleURLsForUserTypedString;	// 0x32c8807d
@end

