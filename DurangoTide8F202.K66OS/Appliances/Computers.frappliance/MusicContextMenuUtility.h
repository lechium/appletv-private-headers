/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Computers-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface MusicContextMenuUtility : XXUnknownSuperclass {
}
+ (void)initialize;	// 0xe535
- (BOOL)_favoriteExists:(ATVMediaItemRef)exists;	// 0xe1cd
- (id)_geniusNotAvailableForSongAlert;	// 0xcf05
- (void)_handleAddRadioStationToFavoritesForObject:(id)object sender:(id)sender context:(id)context;	// 0xdb4d
- (void)_handleAddToOnTheGoForObject:(id)object sender:(id)sender context:(id)context;	// 0xdbdd
- (void)_handleAirTunesSettingsForObject:(id)object sender:(id)sender context:(id)context;	// 0xcfd9
- (void)_handleBrowseAlbumForObject:(id)object sender:(id)sender context:(id)context;	// 0xdeb1
- (void)_handleBrowseArtistForObject:(id)object sender:(id)sender context:(id)context;	// 0xdfe1
- (void)_handleRemoveRadioStationFromFavoritesForObject:(id)object sender:(id)sender context:(id)context;	// 0xda89
- (void)_handleStartGeniusForObject:(id)object sender:(id)sender context:(id)context;	// 0xdc15
- (id)_providerForCollection:(ATVMediaCollectionRef)collection target:(id)target selector:(SEL)selector;	// 0xd205
- (id)_providerForFavorite:(id)favorite target:(id)target selector:(SEL)selector;	// 0xd0f9
- (id)_providerForMediaItem:(ATVMediaItemRef)mediaItem target:(id)target selector:(SEL)selector;	// 0xd339
- (BOOL)_shouldShowAddToFavoritesItem:(ATVMediaItemRef)favoritesItem;	// 0xe275
- (BOOL)_shouldShowAirTunesSettingsItem:(ATVMediaItemRef)item;	// 0xe455
- (BOOL)_shouldShowBrowseAlbumItem:(ATVMediaItemRef)item;	// 0xe2d1
- (BOOL)_shouldShowBrowseArtistItem:(ATVMediaItemRef)item;	// 0xe335
- (BOOL)_shouldShowGeniusItem:(ATVMediaItemRef)item;	// 0xe399
- (BOOL)_shouldShowOnTheGoItem:(void *)item;	// 0xe3ed
- (BOOL)_shouldShowRemoveFromFavoritesItem:(ATVMediaItemRef)favoritesItem;	// 0xe111
- (BOOL)_shouldShowSpeakersItem:(ATVMediaItemRef)item;	// 0xe165
- (id)contextMenuProviderForObject:(id)object target:(id)target selector:(SEL)selector;	// 0xd9b1
- (void)handleSelectionForObject:(id)object sender:(id)sender context:(id)context;	// 0xdda1
@end

