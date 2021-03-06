/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBRequest.h> // Unknown library

@class NSMutableArray, NSData, GEORouteAttributes, GEOLocation;

@interface GEOETAUpdateRequest : PBRequest {
@private
	GEOLocation *_currentUserLocation;	// 4 = 0x4
	NSMutableArray *_destinationWaypoints;	// 8 = 0x8
	GEORouteAttributes *_routeAttributes;	// 12 = 0xc
	NSMutableArray *_serviceTags;	// 16 = 0x10
	NSMutableArray *_steps;	// 20 = 0x14
	NSData *_zilchPoints;	// 24 = 0x18
}
@property(retain, nonatomic) GEOLocation *currentUserLocation;	// G=0x34b441fd; S=0x34b4420d; @synthesize=_currentUserLocation
@property(retain, nonatomic) NSMutableArray *destinationWaypoints;	// G=0x34b4425d; S=0x34b4426d; @synthesize=_destinationWaypoints
@property(readonly, assign, nonatomic) BOOL hasCurrentUserLocation;	// G=0x34b42e39; 
@property(readonly, assign, nonatomic) BOOL hasRouteAttributes;	// G=0x34b42e51; 
@property(readonly, assign, nonatomic) BOOL hasZilchPoints;	// G=0x34b42e69; 
@property(retain, nonatomic) GEORouteAttributes *routeAttributes;	// G=0x34b4421d; S=0x34b4422d; @synthesize=_routeAttributes
@property(retain, nonatomic) NSMutableArray *serviceTags;	// G=0x34b4427d; S=0x34b4428d; @synthesize=_serviceTags
@property(retain, nonatomic) NSMutableArray *steps;	// G=0x34b441dd; S=0x34b441ed; @synthesize=_steps
@property(retain, nonatomic) NSData *zilchPoints;	// G=0x34b4423d; S=0x34b4424d; @synthesize=_zilchPoints
- (void)addDestinationWaypoint:(id)waypoint;	// 0x34b42ea1
- (void)addServiceTag:(id)tag;	// 0x34b42f6d
- (void)addStep:(id)step;	// 0x34b42d8d
- (void)clearDestinationWaypoints;	// 0x34b42e81
- (void)clearServiceTags;	// 0x34b42f4d
- (void)clearSteps;	// 0x34b42d6d
- (void)copyTo:(id)to;	// 0x34b43db9
// declared property getter: - (id)currentUserLocation;	// 0x34b441fd
- (void)dealloc;	// 0x34b42cc5
- (id)description;	// 0x34b43019
- (id)destinationWaypointAtIndex:(unsigned)index;	// 0x34b42f2d
// declared property getter: - (id)destinationWaypoints;	// 0x34b4425d
- (unsigned)destinationWaypointsCount;	// 0x34b42f0d
- (id)dictionaryRepresentation;	// 0x34b43089
// declared property getter: - (BOOL)hasCurrentUserLocation;	// 0x34b42e39
// declared property getter: - (BOOL)hasRouteAttributes;	// 0x34b42e51
// declared property getter: - (BOOL)hasZilchPoints;	// 0x34b42e69
- (unsigned)hash;	// 0x34b4412d
- (BOOL)isEqual:(id)equal;	// 0x34b43fc9
- (BOOL)readFrom:(id)from;	// 0x34b438ed
- (unsigned)requestTypeCode;	// 0x34b43d99
- (Class)responseClass;	// 0x34b43d9d
// declared property getter: - (id)routeAttributes;	// 0x34b4421d
- (id)serviceTagAtIndex:(unsigned)index;	// 0x34b42ff9
// declared property getter: - (id)serviceTags;	// 0x34b4427d
- (unsigned)serviceTagsCount;	// 0x34b42fd9
// declared property setter: - (void)setCurrentUserLocation:(id)location;	// 0x34b4420d
// declared property setter: - (void)setDestinationWaypoints:(id)waypoints;	// 0x34b4426d
// declared property setter: - (void)setRouteAttributes:(id)attributes;	// 0x34b4422d
// declared property setter: - (void)setServiceTags:(id)tags;	// 0x34b4428d
// declared property setter: - (void)setSteps:(id)steps;	// 0x34b441ed
// declared property setter: - (void)setZilchPoints:(id)points;	// 0x34b4424d
- (id)stepAtIndex:(unsigned)index;	// 0x34b42e19
// declared property getter: - (id)steps;	// 0x34b441dd
- (unsigned)stepsCount;	// 0x34b42df9
- (void)writeTo:(id)to;	// 0x34b438f9
// declared property getter: - (id)zilchPoints;	// 0x34b4423d
@end

