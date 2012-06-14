/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import "NSPersistentStore.h"

@class NSDictionary;

@interface NSIncrementalStore : NSPersistentStore {
@private
	NSDictionary *_storeMetadata;	// 44 = 0x2c
	unsigned long long _lastIdentifier;	// 48 = 0x30
	void *_reserveda;	// 56 = 0x38
	void *_reservedb;	// 60 = 0x3c
}
@property(retain) id metadata;	// G=0x32e02fa9; S=0x32e0323d; converted property
+ (id)identifierForNewStoreAtURL:(id)url;	// 0x32e02da5
+ (id)metadataForPersistentStoreWithURL:(id)url error:(id *)error;	// 0x32e02dc1
+ (BOOL)setMetadata:(id)metadata forPersistentStoreWithURL:(id)url error:(id *)error;	// 0x32e02e99
- (void)_preflightCrossCheck;	// 0x32e037f5
- (BOOL)_prepareForExecuteRequest:(id)executeRequest withContext:(id)context error:(id *)error;	// 0x32e0358d
- (id)_rawMetadata__;	// 0x32e037e5
- (void)dealloc;	// 0x32e02f55
- (id)executeRequest:(id)request withContext:(id)context error:(id *)error;	// 0x32e036f9
- (BOOL)load:(id *)load;	// 0x32e02fa5
- (BOOL)loadMetadata:(id *)metadata;	// 0x32e033c5
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)managedObjectContext;	// 0x32e0372d
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)managedObjectContext;	// 0x32e03731
// converted property getter: - (id)metadata;	// 0x32e02fa9
- (id)newObjectIDForEntity:(id)entity referenceObject:(id)object;	// 0x32e03735
- (id)newValueForRelationship:(id)relationship forObjectWithID:(id)anId withContext:(id)context error:(id *)error;	// 0x32e036c5
- (id)newValuesForObjectWithID:(id)anId withContext:(id)context error:(id *)error;	// 0x32e03691
- (id)obtainPermanentIDsForObjects:(id)objects error:(id *)error;	// 0x32e033f9
- (id)referenceObjectForObjectID:(id)objectID;	// 0x32e03771
// converted property setter: - (void)setMetadata:(id)metadata;	// 0x32e0323d
@end

