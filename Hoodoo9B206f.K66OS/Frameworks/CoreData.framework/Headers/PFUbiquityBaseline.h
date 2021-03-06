/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class _PFZipFileArchive, NSMutableDictionary, NSDictionary, NSManagedObjectModel, PFUbiquityLocation, NSString, PFUbiquityBaselineMetadata;

__attribute__((visibility("hidden")))
@interface PFUbiquityBaseline : NSObject {
@private
	PFUbiquityLocation *_ubiquityRootLocation;	// 4 = 0x4
	PFUbiquityLocation *_baselineArchiveLocation;	// 8 = 0x8
	PFUbiquityLocation *_baselineStagingLocation;	// 12 = 0xc
	PFUbiquityBaselineMetadata *_metadata;	// 16 = 0x10
	NSMutableDictionary *_storeFilenameToData;	// 20 = 0x14
	NSString *_storeFilename;	// 24 = 0x18
	NSString *_storeName;	// 28 = 0x1c
	NSString *_modelVersionHash;	// 32 = 0x20
	NSManagedObjectModel *_model;	// 36 = 0x24
	_PFZipFileArchive *_baselineArchive;	// 40 = 0x28
}
@property(readonly, assign) _PFZipFileArchive *baselineArchive;	// G=0x3635aab1; @synthesize=_baselineArchive
@property(readonly, assign) PFUbiquityLocation *baselineArchiveLocation;	// G=0x3635ab21; @synthesize=_baselineArchiveLocation
@property(readonly, assign) PFUbiquityLocation *baselineStagingLocation;	// G=0x3635ab11; @synthesize=_baselineStagingLocation
@property(readonly, assign) PFUbiquityBaselineMetadata *metadata;	// G=0x3635ab01; @synthesize=_metadata
@property(readonly, assign) NSString *modelVersionHash;	// G=0x3635aac1; @synthesize=_modelVersionHash
@property(readonly, assign) NSString *storeFilename;	// G=0x3635aaf1; @synthesize=_storeFilename
@property(readonly, assign) NSDictionary *storeFilenameToData;	// G=0x3635aae1; @synthesize=_storeFilenameToData
@property(readonly, assign) NSString *storeName;	// G=0x3635aad1; @synthesize=_storeName
@property(readonly, assign) PFUbiquityLocation *ubiquityRootLocation;	// G=0x3635ab31; @synthesize=_ubiquityRootLocation
+ (BOOL)canRollBaselineForStoreMetadata:(id)storeMetadata withStack:(id)stack andManagedObjectModel:(id)model error:(id *)error;	// 0x3635b94d
+ (BOOL)checkPeerReceiptsUnderRootLocation:(id)location forAgreementWithLocalPeerID:(id)localPeerID storeName:(id)name modelVersionHash:(id)hash error:(id *)error;	// 0x3635b245
+ (id)createBaselineGCModelForStoreName:(id)storeName modelVersionHash:(id)hash andUbiquityRootLocation:(id)location;	// 0x3635afb5
+ (id)createBaselineOptimizedModelForStoreName:(id)storeName modelVersionHash:(id)hash andUbiquityRootLocation:(id)location;	// 0x3635b0fd
+ (id)createModelFromBaselineModelWithStoreMetadata:(id)storeMetadata;	// 0x3635aec9
+ (BOOL)enoughTransactionsHavePassedToRollBaseline:(id)rollBaseline withLocalPeerID:(id)localPeerID error:(id *)error;	// 0x3635c381
+ (BOOL)logsConsumeEnoughDiskSpaceToRollBaseline:(id)rollBaseline withLocalPeerID:(id)localPeerID andStoreURL:(id)url error:(id *)error;	// 0x3635bf71
+ (id)metadataFromCurrentBaselineForStoreWithName:(id)name modelVersionHash:(id)hash andUbiquityRootLocation:(id)location withError:(id *)error;	// 0x3635ac25
+ (unsigned)numRequiredTransactionsForBaselineRoll;	// 0x3635aa69
+ (double)requiredFractionOfDiskSpaceUsedForLogs;	// 0x3635aa89
+ (void)setNumRequiredTransactionsForBaselineRoll:(unsigned)baselineRoll;	// 0x3635aa79
+ (void)setRequiredFractionOfDiskSpaceUsedForLogs:(double)logs;	// 0x3635aa9d
- (id)init;	// 0x3635ab41
- (id)initWithBaselinePath:(id)baselinePath;	// 0x3635f6a1
- (id)initWithUbiquityRootLocation:(id)ubiquityRootLocation forStoreWithName:(id)name andManagedObjectModel:(id)model;	// 0x3635f77d
// declared property getter: - (id)baselineArchive;	// 0x3635aab1
// declared property getter: - (id)baselineArchiveLocation;	// 0x3635ab21
- (id)baselineMetadataData;	// 0x3635c775
// declared property getter: - (id)baselineStagingLocation;	// 0x3635ab11
- (BOOL)clearOutStagingLocationWithError:(id *)error;	// 0x3635f2cd
- (BOOL)constructBaselineArchive:(id *)archive;	// 0x3635e851
- (id)createManagedObjectModel;	// 0x3635c5c9
- (void)dealloc;	// 0x3635f559
- (id)description;	// 0x3635f49d
- (BOOL)existsInCloud;	// 0x3635d52d
- (BOOL)gatherContentsAndConstructArchiveWithError:(id *)error;	// 0x3635eb3d
- (BOOL)gatherContentsFromMigratedBaseline:(id)migratedBaseline withStoreFileURL:(id)storeFileURL error:(id *)error;	// 0x3635edf5
- (BOOL)importBaselineWithLocalPeerID:(id)localPeerID stack:(id)stack andPersistentStoreCoordinator:(id)coordinator error:(id *)error;	// 0x3635d2fd
- (BOOL)initializeBaselineArchiveWithError:(id *)error;	// 0x3635c7a9
- (BOOL)loadBaselineArchiveWithError:(id *)error;	// 0x3635dcb5
- (BOOL)makeCurrentBaselineWithError:(id *)error;	// 0x3635d011
// declared property getter: - (id)metadata;	// 0x3635ab01
// declared property getter: - (id)modelVersionHash;	// 0x3635aac1
- (id)optimizedModelData;	// 0x3635c741
- (BOOL)prepareForBaselineRollOfPersistentStore:(id)persistentStore withStoreMetadata:(id)storeMetadata andLocalPeerID:(id)anId error:(id *)error;	// 0x3635eff1
- (id)regularModelData;	// 0x3635c70d
- (BOOL)replaceLocalPersistentStoreDescribedByStoreMetadata:(id)metadata usingPersistentStoreCoordinator:(id)coordinator error:(id *)error;	// 0x3635d599
- (id)storeData;	// 0x3635c6c9
// declared property getter: - (id)storeFilename;	// 0x3635aaf1
// declared property getter: - (id)storeFilenameToData;	// 0x3635aae1
// declared property getter: - (id)storeName;	// 0x3635aad1
// declared property getter: - (id)ubiquityRootLocation;	// 0x3635ab31
- (BOOL)unpackStoreFilesToStagingLocation:(id *)stagingLocation;	// 0x3635d9a5
- (BOOL)writeArchiveContentsToDiskWithError:(id *)error;	// 0x3635cc79
@end

