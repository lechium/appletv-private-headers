/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPQueueFeeder.h"

@class NSArray;

@interface MPArrayQueueFeeder : MPQueueFeeder {
	NSArray *_queueItems;	// 32 = 0x20
}
@property(readonly, assign, nonatomic) NSArray *items;	// G=0x3093f2f9; 
- (id)initWithItems:(id)items;	// 0x3093ef2d
- (double)bookmarkTimeForIndex:(unsigned)index;	// 0x3093efc1
- (id)copyRawItemAtIndex:(unsigned)index;	// 0x3093eff9
- (void)dealloc;	// 0x3093ef6d
// declared property getter: - (id)items;	// 0x3093f2f9
- (unsigned)numberOfPaths;	// 0x3093f125
- (id)pathAtIndex:(unsigned)index;	// 0x3093f145
- (id)playbackInfoAtIndex:(unsigned)index;	// 0x3093f17d
@end
