/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVMusicStoreCatalogItemController.h"

@class NSNumber, BRMediaListControl, BRMediaType;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreCatalogCollectionController : ATVMusicStoreCatalogItemController {
	BRMediaListControl *_mediaListControl;	// 112 = 0x70
	NSNumber *_seasonID;	// 116 = 0x74
	BRMediaType *_mediaType;	// 120 = 0x78
}
- (id)initWithItemDictionary:(id)itemDictionary;	// 0x1f4949
- (void).cxx_destruct;	// 0x1f70c5
- (void)_blueDotInfoChanged;	// 0x1f5a9d
- (id)_favorite;	// 0x1f5f4d
- (void)_favoriteItemsChanged:(id)changed;	// 0x1f5ad5
- (void)_getBlueDotCount:(long *)count nonBlueDotCount:(long *)count2 withProvider:(id)provider;	// 0x1f6475
- (void)_getEpisodeForSelectedItem:(id *)selectedItem andProvider:(id *)provider;	// 0x1f6351
- (BOOL)_highlightCollectionOfferRow;	// 0x1f5cfd
- (void)_highlightFirstNonHeaderRow;	// 0x1f5b65
- (BOOL)_highlightItemSelectedByUser;	// 0x1f5b0d
- (void)_markAllAsWatched:(BOOL)watched;	// 0x1f6d8d
- (void)_markSelectedEpisodeAsWatched:(BOOL)watched;	// 0x1f6bbd
- (void)_podcastSubscriptionChanged;	// 0x1f59e5
- (id)_providerForSelectedItem;	// 0x1f6445
- (void)_resetProviders;	// 0x1f58ed
- (void)_resetProvidersAndReloadList;	// 0x1f57fd
- (id)_userSelectedItemWithListIndex:(long *)listIndex;	// 0x1f5fa5
- (id)accessibilityLabel;	// 0x1f587d
- (id)accessibilitySecondaryLabel;	// 0x1f589d
- (id)cancelProviderForContextMenu;	// 0x1f6bb9
- (void)controlWasActivated;	// 0x1f5839
- (void)dealloc;	// 0x1f55d1
- (id)episodeForSelectedItem;	// 0x1f58bd
- (void)markAsUnwatched;	// 0x1f6d79
- (void)markAsWatched;	// 0x1f6d65
- (void)markSeasonAsUnwatched;	// 0x1f70b1
- (void)markSeasonAsWatched;	// 0x1f709d
- (id)providersForContextMenu;	// 0x1f65b5
- (void)relatedContentLoaded:(id)loaded;	// 0x1f5879
- (void)wasExhumed;	// 0x1f57b9
- (void)wasPushed;	// 0x1f563d
@end

