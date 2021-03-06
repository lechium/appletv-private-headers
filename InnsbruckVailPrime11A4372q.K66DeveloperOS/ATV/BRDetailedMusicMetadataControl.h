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
	BRMarqueeTextControl *_songTitle;	// 84 = 0x54
	BRTextControl *_songArtist;	// 88 = 0x58
	BRTextControl *_albumTitle;	// 92 = 0x5c
	BRTextControl *_trackInfo;	// 96 = 0x60
	BRTextControl *_duration;	// 100 = 0x64
	BRTextControl *_releaseDate;	// 104 = 0x68
	BRTextControl *_price;	// 108 = 0x6c
	BOOL _scrollingAllowed;	// 112 = 0x70
}
@property(assign) BOOL scrollingAllowed;	// G=0x339b81; S=0x339b49; converted property
- (id)init;	// 0x339089
- (id)_metadataMusicArtistAndAlbumAttributes;	// 0x339bb5
- (id)_metadataMusicDetailsAttributes;	// 0x339b91
- (id)_metadataMusicSongTitleAttributes;	// 0x339bd9
- (void)controlWasActivated;	// 0x3392c1
- (void)controlWasDeactivated;	// 0x33931d
- (void)dealloc;	// 0x3391f9
- (void)layoutSubcontrols;	// 0x339739
// converted property getter: - (BOOL)scrollingAllowed;	// 0x339b81
- (void)setAlbumTitle:(id)title;	// 0x339499
- (void)setDuration:(id)duration;	// 0x339581
- (void)setPrice:(id)price;	// 0x339669
- (void)setReleaseDate:(id)date;	// 0x3395f5
// converted property setter: - (void)setScrollingAllowed:(BOOL)allowed;	// 0x339b49
- (void)setSongArtist:(id)artist;	// 0x339425
- (void)setSongTitle:(id)title;	// 0x33936d
- (void)setTrackInfo:(id)info;	// 0x33950d
@end

