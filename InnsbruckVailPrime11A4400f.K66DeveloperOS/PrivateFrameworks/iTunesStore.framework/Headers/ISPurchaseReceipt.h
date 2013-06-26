/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "iTunesStore-Structs.h"
#import </libobjc.A.h>

@class NSDate, NSNumber, NSData, NSString;

@interface ISPurchaseReceipt : NSObject {
	NSData *mReceiptData;	// 4 = 0x4
	SecCmsMessageStr *mDecodedMessage;	// 8 = 0x8
	SecCmsSignedDataStr *mSignedData;	// 12 = 0xc
	NSString *mReceiptPath;	// 16 = 0x10
	NSString *mBundleID;	// 20 = 0x14
	NSString *mBundleVersion;	// 24 = 0x18
	NSString *mParentalControls;	// 28 = 0x1c
	NSString *mDownloadID;	// 32 = 0x20
	NSString *mAdamID;	// 36 = 0x24
	NSDate *mPurchaseDate;	// 40 = 0x28
	NSString *mPurchaseDateString;	// 44 = 0x2c
	NSString *mDSID;	// 48 = 0x30
	NSString *mHWType;	// 52 = 0x34
	NSDate *mReceiptCreationDate;	// 56 = 0x38
	NSString *mDeveloperID;	// 60 = 0x3c
	NSString *mInstallerVersionID;	// 64 = 0x40
	NSString *mReceiptType;	// 68 = 0x44
	NSNumber *mFRToolVersion;	// 72 = 0x48
	NSString *mExpirationDateString;	// 76 = 0x4c
	NSDate *mExpirationDate;	// 80 = 0x50
	NSString *mRenewalDateString;	// 84 = 0x54
	NSDate *mRenewalDate;	// 88 = 0x58
	NSString *mOraganizationDisplayName;	// 92 = 0x5c
	NSString *mCancellationReason;	// 96 = 0x60
	BOOL mHashIsValid;	// 100 = 0x64
	BOOL _createdFromCoder;	// 101 = 0x65
}
@property(readonly, assign) NSString *adamID;	// G=0x33c7c4ed; @synthesize=mAdamID
@property(readonly, assign) NSString *bundleIdentifier;	// G=0x33c7c475; @synthesize=mBundleID
@property(readonly, assign) NSString *bundleVersion;	// G=0x33c7c489; @synthesize=mBundleVersion
@property(readonly, assign) NSString *cancellationReason;	// G=0x33c7c5c9; @synthesize=mCancellationReason
@property(readonly, assign) NSString *developerID;	// G=0x33c7c53d; @synthesize=mDeveloperID
@property(readonly, assign) NSString *downloadID;	// G=0x33c7c4d9; @synthesize=mDownloadID
@property(readonly, assign) NSString *dsid;	// G=0x33c7c501; @synthesize=mDSID
@property(readonly, assign) NSDate *expirationDate;	// G=0x33c7c5a1; @synthesize=mExpirationDate
@property(readonly, assign) NSNumber *frToolVersion;	// G=0x33c7c565; @synthesize=mFRToolVersion
@property(readonly, assign) NSString *hwtype;	// G=0x33c7c515; @synthesize=mHWType
@property(readonly, assign) NSString *installerVersionID;	// G=0x33c7c551; @synthesize=mInstallerVersionID
@property(readonly, assign) BOOL isProductionReceipt;	// G=0x33c7c3e5; @dynamic
@property(readonly, assign) BOOL isRevoked;	// G=0x33c7c41d; @dynamic
@property(readonly, assign) BOOL isVPPLicensed;	// G=0x33c7c435; @dynamic
@property(readonly, assign) NSString *organizationDisplayName;	// G=0x33c7c5b5; @synthesize=mOraganizationDisplayName
@property(readonly, assign) NSString *parentalControls;	// G=0x33c7c4c5; @synthesize=mParentalControls
@property(readonly, assign) NSDate *purchaseDate;	// G=0x33c7c49d; @synthesize=mPurchaseDate
@property(readonly, assign) NSString *purchaseDateString;	// G=0x33c7c4b1; @synthesize=mPurchaseDateString
@property(readonly, assign) NSDate *receiptCreationDate;	// G=0x33c7c529; @synthesize=mReceiptCreationDate
@property(readonly, assign) NSData *receiptData;	// G=0x33c7c461; @synthesize=mReceiptData
@property(readonly, assign) NSString *receiptDataString;	// G=0x33c7c385; @dynamic
@property(readonly, assign) NSString *receiptType;	// G=0x33c7c44d; @synthesize=mReceiptType
@property(readonly, assign) NSDate *renewalDate;	// G=0x33c7c579; @synthesize=mRenewalDate
@property(readonly, assign) NSString *renewalDateString;	// G=0x33c7c58d; @synthesize=mRenewalDateString
+ (id)receiptFromBundleAtPath:(id)path;	// 0x33c7a889
+ (id)receiptFromBundleAtURL:(id)url;	// 0x33c7a8c5
+ (id)receiptPathForBundleAtPath:(id)path;	// 0x33c7a91d
+ (id)receiptWithContentsOfFile:(id)file;	// 0x33c7a841
- (id)initWithContentsOfFile:(id)file;	// 0x33c7bc25
- (BOOL)_checkWWDRIssuerForTrust:(SecTrust *)trust;	// 0x33c7a981
- (CFArrayRef)_copySignedDataCertificates;	// 0x33c7aa79
- (BOOL)_load;	// 0x33c7af21
- (int)_verifySignatureCheckRevocation:(BOOL)revocation checkExpiration:(BOOL)expiration useCurrentDate:(BOOL)date;	// 0x33c7ab45
// declared property getter: - (id)adamID;	// 0x33c7c4ed
// declared property getter: - (id)bundleIdentifier;	// 0x33c7c475
// declared property getter: - (id)bundleVersion;	// 0x33c7c489
// declared property getter: - (id)cancellationReason;	// 0x33c7c5c9
- (int)checkSignature;	// 0x33c7c13d
- (int)checkSignatureAgainstCurrentDate;	// 0x33c7c185
- (int)checkSignatureSkipRevocation;	// 0x33c7c161
- (void)dealloc;	// 0x33c7bf25
// declared property getter: - (id)developerID;	// 0x33c7c53d
// declared property getter: - (id)downloadID;	// 0x33c7c4d9
// declared property getter: - (id)dsid;	// 0x33c7c501
// declared property getter: - (id)expirationDate;	// 0x33c7c5a1
// declared property getter: - (id)frToolVersion;	// 0x33c7c565
// declared property getter: - (id)hwtype;	// 0x33c7c515
// declared property getter: - (id)installerVersionID;	// 0x33c7c551
// declared property getter: - (BOOL)isProductionReceipt;	// 0x33c7c3e5
// declared property getter: - (BOOL)isRevoked;	// 0x33c7c41d
// declared property getter: - (BOOL)isVPPLicensed;	// 0x33c7c435
- (BOOL)isValid;	// 0x33c7c1a9
// declared property getter: - (id)organizationDisplayName;	// 0x33c7c5b5
// declared property getter: - (id)parentalControls;	// 0x33c7c4c5
// declared property getter: - (id)purchaseDate;	// 0x33c7c49d
// declared property getter: - (id)purchaseDateString;	// 0x33c7c4b1
// declared property getter: - (id)receiptCreationDate;	// 0x33c7c529
// declared property getter: - (id)receiptData;	// 0x33c7c461
// declared property getter: - (id)receiptDataString;	// 0x33c7c385
// declared property getter: - (id)receiptType;	// 0x33c7c44d
// declared property getter: - (id)renewalDate;	// 0x33c7c579
// declared property getter: - (id)renewalDateString;	// 0x33c7c58d
- (BOOL)validateAndCheckGUIDSeparately:(BOOL *)separately;	// 0x33c7c279
- (BOOL)validateAndCheckGUIDSepately:(BOOL *)sepately;	// 0x33c7c261
@end
