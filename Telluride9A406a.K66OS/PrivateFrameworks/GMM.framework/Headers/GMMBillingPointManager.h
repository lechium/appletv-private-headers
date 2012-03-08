/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import "GMM-Structs.h"
#import <NSObject.h> // Unknown library


@interface GMMBillingPointManager : NSObject {
	void *_tracker;	// 4 = 0x4
}
+ (id)sharedManager;	// 0x33ab6b49
- (id)init;	// 0x33ab6bb5
- (void)dealloc;	// 0x33ab6c85
- (void)updateToMapRegion:(id)mapRegion viewSize:(CGSize)size centerPixelsX:(double)x centerPixelsY:(double)y zoomLevel:(unsigned)level isSatelliteMap:(BOOL)map hasUserLocation:(BOOL)location isShowingRoute:(BOOL)route;	// 0x33ab6cc9
@end

