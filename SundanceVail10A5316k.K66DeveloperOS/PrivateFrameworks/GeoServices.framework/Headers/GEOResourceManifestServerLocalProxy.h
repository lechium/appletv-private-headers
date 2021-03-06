/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library
#import "NSURLConnectionDelegate.h"
#import "GEOResourceLoaderDelegate.h"
#import "GEOResourceManifestServerProxy.h"

@class GEOActiveTileGroup, NSMutableData, GEORegionalResourcesInfo, NSURLConnection, NSString, GEORegionalResourcesLoader, NSLock, NSMutableDictionary, GEOResourceManifestDownload, GEOResourceLoader, NSTimer;
@protocol GEOResourceManifestServerProxyDelegate;

__attribute__((visibility("hidden")))
@interface GEOResourceManifestServerLocalProxy : NSObject <NSURLConnectionDelegate, GEOResourceLoaderDelegate, GEOResourceManifestServerProxy> {
@private
	id<GEOResourceManifestServerProxyDelegate> _delegate;	// 4 = 0x4
	NSURLConnection *_connection;	// 8 = 0x8
	NSMutableData *_responseData;	// 12 = 0xc
	NSString *_responseETag;	// 16 = 0x10
	BOOL _isObservingReachability;	// 20 = 0x14
	NSTimer *_updateTimer;	// 24 = 0x18
	GEOResourceManifestDownload *_resourceManifest;	// 28 = 0x1c
	GEOActiveTileGroup *_activeTileGroup;	// 32 = 0x20
	GEORegionalResourcesInfo *_regionalResourcesInfo;	// 36 = 0x24
	GEOResourceLoader *_resourceLoader;	// 40 = 0x28
	NSMutableDictionary *_resourceRetainCounts;	// 44 = 0x2c
	GEORegionalResourcesLoader *_regionalResourcesLoader;	// 48 = 0x30
	BOOL _started;	// 52 = 0x34
	BOOL _hiDPI;	// 53 = 0x35
	unsigned _manifestRetryCount;	// 56 = 0x38
	NSString *_authToken;	// 60 = 0x3c
	NSLock *_authTokenLock;	// 64 = 0x40
}
@property(readonly, retain) NSString *authToken;	// G=0x34b35afd; converted property
@property(assign, nonatomic) id<GEOResourceManifestServerProxyDelegate> delegate;	// G=0x34b3a3c1; S=0x34b3a3d1; @synthesize=_delegate
- (id)initWithDelegate:(id)delegate;	// 0x34b35915
- (void)_cancelConnection;	// 0x34b37b21
- (void)_changeActiveTileGroup:(id)group;	// 0x34b362b1
- (void)_cleanupConnection;	// 0x34b37b5d
- (void)_considerChangingActiveTileGroup;	// 0x34b37789
- (void)_countryProvidersDidChange:(id)_countryProviders;	// 0x34b38059
- (void)_forceChangeActiveTileGroup:(id)group;	// 0x34b37825
- (void)_loadFromDisk;	// 0x34b35d29
- (id)_manifestURL;	// 0x34b38189
- (void)_reachabilityChanged:(id)changed;	// 0x34b380e5
- (void)_registerReachabilityObserver;	// 0x34b38089
- (void)_retainResource:(id)resource;	// 0x34b39719
- (void)_scheduleUpdateTimerWithTimeInterval:(double)timeInterval;	// 0x34b38605
- (void)_updateManifest;	// 0x34b38405
- (BOOL)_updateManifestIfNecessary;	// 0x34b38269
- (void)_updateTimerFired:(id)fired;	// 0x34b38695
- (void)_writeActiveTileGroupToDisk:(id)disk;	// 0x34b37ee1
- (void)_writeManifestToDisk:(id)disk;	// 0x34b37f9d
// converted property getter: - (id)authToken;	// 0x34b35afd
- (oneway void)cancelRegionalResourcesLoadForKeys:(id)keys;	// 0x34b3a31d
- (void)closeConnection;	// 0x34b35af9
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x34b38e5d
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x34b38a05
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x34b386e5
- (void)connectionDidFinishLoading:(id)connection;	// 0x34b38a49
- (void)dealloc;	// 0x34b3598d
// declared property getter: - (id)delegate;	// 0x34b3a3c1
- (oneway void)forceUpdate;	// 0x34b385d9
- (void)getResourceManifestWithHandler:(id)handler;	// 0x34b385e9
- (oneway void)loadRegionalResourcesForKeys:(id)keys allowNetwork:(BOOL)network;	// 0x34b39b81
- (void)openConnection;	// 0x34b35af5
- (oneway void)refreshActiveTileGroup;	// 0x34b37d4d
- (oneway void)releaseResources:(id)resources;	// 0x34b398a5
- (oneway void)resetActiveTileGroup;	// 0x34b37cdd
- (id)resourceLoader:(id)loader resourceNamesForTileGroupWithIdentifier:(unsigned)identifier type:(int)type;	// 0x34b38f8d
- (oneway void)retainResources:(id)resources;	// 0x34b397d9
- (oneway void)setActiveTileGroupIdentifier:(id)identifier;	// 0x34b37bc5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x34b3a3d1
- (oneway void)startServer:(id)server;	// 0x34b35b69
@end

