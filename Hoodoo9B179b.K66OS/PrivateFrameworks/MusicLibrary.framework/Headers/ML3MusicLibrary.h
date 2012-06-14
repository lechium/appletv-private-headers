/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import <NSObject.h> // Unknown library

@class ML3DatabaseMetadata, ML3NondurableWriteSet, ML3UbiquitousDatabase, NSString, NSMutableArray, ML3Container, NSArray, ML3MusicLibrary_SQLiteDatabaseContext;

@interface ML3MusicLibrary : NSObject {
@private
	ML3MusicLibrary_SQLiteDatabaseContext *_mainDatabaseContext;	// 4 = 0x4
	ML3MusicLibrary_SQLiteDatabaseContext *_backgroundDatabaseContext;	// 8 = 0x8
	ML3UbiquitousDatabase *_ubiquitousDatabase;	// 12 = 0xc
	dispatch_queue_s *_backgroundQueue;	// 16 = 0x10
	opaque_pthread_t *_backgroundQueueOwner;	// 20 = 0x14
	NSString *_path;	// 24 = 0x18
	NSMutableArray *_pendingNotifyPostNames;	// 28 = 0x1c
	NSString *_notifyName;	// 32 = 0x20
	int _notifyToken;	// 36 = 0x24
	NSString *_nonContentsNotifyName;	// 40 = 0x28
	int _nonContentsNotifyToken;	// 44 = 0x2c
	NSString *_displayValuesNotifyName;	// 48 = 0x30
	int _displayValuesNotifyToken;	// 52 = 0x34
	NSString *_syncGenerationNotifyName;	// 56 = 0x38
	int _syncGenerationNotifyToken;	// 60 = 0x3c
	BOOL _enableWrites;	// 64 = 0x40
	BOOL _requiresProcessAssertion;	// 65 = 0x41
	int _backupDisabledCount;	// 68 = 0x44
	BOOL _backupNeeded;	// 72 = 0x48
	BOOL _hasEverConnectedToDatabase;	// 73 = 0x49
	id _mcSettingsObserver;	// 76 = 0x4c
	dispatch_queue_s *_nondurableConcurrentQueue;	// 80 = 0x50
	ML3NondurableWriteSet *_nondurableWriteSet;	// 84 = 0x54
	NSString *_artworkDirectory;	// 88 = 0x58
	BOOL _artworkDirectoryFilesystemRepresentation[1024];	// 92 = 0x5c
}
@property(readonly, assign) long long autoFilledTracksTotalSize;	// G=0x30029cc1; 
@property(readonly, assign) long long currentRevision;	// G=0x30029939; 
@property(readonly, assign) ML3DatabaseMetadata *databaseInfo;	// G=0x30017e61; 
@property(readonly, assign, nonatomic) BOOL hasEverConnectedToDatabase;	// G=0x30012c59; @synthesize=_hasEverConnectedToDatabase
@property(readonly, assign) NSArray *localizedSectionIndexTitles;	// G=0x30010b6d; 
@property(readonly, retain) ML3MusicLibrary_SQLiteDatabaseContext *mainDatabaseContext;	// G=0x3000b951; converted property
@property(readonly, assign) BOOL mediaRestrictionEnabled;	// G=0x300105e1; 
@property(readonly, assign, nonatomic, getter=isNondurableWritingActive) BOOL nondurableWritingActive;	// G=0x30015ee1; 
@property(readonly, assign) NSString *path;	// G=0x3000a48d; @synthesize=_path
@property(readonly, assign) long long persistentID;	// G=0x300297cd; 
@property(readonly, assign) NSArray *preferredAudioTracks;	// G=0x30017e05; 
@property(readonly, assign) NSArray *preferredSubtitleTracks;	// G=0x30017f7d; 
@property(readonly, assign) ML3Container *purchasedTracksPlaylist;	// G=0x300279c9; 
@property(readonly, assign) BOOL requiresPostProcessing;	// G=0x3000a4a1; 
@property(assign) long long syncGenerationID;	// G=0x300127f5; S=0x30029aa5; 
@property(readonly, retain) ML3UbiquitousDatabase *ubiquitousDatabase;	// G=0x3000d469; converted property
@property(readonly, assign, nonatomic) BOOL writable;	// G=0x30009745; 
+ (id)_autoFillTrackPredicate;	// 0x30029c29
+ (sqlite3 *)_openedDatabaseHandleForPath:(id)path enableWrites:(BOOL)writes forLibrary:(id)library;	// 0x3000ba01
+ (void)_stepStatement:(sqlite3_stmt *)statement hasRow:(BOOL *)row didFinish:(BOOL *)finish;	// 0x3000ce61
+ (id)allSchemaSQL;	// 0x30046add
+ (MLArtworkFormatSpec)artworkFormatSpecForArtworkFormatID:(unsigned)artworkFormatID;	// 0x300140dd
+ (BOOL)buildDatabaseTablesUsingHandle:(sqlite3 *)handle usingTransaction:(BOOL)transaction;	// 0x30046e51
+ (void)closeDatabaseHandle:(sqlite3 *)handle;	// 0x30026795
+ (BOOL)createIndexesUsingHandle:(sqlite3 *)handle;	// 0x30048805
+ (int)currentUserVersion;	// 0x3000d299
+ (BOOL)dropIndexesUsingHandle:(sqlite3 *)handle;	// 0x300487e5
+ (BOOL)dropIndexesUsingHandle:(sqlite3 *)handle tableNames:(const char *)names;	// 0x300485e5
+ (void)enumerateSortMapTablesUsingBlock:(id)block;	// 0x30029269
+ (BOOL)executeSQL:(id)sql usingHandle:(sqlite3 *)handle;	// 0x30010a7d
+ (BOOL)executeSQL:(id)sql usingHandle:(sqlite3 *)handle waitIfBusy:(BOOL)busy;	// 0x30010aa1
+ (BOOL)importationEnabled;	// 0x30025ab5
+ (id)indexSchemaSQL;	// 0x30046d2d
+ (void)initialize;	// 0x300090c5
+ (id)itemIndexSchemaSQL;	// 0x30046cb5
+ (id)itemSchemaSQL;	// 0x30046ad1
+ (id)localizedSectionHeaderForSectionHeader:(id)sectionHeader;	// 0x300126ed
+ (id)localizedSectionIndexTitleForSectionHeader:(id)sectionHeader;	// 0x30011c5d
+ (id)mainDatabasePath;	// 0x300096b1
+ (BOOL)migrateToCurrentUserVersionUsingHandle:(sqlite3 *)currentUserVersionUsingHandle;	// 0x300475b1
+ (sqlite3 *)openedDatabaseHandleForPath:(id)path enableWrites:(BOOL)writes;	// 0x30026201
+ (BOOL)orderingLanguageMatchesSystemUsingHandle:(sqlite3 *)handle;	// 0x3000d2a5
+ (unsigned)readableArtworkFormatIDForArtworkFormatID:(unsigned)artworkFormatID;	// 0x3002a5a1
+ (BOOL)schemaExactlyMatchesSystemUsingHandle:(sqlite3 *)handle;	// 0x30047271
+ (id)sectionIndexTitleForSectionHeader:(id)sectionHeader;	// 0x300118d9
+ (id)sectionIndexTitles;	// 0x30011865
+ (void)setImportationEnabled:(BOOL)enabled;	// 0x300091a1
+ (id)sharedLibrary;	// 0x3000929d
+ (id)sortMapSchemaSQL;	// 0x30046ac5
+ (BOOL)statementDidFinishAfterStepping:(sqlite3_stmt *)statement;	// 0x30017181
+ (BOOL)statementHasRowAfterStepping:(sqlite3_stmt *)stepping;	// 0x3000ce39
+ (id)storeLinkSchemaSQL;	// 0x30046ab9
+ (id)systemCurrentLanguage;	// 0x3000d3cd
+ (BOOL)updateSortMapOnHandle:(sqlite3 *)handle usingTransaction:(BOOL)transaction;	// 0x3004a6d1
+ (BOOL)userVersionMatchesSystemUsingHandle:(sqlite3 *)handle;	// 0x3000d115
+ (int)userVersionUsingHandle:(sqlite3 *)handle;	// 0x3000d175
- (id)initWithPath:(id)path enableWrites:(BOOL)writes;	// 0x300092c9
- (void)_accessAccountCacheDBForSQL:(id)sql usingBlock:(id)block;	// 0x3002c1d9
- (void)_accessDatabaseContextUsingBlock:(id)block;	// 0x3000b8d5
- (BOOL)_commitNondurableWrites;	// 0x3001697d
- (void)_delayableNotifyPost:(id)post;	// 0x30017aa1
- (void)_dispatchBackgroundAsynchronouslyUsingBlock:(id)block;	// 0x30026b89
- (void)_dispatchBackgroundSynchronouslyUsingBlock:(id)block;	// 0x3000d005
- (BOOL)_insertImageBytes:(const void *)bytes length:(unsigned long)length forCacheID:(id)cacheID formatID:(unsigned)anId imageSubRect:(CGRect)rect;	// 0x3002a8ed
- (id)_insertStringsIntoSortMapOrFail:(id)fail;	// 0x30049011
- (BOOL)_mustProcessLanguageChange;	// 0x300293b1
- (void)_onBackgroundQueuePerformBlock:(id)block;	// 0x3000d079
- (void)_postChangeNotificationAndScheduleFlushLocalOnly:(BOOL)only;	// 0x3001799d
- (void)_postDisplayValuesChangeNotificationLocalOnly:(BOOL)only;	// 0x30029201
- (void)_postNonContentsChangeNotificationAndScheduleFlushLocalOnly:(BOOL)only;	// 0x30018a0d
- (void)_scheduleCommitNondurableWritesAfterTimeInterval:(double)interval;	// 0x3002d345
- (BOOL)_writeImageBytes:(const void *)bytes length:(unsigned long)length formatID:(unsigned)anId cacheID:(id)anId4;	// 0x3002a7f9
- (void)accessDatabaseUsingBlock:(id)block;	// 0x3000cfb1
- (void)accessSortKeyBuilder:(id)builder;	// 0x300111c9
- (long long)addStringToSortMap:(id)sortMap;	// 0x30029431
- (id)albumArtistForEffectiveAlbumArtistName:(id)effectiveAlbumArtistName;	// 0x3003dbb9
- (id)albumForAlbumArtistPersistentID:(long long)albumArtistPersistentID albumName:(id)name feedURL:(id)url seasonNumber:(id)number compilation:(BOOL)compilation;	// 0x30032ed1
- (id)appleIDForDSID:(unsigned long long)dsid;	// 0x3002c45d
- (void)applyUbiquitousBookmarksToTrack:(id)track;	// 0x3002d0cd
- (id)artistForArtistName:(id)artistName seriesName:(id)name;	// 0x30032751
- (id)artworkDataForCacheID:(id)cacheID formatID:(unsigned)anId;	// 0x3002a2c1
// declared property getter: - (long long)autoFilledTracksTotalSize;	// 0x30029cc1
- (id)backgroundQueue_backgroundDatabaseContext;	// 0x3000d0b1
- (BOOL)buildDatabaseTables;	// 0x300470f9
- (BOOL)coerceValidDatabase;	// 0x30048bdd
- (BOOL)compactArtwork;	// 0x3002b95d
- (id)composerForComposerName:(id)composerName;	// 0x3003d369
- (BOOL)createIndexes;	// 0x30048a41
// declared property getter: - (long long)currentRevision;	// 0x30029939
// declared property getter: - (id)databaseInfo;	// 0x30017e61
- (void)dealloc;	// 0x30026059
- (BOOL)deleteAllArtwork;	// 0x3002b411
- (BOOL)deleteAndRecreateDatabaseUsingHandle:(sqlite3 **)handle;	// 0x300482e9
- (BOOL)deleteArtworkForCacheID:(id)cacheID;	// 0x3002b609
- (long long)deleteAutoFilledTracksOfAtLeastTotalSize:(long long)leastTotalSize;	// 0x30029e89
- (BOOL)dropItemIndexes;	// 0x300488c1
- (void)enumeratePersistentIDsAfterRevision:(long long)revision usingBlock:(id)block;	// 0x30029b09
- (BOOL)executeSQL:(id)sql;	// 0x300267d9
- (id)genreForGenre:(id)genre;	// 0x3003679d
- (id)groupingKeyForString:(id)string;	// 0x30026e55
- (BOOL)hasArtworkForCacheID:(id)cacheID;	// 0x3002a5ed
- (BOOL)hasArtworkForCacheID:(id)cacheID ensureArtworkFileExists:(BOOL)exists;	// 0x3002a605
// declared property getter: - (BOOL)hasEverConnectedToDatabase;	// 0x30012c59
- (BOOL)insertArtworkWithImageData:(id)imageData forCacheID:(id)cacheID;	// 0x3002ab55
- (long long)insertStringIntoSortMapNoTransaction:(id)transaction;	// 0x30016d09
- (id)insertStringsIntoSortMap:(id)map;	// 0x3004a0c5
// declared property getter: - (BOOL)isNondurableWritingActive;	// 0x30015ee1
- (BOOL)isReadable;	// 0x3002942d
- (void)loadArtworkForCacheID:(id)cacheID formatID:(unsigned)anId completionHandler:(id)handler;	// 0x30017bfd
- (id)localizedSectionHeaderForSectionIndex:(unsigned)sectionIndex;	// 0x30011031
// declared property getter: - (id)localizedSectionIndexTitles;	// 0x30010b6d
- (id)locationKindForKind:(id)kind;	// 0x3004cd15
// converted property getter: - (id)mainDatabaseContext;	// 0x3000b951
// declared property getter: - (BOOL)mediaRestrictionEnabled;	// 0x300105e1
- (BOOL)migrateLegacyArtworkFromArtworkBlobFilePath:(id)artworkBlobFilePath;	// 0x3002be85
- (void)migratePresignedValidity;	// 0x30025e15
- (XXStruct_Cy4r_A)nameOrderForString:(id)string;	// 0x30015d99
- (id)nondurableWriteSetForReading;	// 0x3000cd0d
- (id)nondurableWriteSetForWriting;	// 0x30016341
- (void)notifyContentsDidChange;	// 0x30017949
- (void)notifyDisplayValuesPropertyDidChange;	// 0x3002791d
- (void)notifyNonContentsPropertyDidChange;	// 0x300189b9
- (sqlite3 *)openedDatabaseHandle;	// 0x3000b9b5
// declared property getter: - (id)path;	// 0x3000a48d
- (void)performTransactionAllowingWrites:(BOOL)writes withBlock:(id)block;	// 0x30010791
- (void)performTransactionKind:(int)kind waitIfBusy:(BOOL)busy withBlock:(id)block;	// 0x300107bd
- (void)performTransactionKind:(int)kind withBlock:(id)block;	// 0x30027205
- (void)performTransactionWithBlock:(id)block;	// 0x30017541
// declared property getter: - (long long)persistentID;	// 0x300297cd
- (BOOL)populateArtworkCacheWithArtworkData:(id)artworkData trackValues:(id)values;	// 0x3004385d
- (BOOL)populateStaticItemsOfDynamicContainers;	// 0x3002693d
// declared property getter: - (id)preferredAudioTracks;	// 0x30017e05
// declared property getter: - (id)preferredSubtitleTracks;	// 0x30017f7d
- (void)prepareStatementForSQL:(id)sql cache:(BOOL)cache usingBlock:(id)block;	// 0x3000b825
- (void)prepareStatementForSQL:(id)sql usingBlock:(id)block;	// 0x3000b7e1
- (void)prepareStatementForSQLPrefix:(id)sqlprefix inPersistentIDs:(const long long *)persistentIDs count:(unsigned)count usingBlock:(id)block;	// 0x30025675
// declared property getter: - (id)purchasedTracksPlaylist;	// 0x300279c9
- (void)reconnectBackgroundDatabaseContext;	// 0x30026ae1
- (void)reconnectMainDatabaseContext;	// 0x30026a91
- (void)reconnectToDatabase;	// 0x30026c39
- (void)removeOrphanedTracks;	// 0x3002d48d
// declared property getter: - (BOOL)requiresPostProcessing;	// 0x3000a4a1
- (BOOL)resetAllContents;	// 0x3004b09d
- (void)savePlaylists;	// 0x30028641
- (void)savePlaylistsSinceRevision:(long long)revision withGrappaID:(unsigned)grappaID;	// 0x30028665
- (void)saveTrackMetadata;	// 0x30027e41
- (void)saveTrackMetadataSinceRevision:(long long)revision withGrappaID:(unsigned)grappaID;	// 0x30027e65
- (unsigned)sectionIndexTitleIndexForSectionIndex:(unsigned)sectionIndex;	// 0x30011295
- (BOOL)setAppleID:(id)anId forDSID:(unsigned long long)dsid;	// 0x3002c2cd
// declared property setter: - (void)setSyncGenerationID:(long long)anId;	// 0x30029aa5
- (BOOL)setValue:(id)value forDatabaseProperty:(id)databaseProperty;	// 0x3002c67d
// declared property getter: - (long long)syncGenerationID;	// 0x300127f5
- (double)timestampForAppliedUbiquitousBookmarkKey:(id)appliedUbiquitousBookmarkKey;	// 0x3002c81d
// converted property getter: - (id)ubiquitousDatabase;	// 0x3000d469
- (BOOL)updateActivePlaylistNamesForCurrentLanguage;	// 0x3003e12d
- (void)updateOrderingLanguagesForCurrentLanguage;	// 0x3003e275
- (BOOL)updateSortMap;	// 0x30029615
- (void)updateTrackIntegrity;	// 0x3002603d
- (void)updateUbiquitousBookmarksFromTrack:(id)track;	// 0x3002cf81
- (void)updateUbiquitousBookmarksWithKey:(id)key bookmarkTime:(id)time timestamp:(double)timestamp;	// 0x3002ca51
- (id)valueForDatabaseProperty:(id)databaseProperty;	// 0x30012829
// declared property getter: - (BOOL)writable;	// 0x30009745
@end
