/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import "GEOCache.h"


@interface GEOTileCache : GEOCache {
}
- (id)init;	// 0x32ce0ca9
- (void)removeTileForKey:(const GEOTileKey *)key;	// 0x32ce0e89
- (void)setNullForKey:(const GEOTileKey *)key;	// 0x32ce0de9
- (void)setTile:(id)tile forKey:(const GEOTileKey *)key cost:(unsigned)cost;	// 0x32ce0d55
- (id)tileForKey:(const GEOTileKey *)key;	// 0x32ce0d09
@end

