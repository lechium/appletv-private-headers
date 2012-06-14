/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <GEODirectionsRouteResponse.h> // Unknown library

@class NSMutableArray;

@interface GMMGEODirectionsRouteResponse : GEODirectionsRouteResponse {
	NSMutableArray *_viaWaypointArrays;	// 56 = 0x38
}
@property(retain, nonatomic) NSMutableArray *viaWaypointArrays;	// G=0x33ab7691; S=0x33ab76a1; @synthesize=_viaWaypointArrays
+ (id)geoDirectionsResponseFromGMMResponse:(id)gmmresponse error:(int *)error;	// 0x33ab6e91
- (void)dealloc;	// 0x33ab6e4d
// declared property setter: - (void)setViaWaypointArrays:(id)arrays;	// 0x33ab76a1
// declared property getter: - (id)viaWaypointArrays;	// 0x33ab7691
@end
