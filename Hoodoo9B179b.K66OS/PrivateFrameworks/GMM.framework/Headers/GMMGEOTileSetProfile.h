/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import "GMM-Structs.h"
#import <NSObject.h> // Unknown library
#import "GEOTileSetProfile.h"

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface GMMGEOTileSetProfile : NSObject <GEOTileSetProfile> {
	BOOL _isChina;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSString *baseURLString;	// G=0x31d1c1d9; 
@property(assign, nonatomic) BOOL isChina;	// G=0x31d1c905; S=0x31d1c915; @synthesize=_isChina
@property(readonly, assign, nonatomic) NSURL *multiTileURL;	// G=0x31d1c1dd; 
@property(readonly, assign, nonatomic) unsigned operatingEdition;	// G=0x31d1c1e1; 
@property(readonly, assign, nonatomic) int scale;	// G=0x31d1c1c1; 
@property(readonly, assign, nonatomic) int size;	// G=0x31d1c19d; 
@property(readonly, assign, nonatomic) int style;	// G=0x31d1c199; 
+ (id)sharedProfile;	// 0x31d1c109
- (id)attributionInfoForTileKeys:(id)tileKeys;	// 0x31d1c4fd
// declared property getter: - (id)baseURLString;	// 0x31d1c1d9
- (BOOL)isAvailableForTileKey:(const GEOTileKey *)tileKey;	// 0x31d1c1e5
// declared property getter: - (BOOL)isChina;	// 0x31d1c905
- (void)loadAttributionBadgeDataHiDPI:(BOOL)dpi isIPad:(BOOL)pad handler:(id)handler;	// 0x31d1c3bd
- (int)maxChinaZoomLevel;	// 0x31d1c195
- (unsigned)maxZoomLevelForTileKey:(const GEOTileKey *)tileKey;	// 0x31d1c1e9
- (unsigned)minZoomLevelForTileKey:(const GEOTileKey *)tileKey;	// 0x31d1c399
// declared property getter: - (id)multiTileURL;	// 0x31d1c1dd
- (BOOL)needsAttributionBadge;	// 0x31d1c3b9
// declared property getter: - (unsigned)operatingEdition;	// 0x31d1c1e1
// declared property getter: - (int)scale;	// 0x31d1c1c1
// declared property setter: - (void)setIsChina:(BOOL)china;	// 0x31d1c915
// declared property getter: - (int)size;	// 0x31d1c19d
// declared property getter: - (int)style;	// 0x31d1c199
@end

