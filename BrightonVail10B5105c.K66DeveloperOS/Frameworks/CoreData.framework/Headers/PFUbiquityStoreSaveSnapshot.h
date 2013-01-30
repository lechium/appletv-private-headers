/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSString, NSMutableDictionary, NSArray, NSDictionary, NSNumber;

@interface PFUbiquityStoreSaveSnapshot : NSObject {
	NSMutableArray *_entityNames;	// 4 = 0x4
	NSMutableArray *_peerIDs;	// 8 = 0x8
	NSMutableArray *_globalObjectIDs;	// 12 = 0xc
	NSMutableArray *_primaryKeys;	// 16 = 0x10
	NSMutableDictionary *_managedObjectIDToGlobalObjectID;	// 20 = 0x14
	NSMutableDictionary *_globalObjectIDToPermanentManagedObjectID;	// 24 = 0x18
	NSMutableDictionary *_entityNameToIndex;	// 28 = 0x1c
	NSMutableDictionary *_peerIDToIndex;	// 32 = 0x20
	NSMutableDictionary *_primaryKeyToIndex;	// 36 = 0x24
	NSMutableDictionary *_globalObjectIDToIndex;	// 40 = 0x28
	NSMutableDictionary *_insertedObjects;	// 44 = 0x2c
	NSMutableDictionary *_updatedObjects;	// 48 = 0x30
	NSMutableDictionary *_deletedObjects;	// 52 = 0x34
	NSMutableDictionary *_peerStates;	// 56 = 0x38
	NSNumber *_transactionNumber;	// 60 = 0x3c
	NSString *_exportingPeerID;	// 64 = 0x40
	NSString *_localPeerID;	// 68 = 0x44
	NSDictionary *_storeOptions;	// 72 = 0x48
	NSMutableArray *_filesInsertedInTransaction;	// 76 = 0x4c
	NSArray *_filesDeletedInTransaction;	// 80 = 0x50
}
@property(readonly, assign, nonatomic) NSDictionary *deletedObjects;	// G=0x3636aed1; @synthesize=_deletedObjects
@property(readonly, assign, nonatomic) NSDictionary *entityNameToIndex;	// G=0x3636af41; @synthesize=_entityNameToIndex
@property(readonly, assign, nonatomic) NSArray *entityNames;	// G=0x3636ae71; @synthesize=_entityNames
@property(retain, nonatomic) NSString *exportingPeerID;	// G=0x3636af01; S=0x3636af11; @synthesize=_exportingPeerID
@property(readonly, retain) NSArray *filesDeletedInTransaction;	// G=0x3636920d; converted property
@property(readonly, retain) NSMutableArray *filesInsertedInTransaction;	// G=0x363691fd; converted property
@property(readonly, assign, nonatomic) NSDictionary *globalObjectIDToIndex;	// G=0x3636af71; @synthesize=_globalObjectIDToIndex
@property(readonly, assign, nonatomic) NSDictionary *globalObjectIDToPermanentManagedObjectID;	// G=0x3636af81; @synthesize=_globalObjectIDToPermanentManagedObjectID
@property(readonly, assign, nonatomic) NSArray *globalObjectIDs;	// G=0x3636ae91; @synthesize=_globalObjectIDs
@property(readonly, assign, nonatomic) NSDictionary *insertedObjects;	// G=0x3636aeb1; @synthesize=_insertedObjects
@property(retain, nonatomic) NSString *localPeerID;	// G=0x3636af91; S=0x3636afa1; @synthesize=_localPeerID
@property(readonly, assign, nonatomic) NSDictionary *managedObjectIDToGlobalObjectID;	// G=0x3636af31; @synthesize=_managedObjectIDToGlobalObjectID
@property(readonly, assign, nonatomic) NSDictionary *peerIDToIndex;	// G=0x3636af51; @synthesize=_peerIDToIndex
@property(readonly, assign, nonatomic) NSArray *peerIDs;	// G=0x3636ae81; @synthesize=_peerIDs
@property(readonly, assign, nonatomic) NSDictionary *peerStates;	// G=0x3636aee1; @synthesize=_peerStates
@property(readonly, assign, nonatomic) NSDictionary *primaryKeyToIndex;	// G=0x3636af61; @synthesize=_primaryKeyToIndex
@property(readonly, assign, nonatomic) NSArray *primaryKeys;	// G=0x3636aea1; @synthesize=_primaryKeys
@property(readonly, assign, nonatomic) NSDictionary *storeOptions;	// G=0x3636af21; @synthesize=_storeOptions
@property(readonly, assign, nonatomic) NSNumber *transactionNumber;	// G=0x3636aef1; @synthesize=_transactionNumber
@property(readonly, assign, nonatomic) NSDictionary *updatedObjects;	// G=0x3636aec1; @synthesize=_updatedObjects
- (id)init;	// 0x36368b35
- (id)initWithExportingPeerID:(id)exportingPeerID;	// 0x36368d39
- (id)initWithPersistentStoreOptions:(id)persistentStoreOptions andExportingPeerID:(id)anId;	// 0x36368d7d
- (void)_setFilesDeletedInTransaction:(id)transaction;	// 0x3636921d
- (id)addManagedObject:(id)object withTransactionType:(int)transactionType andStoreExportContext:(id)context withError:(id *)error;	// 0x36369645
- (id)checkIndex:(id)index forValue:(id)value fromArrayOfValues:(id)values;	// 0x36369261
- (id)compressedGlobalObjectIDFromGlobalObjectID:(id)globalObjectID;	// 0x3636943d
- (id)createKnowledgeVectorFromPeerStates;	// 0x36369b39
- (id)createUbiquityDictionary:(id)dictionary withStoreExportContext:(id)storeExportContext error:(id *)error;	// 0x3636a409
- (void)dealloc;	// 0x36368e45
// declared property getter: - (id)deletedObjects;	// 0x3636aed1
- (id)description;	// 0x3636906d
// declared property getter: - (id)entityNameToIndex;	// 0x3636af41
// declared property getter: - (id)entityNames;	// 0x3636ae71
// declared property getter: - (id)exportingPeerID;	// 0x3636af01
// converted property getter: - (id)filesDeletedInTransaction;	// 0x3636920d
// converted property getter: - (id)filesInsertedInTransaction;	// 0x363691fd
- (void)generatePeerStatesWithStoreExportContext:(id)storeExportContext;	// 0x3636991d
- (id)globalObjectIDForManagedObject:(id)managedObject withStoreExportContext:(id)storeExportContext;	// 0x36369331
- (id)globalObjectIDFromCompressedObjectID:(id)compressedObjectID;	// 0x3636954d
// declared property getter: - (id)globalObjectIDToIndex;	// 0x3636af71
// declared property getter: - (id)globalObjectIDToPermanentManagedObjectID;	// 0x3636af81
// declared property getter: - (id)globalObjectIDs;	// 0x3636ae91
// declared property getter: - (id)insertedObjects;	// 0x3636aeb1
// declared property getter: - (id)localPeerID;	// 0x3636af91
// declared property getter: - (id)managedObjectIDToGlobalObjectID;	// 0x3636af31
// declared property getter: - (id)peerIDToIndex;	// 0x3636af51
// declared property getter: - (id)peerIDs;	// 0x3636ae81
// declared property getter: - (id)peerStates;	// 0x3636aee1
// declared property getter: - (id)primaryKeyToIndex;	// 0x3636af61
// declared property getter: - (id)primaryKeys;	// 0x3636aea1
- (void)reserveTransactionNumberWithStoreExportContext:(id)storeExportContext;	// 0x36369769
- (void)setDeletedObjects:(id)objects;	// 0x3636a3c5
- (void)setEntityNames:(id)names globalObjectIDs:(id)ids primaryKeys:(id)keys forStoreName:(id)storeName withRootLocation:(id)rootLocation;	// 0x36369f25
// declared property setter: - (void)setExportingPeerID:(id)anId;	// 0x3636af11
- (void)setInsertedObjects:(id)objects;	// 0x3636a33d
// declared property setter: - (void)setLocalPeerID:(id)anId;	// 0x3636afa1
- (void)setTransactionNumber:(id)number peerStates:(id)states andPeerIDs:(id)ids;	// 0x36369dad
- (void)setUpdatedObjects:(id)objects;	// 0x3636a381
// declared property getter: - (id)storeOptions;	// 0x3636af21
// declared property getter: - (id)transactionNumber;	// 0x3636aef1
- (id)transactionNumberFromPeerStates:(id)peerStates;	// 0x36369cf1
// declared property getter: - (id)updatedObjects;	// 0x3636aec1
@end
