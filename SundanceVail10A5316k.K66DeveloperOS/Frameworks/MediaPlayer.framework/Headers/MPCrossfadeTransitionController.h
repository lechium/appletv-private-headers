/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPTransitionController.h"


@interface MPCrossfadeTransitionController : MPTransitionController {
	int _statusBarHidden;	// 52 = 0x34
}
@property(assign, nonatomic) BOOL statusBarHidden;	// G=0x348362dd; S=0x348362cd; 
- (id)init;	// 0x3483626d
- (void)_animationDidFinish:(id)_animation;	// 0x34836755
- (void)performTransition:(unsigned)transition;	// 0x348362f5
// declared property setter: - (void)setStatusBarHidden:(BOOL)hidden;	// 0x348362cd
// declared property getter: - (BOOL)statusBarHidden;	// 0x348362dd
@end

