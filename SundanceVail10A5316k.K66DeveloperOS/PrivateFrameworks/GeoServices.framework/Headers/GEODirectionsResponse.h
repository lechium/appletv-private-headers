/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class NSData, NSMutableArray;

@interface GEODirectionsResponse : PBCodable {
@private
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
@property(retain, nonatomic) NSData *directionsResponseID;	// G=0x34afc8a1; S=0x34afc8b1; @synthesize=_directionsResponseID
@property(readonly, assign, nonatomic) BOOL hasDirectionsResponseID;	// G=0x34afb69d; 
@property(assign, nonatomic) BOOL hasIsNavigable;	// G=0x34afb725; S=0x34afb705; 
@property(assign, nonatomic) BOOL hasLocalDistanceUnits;	// G=0x34afb605; S=0x34afb5e9; 
@property(assign, nonatomic) BOOL hasRouteDeviatesFromOriginal;	// G=0x34afb689; S=0x34afb669; 
@property(assign, nonatomic) BOOL isNavigable;	// G=0x34afb6b5; S=0x34afb6dd; @synthesize=_isNavigable
@property(assign, nonatomic) int localDistanceUnits;	// G=0x34afc891; S=0x34afb5c1; @synthesize=_localDistanceUnits
@property(retain, nonatomic) NSMutableArray *placeSearchResponses;	// G=0x34afc871; S=0x34afc881; @synthesize=_placeSearchResponses
@property(assign, nonatomic) BOOL routeDeviatesFromOriginal;	// G=0x34afb619; S=0x34afb641; @synthesize=_routeDeviatesFromOriginal
@property(retain, nonatomic) NSMutableArray *routes;	// G=0x34afc851; S=0x34afc861; @synthesize=_routes
@property(assign, nonatomic) int status;	// G=0x34afc831; S=0x34afc841; @synthesize=_status
- (void)addPlaceSearchResponse:(id)response;	// 0x34afb515
- (void)addRoute:(id)route;	// 0x34afb449
- (void)clearPlaceSearchResponses;	// 0x34afb4f5
- (void)clearRoutes;	// 0x34afb429
- (void)copyTo:(id)to;	// 0x34afc365
- (void)dealloc;	// 0x34afb3bd
- (id)description;	// 0x34afb739
- (id)dictionaryRepresentation;	// 0x34afb7a9
// declared property getter: - (id)directionsResponseID;	// 0x34afc8a1
// declared property getter: - (BOOL)hasDirectionsResponseID;	// 0x34afb69d
// declared property getter: - (BOOL)hasIsNavigable;	// 0x34afb725
// declared property getter: - (BOOL)hasLocalDistanceUnits;	// 0x34afb605
// declared property getter: - (BOOL)hasRouteDeviatesFromOriginal;	// 0x34afb689
- (unsigned)hash;	// 0x34afc711
- (BOOL)isEqual:(id)equal;	// 0x34afc575
// declared property getter: - (BOOL)isNavigable;	// 0x34afb6b5
// declared property getter: - (int)localDistanceUnits;	// 0x34afc891
- (id)placeSearchResponseAtIndex:(unsigned)index;	// 0x34afb5a1
// declared property getter: - (id)placeSearchResponses;	// 0x34afc871
- (unsigned)placeSearchResponsesCount;	// 0x34afb581
- (BOOL)readFrom:(id)from;	// 0x34afc029
- (id)routeAtIndex:(unsigned)index;	// 0x34afb4d5
// declared property getter: - (BOOL)routeDeviatesFromOriginal;	// 0x34afb619
// declared property getter: - (id)routes;	// 0x34afc851
- (unsigned)routesCount;	// 0x34afb4b5
// declared property setter: - (void)setDirectionsResponseID:(id)anId;	// 0x34afc8b1
// declared property setter: - (void)setHasIsNavigable:(BOOL)navigable;	// 0x34afb705
// declared property setter: - (void)setHasLocalDistanceUnits:(BOOL)units;	// 0x34afb5e9
// declared property setter: - (void)setHasRouteDeviatesFromOriginal:(BOOL)original;	// 0x34afb669
// declared property setter: - (void)setIsNavigable:(BOOL)navigable;	// 0x34afb6dd
// declared property setter: - (void)setLocalDistanceUnits:(int)units;	// 0x34afb5c1
// declared property setter: - (void)setPlaceSearchResponses:(id)responses;	// 0x34afc881
// declared property setter: - (void)setRouteDeviatesFromOriginal:(BOOL)original;	// 0x34afb641
// declared property setter: - (void)setRoutes:(id)routes;	// 0x34afc861
// declared property setter: - (void)setStatus:(int)status;	// 0x34afc841
// declared property getter: - (int)status;	// 0x34afc831
- (void)writeTo:(id)to;	// 0x34afc035
@end

