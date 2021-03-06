/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSLocking.h"
#import <NSObject.h> // Unknown library
#import "CoreData-Structs.h"

@class NSManagedObjectModel, NSMutableArray;

@interface NSPersistentStoreCoordinator : NSObject <NSLocking> {
	persistentStoreCoordinatorFlags _flags;	// 4 = 0x4
	void *_reserved;	// 8 = 0x8
	NSMutableArray *_extendedStoreURLs;	// 12 = 0xc
	id _externalRecordsHelper;	// 16 = 0x10
	NSManagedObjectModel *_managedObjectModel;	// 20 = 0x14
	id _coreLock;	// 24 = 0x18
	NSMutableArray *_persistentStores;	// 28 = 0x1c
}
@property(readonly, retain) NSManagedObjectModel *managedObjectModel;	// G=0x36574e79; converted property
@property(readonly, retain) NSMutableArray *persistentStores;	// G=0x36609739; converted property
+ (void)__Multithreading_Violation_AllThatIsLeftToUsIsHonor__;	// 0x36608145
+ (Class)_classForPersistentStoreAtURL:(id)url;	// 0x366084a5
+ (BOOL)_melissaIsDebugging;	// 0x36609799
+ (void)_registerCoreDataStoreClass:(Class)aClass forStoreType:(id)storeType;	// 0x3659ed99
+ (void)_registerDefaultStoreClassesAndTypes;	// 0x3659eb1d
+ (Class)_storeClassForStoreType:(id)storeType;	// 0x36574eed
+ (id)_storeTypeForStore:(id)store;	// 0x3660d1d5
+ (BOOL)accessInstanceVariablesDirectly;	// 0x36608141
+ (void)initialize;	// 0x3659e20d
+ (id)metadataForPersistentStoreOfType:(id)type URL:(id)url error:(id *)error;	// 0x36608a01
+ (void)registerStoreClass:(Class)aClass forStoreType:(id)storeType;	// 0x36608149
+ (id)registeredStoreTypes;	// 0x36608385
+ (BOOL)setMetadata:(id)metadata forPersistentStoreOfType:(id)type URL:(id)url error:(id *)error;	// 0x366085a5
- (id)initWithManagedObjectModel:(id)managedObjectModel;	// 0x365700dd
- (id)URLForPersistentStore:(id)persistentStore;	// 0x36609cc1
- (void)_addPersistentStore:(id)store identifier:(id)identifier;	// 0x36580071
- (void)_assignObject:(id)object toPersistentStore:(id)persistentStore;	// 0x3660dd41
- (void)_assignObject:(id)object toPersistentStore:(id)persistentStore forConfiguration:(id)configuration;	// 0x3660dda5
- (void)_assignObjects:(id)objects toStore:(id)store;	// 0x3660ad55
- (BOOL)_canSaveGraphRootedAtObject:(id)object intoStore:(id)store withPreviouslyChecked:(CFSetRef)previouslyChecked withAcceptableEntities:(CFSetRef)acceptableEntities;	// 0x3660b3f5
- (BOOL)_checkForPostLionWriter:(id)postLionWriter;	// 0x3660e5a5
- (BOOL)_checkForSkewedEntityHashes:(id)skewedEntityHashes metadata:(id)metadata;	// 0x3660979d
- (id)_checkRequestForStore:(id)store originalRequest:(id)request andOptimisticLocking:(id)locking;	// 0x3660bf51
- (id)_conflictsWithRowCacheForObject:(id)object andStore:(id)store;	// 0x3660be31
- (void)_copyMetadataFromStore:(id)store toStore:(id)store2 migrationManager:(id)manager;	// 0x3660e3e1
- (BOOL)_destroyPersistentStoreAtURL:(id)url withType:(id)type error:(id *)error;	// 0x3660f15d
- (BOOL)_destroyPersistentStoreAtURL:(id)url withType:(id)type options:(id)options error:(id *)error;	// 0x3660ed39
- (void)_doPreSaveAssignmentsForObjects:(id)objects;	// 0x3660b7a1
- (id)_fetchAllInstancesFromStore:(id)store intoContext:(id)context underlyingException:(id *)exception;	// 0x3660d545
- (void)_informAffectedStoresOfInterestByChildContextInObjectsWithObjectIDs:(id)objectIDs withSelector:(SEL)selector;	// 0x36596e9d
- (BOOL)_isRegisteredWithUbiquity;	// 0x36598c15
- (id)_newConflictRecordForObject:(id)object andOriginalRow:(id)row;	// 0x3660bd89
- (id)_newObjectGraphStyleRecordForRow:(id)row andObject:(id)object;	// 0x3660bad5
- (id)_persistentStoreForIdentifier:(id)identifier;	// 0x36580281
- (void)_postStoresChangedNotificationsForStores:(id)stores changeKey:(id)key options:(id)options;	// 0x36580599
- (id)_realStoreTypeForStoreWithType:(id)type URL:(id)url error:(id *)error;	// 0x3660de91
- (BOOL)_removePersistentStore:(id)store;	// 0x366098f1
- (BOOL)_replacePersistentStoreAtURL:(id)url destinationOptions:(id)options withPersistentStoreFromURL:(id)url3 sourceOptions:(id)options4 storeType:(id)type error:(id *)error;	// 0x3660e611
- (id)_retainedAllMigratedObjectsInStore:(id)store toStore:(id)store2;	// 0x3660df59
- (id)_saveRequestForStore:(id)store originalRequest:(id)request andOptimisticLocking:(id)locking;	// 0x3660c8a5
- (void)_setIsRegisteredWithUbiquity:(BOOL)ubiquity;	// 0x3660e5f1
- (id)addPersistentStoreWithType:(id)type configuration:(id)configuration URL:(id)url options:(id)options error:(id *)error;	// 0x3657381d
- (void)dealloc;	// 0x36598575
- (id)executeRequest:(id)request withContext:(id)context error:(id *)error;	// 0x36581fad
- (void)finalize;	// 0x36609321
- (id *)knownKeyValuesForObjectID:(id)objectID withContext:(id)context;	// 0x3660acd9
- (void)lock;	// 0x36574e89
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)managedObjectContext;	// 0x3660ad41
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)managedObjectContext;	// 0x36596e89
- (id)managedObjectIDForURIRepresentation:(id)urirepresentation;	// 0x3660a8a1
- (id)managedObjectIDFromUTF8String:(const char *)utf8String length:(unsigned)length;	// 0x3660a949
// converted property getter: - (id)managedObjectModel;	// 0x36574e79
- (id)metadataForPersistentStore:(id)persistentStore;	// 0x36609201
- (id)migratePersistentStore:(id)store toURL:(id)url options:(id)options withType:(id)type error:(id *)error;	// 0x36609e79
- (id)newValueForRelationship:(id)relationship forObjectWithID:(id)anId withContext:(id)context error:(id *)error;	// 0x3660ad0d
- (id)newValuesForObjectWithID:(id)anId withContext:(id)context error:(id *)error;	// 0x365947f9
- (BOOL)obtainPermanentIDsForObjects:(id)objects error:(id *)error;	// 0x3660ae55
- (id)persistentStoreCoordinator;	// 0x3660acd5
- (id)persistentStoreForIdentifier:(id)identifier;	// 0x3660f181
- (id)persistentStoreForURL:(id)url;	// 0x36580129
// converted property getter: - (id)persistentStores;	// 0x36609739
- (BOOL)removePersistentStore:(id)store error:(id *)error;	// 0x36609945
- (void)setMetadata:(id)metadata forPersistentStore:(id)persistentStore;	// 0x3660902d
- (BOOL)setURL:(id)url forPersistentStore:(id)persistentStore;	// 0x36609d49
- (BOOL)tryLock;	// 0x36598c29
- (void)unlock;	// 0x36580225
@end

