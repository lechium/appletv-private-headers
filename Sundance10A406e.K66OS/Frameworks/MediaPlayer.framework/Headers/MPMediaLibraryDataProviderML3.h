/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPMediaLibraryDataProviderPrivate.h"
#import <NSObject.h> // Unknown library

@class NSString, ML3MusicLibrary, NSSet, NSArray;
@protocol OS_dispatch_queue;

@interface MPMediaLibraryDataProviderML3 : NSObject <MPMediaLibraryDataProviderPrivate> {
	NSObject<OS_dispatch_queue> *_backgroundTaskQueue;	// 4 = 0x4
	unsigned _backgroundTask;	// 8 = 0x8
	unsigned _backgroundTaskCount;	// 12 = 0xc
	BOOL _hasScheduledEventPosting;	// 16 = 0x10
	ML3MusicLibrary *_library;	// 20 = 0x14
	int _refreshState;	// 24 = 0x18
	NSString *_uniqueIdentifier;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) BOOL isGeniusEnabled;
@property(retain, nonatomic) ML3MusicLibrary *library;	// G=0x35d3d7ed; S=0x35d383c1; @synthesize=_library
@property(readonly, assign, nonatomic) NSString *name;	// G=0x35d3850d; 
@property(readonly, assign, nonatomic) NSArray *preferredAudioLanguages;	// G=0x35d3af31; 
@property(readonly, assign, nonatomic) NSArray *preferredSubtitleLanguages;	// G=0x35d3af51; 
@property(readonly, assign, nonatomic) NSSet *propertiesToCache;
@property(readonly, assign, nonatomic) BOOL requiresAuthentication;
@property(readonly, assign, nonatomic) NSString *syncValidity;	// G=0x35d3af81; 
@property(copy, nonatomic) NSString *ubiquitousBookmarkDomainVersionAnchorToken;	// G=0x35d3b42d; S=0x35d3b3b9; 
@property(assign, nonatomic) unsigned long long ubiquitousBookmarkEntityRevisionAnchor;	// G=0x35d3b3f5; S=0x35d3b379; 
@property(readonly, assign, nonatomic) NSString *uniqueIdentifier;	// G=0x35d38541; 
+ (id)_unadjustedValueForMPProperty:(id)mpproperty withDefaultValue:(id)defaultValue;	// 0x35d3c955
- (id)initWithLibrary:(id)library;	// 0x35d380a5
- (void)_coalesceEvents;	// 0x35d3cd0d
- (void)_displayValuesDidChange:(id)_displayValues;	// 0x35d3cfb9
- (void)_dynamicPropertiesDidChange:(id)_dynamicProperties;	// 0x35d3cf19
- (void)_invisiblePropertiesDidChange:(id)_invisibleProperties;	// 0x35d3cf91
- (void)_libraryContentsDidChange:(id)_libraryContents;	// 0x35d3ce55
- (void)_libraryUIDDidChange:(id)_libraryUID;	// 0x35d3cff9
- (void)_loadProperties:(id)properties ofEntityWithIdentifier:(long long)identifier ML3EntityClass:(Class)aClass completionBlock:(id)block;	// 0x35d3d019
- (void)_loadValueForAggregateFunction:(id)aggregateFunction entityClass:(Class)aClass property:(id)property query:(id)query completionBlock:(id)block;	// 0x35d3d449
- (void)_postEvents;	// 0x35d3cd59
- (BOOL)_removeEntitiesWithIdentifiers:(long long *)identifiers count:(unsigned)count entityClass:(Class)aClass;	// 0x35d3d5b5
- (void)_syncGenerationDidChange:(id)_syncGeneration;	// 0x35d3cfd9
- (void)addItemWithIdentifier:(long long)identifier toPlaylistWithIdentifier:(long long)identifier2 completionBlock:(id)block;	// 0x35d3a661
- (void)addItemsWithIdentifiers:(long long *)identifiers count:(unsigned)count toPlaylistWithIdentifier:(long long)identifier completionBlock:(id)block;	// 0x35d3a83d
- (long long)addPlaylistWithValuesForProperties:(id)properties;	// 0x35d3a11d
- (id)adjustedValueForMPProperty:(id)mpproperty ofEntity:(id)entity withDefaultValue:(id)defaultValue;	// 0x35d3badd
- (id)collectionResultSetForQueryCriteria:(id)queryCriteria;	// 0x35d3b239
- (unsigned long long)currentEntityRevision;	// 0x35d38731
- (void)dealloc;	// 0x35d38251
- (void)downloadItemWithIdentifier:(long long)identifier completionHandler:(id)handler;	// 0x35d3b311
- (void)enumerateCollectionIdentifiersForQueryCriteria:(id)queryCriteria cancelBlock:(id)block usingBlock:(id)block3;	// 0x35d39355
- (void)enumerateEntityChangesAfterSyncAnchor:(id)anchor itemBlock:(id)block collectionBlock:(id)block3;	// 0x35d3afd9
- (void)enumerateItemIdentifiersForQueryCriteria:(id)queryCriteria cancelBlock:(id)block usingBlock:(id)block3;	// 0x35d392b1
- (BOOL)hasGeniusMixes;	// 0x35d38b85
- (BOOL)hasMediaOfType:(int)type;	// 0x35d388f1
- (BOOL)hasUniversalBookmarkableItems;	// 0x35d38c59
- (BOOL)itemExistsWithPersistentID:(unsigned long long)persistentID;	// 0x35d38d9d
- (long long)itemPersistentIDForStoreID:(long long)storeID;	// 0x35d38e01
- (id)itemResultSetForQueryCriteria:(id)queryCriteria;	// 0x35d3b2a5
- (id)lastModifiedDate;	// 0x35d38659
// declared property getter: - (id)library;	// 0x35d3d7ed
- (void)loadBestArtworkImageDataForSize:(CGSize)size ofItemWithIdentifier:(long long)identifier completionBlock:(id)block;	// 0x35d3af71
- (void)loadBestTimedArtworkImageDataForSize:(CGSize)size ofItemWithIdentifier:(long long)identifier atPlaybackTime:(double)playbackTime completionBlock:(id)block;	// 0x35d3af79
- (void)loadProperties:(id)properties ofCollectionWithIdentifier:(long long)identifier groupingType:(int)type completionBlock:(id)block;	// 0x35d3998d
- (void)loadProperties:(id)properties ofItemWithIdentifier:(long long)identifier completionBlock:(id)block;	// 0x35d39941
- (void)loadQueryCriteria:(id)criteria countOfCollectionsWithCompletionBlock:(id)completionBlock;	// 0x35d391bd
- (void)loadQueryCriteria:(id)criteria countOfItemsWithCompletionBlock:(id)completionBlock;	// 0x35d390c9
- (void)loadQueryCriteria:(id)criteria hasCollectionsWithCompletionBlock:(id)completionBlock;	// 0x35d38fd5
- (void)loadQueryCriteria:(id)criteria hasItemsWithCompletionBlock:(id)completionBlock;	// 0x35d38ee1
- (void)loadValueForAggregateFunction:(id)aggregateFunction onCollectionsForProperty:(id)property queryCriteria:(id)criteria completionBlock:(id)block;	// 0x35d398e1
- (void)loadValueForAggregateFunction:(id)aggregateFunction onItemsForProperty:(id)property queryCriteria:(id)criteria completionBlock:(id)block;	// 0x35d3986d
- (void)moveItemFromIndex:(unsigned)index toIndex:(unsigned)index2 inPlaylistWithIdentifier:(long long)identifier completionBlock:(id)block;	// 0x35d3abf1
// declared property getter: - (id)name;	// 0x35d3850d
- (void)performBackgroundTaskWithBlock:(id)block;	// 0x35d3b68d
- (void)performReadTransactionWithBlock:(id)block;	// 0x35d39c0d
- (BOOL)performTransactionWithBlock:(id)block;	// 0x35d39a89
- (void)performUbiquitousDatabaseUpdateTransaction:(id)transaction;	// 0x35d3b465
- (BOOL)playlistExistsWithPersistentID:(unsigned long long)persistentID;	// 0x35d38e7d
- (long long)playlistGeneration;	// 0x35d38771
- (void)populateLocationPropertiesOfItemWithIdentifier:(long long)identifier withPath:(id)path;	// 0x35d3b315
// declared property getter: - (id)preferredAudioLanguages;	// 0x35d3af31
// declared property getter: - (id)preferredSubtitleLanguages;	// 0x35d3af51
- (void)removeAllItemsInPlaylistWithIdentifier:(long long)identifier;	// 0x35d3ab2d
- (void)removeItemsWithIdentifiers:(long long *)identifiers atFilteredIndexes:(id)filteredIndexes inPlaylistWithIdentifier:(long long)identifier completionBlock:(id)block;	// 0x35d3aa19
- (BOOL)removeItemsWithIdentifiers:(long long *)identifiers count:(unsigned)count;	// 0x35d3a61d
- (BOOL)removePlaylistWithIdentifier:(long long)identifier;	// 0x35d3a5cd
// declared property setter: - (void)setLibrary:(id)library;	// 0x35d383c1
// declared property setter: - (void)setUbiquitousBookmarkDomainVersionAnchorToken:(id)token;	// 0x35d3b3b9
// declared property setter: - (void)setUbiquitousBookmarkEntityRevisionAnchor:(unsigned long long)anchor;	// 0x35d3b379
- (BOOL)setValue:(id)value forProperty:(id)property ofCollectionWithIdentifier:(long long)identifier groupingType:(int)type;	// 0x35d39fad
- (BOOL)setValue:(id)value forProperty:(id)property ofItemWithIdentifier:(long long)identifier;	// 0x35d39c99
- (BOOL)setValue:(id)value forProperty:(id)property ofPlaylistWithIdentifier:(long long)identifier;	// 0x35d3a08d
- (unsigned long long)syncGenerationID;	// 0x35d38751
// declared property getter: - (id)syncValidity;	// 0x35d3af81
// declared property getter: - (id)ubiquitousBookmarkDomainVersionAnchorToken;	// 0x35d3b42d
// declared property getter: - (unsigned long long)ubiquitousBookmarkEntityRevisionAnchor;	// 0x35d3b3f5
// declared property getter: - (id)uniqueIdentifier;	// 0x35d38541
- (void)updateUbiquitousValuesForTrackWithKey:(id)key mediaPropertyValues:(id)values timestamp:(double)timestamp;	// 0x35d3b501
- (BOOL)writable;	// 0x35d388cd
@end
