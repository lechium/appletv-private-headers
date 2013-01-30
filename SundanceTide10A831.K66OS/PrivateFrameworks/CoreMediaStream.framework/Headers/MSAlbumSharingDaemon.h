/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "MSDaemon.h"

@class MSASDaemonModel, NSObject, NSMutableDictionary;
@protocol MSAlbumSharingDaemonDelegate, OS_dispatch_queue;

@interface MSAlbumSharingDaemon : MSDaemon {
	id<MSAlbumSharingDaemonDelegate> _delegate;	// 24 = 0x18
	NSMutableDictionary *_personIDToStateMachineMap;	// 28 = 0x1c
	NSMutableDictionary *_personIDToDelegateMap;	// 32 = 0x20
	MSASDaemonModel *_daemonModel;	// 36 = 0x24
	int _busyCount;	// 40 = 0x28
	BOOL _isRetryingOutstandingActivities;	// 44 = 0x2c
	NSObject<OS_dispatch_queue> *_workQueue;	// 48 = 0x30
	NSObject<OS_dispatch_queue> *_mapQueue;	// 52 = 0x34
	NSMutableDictionary *_nextUpdateDateByPersonID;	// 56 = 0x38
}
@property(assign, nonatomic) int busyCount;	// G=0x3076c4d9; S=0x3076c4e9; @synthesize=_busyCount
@property(retain, nonatomic) MSASDaemonModel *daemonModel;	// G=0x3076c4a1; S=0x3076c4b1; @synthesize=_daemonModel
@property(assign, nonatomic) __weak id<MSAlbumSharingDaemonDelegate> delegate;	// G=0x3076c3fd; S=0x3076c41d; @synthesize=_delegate
@property(assign, nonatomic) BOOL isRetryingOutstandingActivities;	// G=0x3076c4f9; S=0x3076c509; @synthesize=_isRetryingOutstandingActivities
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *mapQueue;	// G=0x3076c551; S=0x3076c561; @synthesize=_mapQueue
@property(retain, nonatomic) NSMutableDictionary *nextUpdateDateByPersonID;	// G=0x3076c589; S=0x3076c599; @synthesize=_nextUpdateDateByPersonID
@property(retain, nonatomic) NSMutableDictionary *personIDToDelegateMap;	// G=0x3076c469; S=0x3076c479; @synthesize=_personIDToDelegateMap
@property(retain, nonatomic) NSMutableDictionary *personIDToStateMachineMap;	// G=0x3076c431; S=0x3076c441; @synthesize=_personIDToStateMachineMap
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;	// G=0x3076c519; S=0x3076c529; @synthesize=_workQueue
- (id)init;	// 0x307647c1
- (void).cxx_destruct;	// 0x3076c5c1
- (id)_delegateForPersonID:(id)personID;	// 0x3076b2fd
- (void)_postModelShutdownForPersonID:(id)personID completionBlock:(id)block;	// 0x307694e5
- (void)acceptInvitationWithGUID:(id)guid personID:(id)anId;	// 0x3076809d
- (void)acceptInvitationWithGUID:(id)guid personID:(id)anId info:(id)info;	// 0x307680d5
- (void)acceptInvitationWithToken:(id)token personID:(id)anId completionBlock:(id)block;	// 0x30767e51
- (void)acceptInvitationWithToken:(id)token personID:(id)anId info:(id)info completionBlock:(id)block;	// 0x30767ef9
- (void)addAccessControlEntries:(id)entries toAlbumWithGUID:(id)guid personID:(id)anId;	// 0x307683cd
- (void)addAccessControlEntries:(id)entries toAlbumWithGUID:(id)guid personID:(id)anId info:(id)info;	// 0x30768419
- (void)addAlbum:(id)album personID:(id)anId;	// 0x30767465
- (void)addAlbum:(id)album personID:(id)anId info:(id)info;	// 0x3076749d
- (void)addAssetCollections:(id)collections toAlbumWithGUID:(id)guid personID:(id)anId;	// 0x30768975
- (void)addAssetCollections:(id)collections toAlbumWithGUID:(id)guid personID:(id)anId info:(id)info;	// 0x307689c1
- (void)addComments:(id)comments toAssetCollectionWithGUID:(id)guid personID:(id)anId;	// 0x30768ec5
- (void)addComments:(id)comments toAssetCollectionWithGUID:(id)guid personID:(id)anId info:(id)info;	// 0x30768f11
- (int)assetsInDownloadQueueCountForPersonID:(id)personID;	// 0x30766c8d
- (id)boundStateMachineForPersonID:(id)personID;	// 0x3076b665
// declared property getter: - (int)busyCount;	// 0x3076c4d9
- (void)cancelActivitiesForPersonID:(id)personID;	// 0x307662c9
// declared property getter: - (id)daemonModel;	// 0x3076c4a1
- (void)dealloc;	// 0x307648f1
// declared property getter: - (id)delegate;	// 0x3076c3fd
- (void)deleteAlbumWithGUID:(id)guid personID:(id)anId;	// 0x30767795
- (void)deleteAlbumWithGUID:(id)guid personID:(id)anId info:(id)info;	// 0x307677cd
- (void)deleteAssetCollectionWithGUID:(id)guid personID:(id)anId;	// 0x30768b51
- (void)deleteAssetCollectionWithGUID:(id)guid personID:(id)anId info:(id)info;	// 0x30768b89
- (void)deleteCommentWithGUID:(id)guid personID:(id)anId;	// 0x307690a1
- (void)deleteCommentWithGUID:(id)guid personID:(id)anId info:(id)info;	// 0x307690d9
- (void)didCreateStateMachineForPersonID:(id)personID;	// 0x307657e5
- (void)didDestroyStateMachineForPersonID:(id)personID;	// 0x307657ed
- (void)didIdle;	// 0x30765225
- (void)didReceiveAuthFailureForPersonID:(id)personID;	// 0x30765a75
- (void)didReceiveAuthSuccessForPersonID:(id)personID;	// 0x30765a79
- (void)didReceiveCommentTooLongError:(id)error forAssetCollection:(id)assetCollection inAlbum:(id)album personID:(id)anId;	// 0x3076c239
- (void)didReceiveGlobalResetSyncForPersonID:(id)personID;	// 0x30765a7d
- (void)didReceivePushNotificationForPersonID:(id)personID;	// 0x307657f1
- (void)didReceiveTooManyAlbumsError:(id)error personID:(id)anId;	// 0x3076bc09
- (void)didReceiveTooManyCommentsError:(id)error forAssetCollection:(id)assetCollection inAlbum:(id)album personID:(id)anId;	// 0x3076c075
- (void)didReceiveTooManyPhotosError:(id)error forAlbum:(id)album personID:(id)anId;	// 0x3076bd71
- (void)didReceiveTooManySubscriptionsError:(id)error personID:(id)anId;	// 0x3076bf0d
- (void)didUnidle;	// 0x307652e1
- (id)existingModelForPersonID:(id)personID;	// 0x30766cc9
- (id)existingStateMachineForPersonID:(id)personID;	// 0x3076b461
- (void)forgetEverythingAboutPersonID:(id)anId;	// 0x307694d1
- (void)forgetEverythingAboutPersonID:(id)anId completionBlock:(id)block;	// 0x3076a5b9
- (void)forgetEverythingCompletionBlock:(id)block;	// 0x3076aa05
- (BOOL)hasCommandsInGroupedCommandQueue;	// 0x30765a85
- (BOOL)isInRetryState;	// 0x307657f5
// declared property getter: - (BOOL)isRetryingOutstandingActivities;	// 0x3076c4f9
- (BOOL)isWaitingForAuth;	// 0x30765a81
// declared property getter: - (id)mapQueue;	// 0x3076c551
- (void)mapQueueShutDownStateMachineInMap:(id)map personIDs:(id)ids index:(unsigned)index forDestruction:(BOOL)destruction completionBlock:(id)block;	// 0x30764a55
- (void)markAlbumGUIDAsViewed:(id)viewed personID:(id)anId;	// 0x3076792d
- (void)markAlbumGUIDAsViewed:(id)viewed personID:(id)anId info:(id)info;	// 0x30767965
- (void)markAlbumGUIDAsViewed:(id)viewed personID:(id)anId moveLastViewedAssetCollectionMarker:(BOOL)marker info:(id)info;	// 0x307679b1
- (void)markCommentsForAssetCollectionWithGUID:(id)guid asViewedWithLastViewedDate:(id)lastViewedDate personID:(id)anId;	// 0x30768ce9
- (void)markCommentsForAssetCollectionWithGUID:(id)guid asViewedWithLastViewedDate:(id)lastViewedDate personID:(id)anId info:(id)info;	// 0x30768d35
- (id)modelForPersonID:(id)personID;	// 0x30766d71
- (void)modifyAlbumMetadata:(id)metadata personID:(id)anId;	// 0x307675fd
- (void)modifyAlbumMetadata:(id)metadata personID:(id)anId info:(id)info;	// 0x30767635
- (id)nextActivityDate;	// 0x30765205
// declared property getter: - (id)nextUpdateDateByPersonID;	// 0x3076c589
- (id)persistentObjectForKey:(id)key personID:(id)anId;	// 0x3076b23d
// declared property getter: - (id)personIDToDelegateMap;	// 0x3076c469
// declared property getter: - (id)personIDToStateMachineMap;	// 0x3076c431
- (id)personIDsListeningToPushNotification;	// 0x3076650d
- (void)pollForSubscriptionUpdatesTriggeredByPushNotification;	// 0x307665a5
- (void)refreshAccessControlListOfAlbumWithGUID:(id)guid personID:(id)anId;	// 0x30767125
- (void)refreshAccessControlListOfAlbumWithGUID:(id)guid personID:(id)anId info:(id)info;	// 0x3076715d
- (void)refreshCommentsForAssetCollectionWithGUID:(id)guid resetSync:(BOOL)sync personID:(id)anId;	// 0x307672bd
- (void)refreshCommentsForAssetCollectionWithGUID:(id)guid resetSync:(BOOL)sync personID:(id)anId info:(id)info;	// 0x307672f9
- (void)refreshContentOfAlbumWithGUID:(id)guid resetSync:(BOOL)sync personID:(id)anId;	// 0x30766f7d
- (void)refreshContentOfAlbumWithGUID:(id)guid resetSync:(BOOL)sync personID:(id)anId info:(id)info;	// 0x30766fb9
- (void)refreshResetSync:(BOOL)sync personID:(id)anId;	// 0x30766e19
- (void)refreshResetSync:(BOOL)sync personID:(id)anId info:(id)info;	// 0x30766e3d
- (void)refreshServerSideConfigurationForPersonID:(id)personID;	// 0x3076b205
- (void)rejectInvitationWithGUID:(id)guid personID:(id)anId;	// 0x30768235
- (void)rejectInvitationWithGUID:(id)guid personID:(id)anId info:(id)info;	// 0x3076826d
- (void)removeAccessControlEntryWithGUID:(id)guid personID:(id)anId;	// 0x307685a9
- (void)removeAccessControlEntryWithGUID:(id)guid personID:(id)anId info:(id)info;	// 0x307685e1
- (void)retrieveAssets:(id)assets inAlbumWithGUID:(id)guid personID:(id)anId;	// 0x30769239
- (void)retrieveAssetsInAssetCollectionsWithGUIDs:(id)guids assetTypeFlags:(int)flags personID:(id)anId;	// 0x30769395
- (void)retryOutstandingActivities;	// 0x30765d05
- (void)sendServerSideConfigurationDidChangeNotificationForPersonID:(id)sendServerSideConfiguration;	// 0x30766b49
- (id)serverSideConfigurationForPersonID:(id)personID;	// 0x3076b1bd
// declared property setter: - (void)setBusyCount:(int)count;	// 0x3076c4e9
// declared property setter: - (void)setDaemonModel:(id)model;	// 0x3076c4b1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3076c41d
- (void)setFocusAlbumGUID:(id)guid forPersonID:(id)personID;	// 0x3076539d
- (void)setFocusAssetCollectionGUID:(id)guid forPersonID:(id)personID;	// 0x307655c1
// declared property setter: - (void)setIsRetryingOutstandingActivities:(BOOL)activities;	// 0x3076c509
// declared property setter: - (void)setMapQueue:(id)queue;	// 0x3076c561
- (void)setNextActivityDate:(id)date forPersonID:(id)personID;	// 0x30766825
// declared property setter: - (void)setNextUpdateDateByPersonID:(id)anId;	// 0x3076c599
- (void)setPersistentObject:(id)object forKey:(id)key personID:(id)anId;	// 0x3076b29d
// declared property setter: - (void)setPersonIDToDelegateMap:(id)delegateMap;	// 0x3076c479
// declared property setter: - (void)setPersonIDToStateMachineMap:(id)stateMachineMap;	// 0x3076c441
- (void)setPublicAccessEnabled:(BOOL)enabled forAlbumWithGUID:(id)guid personID:(id)anId completionBlock:(id)block;	// 0x30768741
- (void)setPublicAccessEnabled:(BOOL)enabled forAlbumWithGUID:(id)guid personID:(id)anId info:(id)info completionBlock:(id)block;	// 0x307687ed
// declared property setter: - (void)setWorkQueue:(id)queue;	// 0x3076c529
- (void)shutDown;	// 0x307649b9
- (void)shutDownCompletionBlock:(id)block;	// 0x30764d41
- (void)shutDownStateMachine:(id)machine forDestruction:(BOOL)destruction completionBlock:(id)block;	// 0x30769899
- (void)start;	// 0x3076491d
- (void)stopAssetDownloadsForPersonID:(id)personID;	// 0x30765ec9
- (void)subscribeToAlbumWithGUID:(id)guid personID:(id)anId;	// 0x30767b21
- (void)subscribeToAlbumWithGUID:(id)guid personID:(id)anId info:(id)info;	// 0x30767b59
- (void)unsubscribeFromAlbumWithGUID:(id)guid personID:(id)anId;	// 0x30767cb9
- (void)unsubscribeFromAlbumWithGUID:(id)guid personID:(id)anId info:(id)info;	// 0x30767cf1
- (void)willDestroyStateMachineForPersonID:(id)personID;	// 0x307657e9
// declared property getter: - (id)workQueue;	// 0x3076c519
- (void)workQueueForgetEverythingAboutPersonID:(id)anId completionBlock:(id)block;	// 0x30769e49
- (void)workQueueForgetEverythingAboutPersonIDs:(id)ids index:(unsigned)index completionBlock:(id)block;	// 0x3076a899
@end
