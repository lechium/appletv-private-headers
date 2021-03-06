/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSURL.h> // Unknown library


@interface NSURL (UIKitAdditions)
+ (id)URLWithDisplayIdentifier:(id)displayIdentifier forSearchResultDomain:(int)searchResultDomain andIdentifier:(unsigned long long)identifier;	// 0x30afe309
+ (id)mapsURLWithAddress:(id)address;	// 0x30afe11d
+ (id)mapsURLWithQuery:(id)query;	// 0x30afe07d
+ (id)mapsURLWithSourceAddress:(id)sourceAddress destinationAddress:(id)address;	// 0x30afe1bd
- (void)_domain:(id *)domain subdomain:(id *)subdomain;	// 0x309fa1d9
- (BOOL)_isGoogleMapsDomain:(id)domain subdomain:(id)subdomain path:(id)path queryKeysAndValues:(id)values;	// 0x309fa2e9
- (id)appleStoreURL;	// 0x30afe305
- (BOOL)isGoogleMapsURL;	// 0x309fa155
- (BOOL)isHTTPOrHTTPSURL;	// 0x30afe5c9
- (BOOL)isJavaScriptURL;	// 0x30afe58d
- (BOOL)isSpringboardHandledURL;	// 0x30a418f9
- (BOOL)isWebcalURL;	// 0x30afe4b5
- (id)itmsURL;	// 0x30afe301
- (id)phobosURL;	// 0x309659e5
- (id)radarWebURL;	// 0x30966349
- (id)searchResultDomain;	// 0x30afe36d
- (id)searchResultIdentifier;	// 0x30afe411
@end

@interface NSURL (UIKitPrivateAdditions)
- (BOOL)isInternalUIKitURL;	// 0x30afe635
@end

