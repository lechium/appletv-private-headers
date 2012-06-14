/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UIView.h> // Unknown library

@class UIImageView;

@interface MPMovieTVHUDView : UIView {
	unsigned _currentState;	// 48 = 0x30
	UIImageView *_playbackMode;	// 52 = 0x34
}
- (id)initWithFrame:(CGRect)frame;	// 0x3462a0cd
- (void)_changeState;	// 0x3462a3cd
- (void)_fadeOut;	// 0x3462a4a5
- (void)_playbackStateDidChangeNotification:(id)_playbackState;	// 0x3462a5b1
- (void)animationDidStop:(id)animation;	// 0x3462a555
- (void)dealloc;	// 0x3462a35d
@end
