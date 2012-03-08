/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRMusicContextMenuUtility.h"


__attribute__((visibility("hidden")))
@interface MusicContextMenuUtility : BRMusicContextMenuUtility {
}
+ (void)initialize;	// 0x303af699
- (BOOL)_favoriteExists:(ATVMediaItemRef)exists;	// 0x303b06e1
- (void)_handleAddRadioStationToFavoritesForObject:(id)object sender:(id)sender context:(id)context;	// 0x303b0e6d
- (void)_handleAddToOnTheGoForObject:(id)object sender:(id)sender context:(id)context;	// 0x303b0a09
- (void)_handleAirTunesSettingsForObject:(id)object sender:(id)sender context:(id)context;	// 0x303b0a41
- (void)_handleBrowseAlbumForObject:(id)object sender:(id)sender context:(id)context;	// 0x303b0cf5
- (void)_handleBrowseArtistForObject:(id)object sender:(id)sender context:(id)context;	// 0x303b0b7d
- (void)_handleRemoveRadioStationFromFavoritesForObject:(id)object sender:(id)sender context:(id)context;	// 0x303b0f05
- (void)_handleStartGeniusForObject:(id)object sender:(id)sender context:(id)context;	// 0x303b0861
- (id)_providerForCollection:(ATVMediaCollectionRef)collection target:(id)target selector:(SEL)selector;	// 0x303b012d
- (id)_providerForFavorite:(id)favorite target:(id)target selector:(SEL)selector;	// 0x303b0289
- (id)_providerForMediaItem:(ATVMediaItemRef)mediaItem target:(id)target selector:(SEL)selector;	// 0x303afa4d
- (BOOL)_shouldShowAddToFavoritesItem:(ATVMediaItemRef)favoritesItem;	// 0x303b0679
- (BOOL)_shouldShowAirTunesSettingsItem:(ATVMediaItemRef)item;	// 0x303b04ad
- (BOOL)_shouldShowBrowseAlbumItem:(ATVMediaItemRef)item;	// 0x303b060d
- (BOOL)_shouldShowBrowseArtistItem:(ATVMediaItemRef)item;	// 0x303b05a1
- (BOOL)_shouldShowGeniusItem:(ATVMediaItemRef)item;	// 0x303b03bd
- (BOOL)_shouldShowOnTheGoItem:(void *)item;	// 0x303b0439
- (BOOL)_shouldShowRemoveFromFavoritesItem:(ATVMediaItemRef)favoritesItem;	// 0x303b0801
- (BOOL)_shouldShowSpeakersItem:(ATVMediaItemRef)item;	// 0x303b0791
- (id)contextMenuProviderForObject:(id)object target:(id)target selector:(SEL)selector;	// 0x303af841
- (void)handleSelectionForObject:(id)object sender:(id)sender context:(id)context;	// 0x303af931
@end

