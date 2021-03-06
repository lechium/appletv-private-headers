/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <NSObject.h> // Unknown library
#import "MPMediaLibraryDataProviderPrivate.h"

@class NSArray, NSString, NSSet, ML3MusicLibrary;

@interface MPMediaLibraryDataProviderML3 : NSObject <MPMediaLibraryDataProviderPrivate> {
	dispatch_queue_s *_backgroundTaskQueue;	// 4 = 0x4
	unsigned _backgroundTask;	// 8 = 0x8
	unsigned _backgroundTaskCount;	// 12 = 0xc
	ML3MusicLibrary *_library;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) BOOL isGeniusEnabled;
@property(retain, nonatomic) ML3MusicLibrary *library;	// G=0x31a45f9d; S=0x31a40781; @synthesize=_library
@property(readonly, assign, nonatomic) NSString *name;	// G=0x31a40899; 
@property(readonly, assign, nonatomic) NSArray *preferredAudioLanguages;	// G=0x31a42e15; 
@property(readonly, assign, nonatomic) NSArray *preferredSubtitleLanguages;	// G=0x31a42e35; 
@property(readonly, assign, nonatomic) NSSet *propertiesToCache;
@property(readonly, assign, nonatomic) BOOL requiresAuthentication;
@property(readonly, assign, nonatomic) NSString *syncValidity;	// G=0x31a42e65; 
@property(readonly, assign, nonatomic) NSString *uniqueIdentifier;	// G=0x31a408cd; 
+ (id)_unadjustedValueForMPProperty:(id)mpproperty withDefaultValue:(id)defaultValue;	// 0x31a44a51
- (id)initWithLibrary:(id)library;	// 0x31a40501
- (void)_displayValuesDidChange:(id)_displayValues;	// 0x31a44e35
- (void)_dynamicPropertiesDidChange:(id)_dynamicProperties;	// 0x31a44e15
- (void)_libraryContentsDidChange:(id)_libraryContents;	// 0x31a44df5
- (void)_loadEntitiesUsingFetchRequest:(id)request entityQuery:(id)query writeBlock:(id)block;	// 0x31a44e75
- (void)_loadProperties:(id)properties ofEntityWithIdentifier:(long long)identifier ML3EntityClass:(Class)aClass completionBlock:(id)block;	// 0x31a459d1
- (void)_loadValueForAggregateFunction:(id)aggregateFunction entityClass:(Class)aClass property:(id)property query:(id)query completionBlock:(id)block;	// 0x31a45c0d
- (BOOL)_removeEntitiesWithIdentifiers:(long long *)identifiers count:(unsigned)count entityClass:(Class)aClass;	// 0x31a45d79
- (void)_syncGenerationDidChange:(id)_syncGeneration;	// 0x31a44e55
- (void)addItemWithIdentifier:(long long)identifier toPlaylistWithIdentifier:(long long)identifier2 completionBlock:(id)block;	// 0x31a426d5
- (void)addItemsWithIdentifiers:(long long *)identifiers count:(unsigned)count toPlaylistWithIdentifier:(long long)identifier completionBlock:(id)block;	// 0x31a428ad
- (long long)addPlaylistWithValuesForProperties:(id)properties;	// 0x31a421c5
- (id)adjustedValueForMPProperty:(id)mpproperty ofEntity:(id)entity withDefaultValue:(id)defaultValue;	// 0x31a435e9
- (void)dealloc;	// 0x31a40665
- (void)downloadItemWithIdentifier:(long long)identifier completionHandler:(id)handler;	// 0x31a43101
- (void)enumerateCollectionIdentifiersForQueryCriteria:(id)queryCriteria cancelBlock:(id)block usingBlock:(id)block3;	// 0x31a4120d
- (void)enumerateEntityChangesAfterSyncAnchor:(id)anchor itemBlock:(id)block collectionBlock:(id)block3;	// 0x31a42ebd
- (void)enumerateItemIdentifiersForQueryCriteria:(id)queryCriteria cancelBlock:(id)block usingBlock:(id)block3;	// 0x31a41169
- (BOOL)hasGeniusMixes;	// 0x31a40db5
- (BOOL)hasMediaOfType:(int)type;	// 0x31a40b61
- (BOOL)itemExistsWithPersistentID:(unsigned long long)persistentID;	// 0x31a40eb9
- (id)lastModifiedDate;	// 0x31a408d9
// declared property getter: - (id)library;	// 0x31a45f9d
- (void)loadBestArtworkImageDataForSize:(CGSize)size ofItemWithIdentifier:(long long)identifier completionBlock:(id)block;	// 0x31a42e55
- (void)loadBestTimedArtworkImageDataForSize:(CGSize)size ofItemWithIdentifier:(long long)identifier atPlaybackTime:(double)playbackTime completionBlock:(id)block;	// 0x31a42e5d
- (void)loadCollectionsUsingFetchRequest:(id)request;	// 0x31a418dd
- (void)loadItemsUsingFetchRequest:(id)request;	// 0x31a417c5
- (void)loadProperties:(id)properties ofCollectionWithIdentifier:(long long)identifier completionBlock:(id)block;	// 0x31a41af9
- (void)loadProperties:(id)properties ofItemWithIdentifier:(long long)identifier completionBlock:(id)block;	// 0x31a41aad
- (void)loadQueryCriteria:(id)criteria hasCollectionsWithCompletionBlock:(id)completionBlock;	// 0x31a41075
- (void)loadQueryCriteria:(id)criteria hasItemsWithCompletionBlock:(id)completionBlock;	// 0x31a40f81
- (void)loadValueForAggregateFunction:(id)aggregateFunction onCollectionsForProperty:(id)property queryCriteria:(id)criteria completionBlock:(id)block;	// 0x31a41765
- (void)loadValueForAggregateFunction:(id)aggregateFunction onItemsForProperty:(id)property queryCriteria:(id)criteria completionBlock:(id)block;	// 0x31a416f1
- (void)moveItemFromIndex:(unsigned)index toIndex:(unsigned)index2 inPlaylistWithIdentifier:(long long)identifier completionBlock:(id)block;	// 0x31a42c4d
// declared property getter: - (id)name;	// 0x31a40899
- (void)performBackgroundTaskWithBlock:(id)block;	// 0x31a43189
- (BOOL)performTransactionWithBlock:(id)block;	// 0x31a41cb1
- (BOOL)playlistExistsWithPersistentID:(unsigned long long)persistentID;	// 0x31a40f1d
- (long long)playlistGeneration;	// 0x31a409c9
// declared property getter: - (id)preferredAudioLanguages;	// 0x31a42e15
// declared property getter: - (id)preferredSubtitleLanguages;	// 0x31a42e35
- (void)removeAllItemsInPlaylistWithIdentifier:(long long)identifier;	// 0x31a42b89
- (void)removeItemsWithIdentifiers:(long long *)identifiers atFilteredIndexes:(id)filteredIndexes inPlaylistWithIdentifier:(long long)identifier completionBlock:(id)block;	// 0x31a42a75
- (BOOL)removeItemsWithIdentifiers:(long long *)identifiers count:(unsigned)count;	// 0x31a42691
- (BOOL)removePlaylistWithIdentifier:(long long)identifier;	// 0x31a42641
// declared property setter: - (void)setLibrary:(id)library;	// 0x31a40781
- (BOOL)setValue:(id)value forProperty:(id)property ofItemWithIdentifier:(long long)identifier;	// 0x31a41e21
- (BOOL)setValue:(id)value forProperty:(id)property ofPlaylistWithIdentifier:(long long)identifier;	// 0x31a42135
- (unsigned long long)syncGenerationID;	// 0x31a409a9
// declared property getter: - (id)syncValidity;	// 0x31a42e65
- (double)timestampForAppliedUbiquitousBookmarkKey:(id)appliedUbiquitousBookmarkKey;	// 0x31a43169
// declared property getter: - (id)uniqueIdentifier;	// 0x31a408cd
- (void)updateUbiquitousBookmarksWithKey:(id)key bookmarkMediaValue:(id)value timestamp:(double)timestamp;	// 0x31a43105
- (BOOL)writable;	// 0x31a40b3d
@end

