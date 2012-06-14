/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "NSObject.h"


@protocol MSASAssetDownloaderDelegate <NSObject>
- (void)MSASAssetDownloader:(id)downloader didFinishDownloadingAsset:(id)asset inAlbum:(id)album error:(id)error;
- (void)MSASAssetDownloader:(id)downloader willBeginBatchCount:(unsigned)count;
- (void)MSASAssetDownloaderDidFinishBatch:(id)msasassetDownloader;
@end

