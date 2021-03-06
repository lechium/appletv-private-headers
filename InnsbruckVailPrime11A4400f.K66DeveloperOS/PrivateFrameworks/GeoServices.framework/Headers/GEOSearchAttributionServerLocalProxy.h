/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GEOSearchAttributionServerProxy.h"
#import </libobjc.A.h>

@class NSMutableArray, NSMapTable;

__attribute__((visibility("hidden")))
@interface GEOSearchAttributionServerLocalProxy : NSObject <GEOSearchAttributionServerProxy> {
	NSMapTable *_listeners;	// 4 = 0x4
	BOOL _updatingManifest;	// 8 = 0x8
	NSMutableArray *_updateManifestCompletionHandlers;	// 12 = 0xc
	NSMutableArray *_updateManifestErrorHandlers;	// 16 = 0x10
}
- (id)init;	// 0x30f81d45
- (void)_loadAttributionInfoForListener:(id)listener hasUpdatedManifest:(BOOL)manifest;	// 0x30f8273d
- (void)_pruneOldAttributionLogos;	// 0x30f81f7d
- (void)_sendError:(id)error toListener:(id)listener;	// 0x30f81eb5
- (void)_sendInfo:(id)info updatedManifest:(BOOL)manifest toListener:(id)listener;	// 0x30f81de9
- (void)_updateManifestWithCompletionHandler:(id)completionHandler errorHandler:(id)handler;	// 0x30f8223d
- (void)dealloc;	// 0x30f81d71
- (void)loadAttributionInfoForIdentifier:(id)identifier version:(unsigned)version completionHandler:(id)handler errorHandler:(id)handler4;	// 0x30f82a15
@end

