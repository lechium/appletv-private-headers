/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPMediaLibraryDataProviderPrivate.h"
#import "MediaPlayer-Structs.h"
#import <NSObject.h> // Unknown library

@class ML3MusicLibrary, NSSet, NSArray, NSString;

@interface MPMediaLibraryDataProviderML3 : NSObject <MPMediaLibraryDataProviderPrivate> {
	ML3MusicLibrary *_library;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) BOOL isGeniusEnabled;
@property(retain, nonatomic) ML3MusicLibrary *library;	// G=0x31de8505; S=0x31de9fe1; @synthesize=_library
@property(readonly, assign, nonatomic) NSString *name;	// G=0x31de9fb5; 
@property(readonly, assign, nonatomic) NSArray *preferredAudioLanguages;	// G=0x31de9485; 
@property(readonly, assign, nonatomic) NSArray *preferredSubtitleLanguages;	// G=0x31de9465; 
@property(readonly, assign, nonatomic) NSSet *propertiesToCache;
@property(readonly, assign, nonatomic) BOOL requiresAuthentication;
@property(readonly, assign, nonatomic) NSString *uniqueIdentifier;	// G=0x31de84b1; 
+ (id)_unadjustedValueForMPProperty:(id)mpproperty withDefaultValue:(id)defaultValue;	// 0x31decb45
- (id)initWithLibrary:(id)library;	// 0x31dea185
- (void)_dynamicPropertiesDidChange:(id)_dynamicProperties;	// 0x31de8681
- (void)_libraryContentsDidChange:(id)_libraryContents;	// 0x31de86a1
- (void)_loadEntitiesUsingFetchRequest:(id)request entityQuery:(id)query writeBlock:(id)block;	// 0x31deac3d
- (void)_loadProperties:(id)properties ofEntityWithIdentifier:(long long)identifier ML3EntityClass:(Class)aClass completionBlock:(id)block;	// 0x31dec551
- (void)_loadValueForAggregateFunction:(id)aggregateFunction entityClass:(Class)aClass property:(id)property query:(id)query completionBlock:(id)block;	// 0x31de8565
- (void)_performBackgroundTaskWithBlock:(id)block;	// 0x31dec3cd
- (BOOL)_removeEntitiesWithIdentifiers:(long long *)identifiers count:(unsigned)count entityClass:(Class)aClass;	// 0x31deaa69
- (void)addItemWithIdentifier:(long long)identifier toPlaylistWithIdentifier:(long long)identifier2 insertedPhysicalOrderOut:(long long *)anOut fullReorderOccurredOut:(BOOL *)anOut4 completionBlock:(id)block;	// 0x31deaf61
- (long long)addPlaylistWithValuesForProperties:(id)properties;	// 0x31deb0bd
- (id)adjustedValueForMPProperty:(id)mpproperty ofEntity:(id)entity withDefaultValue:(id)defaultValue;	// 0x31deca8d
- (void)dealloc;	// 0x31dea0d5
- (void)enumerateCollectionIdentifiersForQueryCriteria:(id)queryCriteria cancelBlock:(id)block usingBlock:(id)block3;	// 0x31dec855
- (void)enumerateItemIdentifiersForQueryCriteria:(id)queryCriteria cancelBlock:(id)block usingBlock:(id)block3;	// 0x31de9c11
- (BOOL)hasGeniusMixes;	// 0x31de9e65
- (BOOL)hasMediaOfType:(int)type;	// 0x31deb30d
- (void)insertItemsWithIdentifiers:(long long *)identifiers count:(unsigned)count toPlaylistWithIdentifier:(long long)identifier afterPhysicalOrder:(long long)order insertedPhysicalOrdersOut:(long long *)anOut fullReorderOccurredOut:(BOOL *)anOut6 completionBlock:(id)block;	// 0x31deae61
- (BOOL)itemExistsWithPersistentID:(unsigned long long)persistentID;	// 0x31de9e05
- (id)lastModifiedDate;	// 0x31dea2bd
// declared property getter: - (id)library;	// 0x31de8505
- (void)loadBestArtworkImageDataForSize:(CGSize)size ofItemWithIdentifier:(long long)identifier completionBlock:(id)block;	// 0x31de84e5
- (void)loadBestTimedArtworkImageDataForSize:(CGSize)size ofItemWithIdentifier:(long long)identifier atPlaybackTime:(double)playbackTime completionBlock:(id)block;	// 0x31de84f5
- (void)loadCollectionsUsingFetchRequest:(id)request;	// 0x31de9a09
- (void)loadItemsUsingFetchRequest:(id)request;	// 0x31de9ad5
- (void)loadProperties:(id)properties ofCollectionWithIdentifier:(long long)identifier completionBlock:(id)block;	// 0x31debcbd
- (void)loadProperties:(id)properties ofItemWithIdentifier:(long long)identifier completionBlock:(id)block;	// 0x31de99ad
- (void)loadQueryCriteria:(id)criteria hasCollectionsWithCompletionBlock:(id)completionBlock;	// 0x31de9c85
- (void)loadQueryCriteria:(id)criteria hasItemsWithCompletionBlock:(id)completionBlock;	// 0x31de9d15
- (void)loadValueForAggregateFunction:(id)aggregateFunction onCollectionsForProperty:(id)property queryCriteria:(id)criteria completionBlock:(id)block;	// 0x31debd95
- (void)loadValueForAggregateFunction:(id)aggregateFunction onItemsForProperty:(id)property queryCriteria:(id)criteria completionBlock:(id)block;	// 0x31de9ba1
- (void)moveItemFromPhysicalOrder:(long long)physicalOrder toAfterPhysicalOrder:(long long)afterPhysicalOrder inPlaylistWithIdentifier:(long long)identifier insertedPhysicalOrderOut:(long long *)anOut fullReorderOccurredOut:(BOOL *)anOut5 completionBlock:(id)block;	// 0x31dead29
// declared property getter: - (id)name;	// 0x31de9fb5
- (BOOL)performTransactionWithBlock:(id)block;	// 0x31deb1c5
- (BOOL)playlistExistsWithPersistentID:(unsigned long long)persistentID;	// 0x31de9da5
// declared property getter: - (id)preferredAudioLanguages;	// 0x31de9485
// declared property getter: - (id)preferredSubtitleLanguages;	// 0x31de9465
- (void)removeAllItemsInPlaylistWithIdentifier:(long long)identifier;	// 0x31de94fd
- (void)removeItemAtPhysicalOrder:(long long)physicalOrder inPlaylistWithIdentifier:(long long)identifier completionBlock:(id)block;	// 0x31de95a5
- (BOOL)removeItemsWithIdentifiers:(long long *)identifiers count:(unsigned)count;	// 0x31de9719
- (BOOL)removePlaylistWithIdentifier:(long long)identifier;	// 0x31de9765
// declared property setter: - (void)setLibrary:(id)library;	// 0x31de9fe1
- (BOOL)setValue:(id)value forProperty:(id)property ofItemWithIdentifier:(long long)identifier;	// 0x31de9861
- (BOOL)setValue:(id)value forProperty:(id)property ofPlaylistWithIdentifier:(long long)identifier;	// 0x31de97a9
// declared property getter: - (id)uniqueIdentifier;	// 0x31de84b1
@end

