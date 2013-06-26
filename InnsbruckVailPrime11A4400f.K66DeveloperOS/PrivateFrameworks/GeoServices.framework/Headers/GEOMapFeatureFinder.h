/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GEOMapRequest.h"
#import "GeoServices-Structs.h"

@class GEOMapAccess, GEOMapTileFinder;

__attribute__((visibility("hidden")))
@interface GEOMapFeatureFinder : GEOMapRequest {
	XXStruct_gLbvpC _coordinate;	// 16 = 0x10
	GEOMapTileFinder *_tileFinder;	// 32 = 0x20
	id _roadHandler;	// 36 = 0x24
	id _pointHandler;	// 40 = 0x28
	id _polygonHandler;	// 44 = 0x2c
	BOOL _ignoreUnnamedFeatures;	// 48 = 0x30
}
@property(assign, nonatomic) BOOL ignoreUnnamedFeatures;	// G=0x30f90939; S=0x30f90949; @synthesize=_ignoreUnnamedFeatures
@property(readonly, assign, nonatomic) GEOMapAccess *map;	// G=0x30f8fa3d; 
@property(copy, nonatomic) id pointHandler;	// G=0x30f908f1; S=0x30f90905; @synthesize=_pointHandler
@property(copy, nonatomic) id polygonHandler;	// G=0x30f90915; S=0x30f90929; @synthesize=_polygonHandler
@property(copy, nonatomic) id roadHandler;	// G=0x30f908cd; S=0x30f908e1; @synthesize=_roadHandler
- (id)initWithMap:(id)map center:(XXStruct_gLbvpC)center;	// 0x30f8f8c9
- (id).cxx_construct;	// 0x30f90959
- (void)_pickRoadInTile:(id)tile tileRect:(const XXStruct_03F4WD *)rect localPoint:(const Vec2Imp<float> *)point;	// 0x30f8fa51
- (void)cancel;	// 0x30f8f9a5
- (void)dealloc;	// 0x30f8f919
- (void)findFeatures:(id)features pointHandler:(id)handler polygonHandler:(id)handler3 completionHandler:(id)handler4;	// 0x30f8fa55
// declared property getter: - (BOOL)ignoreUnnamedFeatures;	// 0x30f90939
// declared property getter: - (id)map;	// 0x30f8fa3d
// declared property getter: - (id)pointHandler;	// 0x30f908f1
// declared property getter: - (id)polygonHandler;	// 0x30f90915
// declared property getter: - (id)roadHandler;	// 0x30f908cd
// declared property setter: - (void)setIgnoreUnnamedFeatures:(BOOL)features;	// 0x30f90949
// declared property setter: - (void)setPointHandler:(id)handler;	// 0x30f90905
// declared property setter: - (void)setPolygonHandler:(id)handler;	// 0x30f90929
// declared property setter: - (void)setRoadHandler:(id)handler;	// 0x30f908e1
@end
