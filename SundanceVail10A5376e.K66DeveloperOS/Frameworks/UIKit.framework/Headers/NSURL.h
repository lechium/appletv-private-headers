/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSURL.h> // Unknown library


@interface NSURL (UIKitAdditions)
+ (id)URLWithDisplayIdentifier:(id)displayIdentifier forSearchResultDomain:(int)searchResultDomain andIdentifier:(unsigned long long)identifier;	// 0x30463bf1
+ (id)mapsURLWithAddress:(id)address;	// 0x30463a05
+ (id)mapsURLWithQuery:(id)query;	// 0x30463965
+ (id)mapsURLWithSourceAddress:(id)sourceAddress destinationAddress:(id)address;	// 0x30463aa5
- (void)_domain:(id *)domain subdomain:(id *)subdomain;	// 0x30360809
- (BOOL)_isGoogleMapsDomain:(id)domain subdomain:(id)subdomain path:(id)path queryKeysAndValues:(id)values;	// 0x30360919
- (id)appleStoreURL;	// 0x30463bed
- (BOOL)isGoogleMapsURL;	// 0x30360785
- (BOOL)isHTTPOrHTTPSURL;	// 0x30463eb1
- (BOOL)isJavaScriptURL;	// 0x30463e75
- (BOOL)isSpringboardHandledURL;	// 0x303a7c49
- (BOOL)isWebcalURL;	// 0x30463d9d
- (id)itmsURL;	// 0x30463be9
- (id)phobosURL;	// 0x302cc22d
- (id)radarWebURL;	// 0x302ccb91
- (id)searchResultDomain;	// 0x30463c55
- (id)searchResultIdentifier;	// 0x30463cf9
@end

@interface NSURL (UIKitPrivateAdditions)
- (BOOL)isInternalUIKitURL;	// 0x30463f1d
@end

