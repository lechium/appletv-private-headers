/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSManagedObjectContextFaultingDelegate.h"
#import "PFUbiquityImportOperation.h"

@class NSString, NSMutableSet, NSObject, NSDictionary, PFUbiquityTransactionLog, NSMutableDictionary, PFUbiquityImportContext, NSPersistentStore, NSManagedObjectContext, NSPersistentStoreCoordinator;
@protocol _PFUbiquityRecordImportOperationDelegate;

__attribute__((visibility("hidden")))
@interface _PFUbiquityRecordImportOperation : PFUbiquityImportOperation <NSManagedObjectContextFaultingDelegate> {
@private
	NSManagedObjectContext *_moc;	// 24 = 0x18
	NSPersistentStoreCoordinator *_psc;	// 28 = 0x1c
	NSPersistentStore *_store;	// 32 = 0x20
	PFUbiquityTransactionLog *_transactionLog;	// 36 = 0x24
	NSString *_localPeerID;	// 40 = 0x28
	NSMutableSet *_insertedObjectIDs;	// 44 = 0x2c
	NSMutableSet *_updatedObjectIDs;	// 48 = 0x30
	NSMutableSet *_deletedObjectIDs;	// 52 = 0x34
	NSDictionary *_logScore;	// 56 = 0x38
	NSMutableDictionary *_resolvedConflicts;	// 60 = 0x3c
	BOOL _lockedExistingCoord;	// 64 = 0x40
	NSDictionary *_initialStoreKnowledgeVector;	// 68 = 0x44
	NSDictionary *_updatedStoreKnowledgeVector;	// 72 = 0x48
	PFUbiquityImportContext *_importContext;	// 76 = 0x4c
	BOOL _transactionDidRollback;	// 80 = 0x50
	int _inMemorySequenceNumber;	// 84 = 0x54
}
@property(assign) NSObject<_PFUbiquityRecordImportOperationDelegate> *delegate;	// G=0x32e08369; S=0x32e0833d; 
@property(readonly, assign, nonatomic) NSMutableSet *deletedObjectIDs;	// G=0x32e0f8e5; @synthesize=_deletedObjectIDs
@property(readonly, assign, nonatomic) PFUbiquityImportContext *importContext;	// G=0x32e0f969; @synthesize=_importContext
@property(readonly, assign) NSDictionary *initialStoreKnowledgeVector;	// G=0x32e0f955; @synthesize=_initialStoreKnowledgeVector
@property(readonly, assign, nonatomic) NSMutableSet *insertedObjectIDs;	// G=0x32e0f8c5; @synthesize=_insertedObjectIDs
@property(readonly, assign) NSString *localPeerID;	// G=0x32e0f8b1; @synthesize=_localPeerID
@property(assign) BOOL lockedExistingCoord;	// G=0x32e0f925; S=0x32e0f93d; @synthesize=_lockedExistingCoord
@property(retain, nonatomic) NSDictionary *logScore;	// G=0x32e0f905; S=0x32e0f915; @synthesize=_logScore
@property(readonly, assign) NSManagedObjectContext *moc;	// G=0x32e0f879; @synthesize=_moc
@property(readonly, assign) NSPersistentStoreCoordinator *psc;	// G=0x32e0f88d; @synthesize=_psc
@property(readonly, assign, nonatomic) NSMutableDictionary *resolvedConflicts;	// G=0x32e0f8f5; @synthesize=_resolvedConflicts
@property(readonly, assign) NSPersistentStore *store;	// G=0x32e0f999; @synthesize=_store
@property(readonly, assign, nonatomic) BOOL transactionDidRollBack;	// G=0x32e0f989; @synthesize=_transactionDidRollback
@property(readonly, assign, nonatomic) PFUbiquityTransactionLog *transactionLog;	// G=0x32e0f8a1; @synthesize=_transactionLog
@property(readonly, assign, nonatomic) NSMutableSet *updatedObjectIDs;	// G=0x32e0f8d5; @synthesize=_updatedObjectIDs
@property(readonly, assign, nonatomic) NSDictionary *updatedStoreKnowledgeVector;	// G=0x32e0f979; @synthesize=_updatedStoreKnowledgeVector
- (id)initWithTransactionLog:(id)transactionLog;	// 0x32e07fe9
- (id)initWithTransactionLog:(id)transactionLog withLocalPeerID:(id)localPeerID;	// 0x32e08151
- (BOOL)applyChangesFromStoreSaveSnapshot:(id)storeSaveSnapshot withImportContext:(id)importContext withError:(id *)error;	// 0x32e0842d
- (id)checkPSCForStoreNamed:(id)storeNamed;	// 0x32e0f019
- (int)context:(id)context shouldHandleInaccessibleFault:(id)fault forObjectID:(id)objectID andTrigger:(id)trigger;	// 0x32e0f799
- (void)coordinatorWillRemoveStore:(id)coordinator;	// 0x32e0f79d
- (id)copy;	// 0x32e082d9
- (void)dealloc;	// 0x32e08195
// declared property getter: - (id)delegate;	// 0x32e08369
// declared property getter: - (id)deletedObjectIDs;	// 0x32e0f8e5
- (id)description;	// 0x32e0f6f5
- (BOOL)fillManagedObject:(id)object withGlobalID:(id)globalID fromUbiquityDictionary:(id)ubiquityDictionary missingObjects:(id)objects importContext:(id)context withError:(id *)error;	// 0x32e0ea7d
// declared property getter: - (id)importContext;	// 0x32e0f969
// declared property getter: - (id)initialStoreKnowledgeVector;	// 0x32e0f955
- (void)initializePersistentStoreCoordinatorForImportContext:(id)importContext;	// 0x32e0f2bd
// declared property getter: - (id)insertedObjectIDs;	// 0x32e0f8c5
// declared property getter: - (id)localPeerID;	// 0x32e0f8b1
// declared property getter: - (BOOL)lockedExistingCoord;	// 0x32e0f925
// declared property getter: - (id)logScore;	// 0x32e0f905
- (void)main;	// 0x32e08af9
// declared property getter: - (id)moc;	// 0x32e0f879
- (id)newPersistentStoreCoordinatorForStoreNamed:(id)storeNamed;	// 0x32e0f34d
- (void)notifyDelegateOfError:(id)error;	// 0x32e08395
- (BOOL)processObjects:(id)objects withState:(int)state andImportContext:(id)context outError:(id *)error;	// 0x32e0cc3d
// declared property getter: - (id)psc;	// 0x32e0f88d
// declared property getter: - (id)resolvedConflicts;	// 0x32e0f8f5
- (void)respondToStoreTransactionStateChangeNotification:(id)storeTransactionStateChangeNotification;	// 0x32e0f49d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x32e0833d
// declared property setter: - (void)setLockedExistingCoord:(BOOL)coord;	// 0x32e0f93d
// declared property setter: - (void)setLogScore:(id)score;	// 0x32e0f915
// declared property getter: - (id)store;	// 0x32e0f999
// declared property getter: - (BOOL)transactionDidRollBack;	// 0x32e0f989
// declared property getter: - (id)transactionLog;	// 0x32e0f8a1
// declared property getter: - (id)updatedObjectIDs;	// 0x32e0f8d5
// declared property getter: - (id)updatedStoreKnowledgeVector;	// 0x32e0f979
@end

