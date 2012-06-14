/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBRequest.h> // Unknown library

@class NSMutableArray, NSData, GEORouteAttributes, GEOMapRegion, GEOLocation;

@interface GEODirectionsRequest : PBRequest {
@private
	GEOMapRegion *_currentMapRegion;	// 4 = 0x4
	GEOLocation *_currentUserLocation;	// 8 = 0x8
	int _departureTime;	// 12 = 0xc
	unsigned _maxRouteCount;	// 16 = 0x10
	NSData *_originalRouteID;	// 20 = 0x14
	NSData *_originalRouteZilchPoints;	// 24 = 0x18
	GEORouteAttributes *_routeAttributes;	// 28 = 0x1c
	NSMutableArray *_serviceTags;	// 32 = 0x20
	unsigned _timeSinceLastRerouteRequest;	// 36 = 0x24
	NSMutableArray *_waypoints;	// 40 = 0x28
	struct {
		unsigned departureTime : 1;
		unsigned maxRouteCount : 1;
		unsigned timeSinceLastRerouteRequest : 1;
	} _has;	// 44 = 0x2c
}
@property(retain, nonatomic) GEOMapRegion *currentMapRegion;	// G=0x34afb32d; S=0x34afb33d; @synthesize=_currentMapRegion
@property(retain, nonatomic) GEOLocation *currentUserLocation;	// G=0x34afb30d; S=0x34afb31d; @synthesize=_currentUserLocation
@property(assign, nonatomic) int departureTime;	// G=0x34afb38d; S=0x34af9b09; @synthesize=_departureTime
@property(readonly, assign, nonatomic) BOOL hasCurrentMapRegion;	// G=0x34af9a3d; 
@property(readonly, assign, nonatomic) BOOL hasCurrentUserLocation;	// G=0x34af9a25; 
@property(assign, nonatomic) BOOL hasDepartureTime;	// G=0x34af9b4d; S=0x34af9b31; 
@property(assign, nonatomic) BOOL hasMaxRouteCount;	// G=0x34af9a11; S=0x34af99f1; 
@property(readonly, assign, nonatomic) BOOL hasOriginalRouteID;	// G=0x34af9a55; 
@property(readonly, assign, nonatomic) BOOL hasOriginalRouteZilchPoints;	// G=0x34af9a6d; 
@property(readonly, assign, nonatomic) BOOL hasRouteAttributes;	// G=0x34af98bd; 
@property(assign, nonatomic) BOOL hasTimeSinceLastRerouteRequest;	// G=0x34af9af5; S=0x34af9ad5; 
@property(assign, nonatomic) unsigned maxRouteCount;	// G=0x34af99a1; S=0x34af99c9; @synthesize=_maxRouteCount
@property(retain, nonatomic) NSData *originalRouteID;	// G=0x34afb34d; S=0x34afb35d; @synthesize=_originalRouteID
@property(retain, nonatomic) NSData *originalRouteZilchPoints;	// G=0x34afb36d; S=0x34afb37d; @synthesize=_originalRouteZilchPoints
@property(retain, nonatomic) GEORouteAttributes *routeAttributes;	// G=0x34afb2cd; S=0x34afb2dd; @synthesize=_routeAttributes
@property(retain, nonatomic) NSMutableArray *serviceTags;	// G=0x34afb39d; S=0x34afb3ad; @synthesize=_serviceTags
@property(assign, nonatomic) unsigned timeSinceLastRerouteRequest;	// G=0x34af9a85; S=0x34af9aad; @synthesize=_timeSinceLastRerouteRequest
@property(retain, nonatomic) NSMutableArray *waypoints;	// G=0x34afb2ed; S=0x34afb2fd; @synthesize=_waypoints
- (void)addServiceTag:(id)tag;	// 0x34af9b81
- (void)addWaypoint:(id)waypoint;	// 0x34af98f5
- (void)clearServiceTags;	// 0x34af9b61
- (void)clearWaypoints;	// 0x34af98d5
- (void)copyTo:(id)to;	// 0x34afac49
// declared property getter: - (id)currentMapRegion;	// 0x34afb32d
// declared property getter: - (id)currentUserLocation;	// 0x34afb30d
- (void)dealloc;	// 0x34af9801
// declared property getter: - (int)departureTime;	// 0x34afb38d
- (id)description;	// 0x34af9c2d
- (id)dictionaryRepresentation;	// 0x34af9c9d
// declared property getter: - (BOOL)hasCurrentMapRegion;	// 0x34af9a3d
// declared property getter: - (BOOL)hasCurrentUserLocation;	// 0x34af9a25
// declared property getter: - (BOOL)hasDepartureTime;	// 0x34af9b4d
// declared property getter: - (BOOL)hasMaxRouteCount;	// 0x34af9a11
// declared property getter: - (BOOL)hasOriginalRouteID;	// 0x34af9a55
// declared property getter: - (BOOL)hasOriginalRouteZilchPoints;	// 0x34af9a6d
// declared property getter: - (BOOL)hasRouteAttributes;	// 0x34af98bd
// declared property getter: - (BOOL)hasTimeSinceLastRerouteRequest;	// 0x34af9af5
- (unsigned)hash;	// 0x34afb161
- (BOOL)isEqual:(id)equal;	// 0x34afaf25
// declared property getter: - (unsigned)maxRouteCount;	// 0x34af99a1
// declared property getter: - (id)originalRouteID;	// 0x34afb34d
// declared property getter: - (id)originalRouteZilchPoints;	// 0x34afb36d
- (BOOL)readFrom:(id)from;	// 0x34afa719
- (unsigned)requestTypeCode;	// 0x34afac29
- (Class)responseClass;	// 0x34afac2d
// declared property getter: - (id)routeAttributes;	// 0x34afb2cd
- (id)serviceTagAtIndex:(unsigned)index;	// 0x34af9c0d
// declared property getter: - (id)serviceTags;	// 0x34afb39d
- (unsigned)serviceTagsCount;	// 0x34af9bed
// declared property setter: - (void)setCurrentMapRegion:(id)region;	// 0x34afb33d
// declared property setter: - (void)setCurrentUserLocation:(id)location;	// 0x34afb31d
// declared property setter: - (void)setDepartureTime:(int)time;	// 0x34af9b09
// declared property setter: - (void)setHasDepartureTime:(BOOL)time;	// 0x34af9b31
// declared property setter: - (void)setHasMaxRouteCount:(BOOL)count;	// 0x34af99f1
// declared property setter: - (void)setHasTimeSinceLastRerouteRequest:(BOOL)request;	// 0x34af9ad5
// declared property setter: - (void)setMaxRouteCount:(unsigned)count;	// 0x34af99c9
// declared property setter: - (void)setOriginalRouteID:(id)anId;	// 0x34afb35d
// declared property setter: - (void)setOriginalRouteZilchPoints:(id)points;	// 0x34afb37d
// declared property setter: - (void)setRouteAttributes:(id)attributes;	// 0x34afb2dd
// declared property setter: - (void)setServiceTags:(id)tags;	// 0x34afb3ad
// declared property setter: - (void)setTimeSinceLastRerouteRequest:(unsigned)request;	// 0x34af9aad
// declared property setter: - (void)setWaypoints:(id)waypoints;	// 0x34afb2fd
// declared property getter: - (unsigned)timeSinceLastRerouteRequest;	// 0x34af9a85
- (id)waypointAtIndex:(unsigned)index;	// 0x34af9981
// declared property getter: - (id)waypoints;	// 0x34afb2ed
- (unsigned)waypointsCount;	// 0x34af9961
- (void)writeTo:(id)to;	// 0x34afa725
@end

