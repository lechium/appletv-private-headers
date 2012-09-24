/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSOperationQueue, NSDictionary;

@interface TIResourcePathManager : NSObject {
	void *_mobileAssetFrameworkFileHandle;	// 4 = 0x4
	NSMutableDictionary *_resourcePaths;	// 8 = 0x8
	NSOperationQueue *_operationQueue;	// 12 = 0xc
	NSDictionary *_inputModeAssets;	// 16 = 0x10
}
@property(retain, nonatomic) NSDictionary *inputModeAssets;	// G=0x377a2609; S=0x377a2619; @synthesize=_inputModeAssets
@property(readonly, assign, nonatomic) NSOperationQueue *operationQueue;	// G=0x377a25f9; @synthesize=_operationQueue
+ (id)sharedInstance;	// 0x377a1361
- (id)init;	// 0x377a13cd
- (id)assetQueryForType:(id)type;	// 0x377a1b0d
- (void)clearPathsForType:(int)type;	// 0x377a1821
- (void)dealloc;	// 0x377a157d
- (void)didFetchAssets;	// 0x377a1bf1
- (void)fetchAssets;	// 0x377a1c05
- (oneway void)fetchAssetsForQueryResults:(id)queryResults withError:(id)error updatingArray:(id)array continuation:(id)continuation;	// 0x377a23cd
- (oneway void)fetchAssetsWithName:(id)name continuation:(id)continuation;	// 0x377a2355
- (oneway void)fetchAssetsWithNames:(id)names forInputModes:(id)inputModes updatingDictionary:(id)dictionary continuation:(id)continuation;	// 0x377a20bd
- (oneway void)handleUninstalledAsset:(id)asset withError:(id)error continuation:(id)continuation;	// 0x377a25f1
// declared property getter: - (id)inputModeAssets;	// 0x377a2609
- (BOOL)loadMobileAssetLibrary;	// 0x377a1a55
- (id)mobileAssetConstant:(const char *)constant;	// 0x377a1ac1
// declared property getter: - (id)operationQueue;	// 0x377a25f9
- (id)pathsOfType:(int)type;	// 0x377a1641
- (void)postNotification:(id)notification;	// 0x377a1921
- (void)postNotification:(id)notification forType:(int)type;	// 0x377a19a9
- (void)postNotificationForType:(int)type;	// 0x377a1a39
- (void)pushPath:(id)path forType:(int)type;	// 0x377a1771
- (void)resendNotification:(id)notification;	// 0x377a1885
// declared property setter: - (void)setInputModeAssets:(id)assets;	// 0x377a2619
- (void)setupMobileAssets;	// 0x377a156d
- (void)setupNotifications;	// 0x377a1495
- (void)unloadMobileAssetLibrary;	// 0x377a1a9d
- (id)versionString;	// 0x377a1add
@end
