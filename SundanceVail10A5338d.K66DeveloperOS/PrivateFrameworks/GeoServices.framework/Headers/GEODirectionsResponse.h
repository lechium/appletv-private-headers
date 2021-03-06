/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class NSData, NSMutableArray;

@interface GEODirectionsResponse : PBCodable {
	NSData *_directionsResponseID;	// 4 = 0x4
	int _localDistanceUnits;	// 8 = 0x8
	NSMutableArray *_placeSearchResponses;	// 12 = 0xc
	NSMutableArray *_routes;	// 16 = 0x10
	int _status;	// 20 = 0x14
	BOOL _isNavigable;	// 24 = 0x18
	BOOL _routeDeviatesFromOriginal;	// 25 = 0x19
	struct {
		unsigned departureTime : 1;
		unsigned maxRouteCount : 1;
		unsigned timeSinceLastRerouteRequest : 1;
	} _has;	// 26 = 0x1a
}
@property(retain, nonatomic) NSData *directionsResponseID;	// G=0x32461665; S=0x32461675; @synthesize=_directionsResponseID
@property(readonly, assign, nonatomic) BOOL hasDirectionsResponseID;	// G=0x32460461; 
@property(assign, nonatomic) BOOL hasIsNavigable;	// G=0x324604e9; S=0x324604c9; 
@property(assign, nonatomic) BOOL hasLocalDistanceUnits;	// G=0x324603c9; S=0x324603ad; 
@property(assign, nonatomic) BOOL hasRouteDeviatesFromOriginal;	// G=0x3246044d; S=0x3246042d; 
@property(assign, nonatomic) BOOL isNavigable;	// G=0x32460479; S=0x324604a1; @synthesize=_isNavigable
@property(assign, nonatomic) int localDistanceUnits;	// G=0x32461655; S=0x32460385; @synthesize=_localDistanceUnits
@property(retain, nonatomic) NSMutableArray *placeSearchResponses;	// G=0x32461635; S=0x32461645; @synthesize=_placeSearchResponses
@property(assign, nonatomic) BOOL routeDeviatesFromOriginal;	// G=0x324603dd; S=0x32460405; @synthesize=_routeDeviatesFromOriginal
@property(retain, nonatomic) NSMutableArray *routes;	// G=0x32461615; S=0x32461625; @synthesize=_routes
@property(assign, nonatomic) int status;	// G=0x324615f5; S=0x32461605; @synthesize=_status
- (void)addPlaceSearchResponse:(id)response;	// 0x324602d9
- (void)addRoute:(id)route;	// 0x3246020d
- (void)clearPlaceSearchResponses;	// 0x324602b9
- (void)clearRoutes;	// 0x324601ed
- (void)copyTo:(id)to;	// 0x32461129
- (void)dealloc;	// 0x32460181
- (id)description;	// 0x324604fd
- (id)dictionaryRepresentation;	// 0x3246056d
// declared property getter: - (id)directionsResponseID;	// 0x32461665
// declared property getter: - (BOOL)hasDirectionsResponseID;	// 0x32460461
// declared property getter: - (BOOL)hasIsNavigable;	// 0x324604e9
// declared property getter: - (BOOL)hasLocalDistanceUnits;	// 0x324603c9
// declared property getter: - (BOOL)hasRouteDeviatesFromOriginal;	// 0x3246044d
- (unsigned)hash;	// 0x324614d5
- (BOOL)isEqual:(id)equal;	// 0x32461339
// declared property getter: - (BOOL)isNavigable;	// 0x32460479
// declared property getter: - (int)localDistanceUnits;	// 0x32461655
- (id)placeSearchResponseAtIndex:(unsigned)index;	// 0x32460365
// declared property getter: - (id)placeSearchResponses;	// 0x32461635
- (unsigned)placeSearchResponsesCount;	// 0x32460345
- (BOOL)readFrom:(id)from;	// 0x32460ded
- (id)routeAtIndex:(unsigned)index;	// 0x32460299
// declared property getter: - (BOOL)routeDeviatesFromOriginal;	// 0x324603dd
// declared property getter: - (id)routes;	// 0x32461615
- (unsigned)routesCount;	// 0x32460279
// declared property setter: - (void)setDirectionsResponseID:(id)anId;	// 0x32461675
// declared property setter: - (void)setHasIsNavigable:(BOOL)navigable;	// 0x324604c9
// declared property setter: - (void)setHasLocalDistanceUnits:(BOOL)units;	// 0x324603ad
// declared property setter: - (void)setHasRouteDeviatesFromOriginal:(BOOL)original;	// 0x3246042d
// declared property setter: - (void)setIsNavigable:(BOOL)navigable;	// 0x324604a1
// declared property setter: - (void)setLocalDistanceUnits:(int)units;	// 0x32460385
// declared property setter: - (void)setPlaceSearchResponses:(id)responses;	// 0x32461645
// declared property setter: - (void)setRouteDeviatesFromOriginal:(BOOL)original;	// 0x32460405
// declared property setter: - (void)setRoutes:(id)routes;	// 0x32461625
// declared property setter: - (void)setStatus:(int)status;	// 0x32461605
// declared property getter: - (int)status;	// 0x324615f5
- (void)writeTo:(id)to;	// 0x32460df9
@end

