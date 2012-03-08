/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library
#import "CoreData-Structs.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface PFUbiquityLocation : NSObject {
@private
	PFUbiquityLocation *_ubiquityRootLocation;	// 4 = 0x4
	NSString *_ubiquityRootLocationPath;	// 8 = 0x8
	int _ubiquityLocationType;	// 12 = 0xc
	NSString *_exportingPeerID;	// 16 = 0x10
	NSString *_storeName;	// 20 = 0x14
	NSString *_modelVersionHash;	// 24 = 0x18
	NSString *_filename;	// 28 = 0x1c
	NSArray *_otherPathComponents;	// 32 = 0x20
	unsigned _hash;	// 36 = 0x24
}
@property(readonly, assign, nonatomic) NSString *exportingPeerID;	// G=0x32c1abc9; @synthesize=_exportingPeerID
@property(readonly, assign, nonatomic) NSString *filename;	// G=0x32c1ab99; @synthesize=_filename
@property(readonly, assign, nonatomic) unsigned hash;	// G=0x32c1ab89; @synthesize=_hash
@property(readonly, assign, nonatomic) NSString *modelVersionHash;	// G=0x32c1aba9; @synthesize=_modelVersionHash
@property(readonly, assign, nonatomic) NSArray *otherPathComponents;	// G=0x32c1ab79; @synthesize=_otherPathComponents
@property(readonly, assign, nonatomic) NSString *storeName;	// G=0x32c1abb9; @synthesize=_storeName
@property(readonly, assign, nonatomic) int ubiquityLocationType;	// G=0x32c1abd9; @synthesize=_ubiquityLocationType
@property(readonly, assign, nonatomic) PFUbiquityLocation *ubiquityRootLocation;	// G=0x32c1cd51; 
@property(readonly, assign, nonatomic) NSString *ubiquityRootLocationPath;	// G=0x32c1abe9; @synthesize=_ubiquityRootLocationPath
@property(readonly, assign, nonatomic) BOOL usesBaselineDirectory;	// G=0x32c1dcf5; 
@property(readonly, assign, nonatomic) BOOL usesBaselineStagingDirectory;	// G=0x32c1dd75; 
@property(readonly, assign, nonatomic) BOOL usesCurrentBaselineDirectory;	// G=0x32c1dda5; 
@property(readonly, assign, nonatomic) BOOL usesStagingLogDirectory;	// G=0x32c1de3d; 
@property(readonly, assign, nonatomic) BOOL usesTemporaryLogDirectory;	// G=0x32c1ddf1; 
+ (id)createArrayOfSubLocationsAtLocation:(id)location error:(id *)error;	// 0x32c1ac9d
+ (id)createBaselineLocation:(int)location forStoreName:(id)storeName andModelVersionHash:(id)hash withUbiquityRootLocation:(id)ubiquityRootLocation;	// 0x32c1bd01
+ (id)createBaselineStagingLocation:(int)location forStoreName:(id)storeName modelVersionHash:(id)hash andFilename:(id)filename withUbiquityRootLocation:(id)ubiquityRootLocation;	// 0x32c1bbe5
+ (id)createCurrentBaselineLocation:(int)location forStoreName:(id)storeName andModelVersionHash:(id)hash forFileNamed:(id)fileNamed withUbiquityRootLocation:(id)ubiquityRootLocation;	// 0x32c1bae1
+ (id)createMapOfLocationsForOldManagedObjectModel:(id)oldManagedObjectModel andNewManagedObjectModel:(id)model inUbiquityPeerStoreLocation:(id)ubiquityPeerStoreLocation;	// 0x32c1afd5
+ (id)createMetadataPeerLocationForLocalPeerID:(id)localPeerID andUbiquityRootLocation:(id)location;	// 0x32c1bf81
+ (id)createMetadataPeerStoreLocationForLocalPeerID:(id)localPeerID storeName:(id)name andUbiquityRootLocation:(id)location;	// 0x32c1bf09
+ (id)createMetadataRootLocationForUbiquityRootLocation:(id)ubiquityRootLocation;	// 0x32c1c051
+ (id)createMetadataStoreLocationForLocalPeerID:(id)localPeerID andUbiquityRootLocation:(id)location;	// 0x32c1bfd9
+ (id)createMetadataUUIDLocationForLocalPeerID:(id)localPeerID storeName:(id)name UUID:(id)uuid andUbiquityRootLocation:(id)location;	// 0x32c1be15
+ (id)createPeerRootLocationForPeerID:(id)peerID withUbiquityRootLocation:(id)ubiquityRootLocation;	// 0x32c1b8e9
+ (id)createPeerStoreLocationForPeerID:(id)peerID andStoreName:(id)name withUbiquityRootLocation:(id)ubiquityRootLocation;	// 0x32c1b87d
+ (id)createPeerStoreVersionLocationForPeerID:(id)peerID storeName:(id)name andModelVersionHash:(id)hash withUbiquityRootLocation:(id)ubiquityRootLocation;	// 0x32c1b7fd
+ (id)createStagingPeerStoreVersionLocationForExportingPeerID:(id)exportingPeerID storeName:(id)name andModelVersionHash:(id)hash withUbiquityRootLocation:(id)ubiquityRootLocation;	// 0x32c1b941
+ (id)createStagingTransactionLogLocationFromTransactionLogLocation:(id)transactionLogLocation;	// 0x32c1ba21
+ (id)createTemporaryTransactionLogLocationFromTransactionLogLocation:(id)transactionLogLocation;	// 0x32c1ba61
+ (id)createTransactionLogLocationForPeerID:(id)peerID storeName:(id)name modelVersionHash:(id)hash logFilename:(id)filename andUbiquityRootLocation:(id)location;	// 0x32c1b98d
+ (id)createTransactionLogLocationFromTemporaryOrStagingLogLocation:(id)temporaryOrStagingLogLocation;	// 0x32c1baa1
+ (id)createUbiquityExternalDataReferenceFileLocationForUUID:(id)uuid andLog:(id)log;	// 0x32c1b6ad
+ (id)createUbiquityExternalDataReferenceFileLocationForUUID:(id)uuid andStore:(id)store;	// 0x32c1b729
+ (id)createUbiquityExternalDataReferenceFileLocationForUUID:(id)uuid storeName:(id)name andUbiquityRootLocation:(id)location;	// 0x32c1b601
+ (id)createUbiquityLocationForPath:(id)path withUbiquityRootPath:(id)ubiquityRootPath;	// 0x32c1c0cd
+ (id)createUbiquityLocationForRootPath:(id)rootPath;	// 0x32c1cbf9
+ (id)createUbiquityLocationForRootURL:(id)rootURL;	// 0x32c1cbe5
+ (id)createUbiquityLocationForSubpath:(id)subpath ofPath:(id)path withUbiquityRootPath:(id)ubiquityRootPath;	// 0x32c1c98d
+ (id)createUbiquityLocationForSubpath:(id)subpath ofUbiquityRootPath:(id)ubiquityRootPath;	// 0x32c1ca65
+ (id)createUbiquityLocationForURL:(id)url withUbiquityRootLocation:(id)ubiquityRootLocation;	// 0x32c1cbad
+ (id)createUbiquityLocationForURL:(id)url withUbiquityRootPath:(id)ubiquityRootPath;	// 0x32c1cb39
+ (id)createUbiquityLocationForURL:(id)url withUbiquityRootURL:(id)ubiquityRootURL;	// 0x32c1cb75
+ (id)createUbiquityPeerReceiptFileLocationForPeerWithID:(id)anId storeName:(id)name andModelVersionHash:(id)hash withUbiquityRootLocation:(id)ubiquityRootLocation;	// 0x32c1b59d
+ (id)createVersionHashStringForModel:(id)model;	// 0x32c1c095
+ (BOOL)isUbiquityLocationPath:(id)path equalToPath:(id)path2;	// 0x32c1aee1
+ (id)pathByTruncatingBeforeLibraryMobileDocuments:(id)documents;	// 0x32c1af25
- (id)init;	// 0x32c1abf9
- (id)initWithUbiquityRootPath:(id)ubiquityRootPath;	// 0x32c1e1e9
- (id)initWithUbiquityRootURL:(id)ubiquityRootURL;	// 0x32c1e1b5
- (id)copyWithZone:(NSZone *)zone;	// 0x32c1e015
- (id)createFullPath;	// 0x32c1d019
- (id)createFullURL;	// 0x32c1cfbd
- (void)dealloc;	// 0x32c1df19
- (id)description;	// 0x32c1de89
// declared property getter: - (id)exportingPeerID;	// 0x32c1abc9
- (BOOL)fileExistsAtLocation;	// 0x32c1db15
// declared property getter: - (id)filename;	// 0x32c1ab99
// declared property getter: - (unsigned)hash;	// 0x32c1ab89
- (BOOL)isEqual:(id)equal;	// 0x32c1ccd9
- (BOOL)isEqualToURL:(id)url;	// 0x32c1cc31
// declared property getter: - (id)modelVersionHash;	// 0x32c1aba9
// declared property getter: - (id)otherPathComponents;	// 0x32c1ab79
- (void)setExportingPeerID:(id)anId;	// 0x32c1cf7d
- (void)setFilename:(id)filename;	// 0x32c1cebd
- (void)setHash:(unsigned)hash;	// 0x32c1ab69
- (void)setModelVersionHash:(id)hash;	// 0x32c1cefd
- (void)setOtherPathComponents:(id)components;	// 0x32c1ce7d
- (void)setStoreName:(id)name;	// 0x32c1cf3d
- (void)setUbiquityLocationType:(int)type;	// 0x32c1ab59
- (void)setUbiquityRootLocation:(id)location;	// 0x32c1cdfd
- (void)setUbiquityRootLocationPath:(id)path;	// 0x32c1ce3d
// declared property getter: - (id)storeName;	// 0x32c1abb9
// declared property getter: - (int)ubiquityLocationType;	// 0x32c1abd9
// declared property getter: - (id)ubiquityRootLocation;	// 0x32c1cd51
// declared property getter: - (id)ubiquityRootLocationPath;	// 0x32c1abe9
- (void)updateHash;	// 0x32c1cd7d
// declared property getter: - (BOOL)usesBaselineDirectory;	// 0x32c1dcf5
// declared property getter: - (BOOL)usesBaselineStagingDirectory;	// 0x32c1dd75
// declared property getter: - (BOOL)usesCurrentBaselineDirectory;	// 0x32c1dda5
// declared property getter: - (BOOL)usesStagingLogDirectory;	// 0x32c1de3d
// declared property getter: - (BOOL)usesTemporaryLogDirectory;	// 0x32c1ddf1
@end

