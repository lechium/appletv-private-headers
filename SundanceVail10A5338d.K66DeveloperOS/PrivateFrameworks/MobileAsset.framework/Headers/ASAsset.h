/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MobileAsset.framework/MobileAsset
 */

#import "MobileAsset-Structs.h"
#import <NSObject.h> // Unknown library

@class NSURL, NSString, NSDictionary;

@interface ASAsset : NSObject {
	NSString *_assetType;	// 4 = 0x4
	NSDictionary *_attributes;	// 8 = 0x8
	NSDictionary *_downloadOptions;	// 12 = 0xc
	NSString *_clientName;	// 16 = 0x10
	NSString *_identifier;	// 20 = 0x14
	id _progressHandler;	// 24 = 0x18
	MobileAsset *_cfAsset;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) NSString *assetType;	// G=0x33dd6485; @synthesize=_assetType
@property(readonly, assign, nonatomic) NSDictionary *attributes;	// G=0x33dd5635; 
@property(retain, nonatomic) NSString *clientName;	// G=0x33dd656d; S=0x33dd65a5; 
@property(retain, nonatomic) NSDictionary *downloadOptions;	// G=0x33dd6465; S=0x33dd6475; @synthesize=_downloadOptions
@property(readonly, assign, nonatomic) NSDictionary *fullAttributes;	// G=0x33dd65e9; 
@property(assign, nonatomic) int garbageCollectionBehavior;	// G=0x33dd586d; S=0x33dd5945; 
@property(readonly, retain) NSString *identifier;	// G=0x33dd6675; converted property
@property(readonly, assign, nonatomic) NSURL *localURL;	// G=0x33dd5619; 
@property(copy, nonatomic) id progressHandler;	// G=0x33dd6441; S=0x33dd6455; @synthesize=_progressHandler
@property(readonly, assign, nonatomic) int state;	// G=0x33dd5775; 
- (id)initWithAssetType:(id)assetType attributes:(id)attributes;	// 0x33dd6495
- (void)_downloadWithOptions:(id)options shouldFireCallback:(BOOL)callback;	// 0x33dd59f5
- (id)_getLocalAttribute:(id)attribute;	// 0x33dd6371
- (void)adjustDownloadOptions:(id)options completion:(id)completion;	// 0x33dd59d1
// declared property getter: - (id)assetType;	// 0x33dd6485
// declared property getter: - (id)attributes;	// 0x33dd5635
- (void)beginDownloadWithOptions:(id)options;	// 0x33dd5ecd
- (void)cancelDownload:(id)download;	// 0x33dd6121
- (BOOL)cancelDownloadAndReturnError:(id *)error;	// 0x33dd61dd
// declared property getter: - (id)clientName;	// 0x33dd656d
- (void)dealloc;	// 0x33dd54f9
- (id)description;	// 0x33dd55c5
// declared property getter: - (id)downloadOptions;	// 0x33dd6465
// declared property getter: - (id)fullAttributes;	// 0x33dd65e9
// declared property getter: - (int)garbageCollectionBehavior;	// 0x33dd586d
// converted property getter: - (id)identifier;	// 0x33dd6675
- (BOOL)isPresentOnDisk;	// 0x33dd67e9
// declared property getter: - (id)localURL;	// 0x33dd5619
- (MobileAsset *)mobileAsset;	// 0x33dd6361
- (void)pauseDownload:(id)download;	// 0x33dd5ee1
- (BOOL)pauseDownloadAndReturnError:(id *)error;	// 0x33dd5f9d
// declared property getter: - (id)progressHandler;	// 0x33dd6441
- (void)purge:(id)purge;	// 0x33dd6241
- (BOOL)purgeAndReturnError:(id *)error;	// 0x33dd62fd
- (BOOL)requiredDiskSpaceIsAvailable:(long long *)available error:(id *)error;	// 0x33dd5991
- (void)resumeDownload:(id)download;	// 0x33dd6001
- (BOOL)resumeDownloadAndReturnError:(id *)error;	// 0x33dd60bd
// declared property setter: - (void)setClientName:(id)name;	// 0x33dd65a5
// declared property setter: - (void)setDownloadOptions:(id)options;	// 0x33dd6475
// declared property setter: - (void)setGarbageCollectionBehavior:(int)behavior;	// 0x33dd5945
// declared property setter: - (void)setProgressHandler:(id)handler;	// 0x33dd6455
// declared property getter: - (int)state;	// 0x33dd5775
@end

