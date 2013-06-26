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
@property(readonly, assign) BOOL hasLoaded;	// G=0x3670a8a1; converted property
@property(readonly, retain) NSError *lastError;	// G=0x3670aa0d; converted property
@property(readonly, retain) NSMutableArray *videos;	// G=0x3670a829; converted property
@property(readonly, assign) unsigned videosRemaining;	// G=0x3670aa1d; converted property
+ (void)saveDataSources;	// 0x3670a4ed
+ (void)setShouldRemoveOldDefaults;	// 0x3670a65d
+ (id)sharedDataSource;	// 0x3670a599
+ (BOOL)shouldRemoveOldDefaults;	// 0x3670a66d
- (id)init;	// 0x3670a67d
- (void)_clearVideos;	// 0x3670af09
- (id)_deprecatedVideosDefaultsKey;	// 0x3670abad
- (void)_didChange;	// 0x3670aca9
- (void)_saveToDefaults;	// 0x3670abf1
- (void)_searchRequestLoadingStatusDidChange;	// 0x3670ac65
- (void)_setLastError:(id)error;	// 0x3670aced
- (void)_setVideos:(id)videos;	// 0x3670ad85
- (void)addVideos:(id)videos toTop:(BOOL)top;	// 0x3670addd
- (void)dealloc;	// 0x3670a755
// converted property getter: - (BOOL)hasLoaded;	// 0x3670a8a1
- (BOOL)isLoading;	// 0x3670a87d
// converted property getter: - (id)lastError;	// 0x3670aa0d
- (void)loadFromDefaults;	// 0x3670a8b1
- (void)loadMore;	// 0x3670aa2d
- (unsigned)maxVideosToSave;	// 0x3670aab1
- (void)reloadData;	// 0x3670a839
- (void)removeAllVideos;	// 0x3670ab81
- (void)removeVideoAtIndex:(int)index;	// 0x3670ab45
- (void)searchRequest:(id)request didFailWithError:(id)error;	// 0x3670ab31
- (void)searchRequest:(id)request receivedVideos:(id)videos startIndex:(unsigned)index videosRemaining:(unsigned)remaining;	// 0x3670aacd
// converted property getter: - (id)videos;	// 0x3670a829
// converted property getter: - (unsigned)videosRemaining;	// 0x3670aa1d
@end
