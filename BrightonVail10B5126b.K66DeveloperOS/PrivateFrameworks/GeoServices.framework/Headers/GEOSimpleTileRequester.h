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
- (id)initWithKeyList:(id)keyList;	// 0x33f74735
- (void)_cleanup;	// 0x33f7548d
- (void)_doWorkOrFinish;	// 0x33f74e21
- (void)_operationFailed:(id)failed error:(id)error;	// 0x33f747f5
- (void)_operationFinished:(id)finished;	// 0x33f748ed
- (BOOL)allowsCookies;	// 0x33f747bd
- (void)cancel;	// 0x33f756b5
- (void)dealloc;	// 0x33f75799
- (id)editionHeader;	// 0x33f747e9
- (BOOL)isRunning;	// 0x33f75011
- (id)localizationURLForTileKey:(GEOTileKey *)tileKey;	// 0x33f747dd
- (id)mergeBaseTile:(id)tile withLocalizationTile:(id)localizationTile;	// 0x33f747e1
- (void)start;	// 0x33f7505d
- (unsigned)tileEditionForKey:(GEOTileKey *)key;	// 0x33f75471
- (id)urlForTileKey:(GEOTileKey *)tileKey;	// 0x33f747c1
@end

