/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "MSBackoffManagerDelegate.h"
#import "MSASAssetUploaderDelegate.h"
#import "MSASAssetDownloaderDelegate.h"
#import <NSObject.h> // Unknown library

@class NSDictionary, MSBackoffManager, MSImageScalingSpecification, MSASAssetUploader, MSASAssetDownloader, MSAlbumSharingDaemon, NSMutableArray, NSString, MSASPersonModel, MSASProtocol;
@protocol OS_dispatch_queue;

@interface MSASStateMachine : NSObject <MSBackoffManagerDelegate, MSASAssetUploaderDelegate, MSASAssetDownloaderDelegate> {
	int _commandState;	// 4 = 0x4
	MSASPersonModel *_model;	// 8 = 0x8
	NSString *_currentCommand;	// 12 = 0xc
	long long _currentCommandID;	// 16 = 0x10
	NSDictionary *_currentCommandParams;	// 24 = 0x18
	MSBackoffManager *_metadataBackoffManager;	// 28 = 0x1c
	MSBackoffManager *_MMCSBackoffManager;	// 32 = 0x20
	MSASAssetUploader *_assetUploader;	// 36 = 0x24
	MSASAssetDownloader *_assetDownloader;	// 40 = 0x28
	MSAlbumSharingDaemon *_daemon;	// 44 = 0x2c
	NSString *_personID;	// 48 = 0x30
	id _delegate;	// 52 = 0x34
	int _maxMetadataRetryCount;	// 56 = 0x38
	NSDictionary *_serverSideConfiguration;	// 60 = 0x3c
	NSString *_serverSideConfigurationVersion;	// 64 = 0x40
	NSString *_focusAlbumGUID;	// 68 = 0x44
	NSString *_focusAssetCollectionGUID;	// 72 = 0x48
	BOOL _isRetryingOutstandingActivities;	// 76 = 0x4c
	NSMutableArray *_assetInfoToReauthForDownload;	// 80 = 0x50
	id _stopHandlerBlock;	// 84 = 0x54
	MSASProtocol *_protocol;	// 88 = 0x58
	MSImageScalingSpecification *_derivativeImageScalingSpecification;	// 92 = 0x5c
	MSImageScalingSpecification *_thumbnailImageScalingSpecification;	// 96 = 0x60
	BOOL _hasShutDown;	// 100 = 0x64
	NSDictionary *_metadataBackoffManagerParameters;	// 104 = 0x68
	NSDictionary *_MMCSBackoffManagerParameters;	// 108 = 0x6c
	NSObject<OS_dispatch_queue> *_serverSideConfigQueue;	// 112 = 0x70
	NSObject<OS_dispatch_queue> *_eventQueue;	// 116 = 0x74
	NSObject<OS_dispatch_queue> *_memberQueue;	// 120 = 0x78
	id _postCommandCompletionBlock;	// 124 = 0x7c
	NSObject<OS_dispatch_queue> *_workQueue;	// 128 = 0x80
}
@property(retain, nonatomic) NSDictionary *MMCSBackoffManagerParameters;	// G=0x33988a31; S=0x33988a41; @synthesize=_MMCSBackoffManagerParameters
@property(retain, nonatomic, setter=_setAssetInfoToReauthForDownload:) NSMutableArray *_assetInfoToReauthForDownload;	// G=0x339888e5; S=0x339888f5; @synthesize
@property(copy, nonatomic, setter=_setStopHandlerBlock:) id _stopHandlerBlock;	// G=0x3398891d; S=0x33988931; @synthesize
@property(assign, nonatomic) __weak MSAlbumSharingDaemon *daemon;	// G=0x339887f9; S=0x339603fd; @synthesize=_daemon
@property(assign, nonatomic) __weak id delegate;	// G=0x33988851; S=0x33988871; @synthesize=_delegate
@property(retain, nonatomic) MSImageScalingSpecification *derivativeImageScalingSpecification;	// G=0x33988969; S=0x33988979; @synthesize=_derivativeImageScalingSpecification
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *eventQueue;	// G=0x33988aa1; S=0x33988ab1; @synthesize=_eventQueue
@property(retain, nonatomic) NSString *focusAlbumGUID;	// G=0x339888a5; S=0x33960521; @synthesize=_focusAlbumGUID
@property(retain, nonatomic) NSString *focusAssetCollectionGUID;	// G=0x339888b5; S=0x33960639; @synthesize=_focusAssetCollectionGUID
@property(assign, nonatomic) BOOL hasShutDown;	// G=0x339889d9; S=0x339889e9; @synthesize=_hasShutDown
@property(assign, nonatomic) BOOL isRetryingOutstandingActivities;	// G=0x339888c5; S=0x339888d5; @synthesize=_isRetryingOutstandingActivities
@property(assign, nonatomic) int maxMetadataRetryCount;	// G=0x33988885; S=0x33988895; @synthesize=_maxMetadataRetryCount
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue;	// G=0x33988ad9; S=0x33988ae9; @synthesize=_memberQueue
@property(retain, nonatomic) NSDictionary *metadataBackoffManagerParameters;	// G=0x339889f9; S=0x33988a09; @synthesize=_metadataBackoffManagerParameters
@property(retain, nonatomic) NSString *personID;	// G=0x33988819; S=0x33988829; @synthesize=_personID
@property(copy, nonatomic) id postCommandCompletionBlock;	// G=0x33988b11; S=0x33988b25; @synthesize=_postCommandCompletionBlock
@property(retain, nonatomic) MSASProtocol *protocol;	// G=0x3395ce35; S=0x33988941; @synthesize=_protocol
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serverSideConfigQueue;	// G=0x33988a69; S=0x33988a79; @synthesize=_serverSideConfigQueue
@property(retain, nonatomic) NSDictionary *serverSideConfiguration;	// G=0x33961a21; S=0x33961f79; @synthesize=_serverSideConfiguration
@property(readonly, assign, nonatomic) NSString *serverSideConfigurationVersion;	// G=0x33961bf1; @synthesize=_serverSideConfigurationVersion
@property(retain, nonatomic) MSImageScalingSpecification *thumbnailImageScalingSpecification;	// G=0x339889a1; S=0x339889b1; @synthesize=_thumbnailImageScalingSpecification
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;	// G=0x33988b35; S=0x33988b45; @synthesize=_workQueue
- (id)init;	// 0x3395d2dd
- (id)initWithPersonID:(id)personID;	// 0x3395d33d
- (id)initWithPersonID:(id)personID eventQueue:(id)queue;	// 0x3395d36d
- (void).cxx_destruct;	// 0x33988b6d
// declared property getter: - (id)MMCSBackoffManagerParameters;	// 0x33988a31
- (void)MSASAssetDownloader:(id)downloader didFinishDownloadingAsset:(id)asset inAlbum:(id)album error:(id)error;	// 0x339864b5
- (void)MSASAssetDownloader:(id)downloader willBeginBatchCount:(unsigned)count;	// 0x339863e5
- (void)MSASAssetDownloaderDidFinishBatch:(id)msasassetDownloader;	// 0x33988481
- (void)MSASAssetUploader:(id)uploader didFinishUploadingAssetCollection:(id)collection intoAlbum:(id)album error:(id)error;	// 0x339858f9
- (void)MSBackoffManagerDidUpdateNextExpiryDate:(id)msbackoffManager;	// 0x33962fc5
- (id)_URLReauthFailureWithUnderlyingError:(id)underlyingError;	// 0x33966121
- (void)_addAssetCollectionsDisposition:(int)disposition params:(id)params;	// 0x3397aba9
- (void)_addCommentDisposition:(int)disposition params:(id)params;	// 0x33983775
- (void)_addSharingRelationshipsDisposition:(int)disposition params:(id)params;	// 0x33981089
- (id)_assetCollectionRejectedError;	// 0x33966ae9
- (id)_assetDownloader;	// 0x3395d0e9
// declared property getter: - (id)_assetInfoToReauthForDownload;	// 0x339888e5
- (id)_assetUploader;	// 0x3395d0d5
- (void)_cancelOutstandingCommandsDisposition:(int)disposition params:(id)params;	// 0x339608f9
- (id)_canceledError;	// 0x33966949
- (void)_checkForAlbumSyncedStateDisposition:(int)albumSyncedStateDisposition params:(id)params;	// 0x33971705
- (void)_checkForAssetCollectionUpdatesDisposition:(int)assetCollectionUpdatesDisposition params:(id)params;	// 0x3396e385
- (void)_checkForChangesDisposition:(int)changesDisposition params:(id)params;	// 0x33967089
- (void)_checkForCommentChangesDisposition:(int)commentChangesDisposition params:(id)params;	// 0x3396fe01
- (void)_checkForUpdatesInAlbumDisposition:(int)albumDisposition params:(id)params;	// 0x33968b2d
- (void)_continueAddingAssetCollectionsDisposition:(int)disposition params:(id)params;	// 0x3397ba31
- (void)_createAlbumDisposition:(int)disposition params:(id)params;	// 0x339786c9
- (id)_createHardlinkedOrCopiedAssetsInAssetCollections:(id)assetCollections;	// 0x3397a44d
- (void)_deleteAlbumDisposition:(int)disposition params:(id)params;	// 0x33974f2d
- (void)_deleteAssetCollectionsDisposition:(int)disposition params:(id)params;	// 0x33975ec5
- (void)_deleteAssetFilesInAssetCollection:(id)assetCollection;	// 0x339854d5
- (void)_deleteAssetFilesInAssetCollections:(id)assetCollections;	// 0x33985835
- (void)_deleteCommentDisposition:(int)disposition params:(id)params;	// 0x339773c5
- (void)_didFinishCheckingUpdatesInAlbumsDisposition:(int)albumsDisposition params:(id)params;	// 0x3396a665
- (void)_getAccessControlsDisposition:(int)disposition params:(id)params;	// 0x3396adb1
- (void)_getAlbumURLDisposition:(int)disposition params:(id)params;	// 0x339661c9
- (id)_metadataBackoffManager;	// 0x3395d0fd
- (id)_model;	// 0x3395d0c1
- (void)_removeSharingRelationshipsDisposition:(int)disposition params:(id)params;	// 0x339822e9
- (void)_scheduleEventDisposition:(int)disposition params:(id)params;	// 0x33984de5
- (void)_sendGetServerSideConfigurationDisposition:(int)disposition params:(id)params;	// 0x33962385
- (void)_sendPutAssetCollectionsDisposition:(int)disposition params:(id)params;	// 0x3397ec51
- (void)_sendReauthorizeAssetsForDownloadDisposition:(int)downloadDisposition params:(id)params;	// 0x33986a6d
- (void)_sendUploadCompleteDisposition:(int)disposition params:(id)params;	// 0x3397c8a1
- (id)_serverSideConfigDictionaryByApplyingDefaultsToDictionary:(id)dictionary;	// 0x339616d9
- (void)_setAlbumSyncedStateDisposition:(int)disposition params:(id)params;	// 0x33972bdd
- (void)_setAssetCollectionSyncedStateDisposition:(int)disposition params:(id)params;	// 0x33973f2d
// declared property setter: - (void)_setAssetInfoToReauthForDownload:(id)download;	// 0x339888f5
// declared property setter: - (void)_setStopHandlerBlock:(id)block;	// 0x33988931
// declared property getter: - (id)_stopHandlerBlock;	// 0x3398891d
- (id)_stoppedError;	// 0x33966a19
- (void)_subscribeToAlbumDisposition:(int)albumDisposition params:(id)params;	// 0x3396bfa1
- (void)_unsubscribeFromAlbumDisposition:(int)albumDisposition params:(id)params;	// 0x3396cf99
- (void)_updateAlbumDisposition:(int)disposition params:(id)params;	// 0x339796b1
- (void)_workQueueEmptyFileTransferQueuesCompletionBlock:(id)block;	// 0x3395ec59
- (void)acceptInvitationWithToken:(id)token info:(id)info completionBlock:(id)block;	// 0x3396dc9d
- (void)addAssetCollections:(id)collections toAlbum:(id)album info:(id)info;	// 0x3397a7e1
- (void)addComments:(id)comments toAssetCollection:(id)assetCollection inAlbum:(id)album info:(id)info;	// 0x339832c5
- (void)addSharingRelationships:(id)relationships toOwnedAlbum:(id)ownedAlbum info:(id)info;	// 0x33980d69
- (int)assetsInDownloadQueueCount;	// 0x3395e72d
- (void)cancelCompletionBlock:(id)block;	// 0x3395faad
- (void)cancelOutstandingCommandsForAlbumWithGUID:(id)guid;	// 0x33960751
- (void)cancelOutstandingCommandsForAssetCollectionWithGUID:(id)guid;	// 0x33960825
- (void)checkForAlbumSyncedStateChangesInAlbums:(id)albums info:(id)info;	// 0x33971331
- (void)checkForAssetCollectionUpdates:(id)assetCollectionUpdates inAlbum:(id)album info:(id)info;	// 0x3396e039
- (void)checkForChangesInfo:(id)changesInfo;	// 0x33966bb9
- (void)checkForChangesResetSync:(BOOL)changesResetSync info:(id)info;	// 0x33966bcd
- (void)checkForCommentChangesInAssetCollection:(id)assetCollection inAlbum:(id)album lastCommentID:(id)anId info:(id)info;	// 0x3396fa4d
- (void)checkForUpdatesInAlbums:(id)albums resetSync:(BOOL)sync info:(id)info;	// 0x33968605
- (void)continueAddingAssetCollections:(id)collections skipAssetCollections:(id)collections2 toAlbum:(id)album info:(id)info;	// 0x3397b40d
- (void)createAlbum:(id)album info:(id)info;	// 0x3397849d
// declared property getter: - (id)daemon;	// 0x339887f9
- (void)dealloc;	// 0x3395e701
// declared property getter: - (id)delegate;	// 0x33988851
- (void)deleteAlbum:(id)album info:(id)info;	// 0x33974d01
- (void)deleteAssetCollections:(id)collections inAlbum:(id)album info:(id)info;	// 0x33975c51
- (void)deleteComments:(id)comments inAssetCollection:(id)assetCollection inAlbum:(id)album info:(id)info;	// 0x33976f15
// declared property getter: - (id)derivativeImageScalingSpecification;	// 0x33988969
// declared property getter: - (id)eventQueue;	// 0x33988aa1
// declared property getter: - (id)focusAlbumGUID;	// 0x339888a5
// declared property getter: - (id)focusAssetCollectionGUID;	// 0x339888b5
- (void)getAccessControlsForAlbums:(id)albums info:(id)info;	// 0x3396a9dd
- (BOOL)hasEnqueuedActivities;	// 0x33963821
// declared property getter: - (BOOL)hasShutDown;	// 0x339889d9
- (BOOL)isInRetryState;	// 0x33963695
// declared property getter: - (BOOL)isRetryingOutstandingActivities;	// 0x339888c5
- (id)latestNextActivityDate;	// 0x33962a8d
// declared property getter: - (int)maxMetadataRetryCount;	// 0x33988885
// declared property getter: - (id)memberQueue;	// 0x33988ad9
- (id)memberQueueMetadataBackoffManager;	// 0x3395d2c9
// declared property getter: - (id)metadataBackoffManagerParameters;	// 0x339889f9
- (id)persistentObjectForKey:(id)key;	// 0x33963501
// declared property getter: - (id)personID;	// 0x33988819
// declared property getter: - (id)postCommandCompletionBlock;	// 0x33988b11
// declared property getter: - (id)protocol;	// 0x3395ce35
- (void)purgeEverythingCompletionBlock:(id)block;	// 0x3395f925
- (void)refreshServerSideConfig;	// 0x3396225d
- (void)removeSharingRelationships:(id)relationships fromOwnedAlbum:(id)ownedAlbum info:(id)info;	// 0x33981fc9
- (void)retrieveAssets:(id)assets inAlbum:(id)album;	// 0x33985f4d
- (void)retryOutstandingActivities;	// 0x339638e5
- (void)scheduleEvent:(id)event assetCollectionGUID:(id)guid albumGUID:(id)guid3 info:(id)info;	// 0x33984a61
// declared property getter: - (id)serverSideConfigQueue;	// 0x33988a69
// declared property getter: - (id)serverSideConfiguration;	// 0x33961a21
// declared property getter: - (id)serverSideConfigurationVersion;	// 0x33961bf1
- (id)serverSideQueueServerSideConfiguration;	// 0x33961dbd
- (void)serverSideQueueSetServerSideConfiguration:(id)configuration;	// 0x33962055
- (void)setAlbumSyncedState:(id)state forAlbum:(id)album info:(id)info;	// 0x339728a1
- (void)setAssetCollectionSyncedState:(id)state forAssetCollection:(id)assetCollection album:(id)album info:(id)info;	// 0x33973b79
// declared property setter: - (void)setDaemon:(id)daemon;	// 0x339603fd
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x33988871
// declared property setter: - (void)setDerivativeImageScalingSpecification:(id)specification;	// 0x33988979
// declared property setter: - (void)setEventQueue:(id)queue;	// 0x33988ab1
// declared property setter: - (void)setFocusAlbumGUID:(id)guid;	// 0x33960521
// declared property setter: - (void)setFocusAssetCollectionGUID:(id)guid;	// 0x33960639
// declared property setter: - (void)setHasShutDown:(BOOL)down;	// 0x339889e9
// declared property setter: - (void)setIsRetryingOutstandingActivities:(BOOL)activities;	// 0x339888d5
// declared property setter: - (void)setMMCSBackoffManagerParameters:(id)parameters;	// 0x33988a41
// declared property setter: - (void)setMaxMetadataRetryCount:(int)count;	// 0x33988895
// declared property setter: - (void)setMemberQueue:(id)queue;	// 0x33988ae9
// declared property setter: - (void)setMetadataBackoffManagerParameters:(id)parameters;	// 0x33988a09
- (void)setPersistentObject:(id)object forKey:(id)key;	// 0x33963561
// declared property setter: - (void)setPersonID:(id)anId;	// 0x33988829
// declared property setter: - (void)setPostCommandCompletionBlock:(id)block;	// 0x33988b25
// declared property setter: - (void)setProtocol:(id)protocol;	// 0x33988941
- (void)setPublicAccessEnabled:(BOOL)enabled forAlbum:(id)album info:(id)info completionBlock:(id)block;	// 0x339850cd
// declared property setter: - (void)setServerSideConfigQueue:(id)queue;	// 0x33988a79
// declared property setter: - (void)setServerSideConfiguration:(id)configuration;	// 0x33961f79
// declared property setter: - (void)setThumbnailImageScalingSpecification:(id)specification;	// 0x339889b1
// declared property setter: - (void)setWorkQueue:(id)queue;	// 0x33988b45
- (void)shutDownCompletionBlock:(id)block;	// 0x3395ed4d
- (void)start;	// 0x3395eb91
- (void)stopAssetDownloadsCompletionBlock:(id)block;	// 0x3395f975
- (void)subscribeToAlbum:(id)album info:(id)info;	// 0x3396bcad
// declared property getter: - (id)thumbnailImageScalingSpecification;	// 0x339889a1
- (void)unsubscribeFromAlbum:(id)album info:(id)info;	// 0x3396cca5
- (void)updateAlbum:(id)album updateAlbumFlags:(int)flags info:(id)info;	// 0x33979435
// declared property getter: - (id)workQueue;	// 0x33988b35
- (void)workQueueApplyServerSideConfiguration;	// 0x3395e769
- (void)workQueueCancelAllCommandsFilteredByAlbumGUID:(id)guid assetCollectionGUID:(id)guid2;	// 0x3395fba1
- (void)workQueueCancelCompletionBlock:(id)block;	// 0x3395fecd
- (void)workQueueCheckForNextCommand;	// 0x33963a99
- (void)workQueueDidFailToFinishCommandDueToTemporaryError:(id)workQueue;	// 0x33964e11
- (void)workQueueDidFinishCommand;	// 0x33964711
- (void)workQueueDidFinishCommandByLeavingCommandInQueue;	// 0x33965069
- (void)workQueueDidFinishCommandByReplacingCurrentCommandWithCommand:(id)workQueue params:(id)params personID:(id)anId albumGUID:(id)guid assetCollectionGUID:(id)guid5;	// 0x3396496d
- (void)workQueueDidFinishCommandDueToCancellation;	// 0x33965329
- (BOOL)workQueueEndCommandWithError:(id)error command:(id)command params:(id)params albumGUID:(id)guid assetCollectionGUID:(id)guid5;	// 0x33965551
- (void)workQueuePerformNextCommand;	// 0x33963f69
- (void)workQueueRefreshServerSideConfig;	// 0x339622f9
- (void)workQueueRetryOutstandingActivities;	// 0x33963981
- (void)workQueueScheduleReauthForAssets:(id)assets inAlbum:(id)album;	// 0x33986845
- (void)workQueueUpdateNextActivityDate;	// 0x33962e19
@end
