/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import </libobjc.A.h>

@class NSMutableDictionary, PFUbiquityLocation, NSRecursiveLock, NSString, NSNumber, PFUbiquityKnowledgeVector, PFUbiquitySaveSnapshot;

@interface PFUbiquityTransactionLog : NSObject {
	NSMutableDictionary *_contents;	// 4 = 0x4
	int _transactionLogType;	// 8 = 0x8
	BOOL _useTemporaryLogLocation;	// 12 = 0xc
	PFUbiquityLocation *_transactionLogLocation;	// 16 = 0x10
	PFUbiquityLocation *_temporaryTransactionLogLocation;	// 20 = 0x14
	PFUbiquityLocation *_stagingTransactionLogLocation;	// 24 = 0x18
	NSString *_fileProtectionOption;	// 28 = 0x1c
	BOOL _inTemporaryLocation;	// 32 = 0x20
	BOOL _inStagingLocation;	// 33 = 0x21
	BOOL _inPermanentLocation;	// 34 = 0x22
	PFUbiquityKnowledgeVector *_knowledgeVector;	// 36 = 0x24
	PFUbiquitySaveSnapshot *_saveSnapshot;	// 40 = 0x28
	NSString *_localPeerID;	// 44 = 0x2c
	BOOL _loadUsingRetry;	// 48 = 0x30
	BOOL _loadedComparisonMetadata;	// 49 = 0x31
	BOOL _loadedImportMetadata;	// 50 = 0x32
	BOOL _loadedInsertedObjectData;	// 51 = 0x33
	BOOL _loadedUpdatedObjectData;	// 52 = 0x34
	BOOL _loadedDeletedObjectData;	// 53 = 0x35
	BOOL _loadedContents;	// 54 = 0x36
	NSRecursiveLock *_contentsLock;	// 56 = 0x38
}
@property(readonly, assign, nonatomic) PFUbiquityLocation *currentLocation;	// G=0x2d195839; 
@property(readonly, assign, nonatomic) NSString *exportingPeerID;	// G=0x2d1957c1; 
@property(readonly, assign, nonatomic) NSString *fileProtectionOption;	// G=0x2d19b10d; @synthesize=_fileProtectionOption
@property(readonly, assign, nonatomic) BOOL inPermanentLocation;	// G=0x2d19b0ed; @synthesize=_inPermanentLocation
@property(readonly, assign, nonatomic) BOOL inStagingLocation;	// G=0x2d19b0fd; @synthesize=_inStagingLocation
@property(readonly, assign, nonatomic) BOOL inTemporaryLocation;	// G=0x2d19b0dd; @synthesize=_inTemporaryLocation
@property(readonly, assign, nonatomic) PFUbiquityKnowledgeVector *knowledgeVector;	// G=0x2d19b16d; @synthesize=_knowledgeVector
@property(assign, nonatomic) BOOL loadUsingRetry;	// G=0x2d19b18d; S=0x2d19b19d; @synthesize=_loadUsingRetry
@property(readonly, assign, nonatomic) BOOL loadedComparisonMetadata;	// G=0x2d19b1ad; @synthesize=_loadedComparisonMetadata
@property(readonly, assign, nonatomic) BOOL loadedDeletedObjectData;	// G=0x2d19b1ed; @synthesize=_loadedDeletedObjectData
@property(readonly, assign, nonatomic) BOOL loadedImportMetadata;	// G=0x2d19b1bd; @synthesize=_loadedImportMetadata
@property(readonly, assign, nonatomic) BOOL loadedInsertedObjectData;	// G=0x2d19b1cd; @synthesize=_loadedInsertedObjectData
@property(readonly, assign, nonatomic) BOOL loadedUpdatedObjectData;	// G=0x2d19b1dd; @synthesize=_loadedUpdatedObjectData
@property(readonly, assign, nonatomic) NSString *localPeerID;	// G=0x2d19b17d; @synthesize=_localPeerID
@property(readonly, assign, nonatomic) NSString *modelVersionHash;	// G=0x2d1957e9; 
@property(readonly, assign, nonatomic) PFUbiquitySaveSnapshot *saveSnapshot;	// G=0x2d19b11d; @synthesize=_saveSnapshot
@property(readonly, assign, nonatomic) PFUbiquityLocation *stagingTransactionLogLocation;	// G=0x2d19b13d; @synthesize=_stagingTransactionLogLocation
@property(readonly, assign, nonatomic) NSString *storeName;	// G=0x2d195799; 
@property(readonly, assign, nonatomic) PFUbiquityLocation *temporaryTransactionLogLocation;	// G=0x2d19b14d; @synthesize=_temporaryTransactionLogLocation
@property(readonly, assign, nonatomic) NSString *transactionLogFilename;	// G=0x2d195811; 
@property(readonly, assign, nonatomic) PFUbiquityLocation *transactionLogLocation;	// G=0x2d19b12d; @synthesize=_transactionLogLocation
@property(readonly, assign, nonatomic) int transactionLogType;	// G=0x2d19b15d; @synthesize=_transactionLogType
@property(readonly, assign, nonatomic) NSNumber *transactionNumber;	// G=0x2d1958b9; 
@property(assign, nonatomic) BOOL useTemporaryLogLocation;	// G=0x2d19b0bd; S=0x2d19b0cd; @synthesize=_useTemporaryLogLocation
+ (id)createDataFromExtendedAttrsForLog:(id)log error:(id *)error;	// 0x2d196b0d
+ (id)createTransactionLogFilenameForLogType:(int)logType;	// 0x2d19a825
+ (id)generateTransactionLogFilename;	// 0x2d19a90d
+ (BOOL)pruneTemporaryLogDirectoryForPeerRootLocation:(id)peerRootLocation error:(id *)error;	// 0x2d19a451
+ (id)transactionLogFilenameUUID;	// 0x2d19a809
+ (int)transactionLogTypeFromLocation:(id)location;	// 0x2d19a891
+ (void)truncateLogFilesBeforeBaselineMetadata:(id)metadata withLocalPeerID:(id)localPeerID andUbiquityRootLocation:(id)location;	// 0x2d1995d9
+ (void)updateModificationTimesForLocation:(id)location;	// 0x2d19af39
- (id)init;	// 0x2d194ee5
- (id)initWithStoreName:(id)storeName andSaveSnapshot:(id)snapshot andRootLocation:(id)location;	// 0x2d1953e1
- (id)initWithTransactionLogLocation:(id)transactionLogLocation andLocalPeerID:(id)anId;	// 0x2d19502d
- (id)initWithTransactionLogURL:(id)transactionLogURL ubiquityRootLocation:(id)location andLocalPeerID:(id)anId;	// 0x2d194fd1
- (void)cleanupExternalDataReferences;	// 0x2d1975f9
// declared property getter: - (id)currentLocation;	// 0x2d195839
- (void)dealloc;	// 0x2d195601
- (BOOL)deleteLogFileWithError:(id *)error;	// 0x2d197881
- (id)description;	// 0x2d195709
// declared property getter: - (id)exportingPeerID;	// 0x2d1957c1
// declared property getter: - (id)fileProtectionOption;	// 0x2d19b10d
- (id)generatePeerCodeKnowledgeVectorWithManagedObjectContext:(id)managedObjectContext;	// 0x2d199339
// declared property getter: - (BOOL)inPermanentLocation;	// 0x2d19b0ed
// declared property getter: - (BOOL)inStagingLocation;	// 0x2d19b0fd
// declared property getter: - (BOOL)inTemporaryLocation;	// 0x2d19b0dd
// declared property getter: - (id)knowledgeVector;	// 0x2d19b16d
- (BOOL)loadComparisonMetadataWithError:(id *)error;	// 0x2d1962ad
- (BOOL)loadContents:(id *)contents;	// 0x2d195f25
- (BOOL)loadDeletedObjectsDataWithError:(id *)error;	// 0x2d196a45
- (BOOL)loadImportMetadataWithError:(id *)error;	// 0x2d19674d
- (BOOL)loadInsertedObjectsDataWithError:(id *)error;	// 0x2d1968b5
- (id)loadPlistAtLocation:(id)location withError:(id *)error;	// 0x2d196b11
- (BOOL)loadUpdatedObjectsDataWithError:(id *)error;	// 0x2d19697d
// declared property getter: - (BOOL)loadUsingRetry;	// 0x2d19b18d
// declared property getter: - (BOOL)loadedComparisonMetadata;	// 0x2d19b1ad
// declared property getter: - (BOOL)loadedDeletedObjectData;	// 0x2d19b1ed
// declared property getter: - (BOOL)loadedImportMetadata;	// 0x2d19b1bd
// declared property getter: - (BOOL)loadedInsertedObjectData;	// 0x2d19b1cd
// declared property getter: - (BOOL)loadedUpdatedObjectData;	// 0x2d19b1dd
// declared property getter: - (id)localPeerID;	// 0x2d19b17d
// declared property getter: - (id)modelVersionHash;	// 0x2d1957e9
- (BOOL)moveFileToPermanentLocationWithError:(id *)error;	// 0x2d197b21
- (void)populateContents;	// 0x2d19a939
- (BOOL)releaseContents:(id *)contents;	// 0x2d195d91
- (void)releaseDeletedObjects;	// 0x2d195c0d
- (void)releaseInsertedObjects;	// 0x2d195905
- (void)releaseUpdatedObjects;	// 0x2d195a89
- (BOOL)rewriteToDiskWithError:(id *)error;	// 0x2d19903d
// declared property getter: - (id)saveSnapshot;	// 0x2d19b11d
// declared property setter: - (void)setLoadUsingRetry:(BOOL)retry;	// 0x2d19b19d
// declared property setter: - (void)setUseTemporaryLogLocation:(BOOL)location;	// 0x2d19b0cd
// declared property getter: - (id)stagingTransactionLogLocation;	// 0x2d19b13d
// declared property getter: - (id)storeName;	// 0x2d195799
// declared property getter: - (id)temporaryTransactionLogLocation;	// 0x2d19b14d
// declared property getter: - (id)transactionLogFilename;	// 0x2d195811
// declared property getter: - (id)transactionLogLocation;	// 0x2d19b12d
// declared property getter: - (int)transactionLogType;	// 0x2d19b15d
// declared property getter: - (id)transactionNumber;	// 0x2d1958b9
// declared property getter: - (BOOL)useTemporaryLogLocation;	// 0x2d19b0bd
- (BOOL)writeContentsOfZipArchive:(id)zipArchive intoExtendedAttributesForFile:(id)file error:(id *)error;	// 0x2d199039
- (BOOL)writeToDiskWithError:(id *)error andUpdateFilenameInTransactionEntries:(id)transactionEntries;	// 0x2d1983b9
@end

