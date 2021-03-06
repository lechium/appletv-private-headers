/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class NSMutableArray;

@interface GEOSupportedTileSets : PBCodable {
	NSMutableArray *_tileSets;	// 4 = 0x4
}
@property(retain, nonatomic) NSMutableArray *tileSets;	// G=0x3394e919; S=0x3394e929; @synthesize=_tileSets
- (void)addTileSet:(id)set;	// 0x3394e255
- (void)clearTileSets;	// 0x3394e235
- (void)copyTo:(id)to;	// 0x3394e809
- (void)dealloc;	// 0x3394e1f1
- (id)description;	// 0x3394e301
- (id)dictionaryRepresentation;	// 0x3394e371
- (unsigned)hash;	// 0x3394e8f9
- (BOOL)isEqual:(id)equal;	// 0x3394e889
- (BOOL)readFrom:(id)from;	// 0x3394e6b9
// declared property setter: - (void)setTileSets:(id)sets;	// 0x3394e929
- (id)tileSetAtIndex:(unsigned)index;	// 0x3394e2e1
// declared property getter: - (id)tileSets;	// 0x3394e919
- (unsigned)tileSetsCount;	// 0x3394e2c1
- (void)writeTo:(id)to;	// 0x3394e6c5
@end

