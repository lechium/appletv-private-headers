/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRMarqueeTextControl, BRTextControl;

__attribute__((visibility("hidden")))
@interface BRDetailedMusicMetadataControl : BRControl {
	BRMarqueeTextControl *_songTitle;	// 80 = 0x50
	BRTextControl *_songArtist;	// 84 = 0x54
	BRTextControl *_albumTitle;	// 88 = 0x58
	BRTextControl *_trackInfo;	// 92 = 0x5c
	BRTextControl *_duration;	// 96 = 0x60
	BRTextControl *_releaseDate;	// 100 = 0x64
	BRTextControl *_price;	// 104 = 0x68
	BOOL _scrollingAllowed;	// 108 = 0x6c
}
@property(assign) BOOL scrollingAllowed;	// G=0x2a23cd; S=0x2a2391; converted property
- (id)init;	// 0x2a18c9
- (id)_metadataMusicArtistAndAlbumAttributes;	// 0x2a2401
- (id)_metadataMusicDetailsAttributes;	// 0x2a23dd
- (id)_metadataMusicSongTitleAttributes;	// 0x2a2425
- (void)controlWasActivated;	// 0x2a1b01
- (void)controlWasDeactivated;	// 0x2a1b5d
- (void)dealloc;	// 0x2a1a39
- (void)layoutSubcontrols;	// 0x2a1f79
// converted property getter: - (BOOL)scrollingAllowed;	// 0x2a23cd
- (void)setAlbumTitle:(id)title;	// 0x2a1cd9
- (void)setDuration:(id)duration;	// 0x2a1dc1
- (void)setPrice:(id)price;	// 0x2a1ea9
- (void)setReleaseDate:(id)date;	// 0x2a1e35
// converted property setter: - (void)setScrollingAllowed:(BOOL)allowed;	// 0x2a2391
- (void)setSongArtist:(id)artist;	// 0x2a1c65
- (void)setSongTitle:(id)title;	// 0x2a1bad
- (void)setTrackInfo:(id)info;	// 0x2a1d4d
@end

