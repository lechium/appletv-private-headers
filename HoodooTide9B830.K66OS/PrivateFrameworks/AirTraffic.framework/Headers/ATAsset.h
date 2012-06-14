/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

#import <NSObject.h> // Unknown library

@class NSString, NSError, ATStoreInfo, NSDictionary, NSURL;

@interface ATAsset : NSObject {
	NSString *_identifier;	// 4 = 0x4
	NSString *_dataclass;	// 8 = 0x8
	NSString *_assetType;	// 12 = 0xc
	NSDictionary *_variantOptions;	// 16 = 0x10
	NSString *_localPath;	// 20 = 0x14
	NSURL *_icon;	// 24 = 0x18
	NSString *_prettyName;	// 28 = 0x1c
	BOOL _isDownload;	// 32 = 0x20
	BOOL _isRestore;	// 33 = 0x21
	BOOL _bypassStore;	// 34 = 0x22
	BOOL _installOnly;	// 35 = 0x23
	BOOL _readyForStore;	// 36 = 0x24
	long long _storePID;	// 40 = 0x28
	id _storeCompletion;	// 48 = 0x30
	id _storeProgress;	// 52 = 0x34
	ATStoreInfo *_storeInfo;	// 56 = 0x38
	NSString *_storePlist;	// 60 = 0x3c
	NSString *_infoPlist;	// 64 = 0x40
	NSError *_error;	// 68 = 0x44
}
@property(retain, nonatomic) NSString *assetType;	// G=0x3609a7a1; S=0x3609a7b1; @synthesize=_assetType
@property(assign, nonatomic) BOOL bypassStore;	// G=0x3609a8b1; S=0x3609a8c1; @synthesize=_bypassStore
@property(retain, nonatomic) NSString *dataclass;	// G=0x3609a76d; S=0x3609a77d; @synthesize=_dataclass
@property(retain, nonatomic) NSError *error;	// G=0x3609aa4d; S=0x3609aa5d; @synthesize=_error
@property(retain, nonatomic) NSURL *icon;	// G=0x3609a93d; S=0x3609a94d; @synthesize=_icon
@property(retain, nonatomic) NSString *identifier;	// G=0x3609a739; S=0x3609a749; @synthesize=_identifier
@property(retain, nonatomic) NSString *infoPlist;	// G=0x3609aa19; S=0x3609aa29; @synthesize=_infoPlist
@property(assign, nonatomic) BOOL installOnly;	// G=0x3609a8d1; S=0x3609a8e1; @synthesize=_installOnly
@property(assign, nonatomic) BOOL isDownload;	// G=0x3609a871; S=0x3609a881; @synthesize=_isDownload
@property(assign, nonatomic) BOOL isRestore;	// G=0x3609a891; S=0x3609a8a1; @synthesize=_isRestore
@property(retain, nonatomic) NSString *path;	// G=0x3609a809; S=0x3609a819; @synthesize=_localPath
@property(retain, nonatomic) NSString *prettyName;	// G=0x3609a83d; S=0x3609a84d; @synthesize=_prettyName
@property(assign, nonatomic) BOOL readyForStore;	// G=0x3609a8f1; S=0x3609a901; @synthesize=_readyForStore
@property(assign, nonatomic) id storeCompletion;	// G=0x3609a971; S=0x3609a981; @synthesize=_storeCompletion
@property(retain, nonatomic) ATStoreInfo *storeInfo;	// G=0x3609a9b1; S=0x3609a9c1; @synthesize=_storeInfo
@property(assign, nonatomic) long long storePID;	// G=0x3609a911; S=0x3609a929; @synthesize=_storePID
@property(retain, nonatomic) NSString *storePlist;	// G=0x3609a9e5; S=0x3609a9f5; @synthesize=_storePlist
@property(assign, nonatomic) id storeProgress;	// G=0x3609a991; S=0x3609a9a1; @synthesize=_storeProgress
@property(retain, nonatomic) NSDictionary *variantOptions;	// G=0x3609a7d5; S=0x3609a7e5; @synthesize=_variantOptions
+ (id)downloadAssetWithIdentifier:(id)identifier dataclass:(id)dataclass prettyName:(id)name;	// 0x3609a369
+ (id)uploadAssetWithIdentifier:(id)identifier dataclass:(id)dataclass sourcePath:(id)path prettyName:(id)name;	// 0x3609a419
// declared property getter: - (id)assetType;	// 0x3609a7a1
// declared property getter: - (BOOL)bypassStore;	// 0x3609a8b1
// declared property getter: - (id)dataclass;	// 0x3609a76d
- (void)dealloc;	// 0x3609a601
- (id)description;	// 0x3609a24d
// declared property getter: - (id)error;	// 0x3609aa4d
// declared property getter: - (id)icon;	// 0x3609a93d
// declared property getter: - (id)identifier;	// 0x3609a739
// declared property getter: - (id)infoPlist;	// 0x3609aa19
// declared property getter: - (BOOL)installOnly;	// 0x3609a8d1
- (void)invokeStoreCompletion;	// 0x3609a5b5
// declared property getter: - (BOOL)isDownload;	// 0x3609a871
// declared property getter: - (BOOL)isRestore;	// 0x3609a891
- (id)manifestEntry;	// 0x3609a4e1
// declared property getter: - (id)path;	// 0x3609a809
// declared property getter: - (id)prettyName;	// 0x3609a83d
// declared property getter: - (BOOL)readyForStore;	// 0x3609a8f1
// declared property setter: - (void)setAssetType:(id)type;	// 0x3609a7b1
// declared property setter: - (void)setBypassStore:(BOOL)store;	// 0x3609a8c1
// declared property setter: - (void)setDataclass:(id)dataclass;	// 0x3609a77d
// declared property setter: - (void)setError:(id)error;	// 0x3609aa5d
// declared property setter: - (void)setIcon:(id)icon;	// 0x3609a94d
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x3609a749
// declared property setter: - (void)setInfoPlist:(id)plist;	// 0x3609aa29
// declared property setter: - (void)setInstallOnly:(BOOL)only;	// 0x3609a8e1
// declared property setter: - (void)setIsDownload:(BOOL)download;	// 0x3609a881
// declared property setter: - (void)setIsRestore:(BOOL)restore;	// 0x3609a8a1
// declared property setter: - (void)setPath:(id)path;	// 0x3609a819
// declared property setter: - (void)setPrettyName:(id)name;	// 0x3609a84d
// declared property setter: - (void)setReadyForStore:(BOOL)store;	// 0x3609a901
// declared property setter: - (void)setStoreCompletion:(id)completion;	// 0x3609a981
// declared property setter: - (void)setStoreInfo:(id)info;	// 0x3609a9c1
// declared property setter: - (void)setStorePID:(long long)pid;	// 0x3609a929
// declared property setter: - (void)setStorePlist:(id)plist;	// 0x3609a9f5
// declared property setter: - (void)setStoreProgress:(id)progress;	// 0x3609a9a1
// declared property setter: - (void)setVariantOptions:(id)options;	// 0x3609a7e5
// declared property getter: - (id)storeCompletion;	// 0x3609a971
// declared property getter: - (id)storeInfo;	// 0x3609a9b1
// declared property getter: - (long long)storePID;	// 0x3609a911
// declared property getter: - (id)storePlist;	// 0x3609a9e5
// declared property getter: - (id)storeProgress;	// 0x3609a991
// declared property getter: - (id)variantOptions;	// 0x3609a7d5
@end
