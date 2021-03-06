/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSPersistentStore.h"
#import "CoreData-Structs.h"
#import "NSFilePresenter.h"

@class NSURL, NSOperationQueue, NSString, NSMutableDictionary, NSSaveChangesRequest, NSSQLAdapter, NSSQLModel, NSManagedObjectContext, NSSQLConnection, NSMutableArray, NSMutableSet, NSSQLRow, NSSQLEntity, NSSQLRowCache, NSSet;

@interface NSSQLCore : NSPersistentStore <NSFilePresenter> {
	NSSQLModel *_model;	// 44 = 0x2c
	NSSQLAdapter *_adapter;	// 48 = 0x30
	NSSQLConnection *_connection;	// 52 = 0x34
	NSMutableArray *_channels;	// 56 = 0x38
	NSManagedObjectContext *_currentContext;	// 60 = 0x3c
	NSSQLEntity *_lastEntity;	// 64 = 0x40
	NSSQLRowCache *_rowCache;	// 68 = 0x44
	NSMutableDictionary *_uniqueTable;	// 72 = 0x48
	NSMutableArray *_toManyCache;	// 76 = 0x4c
	CFSetRef _deleteTable;	// 80 = 0x50
	NSSet *_lockedObjects;	// 84 = 0x54
	CFDictionaryRef _dbOperationsByGlobalID;	// 88 = 0x58
	NSSaveChangesRequest *_currentSaveRequest;	// 92 = 0x5c
	int _lazyFaultDebugLevel;	// 96 = 0x60
	NSMutableDictionary *_batchFaultBuffer;	// 100 = 0x64
	NSMutableDictionary *_batchToManyFaultBuffer;	// 104 = 0x68
	NSScalarObjectID *_currentGlobalID;	// 108 = 0x6c
	NSSQLRow *_currentRow;	// 112 = 0x70
	id _observer;	// 116 = 0x74
	NSMutableSet *_missingObjectGIDs;	// 120 = 0x78
	NSMutableDictionary *_storeMetadata;	// 124 = 0x7c
	NSMutableArray *_externalDataReferencesToSave;	// 128 = 0x80
	NSMutableSet *_externalDataReferencesToDelete;	// 132 = 0x84
	NSString *_externalDataReferencesDirectory;	// 136 = 0x88
	NSString *_externalDataLinksDirectory;	// 140 = 0x8c
	int _transactionInMemorySequence;	// 144 = 0x90
	int _debug;	// 148 = 0x94
	sqlCoreFlags _sqlCoreFlags;	// 152 = 0x98
}
@property(readonly, retain) NSSQLAdapter *adapter;	// G=0x2d057385; converted property
@property(readonly, retain) NSMutableArray *channels;	// G=0x2d06aeed; converted property
@property(readonly, retain) NSSQLConnection *connection;	// G=0x2d057331; converted property
@property(retain) NSManagedObjectContext *currentContext;	// G=0x2d06b0e5; S=0x2d0621b5; converted property
@property(retain) id databaseUUID;	// G=0x2d05de8d; S=0x2d101d05; converted property
@property(readonly, retain) NSString *externalDataLinksDirectory;	// G=0x2d05c7bd; converted property
@property(readonly, retain) NSString *externalDataReferencesDirectory;	// G=0x2d05c3b5; converted property
@property(readonly, retain) NSMutableSet *externalDataReferencesToDelete;	// G=0x2d0fffa5; converted property
@property(readonly, retain) NSMutableArray *externalDataReferencesToSave;	// G=0x2d0fff55; converted property
@property(retain) id metadata;	// G=0x2d05ce4d; S=0x2d05e2dd; converted property
@property(readonly, retain) NSSQLModel *model;	// G=0x2d05de59; converted property
@property(readonly, assign) NSOperationQueue *presentedItemOperationQueue;	// G=0x2d108d89; 
@property(readonly, assign) NSURL *presentedItemURL;	// G=0x2d108d79; 
@property(readonly, assign) NSURL *primaryPresentedItemURL;
@property(readonly, retain) NSSQLRowCache *rowCache;	// G=0x2d062a79; converted property
+ (BOOL)SQLGenerationV1Default;	// 0x2d063141
+ (BOOL)_destroyPersistentStoreAtURL:(id)url options:(id)options error:(id *)error;	// 0x2d104e81
+ (id)_figureOutWhereExternalReferencesEndedUpRelativeTo:(id)to;	// 0x2d0ffdf9
+ (BOOL)_replacePersistentStoreAtURL:(id)url destinationOptions:(id)options withPersistentStoreFromURL:(id)url3 sourceOptions:(id)options4 error:(id *)error;	// 0x2d104f75
+ (BOOL)coloredLoggingDefault;	// 0x2d056f61
+ (int)debugDefault;	// 0x2d056f51
+ (void)initialize;	// 0x2d047521
+ (id)metadataForPersistentStoreWithURL:(id)url error:(id *)error;	// 0x2d104539
+ (Class)migrationManagerClass;	// 0x2d0f4b31
+ (BOOL)sanityCheckFileAtURL:(id)url error:(id *)error;	// 0x2d104331
+ (void)setColoredLoggingDefault:(BOOL)aDefault;	// 0x2d0f4b11
+ (void)setDebugDefault:(int)aDefault;	// 0x2d0f4b01
+ (BOOL)setMetadata:(id)metadata forPersistentStoreWithURL:(id)url error:(id *)error;	// 0x2d104b01
+ (void)setSQLGenerationV1Default:(BOOL)aDefault;	// 0x2d0f4b21
- (id)initWithPersistentStoreCoordinator:(id)persistentStoreCoordinator configurationName:(id)name URL:(id)url options:(id)options;	// 0x2d0505d9
- (id)_addDatabaseContextStateToException:(id)exception;	// 0x2d0f870d
- (void)_addDeletesToDatabaseOp:(id)databaseOp forManyToMany:(id)many;	// 0x2d0fd535
- (void)_addInsertsToDatabaseOp:(id)databaseOp forManyToMany:(id)many;	// 0x2d0fd205
- (void)_addManyToManysToDatabaseOp:(id)databaseOp;	// 0x2d0fd611
- (void)_addUpdatesToDatabaseOp:(id)databaseOp forManyToMany:(id)many;	// 0x2d0fcb65
- (void)_assertValidStateWithSelector:(SEL)selector;	// 0x2d0f85e9
- (id)_availableChannel;	// 0x2d06adbd
- (id)_availableChannelFromRegisteredChannels;	// 0x2d06ae71
- (void)_beginTransaction:(id)transaction;	// 0x2d0f5b65
- (void)_checkAndRepairCorrelationTables:(BOOL)tables storeVersionNumber:(id)number;	// 0x2d101b4d
- (void)_cleanUpAfterSave;	// 0x2d0f8699
- (void)_cleanUpAfterTransaction;	// 0x2d0f5e51
- (id)_collectSkewedComponents:(id *)components;	// 0x2d1015fd
- (void)_commitTransaction:(id)transaction;	// 0x2d0f5ef1
- (id)_databaseContextState;	// 0x2d0f86f1
- (void)_disconnect;	// 0x2d0f4ba5
- (id)_dissectCorrelationTableCreationSQL:(id)sql;	// 0x2d1014dd
- (void)_ensureDatabaseMatchesModel;	// 0x2d05d61d
- (id)_entityForObject:(id)object;	// 0x2d0fe4f1
- (id)_externalDataLinksDirectory;	// 0x2d0fff45
- (unsigned)_knownEntityKeyForObject:(id)object;	// 0x2d0f8a4d
- (unsigned)_knownEntityKeyForObjectID:(id)objectID;	// 0x2d0f89c1
- (unsigned)_knownOrderKeyForObject:(id)object from:(id)from inverseToMany:(id)many;	// 0x2d0f8c1d
- (unsigned)_knownOrderKeyForObject:(id)object from:(id)from orderedManyToMany:(id)many;	// 0x2d0f8d01
- (long long)_knownPrimaryKeyForObject:(id)object;	// 0x2d0f8985
- (long long)_knownPrimaryKeyForObjectID:(id)objectID;	// 0x2d0f88fd
- (id)_loadAndSetMetadata;	// 0x2d05721d
- (id)_loadAndSetMetadataReadOnly;	// 0x2d101cf5
- (id)_newAdapterForModel:(id)model;	// 0x2d0573c9
- (id)_newConflictRecordForObject:(id)object originalRow:(id)row newRow:(id)row3;	// 0x2d0feec9
- (id)_newObjectGraphStyleForSQLRow:(id)sqlrow withObject:(id)object;	// 0x2d0fec75
- (id)_newObjectIDForEntity:(id)entity referenceData64:(unsigned long long)a64;	// 0x2d108c91
- (id)_newReservedKeysForEntities:(id)entities counts:(id)counts;	// 0x2d108851
- (id)_newRowCacheRowForToManyUpdatesForRelationship:(id)relationship rowCacheOriginal:(id)original originalSnapshot:(id)snapshot value:(id)value added:(id)added deleted:(id)deleted sourceRowPK:(long long)pk properties:(id)properties sourceObject:(id)object newIndexes:(unsigned **)indexes reorderedIndexes:(char **)indexes11;	// 0x2d0fa715
- (id)_newRowsForFetchPlan:(id)fetchPlan selectedBy:(SEL)by withArgument:(id)argument;	// 0x2d0698c9
- (Class)_objectIDClass;	// 0x2d06cde5
- (id)_obtainOpenChannel;	// 0x2d06accd
- (unsigned)_orderKeyForObject:(id)object fromSourceObjectID:(id)sourceObjectID inverseRelationship:(id)relationship inOrderedSet:(id)orderedSet;	// 0x2d0f8bd9
- (void)_performChangesWithAdapterOps:(id)adapterOps;	// 0x2d0ff2f9
- (id)_performExhaustiveConflictDetectionForObjects:(id)objects withChannel:(id)channel;	// 0x2d0fef9d
- (BOOL)_performFastConflictDetectionForObjects:(id)objects withChannel:(id)channel;	// 0x2d0fea35
- (void)_performPostSaveTasks;	// 0x2d108301
- (void)_populateOrderKeysInOrderedSet:(id)orderedSet usingSourceObjectID:(id)anId inverseRelationship:(id)relationship newIndexes:(unsigned **)indexes reorderedIndexes:(char **)indexes5;	// 0x2d0f8a85
- (void)_populateRowForOp:(id)op withObject:(id)object;	// 0x2d0f8eb1
- (id)_predicateForSelectingObjectForOperation:(id)operation;	// 0x2d0fc9a5
- (void)_prefetchRelationshipKey:(id)key sourceEntityDescription:(id)description sourceObjectIDs:(id)ids prefetchRelationshipKeys:(id)keys inContext:(id)context;	// 0x2d1054f1
- (void)_prefetchWithFetchRequest:(id)fetchRequest withObjectIDs:(id)objectIDs inContext:(id)context;	// 0x2d10721d
- (id)_prepareDictionaryResultsFromResultSet:(XXStruct_ObsenD *)resultSet usingFetchPlan:(id)plan;	// 0x2d0f6cf1
- (id)_prepareResultsFromResultSet:(XXStruct_ObsenD *)resultSet usingFetchPlan:(id)plan withMatchingRows:(id *)matchingRows;	// 0x2d06bdbd
- (id)_processRawRows:(XXStruct_ObsenD *)rows forFetchPlan:(id)fetchPlan selectedBy:(SEL)by withArgument:(id)argument;	// 0x2d0f77f9
- (void)_purgeRowCache;	// 0x2d1082d9
- (void)_repairDatabaseCorrelationTables:(id)tables brokenHashModel:(id)model storeVersionNumber:(id)number recurse:(BOOL)recurse;	// 0x2d100e85
- (CFArrayRef)_rowsForConflictDetection:(id)conflictDetection withChannel:(id)channel;	// 0x2d0fe82d
- (void)_setMetadata:(id)metadata;	// 0x2d05cdb9
- (id)_storeInfoForEntityDescription:(id)entityDescription;	// 0x2d108d65
- (id)_ubiquityDictionaryForAttribute:(id)attribute onObject:(id)object;	// 0x2d10041d
- (void)_useModel:(id)model;	// 0x2d0f4f91
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(id)completionHandler;	// 0x2d108d99
// converted property getter: - (id)adapter;	// 0x2d057385
- (id)availableChannel;	// 0x2d0f6c01
- (void)beginTransaction;	// 0x2d0f5d11
- (void)beginTransaction_NotificationFree;	// 0x2d0f5d01
- (void)beginTransaction_core;	// 0x2d0f5ca5
// converted property getter: - (id)channels;	// 0x2d06aeed
- (void)commitChanges:(id)changes;	// 0x2d0ffa15
- (void)commitTransaction;	// 0x2d0f61e9
- (void)commitTransaction_NotificationFree;	// 0x2d0f61d9
- (void)commitTransaction_core;	// 0x2d0f6179
// converted property getter: - (id)connection;	// 0x2d057331
- (id)countForFetchRequest:(id)fetchRequest inContext:(id)context;	// 0x2d0f7ea1
- (void)createAdapterOperationsForDatabaseOperation:(id)databaseOperation;	// 0x2d0fd885
- (id)createChannel;	// 0x2d0f6bfd
// converted property getter: - (id)currentContext;	// 0x2d06b0e5
- (id)databaseOperationForGlobalID:(id)globalID;	// 0x2d0f9f71
- (id)databaseOperationForObject:(id)object;	// 0x2d0f9ff9
// converted property getter: - (id)databaseUUID;	// 0x2d05de8d
- (void)dealloc;	// 0x2d0f4cad
- (void)deleteExternalDataReferences:(id)references;	// 0x2d100189
- (id)entityForEntityDescription:(id)entityDescription;	// 0x2d0f4b85
- (id)entityForFetchRequest:(id)fetchRequest;	// 0x2d062eb5
- (id)entityForObject:(id)object;	// 0x2d0f4b4d
- (id)entityNameOrderingArrayForEntities:(id)entities;	// 0x2d0fda95
- (id)executeRequest:(id)request withContext:(id)context error:(id *)error;	// 0x2d061d6d
// converted property getter: - (id)externalDataLinksDirectory;	// 0x2d05c7bd
// converted property getter: - (id)externalDataReferencesDirectory;	// 0x2d05c3b5
// converted property getter: - (id)externalDataReferencesToDelete;	// 0x2d0fffa5
// converted property getter: - (id)externalDataReferencesToSave;	// 0x2d0fff55
- (id)externalLocationForFileWithUUID:(id)uuid;	// 0x2d0ffead
- (id)fetchRowForObjectID:(NSScalarObjectID *)objectID;	// 0x2d101d55
- (int)fileProtectionLevel;	// 0x2d0587f9
- (void)forgetSnapshotForGlobalID:(id)globalID;	// 0x2d0f6a1d
- (void)forgetSnapshotsForGlobalIDs:(id)globalIDs;	// 0x2d0f6c2d
- (void)generatePrimaryKeysForEntity:(id)entity;	// 0x2d0fdf91
- (id)hackQueryForManyToManyPrefetching:(id)manyPrefetching andSourceObjectIDs:(id)ids orderColumnName:(id)name;	// 0x2d102aa5
- (BOOL)handlesFetchRequest:(id)request;	// 0x2d0fdf75
- (id)identifier;	// 0x2d05de7d
- (void)insertEntity:(id)entity intoOrderingArray:(id)array withDependencies:(id)dependencies processingSet:(id)set;	// 0x2d0fd989
- (void)invalidateObjectsWithGlobalIDs:(id)globalIDs;	// 0x2d0f85d9
- (const id *)knownKeyValuesForObjectID:(id)objectID withContext:(id)context;	// 0x2d0f53a5
- (BOOL)load:(id *)load;	// 0x2d05d4e1
- (BOOL)loadMetadata:(id *)metadata;	// 0x2d056fdd
- (id)localSnapshotForGlobalID:(id)globalID;	// 0x2d0f6b09
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)managedObjectContext;	// 0x2d0f5059
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)managedObjectContext;	// 0x2d0f5121
// converted property getter: - (id)metadata;	// 0x2d05ce4d
- (id)missingObjectGlobalIDs;	// 0x2d0f6bdd
// converted property getter: - (id)model;	// 0x2d05de59
- (id)newAdapterForModel:(id)model;	// 0x2d0f5021
- (id)newFaultingPredicateForSourceID:(NSScalarObjectID *)sourceID andRelationship:(id)relationship;	// 0x2d103519
- (id)newFetchUUIDSForSubentitiesRootedAt:(id)at;	// 0x2d1002a1
- (id)newFetchedPKsForSourceID:(NSScalarObjectID *)sourceID andRelationship:(id)relationship;	// 0x2d10378d
- (NSScalarObjectID *)newForeignKeyID:(long long)anId entity:(id)entity;	// 0x2d0f4f3d
- (NSScalarObjectID *)newObjectIDForEntity:(id)entity pk:(long long)pk;	// 0x2d0f4efd
- (id)newObjectIDSetsForToManyPrefetchingRequest:(id)manyPrefetchingRequest andSourceObjectIDs:(id)ids orderColumnName:(id)name;	// 0x2d102e3d
- (id)newRowsForFetchPlan:(id)fetchPlan;	// 0x2d062cb9
- (id)newSortDescriptorForOrderedRelationship:(id)orderedRelationship;	// 0x2d1034a5
- (id)newValueForRelationship:(id)relationship forObjectWithID:(id)anId withContext:(id)context error:(id *)error;	// 0x2d0f54e1
- (id)newValuesForObjectWithID:(id)anId withContext:(id)context error:(id *)error;	// 0x2d0f51e9
- (id)objectIDFactoryForEntity:(id)entity;	// 0x2d0f4e89
- (Class)objectIDFactoryForSQLEntity:(id)sqlentity;	// 0x2d06cca9
- (id)objectsForFetchRequest:(id)fetchRequest inContext:(id)context;	// 0x2d0621c5
- (id)obtainPermanentIDsForObjects:(id)objects error:(id *)error;	// 0x2d107809
- (id)orderAdapterOperations;	// 0x2d0fda99
- (BOOL)ownsGlobalID:(id)anId;	// 0x2d0fde79
- (BOOL)ownsObject:(id)object;	// 0x2d0fdf15
- (void)performChanges;	// 0x2d0ff369
- (id)permanentObjectIDForObjectInTransaction:(id)transaction;	// 0x2d0f9f95
- (void)prepareForSave:(id)save;	// 0x2d0fe05d
// declared property getter: - (id)presentedItemOperationQueue;	// 0x2d108d89
// declared property getter: - (id)presentedItemURL;	// 0x2d108d79
- (id)rawSQLTextForToManyFaultStatement:(id)manyFaultStatement stripBindVariables:(BOOL)variables swapEKPK:(BOOL)ekpk;	// 0x2d102581
- (void)recomputePrimaryKeyMaxForEntities:(id)entities;	// 0x2d108329
- (void)recordChangesInContext:(id)context;	// 0x2d0fe521
- (void)recordDatabaseOperation:(id)operation;	// 0x2d0f9f15
- (void)recordDeleteForObject:(id)object;	// 0x2d0f9bd5
- (void)recordPrimaryKey:(long long)key forInsertedObject:(id)insertedObject withSQLEntity:(id)sqlentity;	// 0x2d0f8de5
- (void)recordSnapshot:(id)snapshot forObjectID:(id)objectID;	// 0x2d0f6589
- (void)recordToMany:(id)many forSourceObjectID:(id)sourceObjectID relationshipName:(id)name orderKeys:(id)keys;	// 0x2d0f6695
- (void)recordToManyInsertsForObject:(id)object withOperation:(id)operation;	// 0x2d0fa2d5
- (void)recordToManyUpdatesForObject:(id)object withOperation:(id)operation;	// 0x2d0fbc71
- (void)recordUpdateForObject:(id)object;	// 0x2d0fc89d
- (void)recordValuesForInsertedObject:(id)insertedObject;	// 0x2d0fc941
- (id)refreshObjects:(id)objects;	// 0x2d100e75
- (void)registerChannel:(id)channel;	// 0x2d06afb5
- (void)resetExternalDataReferencesDirectories;	// 0x2d10023d
- (void)rollbackChanges;	// 0x2d0ff739
- (void)rollbackTransaction;	// 0x2d0f6449
- (void)rollbackTransaction_core;	// 0x2d0f63d5
// converted property getter: - (id)rowCache;	// 0x2d062a79
- (id)rowForObjectID:(id)objectID;	// 0x2d0f6ba9
- (id)rowForObjectID:(id)objectID after:(double)after;	// 0x2d0f6b31
- (id)safeguardLocationForFileWithUUID:(id)uuid;	// 0x2d0ffef9
- (id)saveChanges:(id)changes;	// 0x2d1005e9
// converted property setter: - (void)setCurrentContext:(id)context;	// 0x2d0621b5
// converted property setter: - (void)setDatabaseUUID:(id)uuid;	// 0x2d101d05
- (void)setExclusiveLockingMode:(BOOL)mode;	// 0x2d0f4fd5
// converted property setter: - (void)setMetadata:(id)metadata;	// 0x2d05e2dd
- (void)setURL:(id)url;	// 0x2d0f4dfd
- (id)type;	// 0x2d05cd81
- (void)unregisterChannel:(id)channel;	// 0x2d0f5a8d
- (void)willRemoveFromPersistentStoreCoordinator:(id)persistentStoreCoordinator;	// 0x2d0f4c31
- (id)writeExternalDataReferences;	// 0x2d0ffff5
@end

