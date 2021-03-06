/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSPersistentStore.h"

@class NSPersistentStoreMap, NSSet;

@interface NSMappedObjectStore : NSPersistentStore {
	NSPersistentStoreMap *_theMap;	// 44 = 0x2c
	NSSet *_entitiesToFetch;	// 48 = 0x30
}
@property(retain) id metadata;	// G=0x35c5d4f1; S=0x35c5d511; converted property
- (id)init;	// 0x35c5ba11
- (id)initWithPersistentStoreCoordinator:(id)persistentStoreCoordinator configurationName:(id)name URL:(id)url options:(id)options;	// 0x35c5ba69
- (void)_addObject:(id)object objectIDMap:(id)map;	// 0x35c5d431
- (id)_pathFromURI:(id)uri;	// 0x35c5bd65
- (id)_rawMetadata__;	// 0x35c5d4d1
- (void)_removeObject:(id)object objectIDMap:(id)map;	// 0x35c5d459
- (void)_setMap:(id)map;	// 0x35c5bd01
- (id)_theMap;	// 0x35c5bcf1
- (void)_updateObject:(id)object objectIDMap:(id)map;	// 0x35c5d481
- (id)dataForKey:(id)key;	// 0x35c5bd45
- (void)dealloc;	// 0x35c5bc49
- (id)executeCountRequest:(id)request withContext:(id)context;	// 0x35c5ca7d
- (id)executeFetchRequest:(id)request withContext:(id)context;	// 0x35c5bf6d
- (id)executeRequest:(id)request withContext:(id)context error:(id *)error;	// 0x35c5be3d
- (id)executeSaveChangesRequest:(id)request withContext:(id)context;	// 0x35c5cb81
- (id)getNewIDForObject:(id)object;	// 0x35c5d371
- (id)identifier;	// 0x35c5d4b1
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)managedObjectContext;	// 0x35c5d4a9
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)managedObjectContext;	// 0x35c5d4ad
// converted property getter: - (id)metadata;	// 0x35c5d4f1
- (id)newValueForRelationship:(id)relationship forObjectWithID:(id)anId withContext:(id)context error:(id *)error;	// 0x35c5d1b1
- (id)newValuesForObjectWithID:(id)anId withContext:(id)context error:(id *)error;	// 0x35c5d165
- (id)obtainPermanentIDsForObjects:(id)objects error:(id *)error;	// 0x35c5d231
- (void)save;	// 0x35c5bdc1
- (void)saveDocumentToPath:(id)path;	// 0x35c5be09
// converted property setter: - (void)setMetadata:(id)metadata;	// 0x35c5d511
@end

