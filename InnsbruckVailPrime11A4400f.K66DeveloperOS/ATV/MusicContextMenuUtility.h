/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRMusicContextMenuUtility.h"


__attribute__((visibility("hidden")))
@interface MusicContextMenuUtility : BRMusicContextMenuUtility {
	BOOL _nowPlayingActive;	// 11 = 0xb
}
@property(assign, nonatomic) BOOL nowPlayingActive;	// G=0x194c51; S=0x194c61; @synthesize=_nowPlayingActive
+ (void)initialize;	// 0x190fad
- (BOOL)_favoriteExists:(id)exists;	// 0x193629
- (void)_handleAddRadioStationToFavoritesForObject:(id)object sender:(id)sender context:(id)context;	// 0x194415
- (void)_handleAddRemoveToWishlistForObject:(id)object sender:(id)sender context:(id)context;	// 0x1946e1
- (void)_handleAddToOnTheGoForObject:(id)object sender:(id)sender context:(id)context;	// 0x193b01
- (void)_handleAirTunesSetSpeakerForObject:(id)object sender:(id)sender context:(id)context;	// 0x193b61
- (void)_handleAirTunesSettingsForObject:(id)object sender:(id)sender context:(id)context;	// 0x193c2d
- (void)_handleBrowseAlbumForObject:(id)object sender:(id)sender context:(id)context;	// 0x194011
- (void)_handleBrowseArtistForObject:(id)object sender:(id)sender context:(id)context;	// 0x193e61
- (void)_handleBuyRadioTrack:(id)track sender:(id)sender context:(id)context;	// 0x19433d
- (void)_handleCreateRadioStationForObject:(id)object sender:(id)sender context:(id)context;	// 0x1945bd
- (void)_handleRemoveRadioStationFromFavoritesForObject:(id)object sender:(id)sender context:(id)context;	// 0x1944cd
- (void)_handleStartGeniusForObject:(id)object sender:(id)sender context:(id)context;	// 0x193831
- (void)_handleViewAlbumForObject:(id)object sender:(id)sender context:(id)context;	// 0x1941bd
- (BOOL)_isMusicItem:(id)item;	// 0x1949bd
- (id)_providerForCollection:(id)collection target:(id)target selector:(SEL)selector;	// 0x192971
- (id)_providerForFavorite:(id)favorite target:(id)target selector:(SEL)selector;	// 0x192f39
- (id)_providerForMediaItem:(id)mediaItem target:(id)target selector:(SEL)selector;	// 0x191fd5
- (id)_providerForPodcast:(id)podcast target:(id)target selector:(SEL)selector;	// 0x191905
- (id)_providerForSpeakersWithHandler:(id)handler initialSelection:(long *)selection;	// 0x193059
- (BOOL)_shouldShowAddCollectionToQueue:(id)queue;	// 0x194c4d
- (BOOL)_shouldShowAddItemToQueue:(id)queue;	// 0x194b45
- (BOOL)_shouldShowAddRemoveToWishlistForItem:(id)item;	// 0x1935c9
- (BOOL)_shouldShowAddToFavoritesItem:(id)favoritesItem;	// 0x193499
- (BOOL)_shouldShowBrowseAlbumItem:(id)item;	// 0x193385
- (BOOL)_shouldShowBrowseArtistItem:(id)item;	// 0x193315
- (BOOL)_shouldShowBuyRadioTrackItem:(id)item;	// 0x1930b9
- (BOOL)_shouldShowCreateStationFromItem:(id)item;	// 0x1934f5
- (BOOL)_shouldShowGeniusItem:(id)item;	// 0x1931dd
- (BOOL)_shouldShowOnTheGoItem:(id)item;	// 0x193275
- (BOOL)_shouldShowPlayCollectionNext:(id)next;	// 0x194c45
- (BOOL)_shouldShowPlayCollectionNow:(id)now;	// 0x194c49
- (BOOL)_shouldShowPlayItemNext:(id)next;	// 0x194b89
- (BOOL)_shouldShowPlayItemNow:(id)now;	// 0x194bcd
- (BOOL)_shouldShowPurge:(id)purge;	// 0x194c11
- (BOOL)_shouldShowRemoveFromFavoritesItem:(id)favoritesItem;	// 0x1937d9
- (BOOL)_shouldShowSpeakers;	// 0x193761
- (BOOL)_shouldShowSpeakersItem:(id)item;	// 0x1936d5
- (BOOL)_shouldShowUpNext;	// 0x194a91
- (BOOL)_shouldShowUpNextItem:(id)item;	// 0x194a39
- (BOOL)_shouldShowUpNextItemForCollection:(id)collection;	// 0x194a79
- (BOOL)_shouldShowViewAlbumItem:(id)item;	// 0x193415
- (id)addToQueueMenuItemWithTarget:(id)target selector:(SEL)selector;	// 0x191cf5
- (id)browseAlbumMenuItemWithTarget:(id)target selector:(SEL)selector;	// 0x191f19
- (id)browseArtistMenuItemWithTarget:(id)target selector:(SEL)selector;	// 0x191e5d
- (id)contextMenuProviderForNowPlayingObject:(id)nowPlayingObject target:(id)target selector:(SEL)selector;	// 0x191761
- (id)contextMenuProviderForObject:(id)object target:(id)target selector:(SEL)selector;	// 0x191621
- (id)geniusMenuItemWithTarget:(id)target selector:(SEL)selector;	// 0x191a1d
- (void)handleSelectionForObject:(id)object sender:(id)sender context:(id)context;	// 0x1917b9
// declared property getter: - (BOOL)nowPlayingActive;	// 0x194c51
- (id)playNextMenuItemWithTarget:(id)target selector:(SEL)selector;	// 0x191c41
- (id)playNowMenuItemWithTarget:(id)target selector:(SEL)selector;	// 0x191b8d
- (id)purgeMenuItemWithTarget:(id)target selector:(SEL)selector;	// 0x191da9
// declared property setter: - (void)setNowPlayingActive:(BOOL)active;	// 0x194c61
- (id)upNextMenuItemWithTarget:(id)target selector:(SEL)selector;	// 0x191ad9
@end
