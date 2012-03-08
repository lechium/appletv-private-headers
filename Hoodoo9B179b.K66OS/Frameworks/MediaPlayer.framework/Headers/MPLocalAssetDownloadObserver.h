/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPMediaDownloadObserver.h"

@class NSTimer;

@interface MPLocalAssetDownloadObserver : MPMediaDownloadObserver {
@private
	long long _itemPersistentID;	// 20 = 0x14
	NSTimer *_progressTimer;	// 28 = 0x1c
}
+ (void)beginDownloadForMediaItem:(id)mediaItem;	// 0x309eaa4d
- (id)initWithItemPersistentID:(long long)itemPersistentID;	// 0x309eaea1
- (void)_updateProgress:(id)progress;	// 0x309eb0c9
- (BOOL)canCancel;	// 0x309eb005
- (void)dealloc;	// 0x309eafb9
- (double)downloadProgress;	// 0x309eb009
@end

