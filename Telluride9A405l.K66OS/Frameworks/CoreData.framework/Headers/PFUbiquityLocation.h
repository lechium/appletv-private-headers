/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <NSObject.h> // Unknown library

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
@property(readonly, assign, nonatomic) NSString *exportingPeerID;	// G=0x34074429; @synthesize=_exportingPeerID
@property(readonly, assign, nonatomic) NSString *filename;	// G=0x340743f9; @synthesize=_filename
@property(readonly, assign, nonatomic) unsigned hash;	// G=0x340743e9; @synthesize=_hash
@property(readonly, assign, nonatomic) NSString *modelVersionHash;	// G=0x34074409; @synthesize=_modelVersionHash
@property(readonly, assign, nonatomic) NSArray *otherPathComponents;	// G=0x340743d9; @synthesize=_otherPathComponents
@property(readonly, assign, nonatomic) NSString *storeName;	// G=0x34074419; @synthesize=_storeName
@property(readonly, assign, nonatomic) int ubiquityLocationType;	// G=0x34074439; @synthesize=_ubiquityLocationType
@property(readonly, assign, nonatomic) PFUbiquityLocation *ubiquityRootLocation;	// G=0x34075edd; 
@property(readonly, assign, nonatomic) NSString *ubiquityRootLocationPath;	// G=0x34074449; @synthesize=_ubiquityRootLocationPath
@property(readonly, assign, nonatomic) BOOL usesBaselineDirectory;	// G=0x34076d51; 
@property(readonly, assign, nonatomic) BOOL usesBaselineStagingDirectory;	// G=0x34076dd1; 
@property(readonly, assign, nonatomic) BOOL usesCurrentBaselineDirectory;	// G=0x34076e01; 
@property(readonly, assign, nonatomic) BOOL usesStagingLogDirectory;	// G=0x34076e99; 
@property(readonly, assign, nonatomic) BOOL usesTemporaryLogDirectory;	// G=0x34076e4d; 
+ (id)createBaselineLocation:(int)location forStoreName:(id)storeName andModelVersionHash:(id)hash withUbiquityRootLocation:(id)ubiquityRootLocation;	// 0x34075291
+ (id)createBaselineStagingLocation:(int)location forStoreName:(id)storeName modelVersionHash:(id)hash andFilename:(id)filename withUbiquityRootLocation:(id)ubiquityRootLocation;	// 0x34075175
+ (id)createCurrentBaselineLocation:(int)location forStoreName:(id)storeName andModelVersionHash:(id)hash forFileNamed:(id)fileNamed withUbiquityRootLocation:(id)ubiquityRootLocation;	// 0x34075071
+ (id)createMapOfLocationsForOldManagedObjectModel:(id)oldManagedObjectModel andNewManagedObjectModel:(id)model inUbiquityPeerStoreLocation:(id)ubiquityPeerStoreLocation;	// 0x340745f1
+ (id)createMetadataStoreLocationForLocalPeerID:(id)localPeerID andUbiquityRootLocation:(id)location;	// 0x340753a5
+ (id)createPeerRootLocationForPeerID:(id)peerID withUbiquityRootLocation:(id)ubiquityRootLocation;	// 0x34074e79
+ (id)createPeerStoreLocationForPeerID:(id)peerID andStoreName:(id)name withUbiquityRootLocation:(id)ubiquityRootLocation;	// 0x34074e0d
+ (id)createPeerStoreVersionLocationForPeerID:(id)peerID storeName:(id)name andModelVersionHash:(id)hash withUbiquityRootLocation:(id)ubiquityRootLocation;	// 0x34074d8d
+ (id)createStagingPeerStoreVersionLocationForExportingPeerID:(id)exportingPeerID storeName:(id)name andModelVersionHash:(id)hash withUbiquityRootLocation:(id)ubiquityRootLocation;	// 0x34074ed1
+ (id)createStagingTransactionLogLocationFromTransactionLogLocation:(id)transactionLogLocation;	// 0x34074fb1
+ (id)createTemporaryTransactionLogLocationFromTransactionLogLocation:(id)transactionLogLocation;	// 0x34074ff1
+ (id)createTransactionLogLocationForPeerID:(id)peerID storeName:(id)name modelVersionHash:(id)hash logFilename:(id)filename andUbiquityRootLocation:(id)location;	// 0x34074f1d
+ (id)createTransactionLogLocationFromTemporaryOrStagingLogLocation:(id)temporaryOrStagingLogLocation;	// 0x34075031
+ (id)createUbiquityExternalDataReferenceFileLocationForUUID:(id)uuid andLog:(id)log;	// 0x34074c3d
+ (id)createUbiquityExternalDataReferenceFileLocationForUUID:(id)uuid andStore:(id)store;	// 0x34074cb9
+ (id)createUbiquityExternalDataReferenceFileLocationForUUID:(id)uuid storeName:(id)name andUbiquityRootLocation:(id)location;	// 0x34074b91
+ (id)createUbiquityLocationForPath:(id)path withUbiquityRootPath:(id)ubiquityRootPath;	// 0x34075455
+ (id)createUbiquityLocationForRootPath:(id)rootPath;	// 0x34075d85
+ (id)createUbiquityLocationForRootURL:(id)rootURL;	// 0x34075d71
+ (id)createUbiquityLocationForSubpath:(id)subpath ofUbiquityRootPath:(id)ubiquityRootPath;	// 0x34075bf1
+ (id)createUbiquityLocationForURL:(id)url withUbiquityRootLocation:(id)ubiquityRootLocation;	// 0x34075d39
+ (id)createUbiquityLocationForURL:(id)url withUbiquityRootPath:(id)ubiquityRootPath;	// 0x34075cc5
+ (id)createUbiquityLocationForURL:(id)url withUbiquityRootURL:(id)ubiquityRootURL;	// 0x34075d01
+ (id)createVersionHashStringForModel:(id)model;	// 0x3407541d
+ (BOOL)isUbiquityLocationPath:(id)path equalToPath:(id)path2;	// 0x340744fd
+ (id)pathByTruncatingBeforeLibraryMobileDocuments:(id)documents;	// 0x34074541
- (id)init;	// 0x34074459
- (id)initWithUbiquityRootPath:(id)ubiquityRootPath;	// 0x34077245
- (id)initWithUbiquityRootURL:(id)ubiquityRootURL;	// 0x34077211
- (id)copyWithZone:(NSZone *)zone;	// 0x34077071
- (id)createFullPath;	// 0x340761a5
- (id)createFullURL;	// 0x34076149
- (void)dealloc;	// 0x34076f75
- (id)description;	// 0x34076ee5
// declared property getter: - (id)exportingPeerID;	// 0x34074429
- (BOOL)fileExistsAtLocation;	// 0x34076b81
// declared property getter: - (id)filename;	// 0x340743f9
// declared property getter: - (unsigned)hash;	// 0x340743e9
- (BOOL)isEqual:(id)equal;	// 0x34075e65
- (BOOL)isEqualToURL:(id)url;	// 0x34075dbd
// declared property getter: - (id)modelVersionHash;	// 0x34074409
// declared property getter: - (id)otherPathComponents;	// 0x340743d9
- (void)setExportingPeerID:(id)anId;	// 0x34076109
- (void)setFilename:(id)filename;	// 0x34076049
- (void)setHash:(unsigned)hash;	// 0x340743c9
- (void)setModelVersionHash:(id)hash;	// 0x34076089
- (void)setOtherPathComponents:(id)components;	// 0x34076009
- (void)setStoreName:(id)name;	// 0x340760c9
- (void)setUbiquityLocationType:(int)type;	// 0x340743b9
- (void)setUbiquityRootLocation:(id)location;	// 0x34075f89
- (void)setUbiquityRootLocationPath:(id)path;	// 0x34075fc9
// declared property getter: - (id)storeName;	// 0x34074419
// declared property getter: - (int)ubiquityLocationType;	// 0x34074439
// declared property getter: - (id)ubiquityRootLocation;	// 0x34075edd
// declared property getter: - (id)ubiquityRootLocationPath;	// 0x34074449
- (void)updateHash;	// 0x34075f09
// declared property getter: - (BOOL)usesBaselineDirectory;	// 0x34076d51
// declared property getter: - (BOOL)usesBaselineStagingDirectory;	// 0x34076dd1
// declared property getter: - (BOOL)usesCurrentBaselineDirectory;	// 0x34076e01
// declared property getter: - (BOOL)usesStagingLogDirectory;	// 0x34076e99
// declared property getter: - (BOOL)usesTemporaryLogDirectory;	// 0x34076e4d
@end
