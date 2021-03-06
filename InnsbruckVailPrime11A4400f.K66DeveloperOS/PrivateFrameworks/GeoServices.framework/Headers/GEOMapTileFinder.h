/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import "GEOMapRequest.h"

@class GEOMapAccess;

__attribute__((visibility("hidden")))
@interface GEOMapTileFinder : GEOMapRequest {
	XXStruct_gLbvpC _center;	// 16 = 0x10
	double _radius;	// 32 = 0x20
	id _tileHandler;	// 40 = 0x28
	BOOL _isCanceling;	// 44 = 0x2c
}
@property(readonly, assign, nonatomic) GEOMapAccess *map;	// G=0x30f8a965; 
@property(copy, nonatomic) id tileHandler;	// G=0x30f8b0cd; S=0x30f8b0e1; @synthesize=_tileHandler
- (id)initWithMap:(id)map center:(XXStruct_gLbvpC)center radius:(double)radius;	// 0x30f8a835
- (id).cxx_construct;	// 0x30f8b0f1
- (void)_fetchDataForKeys:(const unordered_set<_GEOTileKey, std::__1::hash<GEOTileKey>, std::__1::equal_to<GEOTileKey>, std::__1::allocator<_GEOTileKey> > *)keys;	// 0x30f8a979
- (void)cancel;	// 0x30f8a8ed
- (void)dealloc;	// 0x30f8a8a1
- (void)findTiles:(id)tiles;	// 0x30f8b0b9
- (void)findTiles:(id)tiles excludingKey:(const GEOTileKey *)key;	// 0x30f8ad75
// declared property getter: - (id)map;	// 0x30f8a965
// declared property setter: - (void)setTileHandler:(id)handler;	// 0x30f8b0e1
// declared property getter: - (id)tileHandler;	// 0x30f8b0cd
@end

