/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class GEOVLaneCharacteristic;

__attribute__((visibility("hidden")))
@interface GEOVPointCharacteristic : PBCodable {
	GEOVLaneCharacteristic *_laneCharacteristic;	// 4 = 0x4
	int _roadLaneCount;	// 8 = 0x8
	int _roadOffset;	// 12 = 0xc
	int _sectionIndex;	// 16 = 0x10
	int _vertexIndex;	// 20 = 0x14
	int _zLevel;	// 24 = 0x18
	BOOL _brunnelEntry;	// 28 = 0x1c
	BOOL _castShadow;	// 29 = 0x1d
	BOOL _cropped;	// 30 = 0x1e
	BOOL _shouldDrawLanes;	// 31 = 0x1f
	struct {
		unsigned basicPointsToBeIncluded : 1;
		unsigned trafficType : 1;
		unsigned transportType : 1;
		unsigned includeContingencyRoutes : 1;
		unsigned includeLaneGuidance : 1;
		unsigned includeNavigationInfo : 1;
		unsigned includePhonetics : 1;
		unsigned includeTrafficAlongRoute : 1;
		unsigned includeZilchPoints : 1;
	} _has;	// 32 = 0x20
}
@property(assign, nonatomic) BOOL brunnelEntry;	// G=0x37a7c0e9; S=0x37a7ac6d; @synthesize=_brunnelEntry
@property(assign, nonatomic) BOOL castShadow;	// G=0x37a7c0d9; S=0x37a7ac0d; @synthesize=_castShadow
@property(assign, nonatomic) BOOL cropped;	// G=0x37a7c099; S=0x37a7ab31; @synthesize=_cropped
@property(assign, nonatomic) BOOL hasBrunnelEntry;	// G=0x37a7acb9; S=0x37a7ac95; 
@property(assign, nonatomic) BOOL hasCastShadow;	// G=0x37a7ac59; S=0x37a7ac35; 
@property(assign, nonatomic) BOOL hasCropped;	// G=0x37a7ab7d; S=0x37a7ab59; 
@property(readonly, assign, nonatomic) BOOL hasLaneCharacteristic;	// G=0x37a7ab91; 
@property(assign, nonatomic) BOOL hasRoadLaneCount;	// G=0x37a7aa5d; S=0x37a7aa39; 
@property(assign, nonatomic) BOOL hasRoadOffset;	// G=0x37a7aabd; S=0x37a7aa99; 
@property(assign, nonatomic) BOOL hasSectionIndex;	// G=0x37a7a99d; S=0x37a7a979; 
@property(assign, nonatomic) BOOL hasShouldDrawLanes;	// G=0x37a7abf5; S=0x37a7abd1; 
@property(assign, nonatomic) BOOL hasVertexIndex;	// G=0x37a7a9fd; S=0x37a7a9d9; 
@property(assign, nonatomic) BOOL hasZLevel;	// G=0x37a7ab1d; S=0x37a7aaf9; 
@property(retain, nonatomic) GEOVLaneCharacteristic *laneCharacteristic;	// G=0x37a7c0a9; S=0x37a7c0b9; @synthesize=_laneCharacteristic
@property(assign, nonatomic) int roadLaneCount;	// G=0x37a7c069; S=0x37a7aa11; @synthesize=_roadLaneCount
@property(assign, nonatomic) int roadOffset;	// G=0x37a7c079; S=0x37a7aa71; @synthesize=_roadOffset
@property(assign, nonatomic) int sectionIndex;	// G=0x37a7c049; S=0x37a7a951; @synthesize=_sectionIndex
@property(assign, nonatomic) BOOL shouldDrawLanes;	// G=0x37a7c0c9; S=0x37a7aba9; @synthesize=_shouldDrawLanes
@property(assign, nonatomic) int vertexIndex;	// G=0x37a7c059; S=0x37a7a9b1; @synthesize=_vertexIndex
@property(assign, nonatomic) int zLevel;	// G=0x37a7c089; S=0x37a7aad1; @synthesize=_zLevel
// declared property getter: - (BOOL)brunnelEntry;	// 0x37a7c0e9
// declared property getter: - (BOOL)castShadow;	// 0x37a7c0d9
- (void)copyTo:(id)to;	// 0x37a7b985
// declared property getter: - (BOOL)cropped;	// 0x37a7c099
- (void)dealloc;	// 0x37a7a90d
- (id)description;	// 0x37a7accd
- (id)dictionaryRepresentation;	// 0x37a7ad3d
// declared property getter: - (BOOL)hasBrunnelEntry;	// 0x37a7acb9
// declared property getter: - (BOOL)hasCastShadow;	// 0x37a7ac59
// declared property getter: - (BOOL)hasCropped;	// 0x37a7ab7d
// declared property getter: - (BOOL)hasLaneCharacteristic;	// 0x37a7ab91
// declared property getter: - (BOOL)hasRoadLaneCount;	// 0x37a7aa5d
// declared property getter: - (BOOL)hasRoadOffset;	// 0x37a7aabd
// declared property getter: - (BOOL)hasSectionIndex;	// 0x37a7a99d
// declared property getter: - (BOOL)hasShouldDrawLanes;	// 0x37a7abf5
// declared property getter: - (BOOL)hasVertexIndex;	// 0x37a7a9fd
// declared property getter: - (BOOL)hasZLevel;	// 0x37a7ab1d
- (unsigned)hash;	// 0x37a7be59
- (BOOL)isEqual:(id)equal;	// 0x37a7bc01
// declared property getter: - (id)laneCharacteristic;	// 0x37a7c0a9
- (BOOL)readFrom:(id)from;	// 0x37a7b729
// declared property getter: - (int)roadLaneCount;	// 0x37a7c069
// declared property getter: - (int)roadOffset;	// 0x37a7c079
// declared property getter: - (int)sectionIndex;	// 0x37a7c049
// declared property setter: - (void)setBrunnelEntry:(BOOL)entry;	// 0x37a7ac6d
// declared property setter: - (void)setCastShadow:(BOOL)shadow;	// 0x37a7ac0d
// declared property setter: - (void)setCropped:(BOOL)cropped;	// 0x37a7ab31
// declared property setter: - (void)setHasBrunnelEntry:(BOOL)entry;	// 0x37a7ac95
// declared property setter: - (void)setHasCastShadow:(BOOL)shadow;	// 0x37a7ac35
// declared property setter: - (void)setHasCropped:(BOOL)cropped;	// 0x37a7ab59
// declared property setter: - (void)setHasRoadLaneCount:(BOOL)count;	// 0x37a7aa39
// declared property setter: - (void)setHasRoadOffset:(BOOL)offset;	// 0x37a7aa99
// declared property setter: - (void)setHasSectionIndex:(BOOL)index;	// 0x37a7a979
// declared property setter: - (void)setHasShouldDrawLanes:(BOOL)drawLanes;	// 0x37a7abd1
// declared property setter: - (void)setHasVertexIndex:(BOOL)index;	// 0x37a7a9d9
// declared property setter: - (void)setHasZLevel:(BOOL)level;	// 0x37a7aaf9
// declared property setter: - (void)setLaneCharacteristic:(id)characteristic;	// 0x37a7c0b9
// declared property setter: - (void)setRoadLaneCount:(int)count;	// 0x37a7aa11
// declared property setter: - (void)setRoadOffset:(int)offset;	// 0x37a7aa71
// declared property setter: - (void)setSectionIndex:(int)index;	// 0x37a7a951
// declared property setter: - (void)setShouldDrawLanes:(BOOL)drawLanes;	// 0x37a7aba9
// declared property setter: - (void)setVertexIndex:(int)index;	// 0x37a7a9b1
// declared property setter: - (void)setZLevel:(int)level;	// 0x37a7aad1
// declared property getter: - (BOOL)shouldDrawLanes;	// 0x37a7c0c9
// declared property getter: - (int)vertexIndex;	// 0x37a7c059
- (void)writeTo:(id)to;	// 0x37a7b735
// declared property getter: - (int)zLevel;	// 0x37a7c089
@end

