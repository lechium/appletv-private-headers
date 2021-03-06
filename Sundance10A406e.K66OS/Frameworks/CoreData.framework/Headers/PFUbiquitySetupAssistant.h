/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSURL, NSPersistentStoreCoordinator, PFUbiquityLocation, NSString, PFUbiquityMigrationAssistant, _PFUbiquityStack, PFUbiquityMigrationManager, PFUbiquityPeerState, NSDictionary, PFUbiquityStoreMetadata, PFUbiquityPeerReceipt, PFUbiquityContainerIdentifier, NSMutableDictionary;
@protocol NSCoding, NSCopying, NSObject;

@interface PFUbiquitySetupAssistant : NSObject {
	NSMutableDictionary *_options;	// 4 = 0x4
	NSPersistentStoreCoordinator *_psc;	// 8 = 0x8
	NSString *_storeType;	// 12 = 0xc
	NSURL *_storeURL;	// 16 = 0x10
	BOOL _ubiquityEnabled;	// 20 = 0x14
	id<NSCoding, NSCopying, NSObject> _ubiquityIdentityToken;	// 24 = 0x18
	NSURL *_ubiquityRootURL;	// 28 = 0x1c
	NSString *_ubiquityName;	// 32 = 0x20
	NSString *_localPeerID;	// 36 = 0x24
	NSString *_modelVersionHash;	// 40 = 0x28
	PFUbiquityLocation *_ubiquityRootLocation;	// 44 = 0x2c
	_PFUbiquityStack *_stack;	// 48 = 0x30
	PFUbiquityStoreMetadata *_storeMetadata;	// 52 = 0x34
	PFUbiquityPeerState *_localPeerState;	// 56 = 0x38
	BOOL _hasUploadingBaseline;	// 60 = 0x3c
	BOOL _monitorUploadingBaselineAsync;	// 61 = 0x3d
	BOOL _didBaselineCopy;	// 62 = 0x3e
	BOOL _storeFileExists;	// 63 = 0x3f
	BOOL _storeFileIsReadOnly;	// 64 = 0x40
	BOOL _hasStoreMetadataFile;	// 65 = 0x41
	BOOL _hasStoreMetadataEntry;	// 66 = 0x42
	BOOL _hasContainerUUID;	// 67 = 0x43
	BOOL _hasContainerUUIDInStore;	// 68 = 0x44
	BOOL _needsMetadataRecovery;	// 69 = 0x45
	PFUbiquityPeerReceipt *_localPeerReceipt;	// 72 = 0x48
	PFUbiquityContainerIdentifier *_containerIdentifier;	// 76 = 0x4c
	BOOL _hasLocalTransactionLogs;	// 80 = 0x50
	BOOL _scheduleBaselineRollResponse;	// 81 = 0x51
	BOOL _hasMigrationOptions;	// 82 = 0x52
	BOOL _didMigrateBaseline;	// 83 = 0x53
	PFUbiquityMigrationAssistant *_migrationAssistant;	// 84 = 0x54
	PFUbiquityMigrationManager *_migrationManager;	// 88 = 0x58
	BOOL _replayLogsSynchronously;	// 92 = 0x5c
	BOOL _addLocalPeerToStoreKnowledgeVector;	// 93 = 0x5d
}
@property(readonly, retain) PFUbiquityMigrationAssistant *migrationAssistant;	// G=0x33e0e10d; converted property
@property(readonly, assign, nonatomic) BOOL needsMetadataRecovery;	// G=0x33e12fad; @synthesize=_needsMetadataRecovery
@property(readonly, assign, nonatomic) NSDictionary *options;	// G=0x33e12f9d; @synthesize=_options
@property(readonly, assign, nonatomic) BOOL ubiquityEnabled;	// G=0x33cc0ed5; @synthesize=_ubiquityEnabled
+ (id)createDefaultLocalPeerID;	// 0x33e10ddd
+ (BOOL)doBasicSanityCheckForUbiquityRootURL:(id)ubiquityRootURL withError:(id *)error;	// 0x33e10e59
+ (id)generateMachineUUIDString;	// 0x33e10d81
+ (BOOL)ubiquityMetadataTablesPresentInStore:(id)store;	// 0x33e12ed9
- (id)init;	// 0x33cbffdd
- (id)initWithPersistentStoreCoordinator:(id)persistentStoreCoordinator andStoreOptions:(id)options forPersistentStoreOfType:(id)type atURL:(id)url;	// 0x33cbff1d
- (void)_setUbiquityRootLocation:(id)location storeName:(id)name localPeerID:(id)anId andModelVersionHash:(id)hash;	// 0x33e12f1d
- (BOOL)attemptMetadataRecoveryForStore:(id)store error:(id *)error;	// 0x33e108ad
- (void)dealloc;	// 0x33ccea05
- (BOOL)doFirstMetadataConsistencyCheckWithError:(id *)error;	// 0x33e115e1
- (BOOL)doSecondMetadataConsistencyCheckWithStore:(id)store error:(id *)error;	// 0x33e119ed
- (BOOL)migrateMetadataRoot:(id *)root;	// 0x33e1111d
// converted property getter: - (id)migrationAssistant;	// 0x33e0e10d
// declared property getter: - (BOOL)needsMetadataRecovery;	// 0x33e12fad
// declared property getter: - (id)options;	// 0x33e12f9d
- (BOOL)performPostStoreSetupWithStore:(id)store error:(id *)error;	// 0x33e0efd1
- (BOOL)performPreStoreSetupWithError:(id *)error;	// 0x33e0e195
// declared property getter: - (BOOL)ubiquityEnabled;	// 0x33cc0ed5
- (BOOL)validateOptionsWithError:(id *)error;	// 0x33cc01b9
@end

