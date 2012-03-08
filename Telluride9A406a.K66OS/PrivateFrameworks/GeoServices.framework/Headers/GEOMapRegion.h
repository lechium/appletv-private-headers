/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library
#import "GeoServices-Structs.h"


@interface GEOMapRegion : PBCodable {
	BOOL _hasSouthLat;	// 4 = 0x4
	double _southLat;	// 8 = 0x8
	BOOL _hasWestLng;	// 16 = 0x10
	double _westLng;	// 20 = 0x14
	BOOL _hasNorthLat;	// 28 = 0x1c
	double _northLat;	// 32 = 0x20
	BOOL _hasEastLng;	// 40 = 0x28
	double _eastLng;	// 44 = 0x2c
}
@property(readonly, assign, nonatomic) double centerLat;	// G=0x34be3d3d; 
@property(readonly, assign, nonatomic) double centerLng;	// G=0x34be3d8d; 
@property(assign, nonatomic) double eastLng;	// G=0x34bee93d; S=0x34bee401; @synthesize=_eastLng
@property(assign, nonatomic) BOOL hasEastLng;	// G=0x34bee91d; S=0x34bee92d; @synthesize=_hasEastLng
@property(assign, nonatomic) BOOL hasNorthLat;	// G=0x34bee8e5; S=0x34bee8f5; @synthesize=_hasNorthLat
@property(assign, nonatomic) BOOL hasSouthLat;	// G=0x34bee875; S=0x34bee885; @synthesize=_hasSouthLat
@property(assign, nonatomic) BOOL hasWestLng;	// G=0x34bee8ad; S=0x34bee8bd; @synthesize=_hasWestLng
@property(assign, nonatomic) double northLat;	// G=0x34bee905; S=0x34bee3d5; @synthesize=_northLat
@property(assign, nonatomic) double southLat;	// G=0x34bee895; S=0x34bee37d; @synthesize=_southLat
@property(readonly, assign, nonatomic) double spanLat;	// G=0x34be3ddd; 
@property(readonly, assign, nonatomic) double spanLng;	// G=0x34be3e29; 
@property(assign, nonatomic) double westLng;	// G=0x34bee8cd; S=0x34bee3a9; @synthesize=_westLng
- (id)initWithLatitude:(double)latitude longitude:(double)longitude;	// 0x34be3b79
- (id)initWithSpannedRegion:(XXStruct_SnKRpD)spannedRegion;	// 0x34be3c29
// declared property getter: - (double)centerLat;	// 0x34be3d3d
// declared property getter: - (double)centerLng;	// 0x34be3d8d
- (BOOL)containsCoordinate:(XXStruct_zYrK5D)coordinate;	// 0x34be3e75
- (void)dealloc;	// 0x34bee351
- (id)description;	// 0x34bee42d
- (id)dictionaryRepresentation;	// 0x34bee49d
// declared property getter: - (double)eastLng;	// 0x34bee93d
// declared property getter: - (BOOL)hasEastLng;	// 0x34bee91d
// declared property getter: - (BOOL)hasNorthLat;	// 0x34bee8e5
// declared property getter: - (BOOL)hasSouthLat;	// 0x34bee875
// declared property getter: - (BOOL)hasWestLng;	// 0x34bee8ad
// declared property getter: - (double)northLat;	// 0x34bee905
- (BOOL)readFrom:(id)from;	// 0x34bee645
// declared property setter: - (void)setEastLng:(double)lng;	// 0x34bee401
// declared property setter: - (void)setHasEastLng:(BOOL)lng;	// 0x34bee92d
// declared property setter: - (void)setHasNorthLat:(BOOL)lat;	// 0x34bee8f5
// declared property setter: - (void)setHasSouthLat:(BOOL)lat;	// 0x34bee885
// declared property setter: - (void)setHasWestLng:(BOOL)lng;	// 0x34bee8bd
// declared property setter: - (void)setNorthLat:(double)lat;	// 0x34bee3d5
// declared property setter: - (void)setSouthLat:(double)lat;	// 0x34bee37d
- (void)setSpannedRegion:(XXStruct_SnKRpD)region;	// 0x34be3c99
// declared property setter: - (void)setWestLng:(double)lng;	// 0x34bee3a9
// declared property getter: - (double)southLat;	// 0x34bee895
// declared property getter: - (double)spanLat;	// 0x34be3ddd
// declared property getter: - (double)spanLng;	// 0x34be3e29
// declared property getter: - (double)westLng;	// 0x34bee8cd
- (void)writeTo:(id)to;	// 0x34bee775
@end

