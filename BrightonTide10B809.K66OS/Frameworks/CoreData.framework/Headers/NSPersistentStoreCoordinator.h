/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import "NSLocking.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, NSManagedObjectModel;

@interface NSPersistentStoreCoordinator : NSObject <NSLocking> {
	persistentStoreCoordinatorFlags _flags;	// 4 = 0x4
	void *_reserved;	// 8 = 0x8
	NSMutableArray *_extendedStoreURLs;	// 12 = 0xc
	id _externalRecordsHelper;	// 16 = 0x10
	NSManagedObjectModel *_managedObjectModel;	// 20 = 0x14
	id _coreLock;	// 24 = 0x18
	NSMutableArray *_persistentStores;	// 28 = 0x1c
}
@property(readonly, retain) NSManagedObjectModel *managedObjectModel;	// G=0x30e92fed; converted property
@property(readonly, retain) NSMutableArray *persistentStores;	// G=0x30f23f55; converted property
+ (void)__Multithreading_Violation_AllThatIsLeftToUsIsHonor__;	// 0x30f2229d
+ (Class)_classForPersistentStoreAtURL:(id)url;	// 0x30f225fd
+ (BOOL)_melissaIsDebugging;	// 0x30f23fb5
+ (void)_registerCoreDataStoreClass:(Class)aClass forStoreType:(id)storeType;	// 0x30e8b811
+ (void)_registerDefaultStoreClassesAndTypes;	// 0x30e8b405
+ (Class)_storeClassForStoreType:(id)storeType;	// 0x30e93eb9
+ (id)_storeTypeForStore:(id)store;	// 0x30f27b29
+ (BOOL)accessInstanceVariablesDirectly;	// 0x30f22299
+ (void)initialize;	// 0x30e8af1d
+ (id)metadataForPersistentStoreOfType:(id)type URL:(id)url error:(id *)error;	// 0x30f22b59
+ (void)registerStoreClass:(Class)aClass forStoreType:(id)storeType;	// 0x30f222a1
+ (id)registeredStoreTypes;	// 0x30f224dd
+ (BOOL)setMetadata:(id)metadata forPersistentStoreOfType:(id)type URL:(id)url error:(id *)error;	// 0x30f226fd
- (id)initWithManagedObjectModel:(id)managedObjectModel;	// 0x30e911c5
- (id)URLForPersistentStore:(id)persistentStore;	// 0x30f244dd
- (void)_addPersistentStore:(id)store identifier:(id)identifier;	// 0x30ea13b5
- (void)_assignObject:(id)object toPersistentStore:(id)persistentStore;	// 0x30f28899
- (void)_assignObject:(id)object toPersistentStore:(id)persistentStore forConfiguration:(id)configuration;	// 0x30f288fd
- (void)_assignObjects:(id)objects toStore:(id)store;	// 0x30f255f5
- (BOOL)_canSaveGraphRootedAtObject:(id)object intoStore:(id)store withPreviouslyChecked:(CFSetRef)previouslyChecked withAcceptableEntities:(CFSetRef)acceptableEntities;	// 0x30f25d61
- (BOOL)_checkForPostLionWriter:(id)postLionWriter;	// 0x30f290fd
- (BOOL)_checkForSkewedEntityHashes:(id)skewedEntityHashes metadata:(id)metadata;	// 0x30f23fb9
- (id)_checkRequestForStore:(id)store withContext:(id)context originalRequest:(id)request andOptimisticLocking:(id)locking;	// 0x30f2689d
- (id)_conflictsWithRowCacheForObject:(id)object withContext:(id)context andStore:(id)store;	// 0x30f26799
- (void)_copyMetadataFromStore:(id)store toStore:(id)store2 migrationManager:(id)manager;	// 0x30f28f39
- (BOOL)_destroyPersistentStoreAtURL:(id)url withType:(id)type error:(id *)error;	// 0x30f29cc9
- (BOOL)_destroyPersistentStoreAtURL:(id)url withType:(id)type options:(id)options error:(id *)error;	// 0x30f298a5
- (void)_doPreSaveAssignmentsForObjects:(id)objects;	// 0x30f2610d
- (id)_fetchAllInstancesFromStore:(id)store intoContext:(id)context underlyingException:(id *)exception;	// 0x30f2809d
- (void)_informAffectedStoresOfInterestByChildContextInObjectsWithObjectIDs:(id)objectIDs withSelector:(SEL)selector;	// 0x30f27e99
- (BOOL)_isRegisteredWithUbiquity;	// 0x30f29169
- (id)_newConflictRecordForObject:(id)object andOriginalRow:(id)row withContext:(id)context;	// 0x30f266ed
- (id)_newObjectGraphStyleRecordForRow:(id)row andObject:(id)object withContext:(id)context;	// 0x30f26441
- (id)_persistentStoreForIdentifier:(id)identifier;	// 0x30ea15c5
- (void)_postStoresChangedNotificationsForStores:(id)stores changeKey:(id)key options:(id)options;	// 0x30ea18ed
- (id)_realStoreTypeForStoreWithType:(id)type URL:(id)url error:(id *)error;	// 0x30f289e9
- (BOOL)_removePersistentStore:(id)store;	// 0x30f2410d
- (BOOL)_replacePersistentStoreAtURL:(id)url destinationOptions:(id)options withPersistentStoreFromURL:(id)url3 sourceOptions:(id)options4 storeType:(id)type error:(id *)error;	// 0x30f2917d
- (id)_retainedAllMigratedObjectsInStore:(id)store toStore:(id)store2;	// 0x30f28ab1
- (id)_saveRequestForStore:(id)store withContext:(id)context originalRequest:(id)request andOptimisticLocking:(id)locking;	// 0x30f271f9
- (void)_setIsRegisteredWithUbiquity:(BOOL)ubiquity;	// 0x30f29149
- (id)addPersistentStoreWithType:(id)type configuration:(id)configuration URL:(id)url options:(id)options error:(id *)error;	// 0x30e91679
- (void)dealloc;	// 0x30f23825
- (id)executeRequest:(id)request withContext:(id)context error:(id *)error;	// 0x30ea3fb1
- (void)finalize;	// 0x30f23479
- (id *)knownKeyValuesForObjectID:(id)objectID withContext:(id)context;	// 0x30f25531
- (void)lock;	// 0x30e93e55
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)managedObjectContext;	// 0x30f255cd
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)managedObjectContext;	// 0x30f255e1
- (id)managedObjectIDForURIRepresentation:(id)urirepresentation;	// 0x30f250f9
- (id)managedObjectIDFromUTF8String:(const char *)utf8String length:(unsigned)length;	// 0x30f251a1
// converted property getter: - (id)managedObjectModel;	// 0x30e92fed
- (id)metadataForPersistentStore:(id)persistentStore;	// 0x30f23359
- (id)migratePersistentStore:(id)store toURL:(id)url options:(id)options withType:(id)type error:(id *)error;	// 0x30f24695
- (id)newValueForRelationship:(id)relationship forObjectWithID:(id)anId withContext:(id)context error:(id *)error;	// 0x30f25599
- (id)newValuesForObjectWithID:(id)anId withContext:(id)context error:(id *)error;	// 0x30f25565
- (BOOL)obtainPermanentIDsForObjects:(id)objects error:(id *)error;	// 0x30f256f5
- (id)persistentStoreCoordinator;	// 0x30f2552d
- (id)persistentStoreForIdentifier:(id)identifier;	// 0x30f29ced
- (id)persistentStoreForURL:(id)url;	// 0x30ea146d
// converted property getter: - (id)persistentStores;	// 0x30f23f55
- (BOOL)removePersistentStore:(id)store error:(id *)error;	// 0x30f24161
- (void)setMetadata:(id)metadata forPersistentStore:(id)persistentStore;	// 0x30f23185
- (BOOL)setURL:(id)url forPersistentStore:(id)persistentStore;	// 0x30f24565
- (BOOL)tryLock;	// 0x30f23f31
- (void)unlock;	// 0x30ea1569
@end

