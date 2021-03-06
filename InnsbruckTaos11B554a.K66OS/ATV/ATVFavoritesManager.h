/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"

@class NSMutableArray, NSTimer;

__attribute__((visibility("hidden")))
@interface ATVFavoritesManager : BRSingleton {
	NSMutableArray *_favorites;	// 4 = 0x4
	NSTimer *_saveTimer;	// 8 = 0x8
}
@property(readonly, retain) NSMutableArray *favorites;	// G=0x10e38d; converted property
+ (void)setSingleton:(id)singleton;	// 0x10de21
+ (id)singleton;	// 0x10de11
- (id)init;	// 0x10de45
- (void).cxx_destruct;	// 0x10e3c9
- (void)_keyValueStoreAccountDidSignOut:(id)_keyValueStoreAccount;	// 0x10f001
- (void)_keyValueStoreIsAvailable:(id)available;	// 0x10efed
- (void)_loadFavorites;	// 0x10e3fd
- (void)_musicStoreItemAcquired:(id)acquired;	// 0x10f041
- (unsigned)_nextUserOrderForType:(int)type;	// 0x112109
- (int)_normalizeItemType:(int)type;	// 0x1120f9
- (id)_orderedFavoritesForType:(int)type orderedBy:(int)by;	// 0x11230d
- (void)_removeFavorites:(id)favorites;	// 0x10e631
- (void)_saveFavorites;	// 0x10f11d
- (void)_saveTimerFired:(id)fired;	// 0x10e20d
- (void)_updateFavoritesFromDictionaryRepresentations:(id)dictionaryRepresentations;	// 0x10e945
- (void)_updateFromKeyValueStoreIfAvailable:(id)keyValueStoreIfAvailable;	// 0x10e8c1
- (void)_updateFromKeyValueStoreInternal:(id)keyValueStoreInternal;	// 0x10ede5
- (void)dealloc;	// 0x10dfc1
- (BOOL)favoriteExistsForItemID:(id)itemID;	// 0x10e361
- (id)favoriteForItemID:(id)itemID;	// 0x10e2b9
// converted property getter: - (id)favorites;	// 0x10e38d
- (id)favoritesForType:(int)type;	// 0x1121dd
- (id)orderedFavoritesForType:(int)type;	// 0x1125c5
- (id)radioFavorites;	// 0x110711
- (void)removeFavorite:(id)favorite;	// 0x10e241
- (void)removeFavorites:(id)favorites;	// 0x10e289
- (void)saveFavorite:(id)favorite;	// 0x10e02d
- (void)saveFavorites;	// 0x10e189
- (void)setNeedsSave;	// 0x10e199
- (void)sortModeChangedFrom:(int)from to:(int)to;	// 0x11261d
- (void)updateFromKeyValueStore:(id)keyValueStore;	// 0x10e3b9
@end

