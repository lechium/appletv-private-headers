/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRMediaPlayer, BRTrackInfoLayer, NSString;

__attribute__((visibility("hidden")))
@interface BRTrackInfoControl : BRControl {
	BRTrackInfoLayer *_trackInfoLayer;	// 84 = 0x54
	BRMediaPlayer *_player;	// 88 = 0x58
	NSString *_lastAssetID;	// 92 = 0x5c
}
@property(retain) BRMediaPlayer *player;	// G=0x31ba45; S=0x31b945; converted property
- (id)init;	// 0x31b6a9
- (id)_fetchCoverArt;	// 0x31bc51
- (void)_playbackAssetChanged:(id)changed;	// 0x31bd3d
- (void)_playerStateChanged:(id)changed;	// 0x31bcf9
- (BOOL)_supportsShowingArtist:(id)artist;	// 0x31be19
- (BOOL)_supportsShowingPrimaryCollectionTitle:(id)title;	// 0x31beb5
- (void)_updateCoverArt:(id)art;	// 0x31bd4d
- (void)_updateTrackInfo;	// 0x31ba75
- (id)accessibilityLabel;	// 0x31ba55
- (void)controlWasActivated;	// 0x31b7dd
- (void)controlWasDeactivated;	// 0x31b8a9
- (void)dealloc;	// 0x31b739
// converted property getter: - (id)player;	// 0x31ba45
// converted property setter: - (void)setPlayer:(id)player;	// 0x31b945
@end

