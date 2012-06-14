/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GEOSimpleTileRequester.h"
#import "NSURLConnectionDelegate.h"
#import "GeoServices-Structs.h"


__attribute__((visibility("hidden")))
@interface GEOVoltaireSimpleTileRequester : GEOSimpleTileRequester <NSURLConnectionDelegate> {
}
- (id)_localizationURLForTileKey:(GEOTileKey *)tileKey;	// 0x34b64315
- (id)localizationURLForTileKey:(GEOTileKey *)tileKey;	// 0x34b64491
- (unsigned)tileEditionForKey:(GEOTileKey *)key;	// 0x34b6417d
- (unsigned)tileSetForKey:(const GEOTileKey *)key;	// 0x34b64159
- (id)urlForTileKey:(GEOTileKey *)tileKey;	// 0x34b641b5
@end

