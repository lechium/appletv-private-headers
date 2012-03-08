/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class NSMutableArray;

@interface GEODirectionsResponse : PBCodable {
	int _status;	// 4 = 0x4
	NSMutableArray *_routes;	// 8 = 0x8
	NSMutableArray *_locationResponses;	// 12 = 0xc
	BOOL _hasLocalDistanceUnits;	// 16 = 0x10
	int _localDistanceUnits;	// 20 = 0x14
	NSMutableArray *_transitAgents;	// 24 = 0x18
}
@property(assign, nonatomic) BOOL hasLocalDistanceUnits;	// G=0x34bf35a5; S=0x34bf35b5; @synthesize=_hasLocalDistanceUnits
@property(assign, nonatomic) int localDistanceUnits;	// G=0x34bf35c5; S=0x34bf2921; @synthesize=_localDistanceUnits
@property(retain, nonatomic) NSMutableArray *locationResponses;	// G=0x34bf3571; S=0x34bf3581; @synthesize=_locationResponses
@property(retain, nonatomic) NSMutableArray *routes;	// G=0x34bf353d; S=0x34bf354d; @synthesize=_routes
@property(assign, nonatomic) int status;	// G=0x34bf351d; S=0x34bf352d; @synthesize=_status
@property(retain, nonatomic) NSMutableArray *transitAgents;	// G=0x34bf35d5; S=0x34bf35e5; @synthesize=_transitAgents
- (void)addLocationResponse:(id)response;	// 0x34bf287d
- (void)addRoute:(id)route;	// 0x34bf27d9
- (void)addTransitAgent:(id)agent;	// 0x34bf2945
- (void)dealloc;	// 0x34bf276d
- (id)description;	// 0x34bf29e9
- (id)dictionaryRepresentation;	// 0x34bf2a59
// declared property getter: - (BOOL)hasLocalDistanceUnits;	// 0x34bf35a5
// declared property getter: - (int)localDistanceUnits;	// 0x34bf35c5
- (id)locationResponseAtIndex:(unsigned)index;	// 0x34bf2901
// declared property getter: - (id)locationResponses;	// 0x34bf3571
- (unsigned)locationResponsesCount;	// 0x34bf28e1
- (BOOL)readFrom:(id)from;	// 0x34bf2ed1
- (id)routeAtIndex:(unsigned)index;	// 0x34bf285d
// declared property getter: - (id)routes;	// 0x34bf353d
- (unsigned)routesCount;	// 0x34bf283d
// declared property setter: - (void)setHasLocalDistanceUnits:(BOOL)units;	// 0x34bf35b5
// declared property setter: - (void)setLocalDistanceUnits:(int)units;	// 0x34bf2921
// declared property setter: - (void)setLocationResponses:(id)responses;	// 0x34bf3581
// declared property setter: - (void)setRoutes:(id)routes;	// 0x34bf354d
// declared property setter: - (void)setStatus:(int)status;	// 0x34bf352d
// declared property setter: - (void)setTransitAgents:(id)agents;	// 0x34bf35e5
// declared property getter: - (int)status;	// 0x34bf351d
- (id)transitAgentAtIndex:(unsigned)index;	// 0x34bf29c9
// declared property getter: - (id)transitAgents;	// 0x34bf35d5
- (unsigned)transitAgentsCount;	// 0x34bf29a9
- (void)writeTo:(id)to;	// 0x34bf31b9
@end

