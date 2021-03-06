/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/YouTubeATV.framework/YouTubeATV
 */

#import "YTVideoDataSource.h"

@class NSMutableArray;

@interface YTHistoryVideoDataSource : YTVideoDataSource {
	NSMutableArray *_history;	// 28 = 0x1c
}
- (id)_history;	// 0x36709bdd
- (void)_saveToDefaults;	// 0x36709fe9
- (void)addVideo:(id)video;	// 0x36709e49
- (void)clearHistory;	// 0x36709f8d
- (void)loadFromDefaults;	// 0x36709ca1
- (unsigned)maxVideosToSave;	// 0x36709fe1
- (void)reloadData;	// 0x36709c11
@end

