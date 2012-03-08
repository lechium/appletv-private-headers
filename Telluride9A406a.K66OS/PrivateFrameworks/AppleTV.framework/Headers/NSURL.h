/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSURL.h> // Unknown library


@interface NSURL (BRURLAdditions)
+ (id)URLWithString:(id)string queryParameters:(id)parameters;	// 0x331542d5
+ (id)queryParametersFromDictionary:(id)dictionary;	// 0x33154429
- (id)URLWithQueryParameter:(id)queryParameter value:(id)value;	// 0x331540cd
- (id)_queryParameters;	// 0x33153e69
- (id)decodedQueryParameters;	// 0x33153fa5
- (BOOL)isHTTPFamilyURL;	// 0x33153e25
- (BOOL)isHTTPSURL;	// 0x33153de5
- (BOOL)isHTTPURL;	// 0x33153da5
- (id)queryParameters;	// 0x33153f95
- (id)valueForParam:(id)param;	// 0x33154345
@end

@interface NSURL (ISAdditions)
+ (id)copyDictionaryForQueryString:(id)queryString unescapedValues:(BOOL)values;	// 0x331b0325
+ (id)escapedStringForString:(id)string;	// 0x331b048d
+ (id)queryStringForDictionary:(id)dictionary escapedValues:(BOOL)values;	// 0x331b04cd
+ (id)unescapedStringForString:(id)string;	// 0x331b05c9
- (id)copyQueryStringDictionaryWithUnescapedValues:(BOOL)unescapedValues;	// 0x331b0615
- (void)enumerateQueryWithBlock:(id)block;	// 0x331b0d7d
- (BOOL)isSafeExternalURL;	// 0x331b0951
- (id)schemeSwizzledURL;	// 0x331b0af9
- (id)urlByReplacingSchemeWithScheme:(id)scheme;	// 0x331b0cf1
- (id)urlBySettingQueryStringDictionary:(id)dictionary;	// 0x331b0651
@end

@interface NSURL (ISURLBagAdditions)
- (id)sanitizedURL;	// 0x331b3b4d
@end

@interface NSURL (AOSURLAdditions)
@end

