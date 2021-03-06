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
@property(retain, nonatomic) NSDictionary *inputModeAssets;	// G=0x334c8309; S=0x334c8319; @synthesize=_inputModeAssets
@property(readonly, assign, nonatomic) NSOperationQueue *operationQueue;	// G=0x334c82f9; @synthesize=_operationQueue
+ (id)sharedInstance;	// 0x334c7061
- (id)init;	// 0x334c70cd
- (id)assetQueryForType:(id)type;	// 0x334c780d
- (void)clearPathsForType:(int)type;	// 0x334c7521
- (void)dealloc;	// 0x334c727d
- (void)didFetchAssets;	// 0x334c78f1
- (void)fetchAssets;	// 0x334c7905
- (oneway void)fetchAssetsForQueryResults:(id)queryResults withError:(id)error updatingArray:(id)array continuation:(id)continuation;	// 0x334c80cd
- (oneway void)fetchAssetsWithName:(id)name continuation:(id)continuation;	// 0x334c8055
- (oneway void)fetchAssetsWithNames:(id)names forInputModes:(id)inputModes updatingDictionary:(id)dictionary continuation:(id)continuation;	// 0x334c7dbd
- (oneway void)handleUninstalledAsset:(id)asset withError:(id)error continuation:(id)continuation;	// 0x334c82f1
// declared property getter: - (id)inputModeAssets;	// 0x334c8309
- (BOOL)loadMobileAssetLibrary;	// 0x334c7755
- (id)mobileAssetConstant:(const char *)constant;	// 0x334c77c1
// declared property getter: - (id)operationQueue;	// 0x334c82f9
- (id)pathsOfType:(int)type;	// 0x334c7341
- (void)postNotification:(id)notification;	// 0x334c7621
- (void)postNotification:(id)notification forType:(int)type;	// 0x334c76a9
- (void)postNotificationForType:(int)type;	// 0x334c7739
- (void)pushPath:(id)path forType:(int)type;	// 0x334c7471
- (void)resendNotification:(id)notification;	// 0x334c7585
// declared property setter: - (void)setInputModeAssets:(id)assets;	// 0x334c8319
- (void)setupMobileAssets;	// 0x334c726d
- (void)setupNotifications;	// 0x334c7195
- (void)unloadMobileAssetLibrary;	// 0x334c779d
- (id)versionString;	// 0x334c77dd
@end

