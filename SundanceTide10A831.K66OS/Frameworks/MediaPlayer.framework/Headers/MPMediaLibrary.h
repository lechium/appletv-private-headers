/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"

@class CADisplayLink, QueryCriteriaResultsCache, NSMutableDictionary, NSString, NSDate, NSURL, NSHashTable;
@protocol MPMediaLibraryDataProviderPrivate, OS_dispatch_queue;

@interface MPMediaLibrary : NSObject <NSCoding> {
	id<MPMediaLibraryDataProviderPrivate> _libraryDataProvider;	// 4 = 0x4
	int _libraryChangeObservers;	// 8 = 0x8
	NSObject<OS_dispatch_queue> *_entityCacheQueue;	// 12 = 0xc
	QueryCriteriaResultsCache *_itemsForCriteriaCache;	// 16 = 0x10
	QueryCriteriaResultsCache *_hasItemsForCriteriaCache;	// 20 = 0x14
	QueryCriteriaResultsCache *_countOfItemsForCriteriaCache;	// 24 = 0x18
	QueryCriteriaResultsCache *_itemResultSetsForCriteriaCache;	// 28 = 0x1c
	QueryCriteriaResultsCache *_collectionsForCriteriaCache;	// 32 = 0x20
	QueryCriteriaResultsCache *_hasCollectionsForCriteriaCache;	// 36 = 0x24
	QueryCriteriaResultsCache *_countOfCollectionsForCriteriaCache;	// 40 = 0x28
	QueryCriteriaResultsCache *_collectionsResultSetsForCriteriaCache;	// 44 = 0x2c
	NSMutableDictionary *_hasItemsDidLoadForCriteria;	// 48 = 0x30
	NSMutableDictionary *_hasCollectionsDidLoadForCriteria;	// 52 = 0x34
	NSMutableDictionary *_countOfCollectionsDidLoadForCriteria;	// 56 = 0x38
	NSMutableDictionary *_countOfItemsDidLoadForCriteria;	// 60 = 0x3c
	NSHashTable *_connectionAssertions;	// 64 = 0x40
	BOOL _disconnectAfterReleasingAssertions;	// 68 = 0x44
	float _connectionProgress;	// 72 = 0x48
	CADisplayLink *_connectionProgressDisplayLink;	// 76 = 0x4c
	double _connectionProgressStartTime;	// 80 = 0x50
	int _removalReason;	// 88 = 0x58
	unsigned _determinedHasMedia : 1;	// 92 = 0x5c
	unsigned _hasMedia : 1;	// 92 = 0x5c
	unsigned _determinedHasSongs : 1;	// 92 = 0x5c
	unsigned _hasSongs : 1;	// 92 = 0x5c
	unsigned _determinedHasGeniusMixes : 1;	// 92 = 0x5c
	unsigned _hasGeniusMixes : 1;	// 92 = 0x5c
	unsigned _determinedHasPlaylists : 1;	// 92 = 0x5c
	unsigned _hasPlaylists : 1;	// 92 = 0x5c
	unsigned _determinedHasComposers : 1;	// 93 = 0x5d
	unsigned _hasComposers : 1;	// 93 = 0x5d
	unsigned _determinedHasPodcasts : 1;	// 93 = 0x5d
	unsigned _hasPodcasts : 1;	// 93 = 0x5d
	unsigned _determinedHasUniversalBookmarkableItems : 1;	// 93 = 0x5d
	unsigned _hasUniversalBookmarkableContent : 1;	// 93 = 0x5d
	unsigned _determinedHasAudiobooks : 1;	// 93 = 0x5d
	unsigned _hasAudiobooks : 1;	// 93 = 0x5d
	BOOL _filteringDisabled;	// 94 = 0x5e
	BOOL _hasVideos;	// 95 = 0x5f
	BOOL _determinedHasVideos;	// 96 = 0x60
	BOOL _hasMusicVideos;	// 97 = 0x61
	BOOL _determinedHasMusicVideos;	// 98 = 0x62
	BOOL _hasAudibleAudioBooks;	// 99 = 0x63
	BOOL _determinedHasAudibleAudioBooks;	// 100 = 0x64
	BOOL _hasMovies;	// 101 = 0x65
	BOOL _determinedHasMovies;	// 102 = 0x66
	BOOL _hasCompilations;	// 103 = 0x67
	BOOL _determinedHasCompilations;	// 104 = 0x68
	BOOL _hasITunesU;	// 105 = 0x69
	BOOL _determinedHasITunesU;	// 106 = 0x6a
	BOOL _hasVideoITunesU;	// 107 = 0x6b
	BOOL _determinedHasVideoITunesU;	// 108 = 0x6c
	BOOL _hasMovieRentals;	// 109 = 0x6d
	BOOL _determinedHasMovieRentals;	// 110 = 0x6e
	BOOL _hasTVShows;	// 111 = 0x6f
	BOOL _determinedHasTVShows;	// 112 = 0x70
	BOOL _hasVideoPodcasts;	// 113 = 0x71
	BOOL _determinedHasVideoPodcasts;	// 114 = 0x72
	unsigned char _originalCellNetworkFlags;	// 115 = 0x73
	unsigned char _originalWiFiNetworkFlags;	// 116 = 0x74
}
@property(readonly, assign, nonatomic) NSString *_syncValidity;	// G=0x36f1553d; 
@property(readonly, assign) float connectionProgress;	// G=0x36f12475; converted property
@property(readonly, assign) BOOL hasAudibleAudioBooks;	// G=0x36f11439; converted property
@property(readonly, assign) BOOL hasCompilations;	// G=0x36f1152d; converted property
@property(readonly, assign) BOOL hasMovieRentals;	// G=0x36f1169d; converted property
@property(readonly, assign) BOOL hasMovies;	// G=0x36f114b1; converted property
@property(readonly, assign) BOOL hasMusicVideos;	// G=0x36f113bd; converted property
@property(readonly, assign) BOOL hasTVShows;	// G=0x36f11715; converted property
@property(readonly, assign) BOOL hasVideoPodcasts;	// G=0x36f11791; converted property
@property(readonly, assign) BOOL hasVideos;	// G=0x36f11341; converted property
@property(readonly, assign, nonatomic) NSDate *lastModifiedDate;	// G=0x36f10759; 
@property(readonly, assign, nonatomic) NSURL *protectedContentSupportStorageURL;	// G=0x36f15265; 
@property(assign, nonatomic) int removalReason;	// G=0x36f10981; S=0x36f10991; 
@property(retain) id ubiquitousBookmarkDomainVersionAnchorToken;	// G=0x36f11fed; S=0x36f11f59; converted property
@property(assign) unsigned long long ubiquitousBookmarkEntityRevisionAnchor;	// G=0x36f11fa1; S=0x36f11f01; converted property
+ (id)_libraryDataProviders;	// 0x36f14e31
+ (id)_libraryForDataProvider:(id)dataProvider;	// 0x36f14d59
+ (id)_mediaLibraries;	// 0x36f14bd1
+ (void)addLibraryDataProvider:(id)provider;	// 0x36f14eb1
+ (void)beginDiscoveringMediaLibraries;	// 0x36f100d1
+ (id)defaultMediaLibrary;	// 0x36f0eda5
+ (id)deviceMediaLibrary;	// 0x36f0f08d
+ (void)endDiscoveringMediaLibraries;	// 0x36f100ed
+ (void)initialize;	// 0x36f0ed55
+ (BOOL)isLibraryServerDisabled;	// 0x36f124a5
+ (id)libraryDataProviders;	// 0x36f14e79
+ (id)mediaLibraries;	// 0x36f14c35
+ (id)mediaLibraryWithUniqueIdentifier:(id)uniqueIdentifier;	// 0x36f14c6d
+ (void)reloadDisplayValuesForLibraryDataProvider:(id)libraryDataProvider;	// 0x36f15119
+ (void)reloadDynamicPropertiesForLibraryDataProvider:(id)libraryDataProvider;	// 0x36f150c1
+ (void)reloadInvisiblePropertiesForLibraryDataProvider:(id)libraryDataProvider;	// 0x36f150ed
+ (void)reloadLibraryDataProvider:(id)provider;	// 0x36f15095
+ (void)removeLibraryDataProvider:(id)provider removalReason:(int)reason;	// 0x36f14fa9
+ (void)setDefaultMediaLibrary:(id)library;	// 0x36f0ef1d
+ (void)setLibraryServerDisabled:(BOOL)disabled;	// 0x36f124a9
+ (void)setRunLoopForNotifications:(id)notifications;	// 0x36f124ad
+ (void)syncGenerationDidChangeForLibraryDataProvider:(id)syncGeneration;	// 0x36f15195
+ (void)uniqueIdentifierDidChangeForLibraryDataProvider:(id)uniqueIdentifier;	// 0x36f151e9
- (id)init;	// 0x36f0f0f9
- (id)initWithCoder:(id)coder;	// 0x36f0f7d5
- (BOOL)_checkHasContent:(BOOL *)content determined:(BOOL *)determined mediaType:(int)type queryHasEntitiesBlock:(id)block;	// 0x36f112d1
- (BOOL)_checkHasContent:(BOOL *)content determined:(BOOL *)determined queryHasEntitiesBlock:(id)block;	// 0x36f112b1
- (void)_clearCachedContentDataWithCompletionBlock:(id)completionBlock;	// 0x36f0fb45
- (void)_clearCachedEntitiesIncludingResultSets:(BOOL)sets completionBlock:(id)block;	// 0x36f0f9fd
- (void)_clearPendingDisconnection;	// 0x36f143f9
- (id)_collectionPersistentIdentifiersForQueryCriteria:(id)queryCriteria;	// 0x36f14049
- (id)_collectionsForQueryCriteria:(id)queryCriteria;	// 0x36f14451
- (void)_connectionProgressDisplayLinkCallback:(id)callback;	// 0x36f14899
- (unsigned)_countOfCollectionsForQueryCriteria:(id)queryCriteria;	// 0x36f13b3d
- (unsigned)_countOfItemsForQueryCriteria:(id)queryCriteria;	// 0x36f139e1
- (void)_didReceiveMemoryWarning:(id)warning;	// 0x36f10009
- (void)_displayValuesDidChangeNotification:(id)_displayValues;	// 0x36f1001d
- (void)_enabledMediaTypesDidChangeNotification:(id)_enabledMediaTypes;	// 0x36f10085
- (id)_getCachedValueForQueryCritiera:(id)queryCritiera valueCriteriaCache:(id)cache entitiesForCriteriaCache:(id)criteriaCache didLoadBlocksByQueryCriteria:(id)criteria valueLoadedFromEntitiesArrayBlock:(id)entitiesArrayBlock loadValueFromDataProviderBlock:(id)dataProviderBlock;	// 0x36f12e25
- (BOOL)_hasCollectionsForQueryCriteria:(id)queryCriteria;	// 0x36f1387d
- (BOOL)_hasItemsForQueryCriteria:(id)queryCriteria;	// 0x36f13719
- (id)_initWithLibraryDataProvider:(id)libraryDataProvider;	// 0x36f14ad9
- (id)_itemPersistentIdentifiersForQueryCriteria:(id)queryCriteria;	// 0x36f13c99
- (id)_itemsForQueryCriteria:(id)queryCriteria;	// 0x36f12955
- (unsigned long long)_persistentIDForAssetURL:(id)assetURL;	// 0x36f12541
- (void)_reloadLibraryForContentsChangeWithNotificationInfo:(id)notificationInfo;	// 0x36f0fc91
- (void)_reloadLibraryForDynamicPropertyChangeWithNotificationInfo:(id)notificationInfo;	// 0x36f0fe1d
- (void)_reloadLibraryForInvisiblePropertyChangeWithNotificationInfo:(id)notificationInfo;	// 0x36f0ffad
- (void)_removeConnectionAssertion:(id)assertion;	// 0x36f14959
- (id)_sanitizeQueryCriteriaForQueryCriteria:(id)queryCriteria;	// 0x36f1440d
- (void)_stopConnectionProgressDisplayLink;	// 0x36f14a31
// declared property getter: - (id)_syncValidity;	// 0x36f1553d
- (id)addPlaylistWithName:(id)name;	// 0x36f11ac1
- (id)addPlaylistWithName:(id)name activeGeniusPlaylist:(BOOL)playlist;	// 0x36f11ad5
- (void)beginGeneratingLibraryChangeNotifications;	// 0x36f10109
- (void)connectWithAuthenticationData:(id)authenticationData completionBlock:(id)block;	// 0x36f12209
- (void)connectWithCompletionHandler:(id)completionHandler;	// 0x36f1011d
- (id)connectionAssertionWithIdentifier:(id)identifier;	// 0x36f12289
// converted property getter: - (float)connectionProgress;	// 0x36f12475
- (unsigned long long)currentEntityRevision;	// 0x36f107bd
- (void)dealloc;	// 0x36f0f3dd
- (id)description;	// 0x36f0f5e1
- (void)disconnect;	// 0x36f106a1
- (void)downloadAsset:(id)asset completionHandler:(id)handler;	// 0x36f11e05
- (void)downloadItem:(id)item completionHandler:(id)handler;	// 0x36f11d7d
- (void)encodeWithCoder:(id)coder;	// 0x36f0f6ed
- (void)endGeneratingLibraryChangeNotifications;	// 0x36f10741
- (void)enumerateEntityChangesAfterSyncAnchor:(id)anchor usingBlock:(id)block;	// 0x36f1555d
- (id)errorResolverForMediaItem:(id)mediaItem;	// 0x36f35875
- (BOOL)hasAlbums;	// 0x36f10f11
- (BOOL)hasArtists;	// 0x36f10ef9
// converted property getter: - (BOOL)hasAudibleAudioBooks;	// 0x36f11439
- (BOOL)hasAudiobooks;	// 0x36f111ed
// converted property getter: - (BOOL)hasCompilations;	// 0x36f1152d
- (BOOL)hasComposers;	// 0x36f11175
- (BOOL)hasGeniusMixes;	// 0x36f10dd5
- (BOOL)hasGenres;	// 0x36f1115d
- (BOOL)hasITunesUContent;	// 0x36f115a5
- (BOOL)hasMedia;	// 0x36f10ced
- (BOOL)hasMediaOfType:(int)type;	// 0x36f10c7d
// converted property getter: - (BOOL)hasMovieRentals;	// 0x36f1169d
// converted property getter: - (BOOL)hasMovies;	// 0x36f114b1
// converted property getter: - (BOOL)hasMusicVideos;	// 0x36f113bd
- (BOOL)hasPlaylists;	// 0x36f10e81
- (BOOL)hasPodcasts;	// 0x36f10fed
- (BOOL)hasSongs;	// 0x36f10f29
// converted property getter: - (BOOL)hasTVShows;	// 0x36f11715
- (BOOL)hasUniversalBookmarkableItems;	// 0x36f110b1
- (BOOL)hasVideoITunesUContent;	// 0x36f11621
// converted property getter: - (BOOL)hasVideoPodcasts;	// 0x36f11791
// converted property getter: - (BOOL)hasVideos;	// 0x36f11341
- (unsigned)hash;	// 0x36f0f6c5
- (BOOL)isArtworkIdenticalForItem:(id)item otherItem:(id)item2 compareRepresentativeItemArtwork:(BOOL)artwork missingAlwaysComparesEqual:(BOOL)equal;	// 0x36f11ce5
- (BOOL)isEqual:(id)equal;	// 0x36f0f655
- (BOOL)isGeniusEnabled;	// 0x36f120e9
- (BOOL)isValidAssetURL:(id)url;	// 0x36f124b1
- (BOOL)itemExistsWithPersistentID:(unsigned long long)persistentID;	// 0x36f12735
- (id)itemWithPersistentID:(unsigned long long)persistentID;	// 0x36f1180d
- (id)itemWithPersistentID:(unsigned long long)persistentID verifyExistence:(BOOL)existence;	// 0x36f11831
- (id)itemWithStoreID:(unsigned long long)storeID;	// 0x36f11885
// declared property getter: - (id)lastModifiedDate;	// 0x36f10759
- (id)libraryDataProvider;	// 0x36f14bc1
- (BOOL)libraryHasBeenModifiedWithToken:(id)token;	// 0x36f10b3d
- (id)modificationToken;	// 0x36f109c1
- (id)name;	// 0x36f10961
- (id)newPlaylistWithPersistentID:(unsigned long long)persistentID;	// 0x36f11901
- (id)pathForAssetURL:(id)assetURL;	// 0x36f124cd
- (void)performReadTransactionWithBlock:(id)block;	// 0x36f12411
- (BOOL)performTransactionWithBlock:(id)block;	// 0x36f123b5
- (void)performUbiquitousDatabaseUpdateTransaction:(id)transaction;	// 0x36f12035
- (BOOL)playlistExistsWithPersistentID:(unsigned long long)persistentID;	// 0x36f12845
- (long long)playlistGeneration;	// 0x36f10855
- (id)playlistWithPersistentID:(unsigned long long)persistentID;	// 0x36f11a99
- (void)populateLocationPropertiesOfItem:(id)item withPath:(id)path;	// 0x36f11e91
- (id)preferredAudioLanguages;	// 0x36f12131
- (id)preferredSubtitleLanguages;	// 0x36f12179
// declared property getter: - (id)protectedContentSupportStorageURL;	// 0x36f15265
// declared property getter: - (int)removalReason;	// 0x36f10981
- (BOOL)removeItems:(id)items;	// 0x36f11bb5
- (BOOL)removePlaylist:(id)playlist;	// 0x36f11c7d
- (BOOL)requiresAuthentication;	// 0x36f121c1
// declared property setter: - (void)setRemovalReason:(int)reason;	// 0x36f10991
// converted property setter: - (void)setUbiquitousBookmarkDomainVersionAnchorToken:(id)token;	// 0x36f11f59
// converted property setter: - (void)setUbiquitousBookmarkEntityRevisionAnchor:(unsigned long long)anchor;	// 0x36f11f01
- (int)status;	// 0x36f108ed
- (unsigned long long)syncGenerationID;	// 0x36f10809
- (id)syncValidity;	// 0x36f12485
// converted property getter: - (id)ubiquitousBookmarkDomainVersionAnchorToken;	// 0x36f11fed
// converted property getter: - (unsigned long long)ubiquitousBookmarkEntityRevisionAnchor;	// 0x36f11fa1
- (id)uniqueIdentifier;	// 0x36f109a1
- (void)updateUbiquitousValuesForTrackWithKey:(id)key mediaPropertyValues:(id)values timestamp:(double)timestamp;	// 0x36f1208d
- (BOOL)writable;	// 0x36f108a5
@end

