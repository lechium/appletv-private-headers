/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRNetworkMediaProvider.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface BRMovieTrailersProvider : BRNetworkMediaProvider {
	NSMutableArray *_mediaCollections;	// 12 = 0xc
	int _lastError;	// 16 = 0x10
}
@property(readonly, assign) int lastError;	// G=0x2b324d; converted property
+ (void)initialize;	// 0x2b2a55
+ (BOOL)trailersAvailable;	// 0x2b2be5
- (id)init;	// 0x2b2c81
- (BOOL)_addMediaAsset:(id)asset;	// 0x39b551
- (void)_loadTrailers;	// 0x2b325d
- (void)_loadTrailersWithResolution:(id)resolution forURL:(id)url;	// 0x2b3499
- (void)_networkStatusChanged:(id)changed;	// 0x2b2be9
- (void)_postLoadedNotification:(id)notification;	// 0x2b33f5
- (void)dealloc;	// 0x2b2d59
- (int)errorCodeForProvider;	// 0x2b31d1
// converted property getter: - (int)lastError;	// 0x2b324d
- (int)load;	// 0x2b2f1d
- (id)mediaForEntityName:(id)entityName;	// 0x2b2e25
- (id)mediaTypes;	// 0x2b2dd5
- (id)providerID;	// 0x2b2e19
- (int)unload;	// 0x2b30ed
@end
