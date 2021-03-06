/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "ML3Entity.h"


@interface ML3Track : ML3Entity {
}
+ (id)TVShowEpisodesDefaultOrderingProperties;	// 0x364d5259
+ (BOOL)_clearLocationFromLibrary:(id)library persistentIDs:(const long long *)ids count:(unsigned)count;	// 0x364d6b4d
+ (BOOL)_deleteAssetAtPath:(id)path;	// 0x364d6e21
+ (void)_enumeratePathsToDeleteFromLibrary:(id)library persistentIDs:(const long long *)ids count:(unsigned)count usingBlock:(id)block;	// 0x364d6e85
+ (id)_flattenedChapterDataWithImportChapters:(id)importChapters library:(id)library trackPersistentID:(long long)anId;	// 0x364ea60d
+ (id)albumAllArtistsDefaultOrderingProperties;	// 0x364bf2e5
+ (id)albumAndArtistDefaultOrderingProperties;	// 0x364d5229
+ (id)albumsDefaultOrderingProperties;	// 0x364b9759
+ (id)allProperties;	// 0x364d529d
+ (id)artistAllAlbumsDefaultOrderingProperties;	// 0x364d5209
+ (id)artistsDefaultOrderingProperties;	// 0x364d5219
+ (id)collectionClassesToUpdateBeforeDelete;	// 0x364d5fad
+ (id)composersDefaultOrderingProperties;	// 0x364d5239
+ (id)containerQueryWithContainer:(id)container;	// 0x364e2b59
+ (id)containerQueryWithContainer:(id)container predicate:(id)predicate;	// 0x364e2bb1
+ (id)containerQueryWithContainer:(id)container predicate:(id)predicate orderingProperties:(id)properties;	// 0x364ba775
+ (id)databaseTable;	// 0x364b67f9
+ (id)defaultOrderingProperties;	// 0x364b69a1
+ (BOOL)deleteFromLibrary:(id)library deletionType:(int)type persistentIDs:(const long long *)ids count:(unsigned)count;	// 0x364d5389
+ (id)extraTablesToDelete;	// 0x364d52ad
+ (id)extraTablesToInsert;	// 0x364d52bd
+ (id)flattenedChapterDataFromSyncInfoDictionaries:(id)syncInfoDictionaries trackPersistentID:(long long)anId;	// 0x364eac35
+ (id)foreignColumnForProperty:(id)property;	// 0x364bedb9
+ (id)foreignDatabaseTableForProperty:(id)property;	// 0x364bed79
+ (id)genresDefaultOrderingProperties;	// 0x364bf105
+ (void)initialize;	// 0x364b4065
+ (id)joinClauseForProperty:(id)property;	// 0x364b67a5
+ (BOOL)libraryContentsChangeForProperty:(id)property;	// 0x364bee9d
+ (id)orderingPropertiesForITTGTrackOrder:(unsigned long)ittgtrackOrder;	// 0x364e1eb9
+ (id)persistentIDColumnForTable:(id)table;	// 0x364bedf9
+ (id)podcastsDefaultOrderingProperties;	// 0x364d51f9
+ (id)podcastsEpisodesDefaultOrderingProperties;	// 0x364d5249
+ (void)populateSortOrdersOfPropertyValues:(id)propertyValues inLibrary:(id)library cachedNameOrders:(id)orders;	// 0x364d5a59
+ (id)predisambiguatedProperties;	// 0x364b6795
+ (int)revisionTrackingCode;	// 0x364bee15
+ (id)sectionPropertyForProperty:(id)property;	// 0x364b7201
+ (id)subselectPropertyForProperty:(id)property;	// 0x364d5269
+ (id)subselectStatementForProperty:(id)property;	// 0x364b721d
+ (BOOL)trackValueAreInTheCloud:(id)theCloud;	// 0x364d665d
+ (BOOL)trackWithPersistentID:(long long)persistentID existsInLibrary:(id)library;	// 0x364d58f1
+ (BOOL)unlinkRedownloadableAssetsFromLibrary:(id)library persistentIDs:(const long long *)ids count:(unsigned)count;	// 0x364d6059
+ (BOOL)unlinkRedownloadableAssetsFromLibrary:(id)library persistentIDs:(const long long *)ids count:(unsigned)count deletedFileSize:(long long *)size;	// 0x364d607d
+ (id)unsettableProperties;	// 0x364bed69
- (id)initWithDictionary:(id)dictionary inLibrary:(id)library cachedNameOrders:(id)orders;	// 0x364d5eb9
- (id)absoluteFilePath;	// 0x364d52fd
- (id)artworkCacheIDAtPlaybackTime:(double)playbackTime;	// 0x364b9a8d
- (id)chapterTOC;	// 0x364bdff9
- (void)didChangeValueForProperties:(const id *)properties count:(unsigned)count;	// 0x364d68e9
- (BOOL)populateArtworkCacheWithArtworkData:(id)artworkData;	// 0x364ea4ed
- (void)populateChapterDataByImportingFromAsset;	// 0x364eb185
- (void)populateChapterDataWithImportChapters:(id)importChapters;	// 0x364eaf3d
- (void)populateLocationPropertiesWithPath:(id)path;	// 0x364ebd31
- (void)updateCollectionCloudStatus;	// 0x364d69f5
- (BOOL)updateIntegrity;	// 0x364d66f5
@end

