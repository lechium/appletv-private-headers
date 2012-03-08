/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIWindow.h> // Unknown library

@class MPVideoView, NPTVOutBackgroundView, MPMovieTVHUDView;

@interface MPTVOutWindow : UIWindow {
	NPTVOutBackgroundView *_backgroundView;	// 132 = 0x84
	MPMovieTVHUDView *_hudView;	// 136 = 0x88
	MPVideoView *_videoView;	// 140 = 0x8c
}
@property(readonly, retain) MPVideoView *videoView;	// G=0x319f69bd; converted property
- (id)init;	// 0x319f62fd
- (void)_playbackStateChanged:(id)changed;	// 0x319f69cd
- (BOOL)_setupTargetScreen:(id)screen;	// 0x319f6669
- (void)dealloc;	// 0x319f6595
- (BOOL)setVideoView:(id)view;	// 0x319f6859
// converted property getter: - (id)videoView;	// 0x319f69bd
@end

