/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MSASPlugin.h"
#import "MSASModelObserver.h"
#import "AppleTV-Structs.h"
#import "ATVDataClient.h"
#import "ATVPushNotificationListener.h"
#import "MSSubscriberDelegate.h"
#import "MSSubscriberPlugin.h"
#import "MSDeleterDelegate.h"
#import "MSDeleterPlugin.h"
#import "ATVCupidDaemonDelegate.h"

@class MSASServerSideModel, MSAlbumSharingDaemon, NSMutableArray, NSDictionary, ATVDataQuery, ATVCupidImageRetrievalTask, ATVCupidRemoveAssetTask, NSMutableDictionary, ATVCupidUpdateTask, NSString, MSMediaStreamDaemon, NSTimer;
@protocol MSSubscriber;

__attribute__((visibility("hidden")))
@interface ATVCupidDataClient : ATVDataClient <MSSubscriberDelegate, MSSubscriberPlugin, MSDeleterDelegate, MSDeleterPlugin, ATVPushNotificationListener, ATVCupidDaemonDelegate, MSASPlugin, MSASModelObserver> {
	NSDictionary *_manifest;	// 4 = 0x4
	NSDictionary *_manifestAssets;	// 8 = 0x8
	NSMutableArray *_queuedManifestAssets;	// 12 = 0xc
	NSMutableArray *_retrievingManifestAssets;	// 16 = 0x10
	NSMutableArray *_processingManifestAssets;	// 20 = 0x14
	NSMutableDictionary *_imageManagers;	// 24 = 0x18
	NSString *_baseCachePath;	// 28 = 0x1c
	BOOL _waitingForAuth;	// 32 = 0x20
	BOOL _pollingForUpdates;	// 33 = 0x21
	BOOL _authRequestedForUpdateRequest;	// 34 = 0x22
	BOOL _authRequestedForRetry;	// 35 = 0x23
	BOOL _processingUpdateRequest;	// 36 = 0x24
	BOOL _resetOccurred;	// 37 = 0x25
	ATVCupidUpdateTask *_updateTask;	// 40 = 0x28
	ATVCupidImageRetrievalTask *_imageRetrievalTask;	// 44 = 0x2c
	ATVCupidRemoveAssetTask *_removeAssetTask;	// 48 = 0x30
	unsigned long _processingInMemoryImageSize;	// 52 = 0x34
	unsigned long long _processingImageFileSize;	// 56 = 0x38
	sqlite3 *_db;	// 64 = 0x40
	NSTimer *_initiateRetryTimer;	// 68 = 0x44
	NSTimer *_retryTimer;	// 72 = 0x48
	NSTimer *_sharedStreamsEnableToggleTimer;	// 76 = 0x4c
	NSMutableArray *_queuedMSASModelAssets;	// 80 = 0x50
	BOOL _sharedCollectionsDataIsDirty;	// 84 = 0x54
	MSMediaStreamDaemon *_daemon;	// 88 = 0x58
	id _pendingQueryCompletionBlock;	// 92 = 0x5c
	BOOL _legacyCollectionsDataIsDirty;	// 96 = 0x60
	NSMutableArray *_cachedLegacyCollectionsData;	// 100 = 0x64
	MSASServerSideModel *_serverSideModel;	// 104 = 0x68
	float _legacyImageFetchDelay;	// 108 = 0x6c
	int _numberOfOutstandingDelayedFetchRequests;	// 112 = 0x70
	ATVDataQuery *_pendingQuery;	// 116 = 0x74
	id<MSSubscriber> _subscriber;	// 120 = 0x78
	int _currentLegacyImageFetchRate;	// 124 = 0x7c
	NSMutableArray *_cachedSharedCollectionsData;	// 128 = 0x80
	NSTimer *_legacyImageFetchDelayTimer;	// 132 = 0x84
	MSAlbumSharingDaemon *_sharingDaemon;	// 136 = 0x88
}
@property(retain) NSMutableArray *cachedLegacyCollectionsData;	// G=0xff8b9; S=0xff8cd; @synthesize=_cachedLegacyCollectionsData
@property(retain) NSMutableArray *cachedSharedCollectionsData;	// G=0xff999; S=0xff9ad; @synthesize=_cachedSharedCollectionsData
@property(assign, nonatomic) int currentLegacyImageFetchRate;	// G=0xff979; S=0xff989; @synthesize=_currentLegacyImageFetchRate
@property(readonly, assign) MSMediaStreamDaemon *daemon;	// G=0xff861; @synthesize=_daemon
@property(assign, nonatomic) BOOL legacyCollectionsDataIsDirty;	// G=0xff899; S=0xff8a9; @synthesize=_legacyCollectionsDataIsDirty
@property(assign, nonatomic) float legacyImageFetchDelay;	// G=0xff901; S=0xff911; @synthesize=_legacyImageFetchDelay
@property(assign, nonatomic, setter=_setlegacyImageFetchDelayTimer:) NSTimer *legacyImageFetchDelayTimer;	// G=0xff9bd; S=0xfc52d; @synthesize=_legacyImageFetchDelayTimer
@property(assign, nonatomic) int numberOfOutstandingDelayedFetchRequests;	// G=0xff921; S=0xff931; @synthesize=_numberOfOutstandingDelayedFetchRequests
@property(retain) ATVDataQuery *pendingQuery;	// G=0xff941; S=0xff955; @synthesize=_pendingQuery
@property(copy) id pendingQueryCompletionBlock;	// G=0xff875; S=0xff889; @synthesize=_pendingQueryCompletionBlock
@property(retain) NSMutableArray *queuedMSASModelAssets;	// G=0xff81d; S=0xff831; @synthesize=_queuedMSASModelAssets
@property(retain) MSASServerSideModel *serverSideModel;	// G=0xff8dd; S=0xff8f1; @synthesize=_serverSideModel
@property(assign, nonatomic) BOOL sharedCollectionsDataIsDirty;	// G=0xff841; S=0xff851; @synthesize=_sharedCollectionsDataIsDirty
@property(assign, nonatomic, setter=_setSharedStreamsEnableToggleTimer:) NSTimer *sharedStreamsEnableToggleTimer;	// G=0xff80d; S=0xfc4e9; @synthesize=_sharedStreamsEnableToggleTimer
@property(readonly, assign) MSAlbumSharingDaemon *sharingDaemon;	// G=0xff9cd; @synthesize=_sharingDaemon
@property(readonly, assign) id<MSSubscriber> subscriber;	// G=0xff965; @synthesize=_subscriber
+ (id)cupidDataClient;	// 0xfbaa1
+ (id)delegatePluginForPersonID:(id)personID;	// 0xff6a1
+ (id)deleterPluginForPersonID:(id)personID;	// 0xfdbcd
+ (id)personIDsForPollingTriggeredByPushNotification;	// 0xfcef1
+ (id)subscriberPluginForPersonID:(id)personID;	// 0xfceb9
- (id)init;	// 0xfbb39
- (void)MSASModel:(id)model didDeleteAllContentsOfAlbum:(id)album info:(id)info;	// 0xfe6a5
- (void)MSASModel:(id)model didFailToFindAssetsForAssetCollectionGUID:(id)assetCollectionGUID assetTypeFlags:(int)flags;	// 0xff645
- (void)MSASModel:(id)model didFindAccessControlChange:(id)change inAlbum:(id)album info:(id)info;	// 0xfe6a9
- (void)MSASModel:(id)model didFindAlbumMetadataChange:(id)change info:(id)info;	// 0xfe3dd
- (void)MSASModel:(id)model didFindAssetCollectionChange:(id)change inAlbum:(id)album info:(id)info;	// 0xfe6c1
- (void)MSASModel:(id)model didFindCommentChange:(id)change inAssetCollection:(id)assetCollection inAlbum:(id)album info:(id)info;	// 0xfe9c5
- (void)MSASModel:(id)model didFindDeletedAccessControls:(id)controls inAlbum:(id)album info:(id)info;	// 0xfe239
- (void)MSASModel:(id)model didFindDeletedAlbums:(id)albums info:(id)info;	// 0xfdd59
- (void)MSASModel:(id)model didFindDeletedAssetCollections:(id)collections inAlbum:(id)album info:(id)info;	// 0xfe1c5
- (void)MSASModel:(id)model didFindDeletedComments:(id)comments forAssetCollection:(id)assetCollection inAlbum:(id)album info:(id)info;	// 0xfe365
- (void)MSASModel:(id)model didFindDeletedInvitations:(id)invitations info:(id)info;	// 0xfe2cd
- (void)MSASModel:(id)model didFindInvitationChange:(id)change info:(id)info;	// 0xfe581
- (void)MSASModel:(id)model didFindLastViewedCommentDate:(id)date forAssetCollection:(id)assetCollection inAlbum:(id)album info:(id)info;	// 0xfef29
- (void)MSASModel:(id)model didFindNewAccessControls:(id)controls inAlbum:(id)album info:(id)info;	// 0xfe225
- (void)MSASModel:(id)model didFindNewAlbums:(id)albums info:(id)info;	// 0xfdc1d
- (void)MSASModel:(id)model didFindNewAssetCollections:(id)collections inAlbum:(id)album info:(id)info;	// 0xfdf5d
- (void)MSASModel:(id)model didFindNewComments:(id)comments forAssetCollection:(id)assetCollection inAlbum:(id)album info:(id)info;	// 0xfe33d
- (void)MSASModel:(id)model didFindNewInvitations:(id)invitations info:(id)info;	// 0xfe281
- (void)MSASModel:(id)model didFindPublicAccessSettingChange:(BOOL)change forAlbum:(id)album info:(id)info;	// 0xfe6bd
- (void)MSASModel:(id)model didFinishAcceptingInvitation:(id)invitation forAlbum:(id)album info:(id)info error:(id)error;	// 0xff039
- (void)MSASModel:(id)model didFinishAddingAccessControlEntry:(id)entry toAlbum:(id)album info:(id)info error:(id)error;	// 0xff031
- (void)MSASModel:(id)model didFinishAddingAlbum:(id)album info:(id)info error:(id)error;	// 0xfef81
- (void)MSASModel:(id)model didFinishAddingAssetCollection:(id)collection toAlbum:(id)album info:(id)info error:(id)error;	// 0xff13d
- (void)MSASModel:(id)model didFinishAddingComment:(id)comment toAssetCollection:(id)assetCollection inAlbum:(id)album info:(id)info error:(id)error;	// 0xff145
- (void)MSASModel:(id)model didFinishDeletingAlbum:(id)album info:(id)info error:(id)error;	// 0xfef89
- (void)MSASModel:(id)model didFinishDeletingAssetCollection:(id)collection fromAlbum:(id)album info:(id)info error:(id)error;	// 0xff141
- (void)MSASModel:(id)model didFinishDeletingComment:(id)comment fromAssetCollection:(id)assetCollection inAlbum:(id)album info:(id)info error:(id)error;	// 0xff149
- (void)MSASModel:(id)model didFinishMarkingAlbumAsViewed:(id)viewed info:(id)info error:(id)error;	// 0xfef8d
- (void)MSASModel:(id)model didFinishMarkingAssetCollection:(id)collection asViewedInAlbum:(id)album info:(id)info error:(id)error;	// 0xff14d
- (void)MSASModel:(id)model didFinishMarkingCommentsAsViewedInAssetCollection:(id)assetCollection inAlbum:(id)album info:(id)info error:(id)error;	// 0xff199
- (void)MSASModel:(id)model didFinishModifyingAlbumMetadata:(id)metadata info:(id)info error:(id)error;	// 0xfef85
- (void)MSASModel:(id)model didFinishRejectingInvitation:(id)invitation info:(id)info error:(id)error;	// 0xff04d
- (void)MSASModel:(id)model didFinishRemovingAccessControlEntry:(id)entry fromAlbum:(id)album info:(id)info error:(id)error;	// 0xff035
- (void)MSASModel:(id)model didFinishRetrievingAsset:(id)asset inAlbum:(id)album error:(id)error;	// 0xff1e9
- (void)MSASModel:(id)model didFinishSubscribingToAlbum:(id)album info:(id)info error:(id)error;	// 0xfefd9
- (void)MSASModel:(id)model didFinishUnsubscribingFromAlbum:(id)album info:(id)info error:(id)error;	// 0xfefed
- (void)MSASModel:(id)model didMarkAlbum:(id)album asHavingUnreadContent:(BOOL)content info:(id)info;	// 0xfea15
- (void)MSASModel:(id)model didMarkAssetCollection:(id)collection asHavingUnreadComments:(BOOL)comments inAlbum:(id)album info:(id)info;	// 0xfed55
- (void)MSASModel:(id)model didSubscribeToAlbum:(id)album info:(id)info;	// 0xfe4e9
- (void)MSASModel:(id)model didUnsubscribeFromAlbum:(id)album info:(id)info;	// 0xfe535
- (void)MSASModel:(id)model didUpdateUnviewedAssetCollectionCount:(int)count forAlbum:(id)album info:(id)info;	// 0xfebb5
- (void)MSASModelDidDeleteAllAlbumsInAlbumList:(id)msasmodel info:(id)info;	// 0xfe3d9
- (void)MSASModelDidReceiveNewServerSideConfiguration:(id)msasmodel info:(id)info;	// 0xfef79
- (void)MSASModelWillBeForgotten:(id)msasmodel info:(id)info;	// 0xff649
- (id)_account;	// 0x103441
- (void)_accountAuthenticationFailed:(id)failed;	// 0x103339
- (void)_accountAuthenticationSucceeded:(id)succeeded;	// 0x10321d
- (BOOL)_accountHasCredentials;	// 0x103495
- (void)_addProccessingManifestAsset:(id)asset;	// 0x1025e5
- (id)_allUsersWhoLikeThisItem:(id)item;	// 0x106fdd
- (id)_collectionsFromMSASModel:(id)msasmodel;	// 0x100575
- (id)_collectionsFromManifest:(id)manifest;	// 0xfff25
- (id)_commentDictionaryFromMSASComment:(id)msascomment;	// 0x106d79
- (void)_commitManifest;	// 0xffa69
- (void)_createDatabase;	// 0x107581
- (id)_createImageManagerForStreamID:(id)streamID;	// 0x100e5d
- (id)_dateFormatter;	// 0x105cf5
- (id)_dbCachePathForStreamID:(id)streamID;	// 0x101071
- (id)_filteredItemsForStreamID:(id)streamID;	// 0x103a25
- (void)_finalizeSwitchToLegacyFetchRateMediumOrHigh;	// 0x1054a9
- (unsigned long long)_fizeSizeForAsset:(id)asset;	// 0x102a39
- (void)_handleDidDeleteOrFindNewComments:(id)_handle forAssetCollection:(id)assetCollection inAlbum:(id)album;	// 0xfe7fd
- (void)_handleMembershipQueryMSASModelCallback:(id)callback;	// 0xff061
- (BOOL)_ignoreMSASModelCallback;	// 0x107551
- (id)_imageManagerCachePathForStreamID:(id)streamID;	// 0x100ed9
- (id)_imageManagerForStreamID:(id)streamID;	// 0x100d69
- (id)_imageManagersFromManifest:(id)manifest;	// 0x101141
- (void)_imageUnavailable:(id)unavailable;	// 0x102441
- (void)_imageWritten:(id)written;	// 0x101c69
- (unsigned long)_inMemorySizeForAsset:(id)asset;	// 0x102a05
- (void)_initiateRetryTimerFired:(id)fired;	// 0x105db1
- (void)_initiateSubscriberRetrieveAssets:(id)assets;	// 0x105d8d
- (void)_insertAsset:(id)asset;	// 0x107849
- (void)_insertAssets:(id)assets;	// 0x107749
- (id)_lastViewedCommentGUIDForLastViewedCommentDate:(id)lastViewedCommentDate withAssetCollectionGUID:(id)assetCollectionGUID;	// 0x1071c9
- (void)_legacyImageFetchTimerFired:(id)fired;	// 0x1017e9
- (void)_legacyStreamDisabled:(id)disabled;	// 0x105699
- (void)_legacyStreamEnabled:(id)enabled;	// 0x10554d
- (id)_loadAssetsFromDatabase;	// 0x107e81
- (void)_lowMemoryNotification:(id)notification;	// 0x105c29
- (id)_manifest;	// 0xff9e1
- (id)_manifestAssetForAsset:(id)asset;	// 0xffe05
- (id)_manifestAssets;	// 0xffc65
- (id)_manifestAssetsForStreamID:(id)streamID;	// 0xffd25
- (id)_manifestDictForStreamID:(id)streamID;	// 0xffac1
- (id)_manifestEmailForStreamID:(id)streamID;	// 0xffba5
- (id)_mostRecentUsersWhoLikeThisItemFromAllUsers:(id)allUsers;	// 0x1070c1
- (void)_pollForMSASModelUpdates;	// 0x101555
- (void)_pollForUpdates;	// 0x1014c1
- (void)_postAccessControlChangeNotificationForAlbum:(id)album;	// 0x10747d
- (void)_postCommentChangedNotificationForAssetCollection:(id)assetCollection inAlbum:(id)album forATVDataPropertyKeys:(id)atvdataPropertyKeys;	// 0x1072a9
- (void)_postDataClientUpdatedNotificationWithDataDict:(id)dataDict;	// 0x105b89
- (void)_preferredAccountChanged:(id)changed;	// 0x10301d
- (void)_preferredAccountRemoved:(id)removed;	// 0x1031b5
- (void)_processPendingQuery;	// 0x103c89
- (id)_queuedManifestAssetsFromManifest:(id)manifest;	// 0x1008d1
- (void)_removeAbandonedDownloadAssetCollections:(id)collections;	// 0x102d19
- (void)_removeAbandonedDownloadAssetsForAlbumGUID:(id)albumGUID;	// 0x102a81
- (void)_removeAsset:(id)asset;	// 0x107d69
- (void)_removeAssets:(id)assets;	// 0x107c55
- (void)_removeAssetsRequested:(id)requested;	// 0x105f35
- (void)_removeAssetsWithMasterAssetHashes:(id)masterAssetHashes forStreamID:(id)streamID removeFromStream:(BOOL)stream;	// 0x108189
- (void)_removeDatabaseForAccount:(id)account;	// 0x107659
- (void)_removeImageFilesForAssets:(id)assets forStreamID:(id)streamID;	// 0x106a41
- (void)_removeImageManagerForStreamID:(id)streamID isLegacyStream:(BOOL)stream;	// 0x101241
- (void)_removeLocalFilesForMSASAssetCollections:(id)msasassetCollections inAlbum:(id)album;	// 0x10653d
- (void)_removeMSASModelData:(id)data;	// 0x1063cd
- (void)_removeProcessingManifestAsset:(id)asset;	// 0x102725
- (void)_resetForAccount:(id)account;	// 0x103629
- (void)_resizeImage:(id)image;	// 0x101b55
- (BOOL)_resourcesAvailableToRetrieveAsset:(id)retrieveAsset;	// 0x100c99
- (void)_retrieveMSASModelAsset:(id)asset;	// 0x100b95
- (void)_retrieveManifestAsset:(id)asset;	// 0x100a6d
- (void)_retrieveNextImage;	// 0x101731
- (void)_retrieveNextImageRequested:(id)requested;	// 0x1016f9
- (void)_retrieveNextMSASModelImage;	// 0x1018ed
- (void)_retryOutstandingActivityTimerFired:(id)fired;	// 0x105ea9
- (void)_screenSaverWillStart:(id)_screenSaver;	// 0x105401
- (void)_serverSideConfigurationChanged:(id)changed;	// 0xfef7d
- (void)_setManifest:(id)manifest;	// 0xffa19
- (void)_setManifestAssets:(id)assets;	// 0xffc9d
- (void)_setManifestAssets:(id)assets forStreamID:(id)streamID;	// 0xffd6d
- (void)_setManifestDict:(id)dict forStreamID:(id)streamID;	// 0xffb0d
- (void)_setManifestEmail:(id)email forStreamID:(id)streamID;	// 0xffbd9
- (void)_setPollingForUpdates:(BOOL)updates;	// 0x1015ed
// declared property setter: - (void)_setSharedStreamsEnableToggleTimer:(id)timer;	// 0xfc4e9
// declared property setter: - (void)_setlegacyImageFetchDelayTimer:(id)timer;	// 0xfc52d
- (void)_sharedStreamsDisabled:(id)disabled;	// 0x105975
- (void)_sharedStreamsEnableToggleTimerFired:(id)fired;	// 0x10592d
- (void)_sharedStreamsEnabled:(id)enabled;	// 0x105751
- (id)_sortedItemsForStreamID:(id)streamID;	// 0x103bd9
- (BOOL)_startAccountAuthentication;	// 0x1034cd
- (void)_startImageRetrievalAsIdleTask:(BOOL)task;	// 0x101a01
- (void)_startUpdate;	// 0x1016d5
- (void)_startUpdateTask;	// 0x101949
- (void)_stopImageRetrievalTask;	// 0x101ad1
- (void)_switchToLegacyFetchRateHigh:(id)legacyFetchRateHigh;	// 0x105415
- (void)_switchToLegacyFetchRateLow:(id)legacyFetchRateLow;	// 0x105521
- (void)_switchToLegacyFetchRateMedium:(id)legacyFetchRateMedium;	// 0x10546d
- (id)_taskContext;	// 0x105cad
- (id)_tempCacheForStreamID:(id)streamID;	// 0x100f31
- (unsigned long)_uncompressedImageSizeForAsset:(id)asset;	// 0x102985
- (void)_updateATVDataItemsForCollection:(id)collection;	// 0x1001f1
- (void)_updateAsset:(id)asset newState:(int)state;	// 0x107a9d
- (void)_updateRequested:(id)requested;	// 0x101671
- (id)_userLikeDictionaryFromMSASComment:(id)msascomment;	// 0x106f35
// declared property getter: - (id)cachedLegacyCollectionsData;	// 0xff8b9
// declared property getter: - (id)cachedSharedCollectionsData;	// 0xff999
- (void)cancelImageRequest:(id)request;	// 0xfcca9
- (void)concreteDataClientConnect;	// 0xfc571
- (void)concreteDataClientDisconnect;	// 0xfc745
// declared property getter: - (int)currentLegacyImageFetchRate;	// 0xff979
// declared property getter: - (id)daemon;	// 0xff861
- (void)dealloc;	// 0xfc341
- (void)deleter:(id)deleter didFinishDeletingAssetCollection:(id)collection error:(id)error;	// 0xfdbc9
- (void)deleterWillAssignPluginAsDelegateOfDeleter:(id)deleter;	// 0xfdc05
- (void)deleterWillDeassignPluginAsDelegateOfDeleter:(id)deleter;	// 0xfdc09
- (void)didReceiveMessageForTopic:(id)topic userInfo:(id)info;	// 0xfdc0d
- (void)executeQuery:(id)query withCompletionQueue:(id)completionQueue completionHandler:(id)handler;	// 0xfc74d
- (id)imageRequestWithAsset:(id)asset imageID:(id)anId size:(CGSize)size crop:(BOOL)crop context:(id)context;	// 0xfc961
// declared property getter: - (BOOL)legacyCollectionsDataIsDirty;	// 0xff899
// declared property getter: - (float)legacyImageFetchDelay;	// 0xff901
// declared property getter: - (id)legacyImageFetchDelayTimer;	// 0xff9bd
- (void)mediaStreamDaemonAuthFailed:(id)failed personID:(id)anId;	// 0xfcde1
- (void)mediaStreamDaemonDidIdle:(id)mediaStreamDaemon;	// 0xfcd59
- (void)mediaStreamDaemonDidUnidle:(id)mediaStreamDaemon;	// 0xfcdb5
// declared property getter: - (int)numberOfOutstandingDelayedFetchRequests;	// 0xff921
// declared property getter: - (id)pendingQuery;	// 0xff941
// declared property getter: - (id)pendingQueryCompletionBlock;	// 0xff875
- (BOOL)processQueryAsync:(id)async;	// 0xfc749
// declared property getter: - (id)queuedMSASModelAssets;	// 0xff81d
// declared property getter: - (id)serverSideModel;	// 0xff8dd
// declared property setter: - (void)setCachedLegacyCollectionsData:(id)data;	// 0xff8cd
// declared property setter: - (void)setCachedSharedCollectionsData:(id)data;	// 0xff9ad
// declared property setter: - (void)setCurrentLegacyImageFetchRate:(int)rate;	// 0xff989
// declared property setter: - (void)setLegacyCollectionsDataIsDirty:(BOOL)dirty;	// 0xff8a9
// declared property setter: - (void)setLegacyImageFetchDelay:(float)delay;	// 0xff911
// declared property setter: - (void)setNumberOfOutstandingDelayedFetchRequests:(int)outstandingDelayedFetchRequests;	// 0xff931
// declared property setter: - (void)setPendingQuery:(id)query;	// 0xff955
// declared property setter: - (void)setPendingQueryCompletionBlock:(id)block;	// 0xff889
// declared property setter: - (void)setQueuedMSASModelAssets:(id)assets;	// 0xff831
// declared property setter: - (void)setServerSideModel:(id)model;	// 0xff8f1
// declared property setter: - (void)setSharedCollectionsDataIsDirty:(BOOL)dirty;	// 0xff851
// declared property getter: - (BOOL)sharedCollectionsDataIsDirty;	// 0xff841
// declared property getter: - (id)sharedStreamsEnableToggleTimer;	// 0xff80d
// declared property getter: - (id)sharingDaemon;	// 0xff9cd
// declared property getter: - (id)subscriber;	// 0xff965
- (void)subscriber:(id)subscriber didFailToRetriveSubscriptionUpdateWithError:(id)error;	// 0xfd829
- (void)subscriber:(id)subscriber didFindDisappearedSubscriptionforStreamID:(id)anId;	// 0xfd8e9
- (void)subscriber:(id)subscriber didFinishRequestingAssetRetrievalForStreamID:(id)streamID;	// 0xfda95
- (void)subscriber:(id)subscriber didFinishRetrievingAsset:(id)asset error:(id)error;	// 0xfd505
- (void)subscriber:(id)subscriber didReceiveDeleteForAssetCollections:(id)assetCollections streamID:(id)anId;	// 0xfda99
- (void)subscriber:(id)subscriber didRequestAssetRetrievalForAssetCollections:(id)assetCollections streamID:(id)anId;	// 0xfcfed
- (void)subscriber:(id)subscriber didResetSyncForStreamID:(id)streamID;	// 0xfda91
- (void)subscriberDidCompleteCheckForNewAssetCollections:(id)subscriber;	// 0xfd989
- (void)subscriberWillAssignPluginAsDelegateOfSubscriber:(id)subscriber;	// 0xfcfb1
- (void)subscriberWillCheckForNewAssetCollections:(id)subscriber;	// 0xfd8e5
- (void)subscriberWillDeassignPluginAsDelegateOfSubscriber:(id)subscriber;	// 0xfcfc1
@end

