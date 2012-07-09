/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSManagedObjectContextFaultingDelegate.h"
#import "PFUbiquityImportOperation.h"

@class NSString, NSMutableSet, NSObject, NSDictionary, NSError, PFUbiquityTransactionLog, NSMutableDictionary, PFUbiquityImportContext, NSPersistentStore, NSManagedObjectContext, NSPersistentStoreCoordinator;
@protocol _PFUbiquityRecordImportOperationDelegate;

@interface _PFUbiquityRecordImportOperation : PFUbiquityImportOperation <NSManagedObjectContextFaultingDelegate> {
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
	BOOL _success;	// 80 = 0x50
	BOOL _transactionDidRollback;	// 81 = 0x51
	int _inMemorySequenceNumber;	// 84 = 0x54
	NSError *_operationError;	// 88 = 0x58
}
@property(assign) NSObject<_PFUbiquityRecordImportOperationDelegate> *delegate;	// G=0x36675bc1; S=0x36675b95; 
@property(readonly, assign, nonatomic) NSMutableSet *deletedObjectIDs;	// G=0x3667d1dd; @synthesize=_deletedObjectIDs
@property(readonly, assign, nonatomic) PFUbiquityImportContext *importContext;	// G=0x3667d261; @synthesize=_importContext
@property(readonly, assign) NSDictionary *initialStoreKnowledgeVector;	// G=0x3667d24d; @synthesize=_initialStoreKnowledgeVector
@property(readonly, assign, nonatomic) NSMutableSet *insertedObjectIDs;	// G=0x3667d1bd; @synthesize=_insertedObjectIDs
@property(readonly, assign) NSString *localPeerID;	// G=0x3667d1a9; @synthesize=_localPeerID
@property(assign) BOOL lockedExistingCoord;	// G=0x3667d21d; S=0x3667d235; @synthesize=_lockedExistingCoord
@property(retain, nonatomic) NSDictionary *logScore;	// G=0x3667d1fd; S=0x3667d20d; @synthesize=_logScore
@property(readonly, assign) NSManagedObjectContext *moc;	// G=0x3667d171; @synthesize=_moc
@property(readonly, assign, nonatomic) NSError *operationError;	// G=0x3667d2b5; @synthesize=_operationError
@property(readonly, assign) NSPersistentStoreCoordinator *psc;	// G=0x3667d185; @synthesize=_psc
@property(readonly, assign, nonatomic) NSMutableDictionary *resolvedConflicts;	// G=0x3667d1ed; @synthesize=_resolvedConflicts
@property(readonly, assign) NSPersistentStore *store;	// G=0x3667d291; @synthesize=_store
@property(readonly, assign, nonatomic) BOOL success;	// G=0x3667d2a5; @synthesize=_success
@property(readonly, assign, nonatomic) BOOL transactionDidRollBack;	// G=0x3667d281; @synthesize=_transactionDidRollback
@property(readonly, assign, nonatomic) PFUbiquityTransactionLog *transactionLog;	// G=0x3667d199; @synthesize=_transactionLog
@property(readonly, assign, nonatomic) NSMutableSet *updatedObjectIDs;	// G=0x3667d1cd; @synthesize=_updatedObjectIDs
@property(readonly, assign, nonatomic) NSDictionary *updatedStoreKnowledgeVector;	// G=0x3667d271; @synthesize=_updatedStoreKnowledgeVector
- (id)init;	// 0x366757d5
- (id)initWithTransactionLog:(id)transactionLog;	// 0x3667594d
- (id)initWithTransactionLog:(id)transactionLog withLocalPeerID:(id)localPeerID;	// 0x36675991
- (BOOL)applyChangesFromStoreSaveSnapshot:(id)storeSaveSnapshot withImportContext:(id)importContext withError:(id *)error;	// 0x36675c85
- (id)checkPSCForStoreNamed:(id)storeNamed;	// 0x3667c911
- (int)context:(id)context shouldHandleInaccessibleFault:(id)fault forObjectID:(id)objectID andTrigger:(id)trigger;	// 0x3667d091
- (void)coordinatorWillRemoveStore:(id)coordinator;	// 0x3667d095
- (id)copy;	// 0x36675b31
- (void)dealloc;	// 0x366759d5
// declared property getter: - (id)delegate;	// 0x36675bc1
// declared property getter: - (id)deletedObjectIDs;	// 0x3667d1dd
- (id)description;	// 0x3667cfed
- (BOOL)fillManagedObject:(id)object withGlobalID:(id)globalID fromUbiquityDictionary:(id)ubiquityDictionary missingObjects:(id)objects importContext:(id)context withError:(id *)error;	// 0x3667c375
// declared property getter: - (id)importContext;	// 0x3667d261
// declared property getter: - (id)initialStoreKnowledgeVector;	// 0x3667d24d
- (void)initializePersistentStoreCoordinatorForImportContext:(id)importContext;	// 0x3667cbb5
// declared property getter: - (id)insertedObjectIDs;	// 0x3667d1bd
// declared property getter: - (id)localPeerID;	// 0x3667d1a9
// declared property getter: - (BOOL)lockedExistingCoord;	// 0x3667d21d
// declared property getter: - (id)logScore;	// 0x3667d1fd
- (void)main;	// 0x36676351
// declared property getter: - (id)moc;	// 0x3667d171
- (id)newPersistentStoreCoordinatorForStoreNamed:(id)storeNamed;	// 0x3667cc45
- (void)notifyDelegateOfError:(id)error;	// 0x36675bed
// declared property getter: - (id)operationError;	// 0x3667d2b5
- (BOOL)processObjects:(id)objects withState:(int)state andImportContext:(id)context outError:(id *)error;	// 0x3667a535
// declared property getter: - (id)psc;	// 0x3667d185
// declared property getter: - (id)resolvedConflicts;	// 0x3667d1ed
- (void)respondToStoreTransactionStateChangeNotification:(id)storeTransactionStateChangeNotification;	// 0x3667cd95
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x36675b95
// declared property setter: - (void)setLockedExistingCoord:(BOOL)coord;	// 0x3667d235
// declared property setter: - (void)setLogScore:(id)score;	// 0x3667d20d
// declared property getter: - (id)store;	// 0x3667d291
// declared property getter: - (BOOL)success;	// 0x3667d2a5
// declared property getter: - (BOOL)transactionDidRollBack;	// 0x3667d281
// declared property getter: - (id)transactionLog;	// 0x3667d199
// declared property getter: - (id)updatedObjectIDs;	// 0x3667d1cd
// declared property getter: - (id)updatedStoreKnowledgeVector;	// 0x3667d271
@end
