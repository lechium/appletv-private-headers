/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class NSData, NSMutableArray, GEOVConnectivity;

__attribute__((visibility("hidden")))
@interface GEOVTile : PBCodable {
@private
	NSMutableArray *_coastlines;	// 4 = 0x4
	GEOVConnectivity *_connectivity;	// 8 = 0x8
	NSMutableArray *_labelLanguages;	// 12 = 0xc
	NSData *_labels;	// 16 = 0x10
	NSMutableArray *_lines;	// 20 = 0x14
	int _minZ;	// 24 = 0x18
	NSMutableArray *_points;	// 28 = 0x1c
	NSMutableArray *_polygons;	// 32 = 0x20
	unsigned _sectionDeltaLengthBits;	// 36 = 0x24
	unsigned _vertexBits;	// 40 = 0x28
	NSData *_vertices;	// 44 = 0x2c
	int _zBits;	// 48 = 0x30
	struct {
		unsigned eastLng : 1;
		unsigned northLat : 1;
		unsigned southLat : 1;
		unsigned westLng : 1;
	} _has;	// 52 = 0x34
}
@property(retain, nonatomic) NSMutableArray *coastlines;	// G=0x34b73d29; S=0x34b73d39; @synthesize=_coastlines
@property(retain, nonatomic) GEOVConnectivity *connectivity;	// G=0x34b73ce9; S=0x34b73cf9; @synthesize=_connectivity
@property(readonly, assign, nonatomic) BOOL hasConnectivity;	// G=0x34b7198d; 
@property(readonly, assign, nonatomic) BOOL hasLabels;	// G=0x34b7195d; 
@property(assign, nonatomic) BOOL hasMinZ;	// G=0x34b719e9; S=0x34b719cd; 
@property(assign, nonatomic) BOOL hasSectionDeltaLengthBits;	// G=0x34b71ce5; S=0x34b71cc5; 
@property(assign, nonatomic) BOOL hasVertexBits;	// G=0x34b71c61; S=0x34b71c41; 
@property(readonly, assign, nonatomic) BOOL hasVertices;	// G=0x34b71975; 
@property(assign, nonatomic) BOOL hasZBits;	// G=0x34b71a45; S=0x34b71a25; 
@property(retain, nonatomic) NSMutableArray *labelLanguages;	// G=0x34b73d49; S=0x34b73d59; @synthesize=_labelLanguages
@property(retain, nonatomic) NSData *labels;	// G=0x34b73ca9; S=0x34b73cb9; @synthesize=_labels
@property(retain, nonatomic) NSMutableArray *lines;	// G=0x34b73c49; S=0x34b73c59; @synthesize=_lines
@property(assign, nonatomic) int minZ;	// G=0x34b73d09; S=0x34b719a5; @synthesize=_minZ
@property(retain, nonatomic) NSMutableArray *points;	// G=0x34b73c89; S=0x34b73c99; @synthesize=_points
@property(retain, nonatomic) NSMutableArray *polygons;	// G=0x34b73c69; S=0x34b73c79; @synthesize=_polygons
@property(assign, nonatomic) unsigned sectionDeltaLengthBits;	// G=0x34b71c75; S=0x34b71c9d; @synthesize=_sectionDeltaLengthBits
@property(assign, nonatomic) unsigned vertexBits;	// G=0x34b71bf1; S=0x34b71c19; @synthesize=_vertexBits
@property(retain, nonatomic) NSData *vertices;	// G=0x34b73cc9; S=0x34b73cd9; @synthesize=_vertices
@property(assign, nonatomic) int zBits;	// G=0x34b73d19; S=0x34b719fd; @synthesize=_zBits
- (void)addCoastlines:(id)coastlines;	// 0x34b71a79
- (void)addLabelLanguage:(id)language;	// 0x34b71b45
- (void)addLine:(id)line;	// 0x34b71719
- (void)addPoint:(id)point;	// 0x34b718b1
- (void)addPolygon:(id)polygon;	// 0x34b717e5
- (void)clearCoastlines;	// 0x34b71a59
- (void)clearLabelLanguages;	// 0x34b71b25
- (void)clearLines;	// 0x34b716f9
- (void)clearPoints;	// 0x34b71891
- (void)clearPolygons;	// 0x34b717c5
// declared property getter: - (id)coastlines;	// 0x34b73d29
- (id)coastlinesAtIndex:(unsigned)index;	// 0x34b71b05
- (unsigned)coastlinesCount;	// 0x34b71ae5
// declared property getter: - (id)connectivity;	// 0x34b73ce9
- (void)copyTo:(id)to;	// 0x34b733f9
- (void)dealloc;	// 0x34b71629
- (id)description;	// 0x34b71cf9
- (id)dictionaryRepresentation;	// 0x34b71d69
// declared property getter: - (BOOL)hasConnectivity;	// 0x34b7198d
// declared property getter: - (BOOL)hasLabels;	// 0x34b7195d
// declared property getter: - (BOOL)hasMinZ;	// 0x34b719e9
// declared property getter: - (BOOL)hasSectionDeltaLengthBits;	// 0x34b71ce5
// declared property getter: - (BOOL)hasVertexBits;	// 0x34b71c61
// declared property getter: - (BOOL)hasVertices;	// 0x34b71975
// declared property getter: - (BOOL)hasZBits;	// 0x34b71a45
- (unsigned)hash;	// 0x34b73a95
- (BOOL)isEqual:(id)equal;	// 0x34b737e1
- (id)labelLanguageAtIndex:(unsigned)index;	// 0x34b71bd1
// declared property getter: - (id)labelLanguages;	// 0x34b73d49
- (unsigned)labelLanguagesCount;	// 0x34b71bb1
// declared property getter: - (id)labels;	// 0x34b73ca9
- (id)lineAtIndex:(unsigned)index;	// 0x34b717a5
// declared property getter: - (id)lines;	// 0x34b73c49
- (unsigned)linesCount;	// 0x34b71785
// declared property getter: - (int)minZ;	// 0x34b73d09
- (id)pointAtIndex:(unsigned)index;	// 0x34b7193d
// declared property getter: - (id)points;	// 0x34b73c89
- (unsigned)pointsCount;	// 0x34b7191d
- (id)polygonAtIndex:(unsigned)index;	// 0x34b71871
// declared property getter: - (id)polygons;	// 0x34b73c69
- (unsigned)polygonsCount;	// 0x34b71851
- (BOOL)readFrom:(id)from;	// 0x34b72ced
// declared property getter: - (unsigned)sectionDeltaLengthBits;	// 0x34b71c75
// declared property setter: - (void)setCoastlines:(id)coastlines;	// 0x34b73d39
// declared property setter: - (void)setConnectivity:(id)connectivity;	// 0x34b73cf9
// declared property setter: - (void)setHasMinZ:(BOOL)z;	// 0x34b719cd
// declared property setter: - (void)setHasSectionDeltaLengthBits:(BOOL)bits;	// 0x34b71cc5
// declared property setter: - (void)setHasVertexBits:(BOOL)bits;	// 0x34b71c41
// declared property setter: - (void)setHasZBits:(BOOL)bits;	// 0x34b71a25
// declared property setter: - (void)setLabelLanguages:(id)languages;	// 0x34b73d59
// declared property setter: - (void)setLabels:(id)labels;	// 0x34b73cb9
// declared property setter: - (void)setLines:(id)lines;	// 0x34b73c59
// declared property setter: - (void)setMinZ:(int)z;	// 0x34b719a5
// declared property setter: - (void)setPoints:(id)points;	// 0x34b73c99
// declared property setter: - (void)setPolygons:(id)polygons;	// 0x34b73c79
// declared property setter: - (void)setSectionDeltaLengthBits:(unsigned)bits;	// 0x34b71c9d
// declared property setter: - (void)setVertexBits:(unsigned)bits;	// 0x34b71c19
// declared property setter: - (void)setVertices:(id)vertices;	// 0x34b73cd9
// declared property setter: - (void)setZBits:(int)bits;	// 0x34b719fd
// declared property getter: - (unsigned)vertexBits;	// 0x34b71bf1
// declared property getter: - (id)vertices;	// 0x34b73cc9
- (void)writeTo:(id)to;	// 0x34b72cf9
// declared property getter: - (int)zBits;	// 0x34b73d19
@end

