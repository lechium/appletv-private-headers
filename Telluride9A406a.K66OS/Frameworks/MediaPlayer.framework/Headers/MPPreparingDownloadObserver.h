/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPMediaDownloadObserver.h"

@class NSNumber;

@interface MPPreparingDownloadObserver : MPMediaDownloadObserver {
@private
	NSNumber *_mediaItemPersistentIdentifier;	// 20 = 0x14
}
- (id)initWithMediaItemPersistentIdentifier:(id)mediaItemPersistentIdentifier;	// 0x31a6e28d
- (void)_onQueue_invalidate;	// 0x31a6e33d
- (BOOL)canCancel;	// 0x31a6e2f5
- (void)cancelDownload;	// 0x31a6e2f9
- (double)downloadProgress;	// 0x31a6e2e1
@end

