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
- (id)initWithMediaURL:(id)mediaURL;	// 0x479a21
- (void).cxx_destruct;	// 0x479f09
- (void)_movieCued:(id)cued;	// 0x479fa5
- (void)_playerVisualsChanged:(id)changed;	// 0x479f95
- (void)_updateVisuals;	// 0x479f1d
- (void)controlWasActivated;	// 0x479c39
- (void)controlWasDeactivated;	// 0x479d85
- (void)dealloc;	// 0x479bcd
- (void)layoutSubcontrols;	// 0x479dfd
@end
