/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GEOCache.h"
#import "GeoServices-Structs.h"


@interface GEOTileCache : GEOCache {
}
- (id)initWithMinCapacity:(unsigned)minCapacity;	// 0x34aea761
- (void)removeTileForKey:(const GEOTileKey *)key;	// 0x34aea931
- (void)setNullForKey:(const GEOTileKey *)key;	// 0x34aea89d
- (void)setTile:(id)tile forKey:(const GEOTileKey *)key cost:(unsigned)cost;	// 0x34aea809
- (id)tileForKey:(const GEOTileKey *)key;	// 0x34aea7c1
@end

