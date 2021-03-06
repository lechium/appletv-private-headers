/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class GEODownloadMetadata, GEOSupportedTileSets;

@interface GEOSupportedTileSetsDownload : PBCodable {
	GEODownloadMetadata *_metadata;	// 4 = 0x4
	GEOSupportedTileSets *_tileSets;	// 8 = 0x8
}
@property(retain, nonatomic) GEODownloadMetadata *metadata;	// G=0x34183a2d; S=0x34183a3d; @synthesize=_metadata
@property(retain, nonatomic) GEOSupportedTileSets *tileSets;	// G=0x34183a0d; S=0x34183a1d; @synthesize=_tileSets
- (void)copyTo:(id)to;	// 0x341838d5
- (void)dealloc;	// 0x3418342d
- (id)description;	// 0x34183485
- (id)dictionaryRepresentation;	// 0x341834f5
- (unsigned)hash;	// 0x341839cd
- (BOOL)isEqual:(id)equal;	// 0x3418392d
// declared property getter: - (id)metadata;	// 0x34183a2d
- (BOOL)readFrom:(id)from;	// 0x341837c5
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x34183a3d
// declared property setter: - (void)setTileSets:(id)sets;	// 0x34183a1d
// declared property getter: - (id)tileSets;	// 0x34183a0d
- (void)writeTo:(id)to;	// 0x341837d1
@end

