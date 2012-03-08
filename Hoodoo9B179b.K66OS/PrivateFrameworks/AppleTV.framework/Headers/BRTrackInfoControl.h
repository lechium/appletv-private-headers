/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSString, BRMediaPlayer, BRTrackInfoLayer;

__attribute__((visibility("hidden")))
@interface BRTrackInfoControl : BRControl {
@private
	BRTrackInfoLayer *_layer;	// 48 = 0x30
	BRMediaPlayer *_player;	// 52 = 0x34
	NSString *_lastAssetID;	// 56 = 0x38
}
@property(retain) BRMediaPlayer *player;	// G=0x302da191; S=0x302da089; converted property
- (id)init;	// 0x302d9de9
- (id)_fetchCoverArt;	// 0x302da381
- (void)_playbackAssetChanged:(id)changed;	// 0x302da46d
- (void)_playerStateChanged:(id)changed;	// 0x302da42d
- (BOOL)_supportsShowingArtist:(id)artist;	// 0x302da549
- (BOOL)_supportsShowingPrimaryCollectionTitle:(id)title;	// 0x302da5e5
- (void)_updateCoverArt:(id)art;	// 0x302da47d
- (void)_updateTrackInfo;	// 0x302da1c1
- (id)accessibilityLabel;	// 0x302da1a1
- (void)controlWasActivated;	// 0x302d9f1d
- (void)controlWasDeactivated;	// 0x302d9fed
- (void)dealloc;	// 0x302d9e79
// converted property getter: - (id)player;	// 0x302da191
// converted property setter: - (void)setPlayer:(id)player;	// 0x302da089
@end

