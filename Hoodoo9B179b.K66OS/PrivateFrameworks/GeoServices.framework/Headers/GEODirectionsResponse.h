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
@property(assign, nonatomic) BOOL hasLocalDistanceUnits;	// G=0x32cec46d; S=0x32cec47d; @synthesize=_hasLocalDistanceUnits
@property(assign, nonatomic) int localDistanceUnits;	// G=0x32cec48d; S=0x32ceb7e9; @synthesize=_localDistanceUnits
@property(retain, nonatomic) NSMutableArray *locationResponses;	// G=0x32cec439; S=0x32cec449; @synthesize=_locationResponses
@property(retain, nonatomic) NSMutableArray *routes;	// G=0x32cec405; S=0x32cec415; @synthesize=_routes
@property(assign, nonatomic) int status;	// G=0x32cec3e5; S=0x32cec3f5; @synthesize=_status
@property(retain, nonatomic) NSMutableArray *transitAgents;	// G=0x32cec49d; S=0x32cec4ad; @synthesize=_transitAgents
- (void)addLocationResponse:(id)response;	// 0x32ceb745
- (void)addRoute:(id)route;	// 0x32ceb6a1
- (void)addTransitAgent:(id)agent;	// 0x32ceb80d
- (void)dealloc;	// 0x32ceb635
- (id)description;	// 0x32ceb8b1
- (id)dictionaryRepresentation;	// 0x32ceb921
// declared property getter: - (BOOL)hasLocalDistanceUnits;	// 0x32cec46d
// declared property getter: - (int)localDistanceUnits;	// 0x32cec48d
- (id)locationResponseAtIndex:(unsigned)index;	// 0x32ceb7c9
// declared property getter: - (id)locationResponses;	// 0x32cec439
- (unsigned)locationResponsesCount;	// 0x32ceb7a9
- (BOOL)readFrom:(id)from;	// 0x32cebd99
- (id)routeAtIndex:(unsigned)index;	// 0x32ceb725
// declared property getter: - (id)routes;	// 0x32cec405
- (unsigned)routesCount;	// 0x32ceb705
// declared property setter: - (void)setHasLocalDistanceUnits:(BOOL)units;	// 0x32cec47d
// declared property setter: - (void)setLocalDistanceUnits:(int)units;	// 0x32ceb7e9
// declared property setter: - (void)setLocationResponses:(id)responses;	// 0x32cec449
// declared property setter: - (void)setRoutes:(id)routes;	// 0x32cec415
// declared property setter: - (void)setStatus:(int)status;	// 0x32cec3f5
// declared property setter: - (void)setTransitAgents:(id)agents;	// 0x32cec4ad
// declared property getter: - (int)status;	// 0x32cec3e5
- (id)transitAgentAtIndex:(unsigned)index;	// 0x32ceb891
// declared property getter: - (id)transitAgents;	// 0x32cec49d
- (unsigned)transitAgentsCount;	// 0x32ceb871
- (void)writeTo:(id)to;	// 0x32cec081
@end

