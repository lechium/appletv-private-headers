/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library

@class NSURL;

@interface GEOQueryCollector : NSObject {
	NSURL *_searchQueryServerURL;	// 4 = 0x4
	NSURL *_directionsQueryServerURL;	// 8 = 0x8
}
+ (id)sharedCollector;	// 0x32cdc159
- (id)init;	// 0x32cdc1c5
- (void)cancelAllSubmissions;	// 0x32cdc5d1
- (void)dealloc;	// 0x32cdc299
- (void)submitDirectionsQuery:(id)query;	// 0x32cdc45d
- (void)submitSearchQuery:(id)query;	// 0x32cdc2f9
@end

