/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSLocking.h"
#import "NSCoding.h"
#import </libobjc.A.h>
#import "CoreData-Structs.h"

@class NSMutableSet, NSUndoManager;

@interface NSManagedObjectContext : NSObject <NSCoding, NSLocking> {
	int _spinLock;	// 4 = 0x4
	id _parentObjectStore;	// 8 = 0x8
	NSUndoManager *_undoManager;	// 12 = 0xc
	void *_dispatchQueue;	// 16 = 0x10
	managedObjectContextFlags _flags;	// 20 = 0x14
	NSMutableSet *_unprocessedChanges;	// 24 = 0x18
	NSMutableSet *_unprocessedDeletes;	// 28 = 0x1c
	NSMutableSet *_unprocessedInserts;	// 32 = 0x20
	NSMutableSet *_insertedObjects;	// 36 = 0x24
	NSMutableSet *_deletedObjects;	// 40 = 0x28
	NSMutableSet *_changedObjects;	// 44 = 0x2c
	NSMutableSet *_lockedObjects;	// 48 = 0x30
	NSMutableSet *_refreshedObjects;	// 52 = 0x34
	id _infoByGID;	// 56 = 0x38
	id *_cachedObsInfoByEntity;	// 60 = 0x3c
	short _undoTransactionID;	// 64 = 0x40
	id _lock;	// 68 = 0x44
	long _lockCount;	// 72 = 0x48
	long _objectStoreLockCount;	// 76 = 0x4c
	double _fetchTimestamp;	// 80 = 0x50
	id _delegate;	// 88 = 0x58
	id _referenceQueue;	// 92 = 0x5c
	id _userinfo;	// 96 = 0x60
	id _mergePolicy;	// 100 = 0x64
	int _cd_rc;	// 104 = 0x68
	int _ignoreChangeNotification;	// 108 = 0x6c
	id _editors;	// 112 = 0x70
	id *_debuggingRecords;	// 116 = 0x74
	id _childObjectStores;	// 120 = 0x78
	id _reserved2;	// 124 = 0x7c
}
@property(readonly, retain) NSMutableSet *deletedObjects;	// G=0x2d0b9599; converted property
@property(readonly, retain) NSMutableSet *insertedObjects;	// G=0x2d0b94d5; converted property
@property(retain) id mergePolicy;	// G=0x2d0b7fdd; S=0x2d05f4c1; converted property
@property(retain) id parentContext;	// G=0x2d0be81d; S=0x2d0be6c9; converted property
@property(retain) id persistentStoreCoordinator;	// G=0x2d05f729; S=0x2d05f20d; converted property
@property(assign) BOOL propagatesDeletesAtEndOfEvent;	// G=0x2d0b965d; S=0x2d0b9671; converted property
@property(assign) BOOL retainsRegisteredObjects;	// G=0x2d0b7f25; S=0x2d0b7e85; converted property
@property(assign) double stalenessInterval;	// G=0x2d0b9081; S=0x2d05f579; converted property
@property(retain) NSUndoManager *undoManager;	// G=0x2d0b9125; S=0x2d05f3d9; converted property
+ (void)__Multithreading_Violation_AllThatIsLeftToUsIsHonor__;	// 0x2d0b7cf9
+ (BOOL)_handleError:(id)error withError:(id *)error2;	// 0x2d0c1f75
+ (void)_mergeChangesFromRemoteContextSave:(id)remoteContextSave intoContexts:(id)contexts;	// 0x2d0c87e9
+ (BOOL)accessInstanceVariablesDirectly;	// 0x2d0b7cf5
+ (void)initialize;	// 0x2d047bb9
- (id)init;	// 0x2d05ea2d
- (id)initWithCoder:(id)coder;	// 0x2d0bcef1
- (id)initWithConcurrencyType:(unsigned)concurrencyType;	// 0x2d05ea69
- (BOOL)_attemptCoalesceChangesForFetch;	// 0x2d0c5c11
- (unsigned)_batchRetainedObjects:(id *)objects forCount:(unsigned)count withIDs:(id *)ids optionalHandler:(id)handler withInlineStorage:(BOOL)inlineStorage;	// 0x2d0c175d
- (void)_changeIDsForManagedObjects:(id)managedObjects toIDs:(id)ids;	// 0x2d0c1279
- (BOOL)_checkObjectForExistenceAndCacheRow:(id)existenceAndCacheRow;	// 0x2d0bb1a1
- (void)_clearChangedThisTransaction:(id)transaction;	// 0x2d0c55a5
- (void)_clearDeletions;	// 0x2d0c38b9
- (void)_clearInsertions;	// 0x2d0c36c9
- (void)_clearLockedObjects;	// 0x2d0c3c99
- (void)_clearOriginalSnapshotAndInitializeRec:(id)rec;	// 0x2d0c43dd
- (void)_clearOriginalSnapshotForObject:(id)object;	// 0x2d0c43a5
- (void)_clearRefreshedObjects;	// 0x2d0c3cb9
- (void)_clearUnprocessedDeletions;	// 0x2d0c39b1
- (void)_clearUnprocessedInsertions;	// 0x2d0c37c1
- (void)_clearUnprocessedUpdates;	// 0x2d0c3ba1
- (void)_clearUpdates;	// 0x2d0c3aa9
- (id)_committedSnapshotForObject:(id)object;	// 0x2d0c444d
- (void)_copyChildObject:(id)object toParentObject:(id)parentObject fromChildContext:(id)childContext;	// 0x2d0c9fad
- (unsigned)_countWithMergedChangesForRequest:(id)request possibleChanges:(id)changes possibleDeletes:(id)deletes error:(id *)error;	// 0x2d0bf3b5
- (unsigned)_countWithNoChangesForRequest:(id)request error:(id *)error;	// 0x2d0beabd
- (void)_createAndPostChangeNotification:(id)notification withDeletions:(id)deletions withUpdates:(id)updates withRefreshes:(id)refreshes;	// 0x2d0c6445
- (id)_createStoreFetchRequestForFetchRequest:(id)fetchRequest;	// 0x2d060b3d
- (id)_currentEventSnapshotForObject:(id)object;	// 0x2d0c44b5
- (void)_dealloc__;	// 0x2d0b8ac9
- (id)_debuggingOnly_localObjectForGlobalID:(id)globalID;	// 0x2d0c4391
- (id)_delegate;	// 0x2d0c8771
- (void)_didSaveChanges;	// 0x2d0c2ab9
- (void)_disableChangeNotifications;	// 0x2d0c72a5
- (BOOL)_disableDiscardEditing;	// 0x2d0c4561
- (void)_dispose:(BOOL)dispose;	// 0x2d0c08d1
- (void)_disposeObjects:(id *)objects count:(unsigned long)count notifyParent:(BOOL)parent;	// 0x2d0c0719
- (void)_enableChangeNotifications;	// 0x2d0c72b9
- (void)_enqueueEndOfEventNotification;	// 0x2d0c6f1d
- (void)_establishEventSnapshotsForObject:(id)object;	// 0x2d0c45ad
- (void)_forceInsertionForObject:(id)object;	// 0x2d0c5391
- (void)_forceRemoveFromDeletedObjects:(id)deletedObjects;	// 0x2d0c54dd
- (void)_forgetObject:(id)object propagateToObjectStore:(BOOL)objectStore;	// 0x2d0bfe59
- (void)_forgetObject:(id)object propagateToObjectStore:(BOOL)objectStore removeFromRegistry:(BOOL)registry;	// 0x2d0bfe79
- (id)_globalIDForObject:(id)object;	// 0x2d0c4415
- (id)_globalIDsForObjects:(id)objects;	// 0x2d0c169d
- (void)_growRegistrationCollectionForEntitySlot:(unsigned)entitySlot toSize:(unsigned)size;	// 0x2d0c44f5
- (BOOL)_handleError:(id)error withError:(id *)error2;	// 0x2d0c1f51
- (BOOL)_handleOptimisticLockingError:(id)error withError:(id *)error2;	// 0x2d0c1ef5
- (BOOL)_hasIDMappings;	// 0x2d0be885
- (BOOL)_ignoringChangeNotifications;	// 0x2d0c728d
- (id)_implicitObservationInfoForEntity:(id)entity forResultingClass:(Class *)resultingClass;	// 0x2d0c7dc5
- (void)_incrementUndoTransactionID;	// 0x2d0c557d
- (void)_informParentStore:(id)store noLongerInterestedInObjects:(id)objects;	// 0x2d0c3f6d
- (void)_informParentStore:(id)store ofInterestInObjects:(id)objects;	// 0x2d0c3cd9
- (void)_informParentStoreNoLongerInterestedInObjectIDs:(id)objectIDs;	// 0x2d0c40a1
- (void)_informParentStoreOfInterestInObjectIDs:(id)objectIDs;	// 0x2d0c3e0d
- (id)_initWithParentObjectStore:(unsigned long)parentObjectStore;	// 0x2d05eb85
- (void)_insertObjectWithGlobalID:(id)globalID globalID:(id)anId;	// 0x2d0c1da9
- (BOOL)_isDeallocating;	// 0x2d0b8051
- (BOOL)_isImportContext;	// 0x2d0c4511
- (BOOL)_isPreflightSaveInProgress;	// 0x2d0c4525
- (void)_lockObjectStore_oldSchool;	// 0x2d0be8d1
- (void)_managedObjectContextEditor:(id)editor didCommit:(BOOL)commit contextInfo:(XXStruct_gOQQEC *)info;	// 0x2d0c868d
- (id)_mappedForParentStoreID:(id)parentStoreID;	// 0x2d0be89d
- (void)_mergeChangesFromDidSaveDictionary:(id)_mergeChangesFrom usingObjectIDs:(BOOL)ids;	// 0x2d0bd3e9
- (void)_mergeChangesFromRemoteContextSave:(id)remoteContextSave;	// 0x2d0c970d
- (void)_mergeRefreshEpilogueForObject:(id)object mergeChanges:(BOOL)changes;	// 0x2d0bcaf5
- (BOOL)_mergeRefreshObject:(id)object mergeChanges:(BOOL)changes withPersistentSnapshot:(id)persistentSnapshot;	// 0x2d0bc6fd
- (id)_newSaveRequestForCurrentState;	// 0x2d0be9b1
- (id)_newUnchangedLockedObjects;	// 0x2d0c19b1
- (void)_noop:(id)noop;	// 0x2d0c6871
- (void)_objectsChangedInStore:(id)store;	// 0x2d0c746d
- (id)_orderedSetWithResultsFromFetchRequest:(id)fetchRequest;	// 0x2d0c8781
- (id)_parentObjectsForFetchRequest:(id)fetchRequest inContext:(id)context error:(id *)error;	// 0x2d0ca839
- (BOOL)_parentObtainPermanentIDsForObjects:(id)objects context:(id)context error:(id *)error;	// 0x2d0cbd11
- (id)_parentProcessSaveRequest:(id)request inContext:(id)context error:(id *)error;	// 0x2d0ca2d9
- (id)_parentStore;	// 0x2d0be875
- (void)_performCoordinatorActionAndWait:(id)wait;	// 0x2d0c062d
- (void)_postObjectsDidChangeNotificationWithUserInfo:(id)_postObjects;	// 0x2d0c7221
- (void)_postRefreshedObjectsNotificationAndClearList;	// 0x2d0464a9
- (BOOL)_postSaveNotifications;	// 0x2d0c4599
- (BOOL)_prepareForPushChanges:(id *)pushChanges;	// 0x2d0c59b1
- (void)_prepareUnprocessedDeletionAfterRefresh:(id)refresh;	// 0x2d0ba075
- (void)_processChangedStoreConfigurationNotification:(id)notification;	// 0x2d0c74fd
- (BOOL)_processDeletedObjects:(id *)objects;	// 0x2d0c6875
- (void)_processEndOfEventNotification:(id)eventNotification;	// 0x2d0c6f99
- (void)_processNotificationQueue;	// 0x2d0c8329
- (void)_processObjectStoreChanges:(id)changes;	// 0x2d0c6f19
- (id)_processPendingDeletions:(id)deletions withInsertions:(id)insertions withUpdates:(id)updates withNewlyForgottenList:(id)newlyForgottenList withRemovedChangedObjects:(id)removedChangedObjects;	// 0x2d0c5c8d
- (id)_processPendingInsertions:(id)insertions withDeletions:(id)deletions withUpdates:(id)updates;	// 0x2d0c5fe1
- (id)_processPendingUpdates:(id)updates;	// 0x2d0c6269
- (BOOL)_processRecentChanges:(id *)changes;	// 0x2d0451c1
- (void)_processRecentlyForgottenObjects:(id)objects;	// 0x2d0c672d
- (void)_processReferenceQueue:(BOOL)queue;	// 0x2d046535
- (void)_propagateDeletesUsingTable:(id)table;	// 0x2d0c6b59
- (BOOL)_propagatePendingDeletesAtEndOfEvent:(id *)event;	// 0x2d0c6589
- (void)_refaultObject:(id)object globalID:(id)anId boolean:(BOOL)boolean;	// 0x2d0c1b3d
- (void)_registerClearStateWithUndoManager;	// 0x2d0c584d
- (void)_registerForNotificationsWithCoordinator:(id)coordinator;	// 0x2d05f37d
- (void)_registerObject:(id)object withID:(id)anId;	// 0x2d0bfcfd
- (void)_registerUndoForDeletedObjects:(id)deletedObjects withDeletedChanges:(id)deletedChanges;	// 0x2d0c4d45
- (void)_registerUndoForInsertedObjects:(id)insertedObjects;	// 0x2d0c4845
- (void)_registerUndoForModifiedObjects:(id)modifiedObjects;	// 0x2d0c5129
- (void)_registerUndoForOperation:(SEL)operation withObjects:(id)objects withExtraArguments:(id)extraArguments;	// 0x2d0c515d
- (void)_resetAllChanges;	// 0x2d0c1469
- (id)_retainedObjectWithID:(id)anId;	// 0x2d0c0621
- (id)_retainedObjectWithID:(id)anId error:(id *)error;	// 0x2d0c0249
- (id)_retainedObjectWithID:(id)anId optionalHandler:(id)handler withInlineStorage:(BOOL)inlineStorage;	// 0x2d06e581
- (id)_retainedObjectsFromRemovedStore:(id)removedStore;	// 0x2d0c4201
- (id)_retainedRegisteredObjects;	// 0x2d0c15a5
- (void)_sendCommitEditingSelectorToTarget:(id)target sender:(id)sender selector:(SEL)selector flag:(BOOL)flag contextInfo:(void *)info delayed:(BOOL)delayed;	// 0x2d0c8541
- (void)_sendOrEnqueueNotification:(id)notification selector:(SEL)selector;	// 0x2d0c7f09
- (void)_setDelegate:(id)delegate;	// 0x2d0c8761
- (void)_setDisableDiscardEditing:(BOOL)editing;	// 0x2d0c453d
- (void)_setIsUbiquityImportContext:(BOOL)context;	// 0x2d0c44f9
- (void)_setParentContext:(id)context;	// 0x2d0be635
- (void)_setPersistentStoreCoordinator:(id)coordinator;	// 0x2d05f285
- (void)_setPostSaveNotifications:(BOOL)notifications;	// 0x2d0c4575
- (void)_setRetainsRegisteredObjects:(BOOL)objects;	// 0x2d0b7d59
- (void)_setStopsValidationAfterFirstError:(BOOL)error;	// 0x2d0c4369
- (void)_setUndoManager:(id)manager;	// 0x2d05f451
- (void)_startObservingUndoManagerNotifications;	// 0x2d0c72cd
- (void)_stopConflictDetectionForObject:(id)object;	// 0x2d0c87c9
- (void)_stopObservingUndoManagerNotifications;	// 0x2d0c7345
- (BOOL)_stopsValidationAfterFirstError;	// 0x2d0c4351
- (void)_storeConfigurationChanged:(id)changed;	// 0x2d0c74e1
- (BOOL)_tryRetain;	// 0x2d0b8005
- (void)_undoDeletions:(id)deletions;	// 0x2d0c48fd
- (void)_undoDeletionsMovedToUpdates:(id)updates;	// 0x2d0c4879
- (void)_undoInsertions:(id)insertions;	// 0x2d0c4675
- (void)_undoManagerCheckpoint:(id)checkpoint;	// 0x2d0c6849
- (void)_undoUpdates:(id)updates;	// 0x2d0c4f6d
- (void)_unlockObjectStore_oldSchool;	// 0x2d0be919
- (void)_unregisterForNotifications;	// 0x2d0c73c1
- (void)_updateUndoTransactionForThisEvent:(id)thisEvent withDeletions:(id)deletions withUpdates:(id)updates;	// 0x2d0c66a9
- (void)_updateUnprocessedOwnDestinations:(id)destinations;	// 0x2d0c59ad
- (BOOL)_validateChangesForSave:(id *)save;	// 0x2d0c20c9
- (BOOL)_validateDeletesUsingTable:(id)table withError:(id *)error;	// 0x2d0c2089
- (BOOL)_validateObjects:(id)objects forOperation:(unsigned)operation error:(id *)error exhaustive:(BOOL)exhaustive forSave:(BOOL)save;	// 0x2d0c227d
- (void)assignObject:(id)object toPersistentStore:(id)persistentStore;	// 0x2d0b9139
- (BOOL)commitEditing;	// 0x2d0c84cd
- (void)commitEditingWithDelegate:(id)delegate didCommitSelector:(SEL)selector contextInfo:(void *)info;	// 0x2d0c8641
- (unsigned)concurrencyType;	// 0x2d0be849
- (unsigned)countForFetchRequest:(id)fetchRequest error:(id *)error;	// 0x2d0bb449
- (void)dealloc;	// 0x2d0b8e09
- (void)deleteObject:(id)object;	// 0x2d0b9efd
// converted property getter: - (id)deletedObjects;	// 0x2d0b9599
- (void)detectConflictsForObject:(id)object;	// 0x2d0bd1c1
- (void)discardEditing;	// 0x2d0c845d
- (void)encodeWithCoder:(id)coder;	// 0x2d0bd0cd
- (id)executeFetchRequest:(id)request error:(id *)error;	// 0x2d05f979
- (id)executeRequest:(id)request withContext:(id)context error:(id *)error;	// 0x2d0cad51
- (id)existingObjectWithID:(id)anId error:(id *)error;	// 0x2d0bb069
- (void)finalize;	// 0x2d0b8ec9
- (BOOL)hasChanges;	// 0x2d060b29
- (void)insertObject:(id)object;	// 0x2d0b9df9
// converted property getter: - (id)insertedObjects;	// 0x2d0b94d5
- (BOOL)isEditing;	// 0x2d0c874d
- (void)lock;	// 0x2d0bd271
- (void)lockObjectStore;	// 0x2d060c41
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)managedObjectContext;	// 0x2d0cb205
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)managedObjectContext;	// 0x2d0cb2d5
- (void)mergeChangesFromContextDidSaveNotification:(id)mergeChangesFromContext;	// 0x2d0be285
// converted property getter: - (id)mergePolicy;	// 0x2d0b7fdd
- (id)newValueForRelationship:(id)relationship forObjectWithID:(id)anId withContext:(id)context error:(id *)error;	// 0x2d0cb7f9
- (id)newValuesForObjectWithID:(id)anId withContext:(id)context error:(id *)error;	// 0x2d0cb3a5
- (void)objectDidBeginEditing:(id)object;	// 0x2d0c832d
- (void)objectDidEndEditing:(id)object;	// 0x2d0c83c5
- (id)objectRegisteredForID:(id)anId;	// 0x2d0b9735
- (id)objectWithID:(id)anId;	// 0x2d0bad15
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x2d0b9b39
- (BOOL)obtainPermanentIDsForObjects:(id)objects error:(id *)error;	// 0x2d0ba0f5
// converted property getter: - (id)parentContext;	// 0x2d0be81d
- (void)performBlock:(id)block;	// 0x2d0be379
- (void)performBlockAndWait:(id)wait;	// 0x2d0be565
// converted property getter: - (id)persistentStoreCoordinator;	// 0x2d05f729
- (void)processPendingChanges;	// 0x2d0451ad
// converted property getter: - (BOOL)propagatesDeletesAtEndOfEvent;	// 0x2d0b965d
- (void)redo;	// 0x2d0bcd3d
- (void)refreshObject:(id)object mergeChanges:(BOOL)changes;	// 0x2d0bc249
- (id)registeredObjects;	// 0x2d0b94ad
- (oneway void)release;	// 0x2d05f781
- (void)reset;	// 0x2d0b8079
- (id)retain;	// 0x2d05f601
- (unsigned)retainCount;	// 0x2d0b7ff1
// converted property getter: - (BOOL)retainsRegisteredObjects;	// 0x2d0b7f25
- (void)rollback;	// 0x2d0bb8a1
- (BOOL)save:(id *)save;	// 0x2d0ba5d9
// converted property setter: - (void)setMergePolicy:(id)policy;	// 0x2d05f4c1
// converted property setter: - (void)setParentContext:(id)context;	// 0x2d0be6c9
// converted property setter: - (void)setPersistentStoreCoordinator:(id)coordinator;	// 0x2d05f20d
// converted property setter: - (void)setPropagatesDeletesAtEndOfEvent:(BOOL)event;	// 0x2d0b9671
// converted property setter: - (void)setRetainsRegisteredObjects:(BOOL)objects;	// 0x2d0b7e85
// converted property setter: - (void)setStalenessInterval:(double)interval;	// 0x2d05f579
// converted property setter: - (void)setUndoManager:(id)manager;	// 0x2d05f3d9
// converted property getter: - (double)stalenessInterval;	// 0x2d0b9081
- (BOOL)tryLock;	// 0x2d0bd305
- (void)undo;	// 0x2d0bcb89
// converted property getter: - (id)undoManager;	// 0x2d0b9125
- (void)unlock;	// 0x2d0bd3a1
- (void)unlockObjectStore;	// 0x2d0be965
- (id)updatedObjects;	// 0x2d0b93e9
- (id)userInfo;	// 0x2d0be625
@end

