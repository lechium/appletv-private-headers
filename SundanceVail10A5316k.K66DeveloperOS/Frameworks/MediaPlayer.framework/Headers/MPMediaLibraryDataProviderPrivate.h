/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPMediaLibraryDataProvider.h"

@class NSString, NSArray;

@protocol MPMediaLibraryDataProviderPrivate <MPMediaLibraryDataProvider>
@optional
@property(readonly, assign, nonatomic) BOOL isGeniusEnabled;
@property(readonly, assign, nonatomic) NSArray *preferredAudioLanguages;
@property(readonly, assign, nonatomic) NSArray *preferredSubtitleLanguages;
@property(copy, nonatomic) NSString *ubiquitousBookmarkDomainVersionAnchorToken;
@property(assign, nonatomic) unsigned long long ubiquitousBookmarkEntityRevisionAnchor;
- (void)addItemWithIdentifier:(long long)identifier toPlaylistWithIdentifier:(long long)identifier2 completionBlock:(id)block;
- (void)addItemsWithIdentifiers:(long long *)identifiers count:(unsigned)count toPlaylistWithIdentifier:(long long)identifier completionBlock:(id)block;
- (long long)addPlaylistWithValuesForProperties:(id)properties;
- (void *)createGeniusClusterPlaylistWithSeedItemIdentifiers:(long long *)seedItemIdentifiers count:(unsigned)count error:(id *)error;
- (void)downloadItemWithIdentifier:(long long)identifier completionHandler:(id)handler;
- (long long *)generateItemIdentifiersForGeniusClusterPlaylist:(void *)geniusClusterPlaylist count:(unsigned *)count error:(id *)error;
- (BOOL)hasArtworkImageForItemWithIdentifier:(long long)identifier;
- (BOOL)hasGeniusMixes;
- (BOOL)hasMediaOfType:(int)type;
- (BOOL)hasUniversalBookmarkableItems;
- (BOOL)isArtworkImageIdenticalForItemWithIdentifier:(long long)identifier otherItemWithIdentifier:(long long)identifier2 compareRepresentativeItemArtwork:(BOOL)artwork missingAlwaysComparesEqual:(BOOL)equal;
// declared property getter: - (BOOL)isGeniusEnabled;
- (BOOL)itemExistsWithPersistentID:(unsigned long long)persistentID;
- (id)lastModifiedDate;
- (void)loadArtworkImageForFormat:(int)format ofItemWithArtworkCacheID:(id)artworkCacheID canUseSurfaceBackedImage:(BOOL)image completionBlock:(id)block;
- (void)loadArtworkImageForFormat:(int)format ofItemWithArtworkCacheID:(id)artworkCacheID completionBlock:(id)block;
- (void)loadArtworkImageForFormat:(int)format ofItemWithIdentifier:(long long)identifier completionBlock:(id)block;
- (void)loadBestArtworkImageForSize:(CGSize)size ofItemWithIdentifier:(long long)identifier completionBlock:(id)block;
- (void)loadBestTimedArtworkImageForSize:(CGSize)size ofItemWithIdentifier:(long long)identifier atPlaybackTime:(double)playbackTime completionBlock:(id)block;
- (void)loadCoverFlowArtworkImageForSize:(CGSize)size ofItemWithIdentifier:(long long)identifier completionBlock:(id)block;
- (void)moveItemFromIndex:(unsigned)index toIndex:(unsigned)index2 inPlaylistWithIdentifier:(long long)identifier completionBlock:(id)block;
- (void)performReadTransactionWithBlock:(id)block;
- (BOOL)performTransactionWithBlock:(id)block;
- (BOOL)playlistExistsWithPersistentID:(unsigned long long)persistentID;
- (void)populateLocationPropertiesOfItemWithIdentifier:(long long)identifier withPath:(id)path;
// declared property getter: - (id)preferredAudioLanguages;
// declared property getter: - (id)preferredSubtitleLanguages;
- (void)releaseGeniusClusterPlaylist:(void *)playlist;
- (void)removeAllItemsInPlaylistWithIdentifier:(long long)identifier;
- (void)removeItemsWithIdentifiers:(long long *)identifiers atFilteredIndexes:(id)filteredIndexes inPlaylistWithIdentifier:(long long)identifier completionBlock:(id)block;
- (BOOL)removeItemsWithIdentifiers:(long long *)identifiers count:(unsigned)count;
- (BOOL)removePlaylistWithIdentifier:(long long)identifier;
- (void)seedPlaylistWithIdentifier:(long long)identifier withItemWithIdentifier:(long long)identifier2 completionBlock:(id)block;
// declared property setter: - (void)setUbiquitousBookmarkDomainVersionAnchorToken:(id)token;
// declared property setter: - (void)setUbiquitousBookmarkEntityRevisionAnchor:(unsigned long long)anchor;
- (BOOL)setValue:(id)value forProperty:(id)property ofItemWithIdentifier:(long long)identifier;
- (BOOL)setValue:(id)value forProperty:(id)property ofPlaylistWithIdentifier:(long long)identifier;
// declared property getter: - (id)ubiquitousBookmarkDomainVersionAnchorToken;
// declared property getter: - (unsigned long long)ubiquitousBookmarkEntityRevisionAnchor;
- (void)updateUbiquitousValuesForTrackWithKey:(id)key mediaPropertyValues:(id)values timestamp:(double)timestamp;
@end

