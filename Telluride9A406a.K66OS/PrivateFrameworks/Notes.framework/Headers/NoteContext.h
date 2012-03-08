/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

#import <NSObject.h> // Unknown library
#import "Notes-Structs.h"

@class NSNumber, NSManagedObjectModel, NSManagedObjectContext, NSPersistentStoreCoordinator, NSPredicate, CPExclusiveLock, NoteStoreObject, NoteAccountObject, NSMutableDictionary, NSString;

@interface NoteContext : NSObject {
@private
	NSManagedObjectModel *_managedObjectModel;	// 4 = 0x4
	NSManagedObjectContext *_managedObjectContext;	// 8 = 0x8
	NSPersistentStoreCoordinator *_persistentStoreCoordinator;	// 12 = 0xc
	NSPredicate *_searchPredicate;	// 16 = 0x10
	NoteStoreObject *_localStore;	// 20 = 0x14
	NoteAccountObject *_localAccount;	// 24 = 0x18
	CXIndexRef __SharedNoteStoreSearchIndex;	// 28 = 0x1c
	CPExclusiveLock *__SharedNoteStoreSearchIndexLock;	// 32 = 0x20
	int __SharedNoteStoreSearchIndexCount;	// 36 = 0x24
	BOOL _isIndexing;	// 40 = 0x28
	NSManagedObjectContext *_nextIdContext;	// 44 = 0x2c
	CPExclusiveLock *_nextIdLock;	// 48 = 0x30
	NSNumber *_nextId;	// 52 = 0x34
	CPExclusiveLock *_objectCreationLock;	// 56 = 0x38
	unsigned _notificationCount;	// 60 = 0x3c
	BOOL _logChanges;	// 64 = 0x40
	BOOL _indexInBatches;	// 65 = 0x41
	BOOL _hasPriorityInSaveConflicts;	// 66 = 0x42
	BOOL _inMigrator;	// 67 = 0x43
	NSString *_testingFilePrefix;	// 68 = 0x44
	NSString *_testingFilePath;	// 72 = 0x48
	NSMutableDictionary *_notePropertyObjectsRealized;	// 76 = 0x4c
}
@property(readonly, assign, nonatomic) BOOL isIndexing;	// G=0x3635aef5; @synthesize=_isIndexing
@property(readonly, retain) NoteAccountObject *localAccount;	// G=0x36355455; converted property
@property(readonly, retain) NoteStoreObject *localStore;	// G=0x363553ed; converted property
@property(readonly, assign, nonatomic) NSManagedObjectContext *managedObjectContext;	// G=0x3635750d; 
@property(readonly, retain) NSManagedObjectModel *managedObjectModel;	// G=0x36357621; converted property
@property(readonly, retain) NSPersistentStoreCoordinator *persistentStoreCoordinator;	// G=0x36357719; converted property
+ (BOOL)databaseIsCorrupt:(id)corrupt;	// 0x363514f9
+ (BOOL)shouldLogIndexing;	// 0x36351489
- (id)init;	// 0x36352c8d
- (id)initForMigrator;	// 0x36352a59
- (id)initWithTestingFilePrefix:(id)testingFilePrefix;	// 0x36352a85
- (id)initWithTestingFilePrefix:(id)testingFilePrefix atPath:(id)path inMigrator:(BOOL)migrator;	// 0x36352aad
- (id)initWithTestingFilePrefix:(id)testingFilePrefix inMigrator:(BOOL)migrator;	// 0x36352a29
- (void).cxx_destruct;	// 0x3635af05
- (void)_createLocalAccount:(id *)account andStore:(id *)store;	// 0x363516d9
- (id)_notePropertyObjectForKey:(id)key;	// 0x363559e9
- (id)accountForAccountId:(id)accountId;	// 0x36355085
- (id)allAccounts;	// 0x36354df9
- (id)allNotes;	// 0x363543f1
- (id)allNotesInCollection:(id)collection;	// 0x363544b5
- (id)allNotesMatchingPredicate:(id)predicate;	// 0x36354541
- (id)allNotesWithoutBodiesInCollection:(id)collection;	// 0x363547cd
- (id)allStores;	// 0x36354a49
- (id)allVisibleNotes;	// 0x36353e49
- (id)allVisibleNotesInCollection:(id)collection;	// 0x36353e71
- (id)allVisibleNotesMatchingPredicate:(id)predicate;	// 0x36353efd
- (void)cleanUpLocks;	// 0x3635acdd
- (void)clearCaches;	// 0x363531e9
- (id)collectionForInfo:(id)info;	// 0x363548bd
- (id)collectionForObjectID:(id)objectID;	// 0x363533a1
- (id)copyNotesForSearch:(void *)search complete:(char *)complete;	// 0x3635a5a9
- (id)copyNotesForSearch:(void *)search predicate:(id)predicate complete:(char *)complete;	// 0x3635a5c9
- (unsigned)countOfNotes;	// 0x36354459
- (unsigned)countOfNotesInCollection:(id)collection;	// 0x36354501
- (unsigned)countOfNotesMatchingPredicate:(id)notesMatchingPredicate;	// 0x363545cd
- (unsigned)countOfStores;	// 0x36354c75
- (unsigned)countOfVisibleNotes;	// 0x36353e5d
- (unsigned)countOfVisibleNotesInCollection:(id)collection;	// 0x36353ebd
- (unsigned)countOfVisibleNotesMatchingPredicate:(id)visibleNotesMatchingPredicate;	// 0x36354041
- (void)dealloc;	// 0x36352cb5
- (id)defaultStoreForNewNote;	// 0x363552dd
- (BOOL)deleteAccount:(id)account;	// 0x3635578d
- (void)deleteChanges:(id)changes;	// 0x363536b1
- (BOOL)deleteIndexFile;	// 0x3635ae89
- (void)deleteNote:(id)note;	// 0x36353471
- (void)deleteNoteRegardlessOfConstraints:(id)constraints;	// 0x36353661
- (BOOL)deleteStore:(id)store;	// 0x363557e9
- (void)destroySearchIndex;	// 0x3635878d
- (void)enableChangeLogging:(BOOL)logging;	// 0x36353789
- (id)findNotesWithText:(id)text betweenDate:(id)date andDate:(id)date3;	// 0x3635a865
- (BOOL)forceDeleteAccount:(id)account;	// 0x3635567d
- (void)forceSetUpUniqueObjects;	// 0x36351f05
- (id)getNextIdObject;	// 0x3635690d
- (void)handleMigration;	// 0x36355de9
- (BOOL)handleSaveErrors:(id)errors;	// 0x36353915
- (BOOL)hasMultipleEnabledStores;	// 0x36355985
- (void)indexInBatches:(BOOL)batches;	// 0x36358b69
- (void)indexNotes:(id)notes;	// 0x36357d35
- (void)invalidate;	// 0x36353799
// declared property getter: - (BOOL)isIndexing;	// 0x3635aef5
- (id)liveNotesNeedingBodiesPredicate;	// 0x36352d89
// converted property getter: - (id)localAccount;	// 0x36355455
// converted property getter: - (id)localStore;	// 0x363553ed
// declared property getter: - (id)managedObjectContext;	// 0x3635750d
// converted property getter: - (id)managedObjectModel;	// 0x36357621
- (id)newFRCForCollection:(id)collection delegate:(id)delegate;	// 0x36352df5
- (id)newFetchRequestForNotes;	// 0x363530bd
- (void *)newSearchContextWithText:(id)text;	// 0x3635a545
- (id)newlyAddedAccount;	// 0x36355025
- (id)newlyAddedNote;	// 0x363532ad
- (id)newlyAddedStore;	// 0x363549e9
- (id)nextIndex;	// 0x36356e75
- (id)noteChangeWithType:(int)type store:(id)store;	// 0x363595f1
- (id)noteForObjectID:(id)objectID;	// 0x3635464d
- (BOOL)noteIsSafeToAccess:(id)access;	// 0x3635ad2d
- (id)notesForIntegerIds:(id)integerIds;	// 0x363546b5
- (id)notesToResumeIndexing;	// 0x36357c69
- (id)pathForIndex;	// 0x3635733d
- (id)pathForPersistentStore;	// 0x3635725d
// converted property getter: - (id)persistentStoreCoordinator;	// 0x36357719
- (id)propertyValueForKey:(id)key;	// 0x36355da1
- (void)receiveDarwinNotificationWithChangeLogging:(BOOL)changeLogging;	// 0x36358b79
- (void)removeConflictingSqliteAndIdxFiles;	// 0x3635268d
- (void)removeSqliteAndIdxFiles;	// 0x363524bd
- (void)resetNotificationCount;	// 0x36358c55
- (void)resumeIndexing;	// 0x36358a69
- (id)rootDirectory;	// 0x3635723d
- (BOOL)save:(id *)save;	// 0x3635382d
- (void)saveNotesToResumeIndexing:(id)resumeIndexing;	// 0x36357a65
- (BOOL)saveOutsideApp:(id *)app;	// 0x36353815
- (BOOL)saveSilently:(id *)silently;	// 0x36353d1d
- (CXIndexRef)searchIndex:(char *)index;	// 0x36358315
- (void)setHasPriorityInSaveConflicts:(BOOL)saveConflicts;	// 0x36357471
- (void)setPropertyValue:(id)value forKey:(id)key;	// 0x36355c99
- (void)setUpCoreDataStack;	// 0x36352775
- (BOOL)setUpLastIndexTid;	// 0x36351b79
- (BOOL)setUpLocalAccountAndStore;	// 0x363517e9
- (void)setUpUniqueObjects;	// 0x36352025
- (BOOL)shouldDisableLocalStore;	// 0x36355925
- (BOOL)shouldResumeIndexing;	// 0x36357c05
- (void)sortNotes:(id)notes;	// 0x36353209
- (id)storeForObjectID:(id)objectID;	// 0x36353409
- (id)storeOptions;	// 0x363515e9
- (void)tearDownCoreDataStack;	// 0x36352945
- (void)trackChanges:(id)changes;	// 0x3635975d
- (void)updateSearchIndex:(id)index;	// 0x36358c69
- (id)urlForPersistentStore;	// 0x3635741d
- (id)visibleNoteForObjectID:(id)objectID;	// 0x36354179
- (id)visibleNotesForIntegerIds:(id)integerIds;	// 0x36354255
- (id)visibleNotesPredicate;	// 0x36352cf5
- (void)wrapUpIndexing;	// 0x36358821
@end

