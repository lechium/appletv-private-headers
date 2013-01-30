/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRMediaPlayer;

__attribute__((visibility("hidden")))
@interface RUIRetailControl : BRControl {
	BRMediaPlayer *_player;	// 84 = 0x54
	BOOL _playbackStarted;	// 88 = 0x58
}
- (id)initWithMediaURL:(id)mediaURL;	// 0x3ae7a1
- (void).cxx_destruct;	// 0x3aec8d
- (void)_movieCued:(id)cued;	// 0x3aed29
- (void)_playerVisualsChanged:(id)changed;	// 0x3aed19
- (void)_updateVisuals;	// 0x3aeca1
- (void)controlWasActivated;	// 0x3ae9c5
- (void)controlWasDeactivated;	// 0x3aeb11
- (void)dealloc;	// 0x3ae959
- (void)layoutSubcontrols;	// 0x3aeb89
@end
