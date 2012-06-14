/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class PFUbiquitySaveSnapshot, NSString, NSRecursiveLock, NSNumber, PFUbiquityLocation, PFUbiquityKnowledgeVector, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface PFUbiquityTransactionLog : NSObject {
@private
	NSMutableDictionary *_contents;	// 4 = 0x4
	int _transactionLogType;	// 8 = 0x8
	BOOL _useTemporaryLogLocation;	// 12 = 0xc
	PFUbiquityLocation *_transactionLogLocation;	// 16 = 0x10
	PFUbiquityLocation *_temporaryTransactionLogLocation;	// 20 = 0x14
	PFUbiquityLocation *_stagingTransactionLogLocation;	// 24 = 0x18
	NSString *_fileProtectionOption;	// 28 = 0x1c
	NSNumber *_transactionNumber;	// 32 = 0x20
	BOOL _inTemporaryLocation;	// 36 = 0x24
	BOOL _inStagingLocation;	// 37 = 0x25
	BOOL _inPermanentLocation;	// 38 = 0x26
	PFUbiquityKnowledgeVector *_knowledgeVector;	// 40 = 0x28
	PFUbiquitySaveSnapshot *_saveSnapshot;	// 44 = 0x2c
	NSString *_localPeerID;	// 48 = 0x30
	BOOL _loadedComparisonMetadata;	// 52 = 0x34
	BOOL _loadedImportMetadata;	// 53 = 0x35
	BOOL _loadedContents;	// 54 = 0x36
	NSRecursiveLock *_contentsLock;	// 56 = 0x38
}
@property(readonly, assign, nonatomic) PFUbiquityLocation *currentLocation;	// G=0x32e32781; 
@property(readonly, assign, nonatomic) NSString *exportingPeerID;	// G=0x32e32709; 
@property(readonly, assign, nonatomic) NSString *fileProtectionOption;	// G=0x32e379f5; @synthesize=_fileProtectionOption
@property(readonly, assign, nonatomic) BOOL inPermanentLocation;	// G=0x32e379c5; @synthesize=_inPermanentLocation
@property(readonly, assign, nonatomic) BOOL inStagingLocation;	// G=0x32e379d5; @synthesize=_inStagingLocation
@property(readonly, assign, nonatomic) BOOL inTemporaryLocation;	// G=0x32e379b5; @synthesize=_inTemporaryLocation
@property(readonly, assign, nonatomic) PFUbiquityKnowledgeVector *knowledgeVector;	// G=0x32e37a55; @synthesize=_knowledgeVector
@property(readonly, assign, nonatomic) NSString *localPeerID;	// G=0x32e37a65; @synthesize=_localPeerID
@property(readonly, assign, nonatomic) NSString *modelVersionHash;	// G=0x32e32731; 
@property(readonly, assign, nonatomic) PFUbiquitySaveSnapshot *saveSnapshot;	// G=0x32e37a05; @synthesize=_saveSnapshot
@property(readonly, assign, nonatomic) PFUbiquityLocation *stagingTransactionLogLocation;	// G=0x32e37a25; @synthesize=_stagingTransactionLogLocation
@property(readonly, assign, nonatomic) NSString *storeName;	// G=0x32e326e1; 
@property(readonly, assign, nonatomic) PFUbiquityLocation *temporaryTransactionLogLocation;	// G=0x32e37a35; @synthesize=_temporaryTransactionLogLocation
@property(readonly, assign, nonatomic) NSString *transactionLogFilename;	// G=0x32e32759; 
@property(readonly, assign, nonatomic) PFUbiquityLocation *transactionLogLocation;	// G=0x32e37a15; @synthesize=_transactionLogLocation
@property(readonly, assign, nonatomic) int transactionLogType;	// G=0x32e37a45; @synthesize=_transactionLogType
@property(readonly, assign, nonatomic) NSNumber *transactionNumber;	// G=0x32e379e5; @synthesize=_transactionNumber
@property(assign, nonatomic) BOOL useTemporaryLogLocation;	// G=0x32e37995; S=0x32e379a5; @synthesize=_useTemporaryLogLocation
+ (id)createTransactionLogFilenameForLogType:(int)logType;	// 0x32e37139
+ (id)generateTransactionLogFilename;	// 0x32e37221
+ (id)loadPlistAtLocation:(id)location withError:(id *)error;	// 0x32e335d1
+ (void)pruneStagingDirectoryForLocalPeerID:(id)localPeerID andStoreName:(id)name andModelVersionHash:(id)hash withStack:(id)stack andStoreTransactionNumber:(id)number;	// 0x32e35b29
+ (BOOL)pruneTemporaryLogDirectoryForPeerRootLocation:(id)peerRootLocation error:(id *)error;	// 0x32e36dad
+ (id)transactionLogFilenameUUID;	// 0x32e3711d
+ (int)transactionLogTypeFromLocation:(id)location;	// 0x32e371a5
+ (void)truncateLogFilesBeforeBaselineMetadata:(id)metadata withLocalPeerID:(id)localPeerID andUbiquityRootLocation:(id)location;	// 0x32e3622d
+ (void)updateModificationTimesForLocation:(id)location;	// 0x32e37841
- (id)init;	// 0x32e31e09
- (id)initWithStoreName:(id)storeName andSaveSnapshot:(id)snapshot;	// 0x32e322b9
- (id)initWithTransactionLogLocation:(id)transactionLogLocation andLocalPeerID:(id)anId;	// 0x32e31f15
- (id)initWithTransactionLogURL:(id)transactionLogURL ubiquityRootLocation:(id)location andLocalPeerID:(id)anId;	// 0x32e31eb9
- (void)cleanupExternalDataReferences;	// 0x32e33edd
// declared property getter: - (id)currentLocation;	// 0x32e32781
- (void)dealloc;	// 0x32e32531
- (BOOL)deleteLogFileWithError:(id *)error;	// 0x32e34145
- (id)description;	// 0x32e32651
// declared property getter: - (id)exportingPeerID;	// 0x32e32709
// declared property getter: - (id)fileProtectionOption;	// 0x32e379f5
- (id)generatePeerCodeKnowledgeVectorWithManagedObjectContext:(id)managedObjectContext;	// 0x32e35869
// declared property getter: - (BOOL)inPermanentLocation;	// 0x32e379c5
// declared property getter: - (BOOL)inStagingLocation;	// 0x32e379d5
// declared property getter: - (BOOL)inTemporaryLocation;	// 0x32e379b5
// declared property getter: - (id)knowledgeVector;	// 0x32e37a55
- (BOOL)loadComparisonMetadataWithError:(id *)error;	// 0x32e32d6d
- (BOOL)loadContents:(id *)contents;	// 0x32e329e9
- (BOOL)loadDeletedObjectsDataWithError:(id *)error;	// 0x32e33531
- (BOOL)loadImportMetadataWithError:(id *)error;	// 0x32e33215
- (BOOL)loadInsertedObjectsDataWithError:(id *)error;	// 0x32e333f1
- (BOOL)loadUpdatedObjectsDataWithError:(id *)error;	// 0x32e33491
// declared property getter: - (id)localPeerID;	// 0x32e37a65
// declared property getter: - (id)modelVersionHash;	// 0x32e32731
- (BOOL)moveFileToPermanentLocationWithError:(id *)error;	// 0x32e343c1
- (void)populateContents;	// 0x32e3724d
- (BOOL)releaseContents:(id *)contents;	// 0x32e32801
// declared property getter: - (id)saveSnapshot;	// 0x32e37a05
// declared property setter: - (void)setUseTemporaryLogLocation:(BOOL)location;	// 0x32e379a5
// declared property getter: - (id)stagingTransactionLogLocation;	// 0x32e37a25
// declared property getter: - (id)storeName;	// 0x32e326e1
// declared property getter: - (id)temporaryTransactionLogLocation;	// 0x32e37a35
// declared property getter: - (id)transactionLogFilename;	// 0x32e32759
// declared property getter: - (id)transactionLogLocation;	// 0x32e37a15
// declared property getter: - (int)transactionLogType;	// 0x32e37a45
// declared property getter: - (id)transactionNumber;	// 0x32e379e5
// declared property getter: - (BOOL)useTemporaryLogLocation;	// 0x32e37995
- (BOOL)writeToDiskWithError:(id *)error andUpdateFilenameInTransactionEntries:(id)transactionEntries;	// 0x32e34c5d
@end

