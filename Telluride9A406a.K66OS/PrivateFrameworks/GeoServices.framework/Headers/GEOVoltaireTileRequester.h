/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GEOVoltaireTileDownloaderDelegate.h"
#import "GeoServices-Structs.h"
#import "GEOTileRequester.h"

@class NSMutableArray, NSThread;

@interface GEOVoltaireTileRequester : GEOTileRequester <GEOVoltaireTileDownloaderDelegate> {
	NSMutableArray *_activeDownloads;	// 28 = 0x1c
	BOOL _experiencedError;	// 32 = 0x20
	NSThread *_startThread;	// 36 = 0x24
}
+ (unsigned char)tileProviderIdentifier;	// 0x34c03f31
- (void)cancel;	// 0x34c044f1
- (void)cleanup;	// 0x34c044b5
- (void)dealloc;	// 0x34c03ea9
- (void)start;	// 0x34c03f5d
- (void)tileDownload:(id)download didFailWithError:(id)error;	// 0x34c04785
- (void)tileDownload:(id)download didReceiveData:(id)data edition:(unsigned)edition forKey:(GEOTileKey)key;	// 0x34c046d5
- (void)tileDownloadFinished:(id)finished;	// 0x34c04749
- (unsigned)tileSetForKey:(const GEOTileKey *)key;	// 0x34c03f35
- (void)tryFinish;	// 0x34c045c1
@end

