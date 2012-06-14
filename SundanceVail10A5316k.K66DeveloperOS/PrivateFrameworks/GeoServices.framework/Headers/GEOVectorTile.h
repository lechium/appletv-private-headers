/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, NSMutableData, NSData;

@interface GEOVectorTile : NSObject {
	GEOTileKey _key;	// 4 = 0x4
	XXStruct_IJc5WD *_lines;	// 20 = 0x14
	unsigned _linesCount;	// 24 = 0x18
	unsigned _linesVertexCount;	// 28 = 0x1c
	GEOTileKey **_namedRoadsByFeatureID;	// 32 = 0x20
	unsigned _namedRoadsByFeatureIDCount;	// 36 = 0x24
	unsigned _namedRoadsVertexCount;	// 40 = 0x28
	GEOTileKey **_namedPointsByFeatureID;	// 44 = 0x2c
	unsigned _namedPointsByFeatureIDCount;	// 48 = 0x30
	GEOTileKey **_namedPolygonsByFeatureID;	// 52 = 0x34
	unsigned _namedPolygonsByFeatureIDCount;	// 56 = 0x38
	XXStruct_IJc5WD *_coastlines;	// 60 = 0x3c
	unsigned _coastlinesCount;	// 64 = 0x40
	XXStruct_5hFgMD *_polygons;	// 68 = 0x44
	unsigned _polygonsCount;	// 72 = 0x48
	unsigned _polygonsVertexCount;	// 76 = 0x4c
	XXStruct_4WiXgC *_polygonLabelPositions;	// 80 = 0x50
	unsigned _polygonLabelPositionsCount;	// 84 = 0x54
	XXStruct_nzTP9A *_buildingFootprints;	// 88 = 0x58
	NSMutableData *_extrusionHeightsPool;	// 92 = 0x5c
	unsigned _buildingFootprintsCount;	// 96 = 0x60
	XXStruct_5JvWtA *_threeDBuildings;	// 100 = 0x64
	unsigned _threeDBuildingsCount;	// 104 = 0x68
	XXStruct__$DoiB *_pois;	// 108 = 0x6c
	unsigned _poisCount;	// 112 = 0x70
	Angle *_overpasses;	// 116 = 0x74
	XXStruct_qFPbxC *_junctions;	// 120 = 0x78
	unsigned _junctionsCount;	// 124 = 0x7c
	BOOL _hasComputedJunctions;	// 128 = 0x80
	XXStruct_qFPbxC *_laneConnections;	// 132 = 0x84
	unsigned _laneConnectionsCount;	// 136 = 0x88
	XXStruct_qFPbxC *_pointsOnRoad;	// 140 = 0x8c
	unsigned _pointsOnRoadCount;	// 144 = 0x90
	GEOTileKey **_sortedPointsOnRoad;	// 148 = 0x94
	XXStruct_uYp3tB *_laneGeometry;	// 152 = 0x98
	XXStruct__qQs$B *_curveLineVertices;	// 156 = 0x9c
	unsigned *_curveToLineMapping;	// 160 = 0xa0
	XXStruct__qQs$B *_lineVertices;	// 164 = 0xa4
	XXStruct__qQs$B *_polygonVertices;	// 168 = 0xa8
	XXStruct__qQs$B *_coastlineVertices;	// 172 = 0xac
	XXStruct__qQs$B *_footprintVertices;	// 176 = 0xb0
	NSData *_labelPool;	// 180 = 0xb4
	XXStruct_xKvFHA *_labelPoolLanguages;	// 184 = 0xb8
	unsigned _labelPoolLanguagesLength;	// 188 = 0xbc
	NSMutableData *_localizedLabelPool;	// 192 = 0xc0
	char *_localizedLabelsLanguage;	// 196 = 0xc4
	XXStruct_BdOxqA *_labelIndex;	// 200 = 0xc8
	unsigned _labelIndexCount;	// 204 = 0xcc
	GEOFeatureShield *_shieldIndex;	// 208 = 0xd0
	unsigned _shieldIndexCount;	// 212 = 0xd4
	XXStruct_fJSKzC *_localizationTable;	// 216 = 0xd8
	unsigned _localizationTableCount;	// 220 = 0xdc
	NSMutableArray *_uniqueAttributes;	// 224 = 0xe0
	XXStruct_Jn2zBA *_lineCharacteristicPoints;	// 228 = 0xe4
	unsigned _lineCharacteristicPointCount;	// 232 = 0xe8
	XXStruct_Jn2zBA *_polygonCharacteristicPoints;	// 236 = 0xec
	unsigned _polygonCharacteristicPointCount;	// 240 = 0xf0
@private
	XXStruct_Jn2zBA *_coastlineCharacteristicPoints;	// 244 = 0xf4
	unsigned _coastlineCharacteristicPointCount;	// 248 = 0xf8
}
@property(readonly, assign, nonatomic) XXStruct_nzTP9A *buildingFootprints;	// G=0x34b65345; @synthesize=_buildingFootprints
@property(readonly, assign, nonatomic) unsigned buildingFootprintsCount;	// G=0x34b65355; @synthesize=_buildingFootprintsCount
@property(readonly, assign, nonatomic) unsigned coastlineCharacteristicPointCount;	// G=0x34b65465; @synthesize=_coastlineCharacteristicPointCount
@property(readonly, assign, nonatomic) XXStruct_Jn2zBA *coastlineCharacteristicPoints;	// G=0x34b65455; @synthesize=_coastlineCharacteristicPoints
@property(readonly, assign, nonatomic) XXStruct_IJc5WD *coastlines;	// G=0x34b65305; @synthesize=_coastlines
@property(readonly, assign, nonatomic) unsigned coastlinesCount;	// G=0x34b65315; @synthesize=_coastlinesCount
@property(readonly, assign, nonatomic) XXStruct__qQs$B *curveLineVertices;	// G=0x34b64cdd; 
@property(readonly, assign, nonatomic) BOOL dataIncludesConnectivity;	// G=0x34b65265; 
@property(readonly, retain) NSMutableData *extrusionHeightsPool;	// G=0x34b64d0d; converted property
@property(readonly, assign, nonatomic) BOOL hasComputedJunctions;	// G=0x34b653d5; @synthesize=_hasComputedJunctions
@property(readonly, assign, nonatomic) XXStruct_qFPbxC *junctions;	// G=0x34b653b5; @synthesize=_junctions
@property(readonly, assign, nonatomic) unsigned junctionsCount;	// G=0x34b653c5; @synthesize=_junctionsCount
@property(readonly, assign, nonatomic) XXStruct_qFPbxC *laneConnections;	// G=0x34b653f5; @synthesize=_laneConnections
@property(readonly, assign, nonatomic) unsigned laneConnectionsCount;	// G=0x34b65405; @synthesize=_laneConnectionsCount
@property(readonly, assign, nonatomic) unsigned lineCharacteristicPointCount;	// G=0x34b65425; @synthesize=_lineCharacteristicPointCount
@property(readonly, assign, nonatomic) XXStruct_Jn2zBA *lineCharacteristicPoints;	// G=0x34b65415; @synthesize=_lineCharacteristicPoints
@property(readonly, assign, nonatomic) XXStruct__qQs$B *lineVertices;	// G=0x34b64ccd; 
@property(readonly, assign, nonatomic) XXStruct_IJc5WD *lines;	// G=0x34b65285; @synthesize=_lines
@property(readonly, assign, nonatomic) unsigned linesCount;	// G=0x34b65295; @synthesize=_linesCount
@property(readonly, assign, nonatomic) unsigned linesVertexCount;	// G=0x34b6506d; @synthesize=_linesVertexCount
@property(readonly, assign, nonatomic) GEOTileKey **namedPointsByFeatureID;	// G=0x34b652c5; @synthesize=_namedPointsByFeatureID
@property(readonly, assign, nonatomic) unsigned namedPointsByFeatureIDCount;	// G=0x34b652d5; @synthesize=_namedPointsByFeatureIDCount
@property(readonly, assign, nonatomic) GEOTileKey **namedPolygonsByFeatureID;	// G=0x34b652e5; @synthesize=_namedPolygonsByFeatureID
@property(readonly, assign, nonatomic) unsigned namedPolygonsByFeatureIDCount;	// G=0x34b652f5; @synthesize=_namedPolygonsByFeatureIDCount
@property(readonly, assign, nonatomic) GEOTileKey **namedRoadsByFeatureID;	// G=0x34b652a5; @synthesize=_namedRoadsByFeatureID
@property(readonly, assign, nonatomic) unsigned namedRoadsByFeatureIDCount;	// G=0x34b652b5; @synthesize=_namedRoadsByFeatureIDCount
@property(readonly, assign, nonatomic) unsigned namedRoadsVertexCount;	// G=0x34b65119; 
@property(readonly, assign, nonatomic) Angle *overpasses;	// G=0x34b653a5; @synthesize=_overpasses
@property(readonly, assign, nonatomic) XXStruct_qFPbxC *pointsOnRoad;	// G=0x34b64ced; @synthesize=_pointsOnRoad
@property(readonly, assign, nonatomic) unsigned pointsOnRoadCount;	// G=0x34b653e5; @synthesize=_pointsOnRoadCount
@property(readonly, assign, nonatomic) XXStruct__$DoiB *pois;	// G=0x34b65385; @synthesize=_pois
@property(readonly, assign, nonatomic) unsigned poisCount;	// G=0x34b65395; @synthesize=_poisCount
@property(readonly, assign, nonatomic) unsigned polygonCharacteristicPointCount;	// G=0x34b65445; @synthesize=_polygonCharacteristicPointCount
@property(readonly, assign, nonatomic) XXStruct_Jn2zBA *polygonCharacteristicPoints;	// G=0x34b65435; @synthesize=_polygonCharacteristicPoints
@property(readonly, assign) XXStruct_4WiXgC *polygonLabelPositions;	// G=0x34b64d1d; converted property
@property(readonly, assign, nonatomic) XXStruct_5hFgMD *polygons;	// G=0x34b65325; @synthesize=_polygons
@property(readonly, assign, nonatomic) unsigned polygonsCount;	// G=0x34b65335; @synthesize=_polygonsCount
@property(readonly, assign, nonatomic) unsigned polygonsVertexCount;	// G=0x34b651b9; @synthesize=_polygonsVertexCount
@property(readonly, assign) GEOTileKey **sortedPointsOnRoad;	// G=0x34b64cfd; converted property
@property(readonly, assign, nonatomic) XXStruct_5JvWtA *threeDBuildings;	// G=0x34b65365; @synthesize=_threeDBuildings
@property(readonly, assign, nonatomic) unsigned threeDBuildingsCount;	// G=0x34b65375; @synthesize=_threeDBuildingsCount
@property(readonly, assign, nonatomic) GEOTileKey tileKey;	// G=0x34b65475; @synthesize=_key
- (id)initWithTileData:(id)tileData localizationData:(id)data tileKey:(const GEOTileKey *)key;	// 0x34b644e9
- (void)_attachRoadPoints;	// 0x34b805dd
- (void)_buildSortedFeatureLists;	// 0x34b80691
- (void)_findJunctions;	// 0x34b80b31
- (void)_findOverpasses;	// 0x34b80f65
- (id)_initWithVMP3:(id)vmp3 localizationData:(id)data tileKey:(const GEOTileKey *)key;	// 0x34b81221
- (id)_initWithVMP4:(id)vmp4 localizationData:(id)data tileKey:(const GEOTileKey *)key;	// 0x34b8bd79
- (unsigned)_makeSpaceForLabels:(unsigned)labels;	// 0x34b8464d
- (unsigned)_makeSpaceForShields:(unsigned)shields;	// 0x34b846c1
- (BOOL)_read3DBuildings:(XXStruct_tf976D *)buildings;	// 0x34b8b905
- (BOOL)_readCoastlines:(XXStruct_tf976D *)coastlines;	// 0x34b8b825
- (BOOL)_readInfoChapter:(XXStruct_tf976D *)chapter;	// 0x34b83fc1
- (BOOL)_readLabels:(XXStruct_tf976D *)labels;	// 0x34b8422d
- (BOOL)_readLines:(XXStruct_tf976D *)lines;	// 0x34b84735
- (BOOL)_readPois:(XXStruct_tf976D *)pois;	// 0x34b89699
- (BOOL)_readPolygons:(XXStruct_tf976D *)polygons;	// 0x34b89659
- (BOOL)_readPolygons:(XXStruct_tf976D *)polygons ofType:(unsigned short)type;	// 0x34b88549
- (BOOL)_readSimpleCoastlines:(XXStruct_g8x3EB *)coastlines tile:(XXStruct_tf976D *)tile;	// 0x34b8a669
- (BOOL)_readWrappingCoastlines:(XXStruct_g8x3EB *)coastlines tile:(XXStruct_tf976D *)tile;	// 0x34b8aef5
- (void)_sortStyleAttributes;	// 0x34b8115d
// declared property getter: - (XXStruct_nzTP9A *)buildingFootprints;	// 0x34b65345
// declared property getter: - (unsigned)buildingFootprintsCount;	// 0x34b65355
// declared property getter: - (unsigned)coastlineCharacteristicPointCount;	// 0x34b65465
// declared property getter: - (XXStruct_Jn2zBA *)coastlineCharacteristicPoints;	// 0x34b65455
// declared property getter: - (XXStruct_IJc5WD *)coastlines;	// 0x34b65305
// declared property getter: - (unsigned)coastlinesCount;	// 0x34b65315
// declared property getter: - (XXStruct__qQs$B *)curveLineVertices;	// 0x34b64cdd
// declared property getter: - (BOOL)dataIncludesConnectivity;	// 0x34b65265
- (void)dealloc;	// 0x34b64809
- (id)description;	// 0x34b64bdd
// converted property getter: - (id)extrusionHeightsPool;	// 0x34b64d0d
- (void)forEachEdgeInRoad:(XXStruct_IJc5WD *)road visitTwice:(BOOL)twice visitor:(id)visitor;	// 0x34b64f1d
- (void)forEachEdgeOnJunction:(XXStruct_qFPbxC *)eachEdgeOnJunction visitor:(id)visitor;	// 0x34b64d7d
- (void)forEachJunction:(id)eachJunction;	// 0x34b64e5d
- (void)forEachRoad:(id)eachRoad;	// 0x34b64d2d
// declared property getter: - (BOOL)hasComputedJunctions;	// 0x34b653d5
// declared property getter: - (XXStruct_qFPbxC *)junctions;	// 0x34b653b5
// declared property getter: - (unsigned)junctionsCount;	// 0x34b653c5
// declared property getter: - (XXStruct_qFPbxC *)laneConnections;	// 0x34b653f5
// declared property getter: - (unsigned)laneConnectionsCount;	// 0x34b65405
// declared property getter: - (unsigned)lineCharacteristicPointCount;	// 0x34b65425
// declared property getter: - (XXStruct_Jn2zBA *)lineCharacteristicPoints;	// 0x34b65415
// declared property getter: - (XXStruct__qQs$B *)lineVertices;	// 0x34b64ccd
// declared property getter: - (XXStruct_IJc5WD *)lines;	// 0x34b65285
// declared property getter: - (unsigned)linesCount;	// 0x34b65295
// declared property getter: - (unsigned)linesVertexCount;	// 0x34b6506d
// declared property getter: - (GEOTileKey **)namedPointsByFeatureID;	// 0x34b652c5
// declared property getter: - (unsigned)namedPointsByFeatureIDCount;	// 0x34b652d5
// declared property getter: - (GEOTileKey **)namedPolygonsByFeatureID;	// 0x34b652e5
// declared property getter: - (unsigned)namedPolygonsByFeatureIDCount;	// 0x34b652f5
// declared property getter: - (GEOTileKey **)namedRoadsByFeatureID;	// 0x34b652a5
// declared property getter: - (unsigned)namedRoadsByFeatureIDCount;	// 0x34b652b5
// declared property getter: - (unsigned)namedRoadsVertexCount;	// 0x34b65119
// declared property getter: - (Angle *)overpasses;	// 0x34b653a5
// declared property getter: - (XXStruct_qFPbxC *)pointsOnRoad;	// 0x34b64ced
// declared property getter: - (unsigned)pointsOnRoadCount;	// 0x34b653e5
// declared property getter: - (XXStruct__$DoiB *)pois;	// 0x34b65385
// declared property getter: - (unsigned)poisCount;	// 0x34b65395
// declared property getter: - (unsigned)polygonCharacteristicPointCount;	// 0x34b65445
// declared property getter: - (XXStruct_Jn2zBA *)polygonCharacteristicPoints;	// 0x34b65435
// converted property getter: - (XXStruct_4WiXgC *)polygonLabelPositions;	// 0x34b64d1d
// declared property getter: - (XXStruct_5hFgMD *)polygons;	// 0x34b65325
// declared property getter: - (unsigned)polygonsCount;	// 0x34b65335
// declared property getter: - (unsigned)polygonsVertexCount;	// 0x34b651b9
// converted property getter: - (GEOTileKey **)sortedPointsOnRoad;	// 0x34b64cfd
// declared property getter: - (XXStruct_5JvWtA *)threeDBuildings;	// 0x34b65365
// declared property getter: - (unsigned)threeDBuildingsCount;	// 0x34b65375
// declared property getter: - (GEOTileKey)tileKey;	// 0x34b65475
@end

