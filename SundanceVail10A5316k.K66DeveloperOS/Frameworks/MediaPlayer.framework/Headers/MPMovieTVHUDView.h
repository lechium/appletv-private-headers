/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UIView.h> // Unknown library

@class UIImageView, MPAVController;

@interface MPMovieTVHUDView : UIView {
	unsigned _currentState;	// 84 = 0x54
	UIImageView *_playbackMode;	// 88 = 0x58
	MPAVController *_player;	// 92 = 0x5c
}
@property(retain, nonatomic) MPAVController *player;	// G=0x34810b25; S=0x34810725; @synthesize=_player
- (id)initWithFrame:(CGRect)frame;	// 0x34810469
- (void)_changeState;	// 0x348107e9
- (void)_fadeOut;	// 0x348108c1
- (void)_playbackStateDidChangeNotification:(id)_playbackState;	// 0x348109cd
- (void)animationDidStop:(id)animation;	// 0x34810971
- (void)dealloc;	// 0x34810699
// declared property getter: - (id)player;	// 0x34810b25
// declared property setter: - (void)setPlayer:(id)player;	// 0x34810725
@end

