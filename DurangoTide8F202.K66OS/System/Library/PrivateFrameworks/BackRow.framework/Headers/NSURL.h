/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import <NSURL.h> // Unknown library


@interface NSURL (BRURLAdditions)
+ (id)URLWithString:(id)string queryParameters:(id)parameters;	// 0x32972721
+ (id)queryParametersFromDictionary:(id)dictionary;	// 0x32972529
- (id)URLWithQueryParameter:(id)queryParameter value:(id)value;	// 0x32972a6d
- (id)_queryParameters;	// 0x32972799
- (id)decodedQueryParameters;	// 0x3297293d
- (BOOL)isHTTPFamilyURL;	// 0x32972889
- (BOOL)isHTTPSURL;	// 0x329728c5
- (BOOL)isHTTPURL;	// 0x32972901
- (id)queryParameters;	// 0x32972785
- (id)valueForParam:(id)param;	// 0x32972649
@end

