/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library
#import "GEOTileSetProfile.h"
#import "GeoServices-Structs.h"

@class NSURL, GEOTileSet, NSString;

__attribute__((visibility("hidden")))
@interface GEOVoltaireTileSetProfile : NSObject <GEOTileSetProfile> {
	GEOTileSet *_tileSet;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSString *baseURLString;	// G=0x31457a41; 
@property(readonly, assign, nonatomic) NSURL *multiTileURL;	// G=0x31457a61; 
@property(readonly, assign, nonatomic) unsigned operatingEdition;	// G=0x31457ac9; 
@property(readonly, assign, nonatomic) int scale;	// G=0x31457a21; 
@property(readonly, assign, nonatomic) int size;	// G=0x31457a01; 
@property(readonly, assign, nonatomic) int style;	// G=0x314579e1; 
- (id)initWithTileSet:(id)tileSet;	// 0x314578c1
- (id)_operatingVersion;	// 0x31457aa9
- (id)attributionInfoForTileKeys:(id)tileKeys;	// 0x31457ebd
// declared property getter: - (id)baseURLString;	// 0x31457a41
- (void)dealloc;	// 0x31457919
- (id)description;	// 0x31457965
- (BOOL)isAvailableForTileKey:(const GEOTileKey *)tileKey;	// 0x31457af1
- (void)loadAttributionBadgeDataHiDPI:(BOOL)dpi isIPad:(BOOL)pad handler:(id)handler;	// 0x31457e59
- (unsigned)maxZoomLevelForTileKey:(const GEOTileKey *)tileKey;	// 0x31457ce9
- (unsigned)minZoomLevelForTileKey:(const GEOTileKey *)tileKey;	// 0x31457bbd
// declared property getter: - (id)multiTileURL;	// 0x31457a61
- (BOOL)needsAttributionBadge;	// 0x31457e0d
// declared property getter: - (unsigned)operatingEdition;	// 0x31457ac9
// declared property getter: - (int)scale;	// 0x31457a21
// declared property getter: - (int)size;	// 0x31457a01
// declared property getter: - (int)style;	// 0x314579e1
@end

