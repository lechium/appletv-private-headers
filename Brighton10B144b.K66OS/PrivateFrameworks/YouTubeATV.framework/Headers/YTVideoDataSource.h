/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/YouTubeATV.framework/YouTubeATV
 */

#import <NSObject.h> // Unknown library

@class NSError, NSMutableArray, YTSearchRequest;

@interface YTVideoDataSource : NSObject {
	BOOL _hasLoaded;	// 4 = 0x4
	NSMutableArray *_videos;	// 8 = 0x8
	YTSearchRequest *_searchRequest;	// 12 = 0xc
	unsigned _startIndex;	// 16 = 0x10
	unsigned _videosRemaining;	// 20 = 0x14
	NSError *_lastError;	// 24 = 0x18
}
@property(readonly, assign) BOOL hasLoaded;	// G=0x367088a1; converted property
@property(readonly, retain) NSError *lastError;	// G=0x36708a0d; converted property
@property(readonly, retain) NSMutableArray *videos;	// G=0x36708829; converted property
@property(readonly, assign) unsigned videosRemaining;	// G=0x36708a1d; converted property
+ (void)saveDataSources;	// 0x367084ed
+ (void)setShouldRemoveOldDefaults;	// 0x3670865d
+ (id)sharedDataSource;	// 0x36708599
+ (BOOL)shouldRemoveOldDefaults;	// 0x3670866d
- (id)init;	// 0x3670867d
- (void)_clearVideos;	// 0x36708f09
- (id)_deprecatedVideosDefaultsKey;	// 0x36708bad
- (void)_didChange;	// 0x36708ca9
- (void)_saveToDefaults;	// 0x36708bf1
- (void)_searchRequestLoadingStatusDidChange;	// 0x36708c65
- (void)_setLastError:(id)error;	// 0x36708ced
- (void)_setVideos:(id)videos;	// 0x36708d85
- (void)addVideos:(id)videos toTop:(BOOL)top;	// 0x36708ddd
- (void)dealloc;	// 0x36708755
// converted property getter: - (BOOL)hasLoaded;	// 0x367088a1
- (BOOL)isLoading;	// 0x3670887d
// converted property getter: - (id)lastError;	// 0x36708a0d
- (void)loadFromDefaults;	// 0x367088b1
- (void)loadMore;	// 0x36708a2d
- (unsigned)maxVideosToSave;	// 0x36708ab1
- (void)reloadData;	// 0x36708839
- (void)removeAllVideos;	// 0x36708b81
- (void)removeVideoAtIndex:(int)index;	// 0x36708b45
- (void)searchRequest:(id)request didFailWithError:(id)error;	// 0x36708b31
- (void)searchRequest:(id)request receivedVideos:(id)videos startIndex:(unsigned)index videosRemaining:(unsigned)remaining;	// 0x36708acd
// converted property getter: - (id)videos;	// 0x36708829
// converted property getter: - (unsigned)videosRemaining;	// 0x36708a1d
@end
