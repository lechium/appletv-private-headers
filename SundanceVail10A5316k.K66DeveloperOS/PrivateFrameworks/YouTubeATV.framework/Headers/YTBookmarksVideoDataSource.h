/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/YouTubeATV.framework/YouTubeATV
 */

#import "YTVideoDataSource.h"

@class NSMutableArray, YTSearchRequest;

@interface YTBookmarksVideoDataSource : YTVideoDataSource {
	NSMutableArray *_bookmarkedShortIDs;	// 28 = 0x1c
	YTSearchRequest *_bookmarksSearchRequest;	// 32 = 0x20
	BOOL _lastReloadWasAccountsFavorites;	// 36 = 0x24
}
- (id)init;	// 0x35e6a56d
- (void)_nextBatch;	// 0x35e6a661
- (void)addVideo:(id)video;	// 0x35e6ab29
- (void)dealloc;	// 0x35e6a5f1
- (BOOL)isLoading;	// 0x35e6a955
- (unsigned)maxVideosToSave;	// 0x35e6a951
- (void)reloadData;	// 0x35e6a74d
- (void)searchRequest:(id)request foundBatchURL:(id)url;	// 0x35e6aaf1
- (void)searchRequest:(id)request receivedVideos:(id)videos startIndex:(unsigned)index videosRemaining:(unsigned)remaining;	// 0x35e6a9b9
@end

