/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSMutableArray;

@interface GMMIncomingTile : PBCodable {
	int _zoom;	// 4 = 0x4
	int _numHorizontalTiles;	// 8 = 0x8
	int _numVerticalTiles;	// 12 = 0xc
	NSMutableArray *_tiles;	// 16 = 0x10
}
@property(assign, nonatomic) int numHorizontalTiles;	// G=0x31fafb0d; S=0x31fafb1d; @synthesize=_numHorizontalTiles
@property(assign, nonatomic) int numVerticalTiles;	// G=0x31fafb2d; S=0x31fafb3d; @synthesize=_numVerticalTiles
@property(retain, nonatomic) NSMutableArray *tiles;	// G=0x31fafb4d; S=0x31fafb5d; @synthesize=_tiles
@property(assign, nonatomic) int zoom;	// G=0x31fafaed; S=0x31fafafd; @synthesize=_zoom
- (void)addTile:(id)tile;	// 0x31faf62d
- (void)dealloc;	// 0x31faf5e9
- (id)description;	// 0x31faf6d1
- (id)dictionaryRepresentation;	// 0x31faf741
// declared property getter: - (int)numHorizontalTiles;	// 0x31fafb0d
// declared property getter: - (int)numVerticalTiles;	// 0x31fafb2d
- (BOOL)readFrom:(id)from;	// 0x31faf83d
// declared property setter: - (void)setNumHorizontalTiles:(int)tiles;	// 0x31fafb1d
// declared property setter: - (void)setNumVerticalTiles:(int)tiles;	// 0x31fafb3d
// declared property setter: - (void)setTiles:(id)tiles;	// 0x31fafb5d
// declared property setter: - (void)setZoom:(int)zoom;	// 0x31fafafd
- (id)tileAtIndex:(unsigned)index;	// 0x31faf6b1
// declared property getter: - (id)tiles;	// 0x31fafb4d
- (unsigned)tilesCount;	// 0x31faf691
- (void)writeTo:(id)to;	// 0x31faf9c5
// declared property getter: - (int)zoom;	// 0x31fafaed
@end

