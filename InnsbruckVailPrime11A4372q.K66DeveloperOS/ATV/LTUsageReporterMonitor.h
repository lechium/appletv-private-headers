/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"

@protocol BRMediaAsset;

__attribute__((visibility("hidden")))
@interface LTUsageReporterMonitor : BRSingleton {
	id<BRMediaAsset> _currentAsset;	// 4 = 0x4
	unsigned _playbackStalledCount;	// 8 = 0x8
}
+ (void)setSingleton:(id)singleton;	// 0x472549
+ (id)singleton;	// 0x472539
- (id)init;	// 0x4725d9
- (void).cxx_destruct;	// 0x4726d5
- (void)_currentAssetPlaybackChanged:(id)changed;	// 0x4726fd
- (void)_currentAssetPlaybackStalled:(id)stalled;	// 0x4726e9
- (void)_homeSharesChanged:(id)changed;	// 0x4728b1
- (void)_resetPlaybackStalledCountAndAssetFromPlayerIfNeeded:(id)playerIfNeeded;	// 0x472969
- (void)dealloc;	// 0x47256d
@end
