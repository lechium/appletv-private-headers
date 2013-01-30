/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <NSObject.h> // Unknown library


@interface GEOTileCache : NSObject {
	mutex _lock;	// 4 = 0x4
	list<CacheItem, std::__1::allocator<CacheItem> > _list;	// 48 = 0x30
	unordered_map<_GEOTileKey, std::__1::__list_iterator<CacheItem, void *>, hashkey, eqkey, std::__1::allocator<std::__1::pair<const _GEOTileKey, std::__1::__list_iterator<CacheItem, void *>>> > _map;	// 60 = 0x3c
	unsigned _maxCapacity;	// 80 = 0x50
	unsigned _maxCost;	// 84 = 0x54
	unsigned _currentCost;	// 88 = 0x58
	unsigned _currentCount;	// 92 = 0x5c
}
@property(assign) unsigned maxCapacity;	// G=0x33f7d1b9; S=0x33f4c641; 
@property(assign) unsigned maxCost;	// G=0x33f7d26d; S=0x33f4c479; 
- (id)init;	// 0x33f4c341
- (id).cxx_construct;	// 0x33f4c2dd
- (void).cxx_destruct;	// 0x33f7db39
- (id)_description;	// 0x33f7ce01
- (void)_enteredBackground:(id)background;	// 0x33f54bc1
- (void)_evictWithMaxCost:(unsigned)maxCost maxCapacity:(unsigned)capacity;	// 0x33f4c57d
- (void)_receivedMemoryNotification:(id)notification;	// 0x33f7d0b5
- (void)_removeTileForKey:(const GEOTileKey *)key;	// 0x33f7d351
- (void)dealloc;	// 0x33f7cd69
- (id)description;	// 0x33f7cfd5
- (void)enumerate:(id)enumerate;	// 0x33f7d669
// declared property getter: - (unsigned)maxCapacity;	// 0x33f7d1b9
// declared property getter: - (unsigned)maxCost;	// 0x33f7d26d
- (void)removeAllObjects;	// 0x33f54bd1
- (void)removeTileForKey:(const GEOTileKey *)key;	// 0x33f7d3f1
- (void)removeTilesMatchingPredicate:(id)predicate;	// 0x33f7d8e1
- (void)removeTilesWithKeys:(id)keys;	// 0x33f7d4d1
// declared property setter: - (void)setMaxCapacity:(unsigned)capacity;	// 0x33f4c641
// declared property setter: - (void)setMaxCost:(unsigned)cost;	// 0x33f4c479
- (void)setNullForKey:(const GEOTileKey *)key;	// 0x33f7d321
- (void)setTile:(id)tile forKey:(const GEOTileKey *)key cost:(unsigned)cost;	// 0x33f52981
- (id)tileForKey:(const GEOTileKey *)key;	// 0x33f4fe81
@end
