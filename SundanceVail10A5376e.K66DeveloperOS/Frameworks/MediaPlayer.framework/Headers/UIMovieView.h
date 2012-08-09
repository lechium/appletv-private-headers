/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPVideoView.h"


@interface UIMovieView : MPVideoView {
}
@property(assign) double currentTime;	// G=0x36cc9a31; S=0x36cc9b61; converted property
- (id)avPlayer;	// 0x36cc99d9
- (int)bufferingStatusMask;	// 0x36cc9a11
// converted property getter: - (double)currentTime;	// 0x36cc9a31
- (double)duration;	// 0x36cc9a51
- (id)mpavController;	// 0x36cc99c5
- (void)pause;	// 0x36cc9b21
- (void)play;	// 0x36cc9b41
- (int)playableContentType;	// 0x36cc9a89
- (int)playbackState;	// 0x36cc9ad5
// converted property setter: - (void)setCurrentTime:(double)time;	// 0x36cc9b61
- (void)setCurrentTime:(double)time timeSnapOption:(int)option;	// 0x36cc9b85
- (void)setRepeatMode:(int)mode;	// 0x36cc9bc9
- (void)stop;	// 0x36cc9be9
@end
