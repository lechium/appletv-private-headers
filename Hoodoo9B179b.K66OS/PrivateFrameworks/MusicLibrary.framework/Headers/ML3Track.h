/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "ML3Entity.h"


@interface ML3Track : ML3Entity {
}
+ (id)TVShowEpisodesDefaultOrderingProperties;	// 0x3002e6f1
+ (BOOL)_clearLocationFromLibrary:(id)library persistentIDs:(const long long *)ids count:(unsigned)count;	// 0x3002ff65
+ (BOOL)_deleteAssetAtPath:(id)path;	// 0x30030239
+ (void)_enumeratePathsToDeleteFromLibrary:(id)library persistentIDs:(const long long *)ids count:(unsigned)count usingBlock:(id)block;	// 0x3003029d
+ (id)_flattenedChapterDataWithImportChapters:(id)importChapters library:(id)library trackPersistentID:(long long)anId;	// 0x30043c4d
+ (id)albumAllArtistsDefaultOrderingProperties;	// 0x30018dd1
+ (id)albumAndArtistDefaultOrderingProperties;	// 0x3002e6c1
+ (id)albumsDefaultOrderingProperties;	// 0x300135b1
+ (id)allProperties;	// 0x3002e735
+ (id)artistAllAlbumsDefaultOrderingProperties;	// 0x3002e6a1
+ (id)artistsDefaultOrderingProperties;	// 0x3002e6b1
+ (id)collectionClassesToUpdateBeforeDelete;	// 0x3002f3c5
+ (id)composersDefaultOrderingProperties;	// 0x3002e6d1
+ (id)containerQueryWithContainer:(id)container;	// 0x3003c06d
+ (id)containerQueryWithContainer:(id)container predicate:(id)predicate;	// 0x3003c0c5
+ (id)containerQueryWithContainer:(id)container predicate:(id)predicate orderingProperties:(id)properties;	// 0x300145cd
+ (id)databaseTable;	// 0x30010575
+ (id)defaultOrderingProperties;	// 0x3001071d
+ (BOOL)deleteFromLibrary:(id)library deletionType:(int)type persistentIDs:(const long long *)ids count:(unsigned)count;	// 0x3002e821
+ (id)extraTablesToDelete;	// 0x3002e745
+ (id)extraTablesToInsert;	// 0x3002e755
+ (id)flattenedChapterDataFromSyncInfoDictionaries:(id)syncInfoDictionaries trackPersistentID:(long long)anId;	// 0x30044275
+ (id)foreignColumnForProperty:(id)property;	// 0x300188a5
+ (id)foreignDatabaseTableForProperty:(id)property;	// 0x30018865
+ (id)genresDefaultOrderingProperties;	// 0x30018bf1
+ (void)initialize;	// 0x3000dde1
+ (id)joinClauseForProperty:(id)property;	// 0x30010521
+ (BOOL)libraryContentsChangeForProperty:(id)property;	// 0x30018989
+ (id)orderingPropertiesForITTGTrackOrder:(unsigned long)ittgtrackOrder;	// 0x3003b469
+ (id)persistentIDColumnForTable:(id)table;	// 0x300188e5
+ (id)podcastsDefaultOrderingProperties;	// 0x3002e691
+ (id)podcastsEpisodesDefaultOrderingProperties;	// 0x3002e6e1
+ (void)populateSortOrdersOfPropertyValues:(id)propertyValues inLibrary:(id)library cachedNameOrders:(id)orders;	// 0x3002ee71
+ (id)predisambiguatedProperties;	// 0x30010511
+ (int)revisionTrackingCode;	// 0x30018901
+ (id)sectionPropertyForProperty:(id)property;	// 0x30010f8d
+ (id)subselectPropertyForProperty:(id)property;	// 0x3002e701
+ (id)subselectStatementForProperty:(id)property;	// 0x30010fa9
+ (BOOL)trackValueAreInTheCloud:(id)theCloud;	// 0x3002fa75
+ (BOOL)trackWithPersistentID:(long long)persistentID existsInLibrary:(id)library;	// 0x3002ed09
+ (BOOL)unlinkRedownloadableAssetsFromLibrary:(id)library persistentIDs:(const long long *)ids count:(unsigned)count;	// 0x3002f471
+ (BOOL)unlinkRedownloadableAssetsFromLibrary:(id)library persistentIDs:(const long long *)ids count:(unsigned)count deletedFileSize:(long long *)size;	// 0x3002f495
+ (id)unsettableProperties;	// 0x30018855
- (id)initWithDictionary:(id)dictionary inLibrary:(id)library cachedNameOrders:(id)orders;	// 0x3002f2d1
- (id)absoluteFilePath;	// 0x3002e795
- (id)artworkCacheIDAtPlaybackTime:(double)playbackTime;	// 0x300138e5
- (id)chapterTOC;	// 0x30017b41
- (void)didChangeValueForProperties:(const id *)properties count:(unsigned)count;	// 0x3002fd01
- (BOOL)populateArtworkCacheWithArtworkData:(id)artworkData;	// 0x30043b2d
- (void)populateChapterDataByImportingFromAsset;	// 0x300447d9
- (void)populateChapterDataWithImportChapters:(id)importChapters;	// 0x3004457d
- (void)populateLocationPropertiesWithPath:(id)path;	// 0x30045385
- (void)updateCollectionCloudStatus;	// 0x3002fe0d
- (BOOL)updateIntegrity;	// 0x3002fb0d
@end

