/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVMusicStoreCatalogItemController.h"
#import "AppleTV-Structs.h"

@class NSNumber, BRMediaListControl, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreCatalogCollectionController : ATVMusicStoreCatalogItemController {
@private
	BRMediaListControl *_mediaListControl;	// 92 = 0x5c
	NSDictionary *_itemToPlayWhenRentalQueryCompletes;	// 96 = 0x60
	ATVMediaQueryRef _rentalQuery;	// 100 = 0x64
	BOOL _rentalQueryComplete;	// 104 = 0x68
	NSNumber *_seasonID;	// 108 = 0x6c
}
- (id)initWithItemDictionary:(id)itemDictionary;	// 0x32f64401
- (void)_blueDotInfoChanged;	// 0x32f64b8d
- (BOOL)_checkForItemsRented;	// 0x32f65229
- (id)_favorite;	// 0x32f64ed9
- (void)_favoriteItemsChanged:(id)changed;	// 0x32f64bcd
- (void)_getBlueDotCount:(long *)count nonBlueDotCount:(long *)count2 withProvider:(id)provider;	// 0x32f65a7d
- (void)_getEpisodeForSelectedItem:(id *)selectedItem andProvider:(id *)provider;	// 0x32f6599d
- (void)_highlightFirstNonHeaderRow;	// 0x32f64c55
- (BOOL)_highlightItemSelectedByUser;	// 0x32f64c0d
- (void)_markAllAsWatched:(BOOL)watched;	// 0x32f66119
- (void)_markSelectedEpisodeAsWatched:(BOOL)watched;	// 0x32f65fb9
- (id)_providerForSelectedItem;	// 0x32f65a59
- (void)_pushEpisodeForUserSelectedItem;	// 0x32f64d99
- (void)_rentalQueryComplete;	// 0x32f65645
- (id)_userSelectedItemWithListIndex:(long *)listIndex;	// 0x32f64f15
- (id)accessibilityLabel;	// 0x32f64ae9
- (id)accessibilitySecondaryLabel;	// 0x32f64b09
- (void)controlWasActivated;	// 0x32f64a99
- (void)dealloc;	// 0x32f64969
- (id)episodeForSelectedItem;	// 0x32f64b29
- (void)markAsUnwatched;	// 0x32f66105
- (void)markAsWatched;	// 0x32f660f1
- (void)markSeasonAsUnwatched;	// 0x32f66329
- (void)markSeasonAsWatched;	// 0x32f66315
- (void)playStoreItemWhenRentalQueryCompletes:(id)completes;	// 0x32f64b4d
- (id)providersForContextMenu;	// 0x32f65b3d
- (void)relatedContentLoaded:(id)loaded;	// 0x32f64ae5
- (void)wasExhumed;	// 0x32f64a55
- (void)wasPushed;	// 0x32f64a15
@end
