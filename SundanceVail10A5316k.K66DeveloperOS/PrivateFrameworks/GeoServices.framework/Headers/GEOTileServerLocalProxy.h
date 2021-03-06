/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import "GEOTileServerProxy.h"
#import <NSObject.h> // Unknown library

@class NSString, NSLock, GEOTileDBReader, GEOTileDBWriter, NSMutableArray, NSMapTable;
@protocol GEOTileServerProxyDelegate;

@interface GEOTileServerLocalProxy : NSObject <GEOTileServerProxy> {
	NSMutableArray *_inProgress;	// 4 = 0x4
	NSLock *_inProgressLock;	// 8 = 0x8
	NSMapTable *_providers;	// 12 = 0xc
	GEOTileDBWriter *_dbWriter;	// 16 = 0x10
	GEOTileDBReader *_dbReader;	// 20 = 0x14
	NSString *_cacheLocation;	// 24 = 0x18
	id<GEOTileServerProxyDelegate> _delegate;	// 28 = 0x1c
}
- (id)initWithCacheLocation:(id)cacheLocation;	// 0x34af1291
- (id)_contextForFullList:(id)fullList;	// 0x34af17dd
- (id)_contextForNetworkList:(id)networkList;	// 0x34af18b1
- (void)_registerBuiltInProviders;	// 0x34af1475
- (void)beginPreloadSessionOfSize:(unsigned long long)size;	// 0x34af2899
- (void)cancelLoad:(id)load;	// 0x34af2271
- (void)closeCacheConnection;	// 0x34af1735
- (id)dataForKey:(GEOTileKey *)key;	// 0x34af26cd
- (void)dataForKey:(GEOTileKey *)key asyncHandler:(id)handler;	// 0x34af2729
- (void)dealloc;	// 0x34af13d5
- (void)endPreloadSession;	// 0x34af28b9
- (void)flushPendingWrites;	// 0x34af17bd
- (void)loadTiles:(id)tiles checkDisk:(BOOL)disk allowNetworking:(BOOL)networking bundleIdentifier:(id)identifier bundleVersion:(id)version;	// 0x34af1985
- (void)openCacheConnection;	// 0x34af1779
- (void)registerProvider:(Class)provider;	// 0x34af1509
- (void)reportCorruptTile:(const GEOTileKey *)tile;	// 0x34af279d
- (void)setDelegate:(id)delegate;	// 0x34af1725
- (void)shrinkDiskCacheToSize:(unsigned long long)size finished:(id)finished;	// 0x34af2879
- (BOOL)skipNetworkForKeysWhenPreloading:(id)keysWhenPreloading;	// 0x34af28d9
- (void)tileRequester:(id)requester receivedData:(id)data tileEdition:(unsigned)edition tileSet:(unsigned)set forKey:(GEOTileKey)key userInfo:(id)info;	// 0x34af23b9
- (void)tileRequester:(id)requester receivedError:(id)error;	// 0x34af24c1
- (void)tileRequesterFinished:(id)finished;	// 0x34af25cd
@end

