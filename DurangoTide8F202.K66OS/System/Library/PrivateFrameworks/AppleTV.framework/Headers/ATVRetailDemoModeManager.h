/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <BRSingleton.h> // Unknown library

@class NSTimer, NSURLDownload, NSMutableArray;

@interface ATVRetailDemoModeManager : BRSingleton {
@private
	NSTimer *_retailPlaybackLimitTimer;	// 4 = 0x4
	BOOL _hasStartedPlaying;	// 8 = 0x8
	NSURLDownload *_retailMovieDownload;	// 12 = 0xc
	NSMutableArray *_topPodcastsFavCandidates;	// 16 = 0x10
	NSMutableArray *_topShowsFavCandidates;	// 20 = 0x14
}
+ (void)checkAndStart;	// 0x336ffc8d
+ (id)retailDemoCacheDir;	// 0x336ffb05
+ (BOOL)retailDemoMovieDownloadComplete;	// 0x336ffa51
+ (id)retailDemoMoviePath;	// 0x336ffad1
+ (void)setSingleton:(id)singleton;	// 0x336ff345
+ (id)singleton;	// 0x336ff339
- (id)init;	// 0x336ffb9d
- (void)_downloadRetailDemoMovie;	// 0x336ffd29
- (void)_fetchNextPodcastFav;	// 0x337001f1
- (void)_fetchNextTVShowFav;	// 0x337006a5
- (void)_nowPlayingStateChanged:(id)changed;	// 0x336ff95d
- (void)_podcastReady:(id)ready;	// 0x336ff539
- (id)_retailDemoMovieURL;	// 0x336ff6d9
- (void)_retailPlaybackLimitTimerFired:(id)fired;	// 0x336ff7ed
- (void)_retryMovieDownloadLater;	// 0x336ff6a5
- (BOOL)_shouldLimitPlaybackForAsset:(id)asset;	// 0x336ff8f1
- (void)_startPlaybackLimitTimer;	// 0x336ff839
- (void)_topPodcastsReady:(id)ready;	// 0x3370035d
- (void)_topTVShowsReady:(id)ready;	// 0x336ffea9
- (void)_tvShowReady:(id)ready;	// 0x336ff3a5
- (void)_updatePodcastFavorites;	// 0x337004bd
- (void)_updateTVShowFavorites;	// 0x33700009
- (void)dealloc;	// 0x336ffb49
- (void)download:(id)download didFailWithError:(id)error;	// 0x336ffce5
- (void)downloadDidFinish:(id)download;	// 0x336ff351
- (void)updateRetailFavorites;	// 0x336ffa29
@end

