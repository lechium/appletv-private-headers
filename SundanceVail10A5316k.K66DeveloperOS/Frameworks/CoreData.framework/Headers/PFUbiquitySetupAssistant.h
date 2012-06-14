/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSString, PFUbiquityContainerIdentifier, NSDictionary, PFUbiquityStoreMetadata, _PFUbiquityStack, PFUbiquityPeerState, NSMutableDictionary, PFUbiquityPeerReceipt, PFUbiquityLocation, NSURL, NSPersistentStoreCoordinator;

__attribute__((visibility("hidden")))
@interface PFUbiquitySetupAssistant : NSObject {
@private
	NSMutableDictionary *_options;	// 4 = 0x4
	NSPersistentStoreCoordinator *_psc;	// 8 = 0x8
	NSString *_storeType;	// 12 = 0xc
	NSURL *_storeURL;	// 16 = 0x10
	BOOL _ubiquityEnabled;	// 20 = 0x14
	NSURL *_ubiquityRootURL;	// 24 = 0x18
	NSString *_ubiquityName;	// 28 = 0x1c
	NSString *_localPeerID;	// 32 = 0x20
	NSString *_modelVersionHash;	// 36 = 0x24
	PFUbiquityLocation *_ubiquityRootLocation;	// 40 = 0x28
	_PFUbiquityStack *_stack;	// 44 = 0x2c
	PFUbiquityStoreMetadata *_storeMetadata;	// 48 = 0x30
	PFUbiquityPeerState *_localPeerState;	// 52 = 0x34
	BOOL _hasUploadingBaseline;	// 56 = 0x38
	BOOL _didBaselineCopy;	// 57 = 0x39
	BOOL _storeFileExists;	// 58 = 0x3a
	BOOL _storeFileIsReadOnly;	// 59 = 0x3b
	BOOL _hasStoreMetadataFile;	// 60 = 0x3c
	BOOL _hasStoreMetadataEntry;	// 61 = 0x3d
	BOOL _hasContainerUUID;	// 62 = 0x3e
	BOOL _hasContainerUUIDInStore;	// 63 = 0x3f
	BOOL _needsMetadataRecovery;	// 64 = 0x40
	BOOL _didMetadataRecovery;	// 65 = 0x41
	PFUbiquityPeerReceipt *_localPeerReceipt;	// 68 = 0x44
	PFUbiquityContainerIdentifier *_containerIdentifier;	// 72 = 0x48
	BOOL _hasLocalTransactionLogs;	// 76 = 0x4c
	BOOL _localStoreFileIsBehindReceipt;	// 77 = 0x4d
	BOOL _scheduleBaselineRollResponse;	// 78 = 0x4e
}
@property(readonly, assign, nonatomic) NSDictionary *options;	// G=0x32e52c41; @synthesize=_options
@property(readonly, assign, nonatomic) BOOL ubiquityEnabled;	// G=0x32e52c61; @synthesize=_ubiquityEnabled
@property(readonly, assign, nonatomic) PFUbiquityLocation *ubiquityRootLocation;	// G=0x32e52c51; @synthesize=_ubiquityRootLocation
+ (id)createDefaultLocalPeerID;	// 0x32e51265
+ (BOOL)doBasicSanityCheckForUbiquityRootURL:(id)ubiquityRootURL withError:(id *)error;	// 0x32e512e1
+ (id)generateMachineUUIDString;	// 0x32e51209
+ (BOOL)ubiquityMetadataTablesPresentInStore:(id)store;	// 0x32e52b7d
- (id)init;	// 0x32e4ee8d
- (id)initWithPersistentStoreCoordinator:(id)persistentStoreCoordinator andStoreOptions:(id)options forPersistentStoreOfType:(id)type atURL:(id)url;	// 0x32e4f04d
- (void)_setUbiquityRootLocation:(id)location storeName:(id)name localPeerID:(id)anId andModelVersionHash:(id)hash;	// 0x32e52bc1
- (BOOL)attemptMetadataRecoveryForStore:(id)store error:(id *)error;	// 0x32e50d9d
- (void)dealloc;	// 0x32e4f10d
- (BOOL)doFirstMetadataConsistencyCheckWithError:(id *)error;	// 0x32e51a69
- (BOOL)doSecondMetadataConsistencyCheckWithStore:(id)store error:(id *)error;	// 0x32e51e51
- (BOOL)migrateMetadataRoot:(id *)root;	// 0x32e515a5
// declared property getter: - (id)options;	// 0x32e52c41
- (BOOL)performPostStoreSetupWithStore:(id)store error:(id *)error;	// 0x32e50325
- (BOOL)performPreStoreSetupWithError:(id *)error;	// 0x32e4fd1d
// declared property getter: - (BOOL)ubiquityEnabled;	// 0x32e52c61
// declared property getter: - (id)ubiquityRootLocation;	// 0x32e52c51
- (BOOL)validateOptionsWithError:(id *)error;	// 0x32e4f295
@end

