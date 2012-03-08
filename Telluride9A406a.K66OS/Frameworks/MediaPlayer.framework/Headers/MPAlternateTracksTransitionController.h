/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPTransitionController.h"

@class UIImageView, MPVideoViewController;

@interface MPAlternateTracksTransitionController : MPTransitionController {
	MPVideoViewController *_videoController;	// 52 = 0x34
	UIImageView *_snapshotCoverImageView;	// 56 = 0x38
}
@property(assign, nonatomic) MPVideoViewController *videoController;	// G=0x319d65c5; S=0x319d65d5; @synthesize=_videoController
- (void)_animationDidStop;	// 0x319d64f5
- (void)performTransition:(unsigned)transition;	// 0x319d5f3d
// declared property setter: - (void)setVideoController:(id)controller;	// 0x319d65d5
// declared property getter: - (id)videoController;	// 0x319d65c5
@end

