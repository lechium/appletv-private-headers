/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRTrackInfoLayer, NSString, BRMediaPlayer;

__attribute__((visibility("hidden")))
@interface BRTrackInfoControl : BRControl {
@private
	BRTrackInfoLayer *_layer;	// 48 = 0x30
	BRMediaPlayer *_player;	// 52 = 0x34
	NSString *_lastAssetID;	// 56 = 0x38
}
@property(retain) BRMediaPlayer *player;	// G=0x330b6fc1; S=0x330b6eb9; converted property
- (id)init;	// 0x330b6c19
- (id)_fetchCoverArt;	// 0x330b71b1
- (void)_playbackAssetChanged:(id)changed;	// 0x330b729d
- (void)_playerStateChanged:(id)changed;	// 0x330b725d
- (BOOL)_supportsShowingArtist:(id)artist;	// 0x330b7379
- (BOOL)_supportsShowingPrimaryCollectionTitle:(id)title;	// 0x330b7415
- (void)_updateCoverArt:(id)art;	// 0x330b72ad
- (void)_updateTrackInfo;	// 0x330b6ff1
- (id)accessibilityLabel;	// 0x330b6fd1
- (void)controlWasActivated;	// 0x330b6d4d
- (void)controlWasDeactivated;	// 0x330b6e1d
- (void)dealloc;	// 0x330b6ca9
// converted property getter: - (id)player;	// 0x330b6fc1
// converted property setter: - (void)setPlayer:(id)player;	// 0x330b6eb9
@end

