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
+ (unsigned char)tileProviderIdentifier;	// 0x35f37df9
- (void)cancel;	// 0x35f383b9
- (void)cleanup;	// 0x35f3837d
- (void)dealloc;	// 0x35f37d71
- (void)start;	// 0x35f37e25
- (void)tileDownload:(id)download didFailWithError:(id)error;	// 0x35f3864d
- (void)tileDownload:(id)download didReceiveData:(id)data edition:(unsigned)edition forKey:(GEOTileKey)key;	// 0x35f3859d
- (void)tileDownloadFinished:(id)finished;	// 0x35f38611
- (unsigned)tileSetForKey:(const GEOTileKey *)key;	// 0x35f37dfd
- (void)tryFinish;	// 0x35f38489
@end

