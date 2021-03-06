/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GEOTileRequester.h"
#import "NSURLConnectionDelegate.h"
#import "GeoServices-Structs.h"

@class NSMutableArray, NSMutableSet;

@interface GEOSimpleTileRequester : GEOTileRequester <NSURLConnectionDelegate> {
	NSMutableArray *_waiting;	// 32 = 0x20
	NSMutableSet *_running;	// 36 = 0x24
	BOOL _cancelled;	// 40 = 0x28
	BOOL _subclassImplementsTileEdition;	// 41 = 0x29
	NSMutableArray *_errors;	// 44 = 0x2c
}
- (id)initWithKeyList:(id)keyList;	// 0x3415660d
- (void)_cleanup;	// 0x34157365
- (void)_doWorkOrFinish;	// 0x34156cf9
- (void)_operationFailed:(id)failed error:(id)error;	// 0x341566cd
- (void)_operationFinished:(id)finished;	// 0x341567c5
- (BOOL)allowsCookies;	// 0x34156695
- (void)cancel;	// 0x3415758d
- (void)dealloc;	// 0x34157671
- (id)editionHeader;	// 0x341566c1
- (BOOL)isRunning;	// 0x34156ee9
- (id)localizationURLForTileKey:(GEOTileKey *)tileKey;	// 0x341566b5
- (id)mergeBaseTile:(id)tile withLocalizationTile:(id)localizationTile;	// 0x341566b9
- (void)start;	// 0x34156f35
- (unsigned)tileEditionForKey:(GEOTileKey *)key;	// 0x34157349
- (id)urlForTileKey:(GEOTileKey *)tileKey;	// 0x34156699
@end

