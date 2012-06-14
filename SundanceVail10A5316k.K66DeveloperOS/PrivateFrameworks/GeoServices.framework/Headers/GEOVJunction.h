/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOVJunction : PBCodable {
@private
	NSMutableArray *_connectingRoads;	// 4 = 0x4
	NSMutableArray *_laneConnections;	// 8 = 0x8
}
@property(retain, nonatomic) NSMutableArray *connectingRoads;	// G=0x34b6cb5d; S=0x34b6cb6d; @synthesize=_connectingRoads
@property(retain, nonatomic) NSMutableArray *laneConnections;	// G=0x34b6cb7d; S=0x34b6cb8d; @synthesize=_laneConnections
- (void)addConnectingRoad:(id)road;	// 0x34b6c059
- (void)addLaneConnections:(id)connections;	// 0x34b6c125
- (void)clearConnectingRoads;	// 0x34b6c039
- (void)clearLaneConnections;	// 0x34b6c105
- (id)connectingRoadAtIndex:(unsigned)index;	// 0x34b6c0e5
// declared property getter: - (id)connectingRoads;	// 0x34b6cb5d
- (unsigned)connectingRoadsCount;	// 0x34b6c0c5
- (void)copyTo:(id)to;	// 0x34b6c991
- (void)dealloc;	// 0x34b6bfe1
- (id)description;	// 0x34b6c1d1
- (id)dictionaryRepresentation;	// 0x34b6c241
- (unsigned)hash;	// 0x34b6cb1d
- (BOOL)isEqual:(id)equal;	// 0x34b6ca7d
// declared property getter: - (id)laneConnections;	// 0x34b6cb7d
- (id)laneConnectionsAtIndex:(unsigned)index;	// 0x34b6c1b1
- (unsigned)laneConnectionsCount;	// 0x34b6c191
- (BOOL)readFrom:(id)from;	// 0x34b6c721
// declared property setter: - (void)setConnectingRoads:(id)roads;	// 0x34b6cb6d
// declared property setter: - (void)setLaneConnections:(id)connections;	// 0x34b6cb8d
- (void)writeTo:(id)to;	// 0x34b6c72d
@end

