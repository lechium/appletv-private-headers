/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "MSASModel.h"
#import "MSASModelBase.h"
#import "MSASPublisherDelegate.h"

@class NSString, NSCountedSet, MSAlbumSharingDaemon;
@protocol MSASPublisher, MSASStateMachine;

@interface MSASServerSideModel : MSASModelBase <MSASModel, MSASPublisherDelegate> {
@private
	id<MSASPublisher> _counterpartInstance;	// 16 = 0x10
	MSAlbumSharingDaemon *_daemon;	// 20 = 0x14
	NSCountedSet *_observers;	// 24 = 0x18
}
@property(assign, nonatomic) id MSASCounterpartInstance;	// G=0x339f4999; S=0x339f49b9; 
@property(assign, nonatomic) __weak MSAlbumSharingDaemon *daemon;	// G=0x339f49cd; S=0x339f49ed; @synthesize=_daemon
@property(retain, nonatomic) NSCountedSet *observers;	// G=0x339e8cad; S=0x339f4a01; @synthesize=_observers
@property(readonly, assign, nonatomic) NSString *personID;
@property(readonly, assign, nonatomic) id<MSASStateMachine> stateMachine;	// G=0x339e83a5; 
- (id)initWithPersonID:(id)personID;	// 0x339e83b5
- (id)initWithPersonID:(id)personID databasePath:(id)path;	// 0x339e8405
- (void).cxx_destruct;	// 0x339f4a29
// declared property getter: - (id)MSASCounterpartInstance;	// 0x339f4999
- (void)MSASDeleter:(id)deleter didFinishDeletingAlbum:(id)album error:(id)error;	// 0x339f32d1
- (void)MSASDeleter:(id)deleter didFinishDeletingAssetCollection:(id)collection inAlbum:(id)album error:(id)error;	// 0x339f3465
- (void)MSASDeleter:(id)deleter didFinishDeletingComment:(id)comment inAssetCollection:(id)assetCollection inAlbum:(id)album error:(id)error;	// 0x339f3625
- (void)MSASPublisher:(id)publisher didFinishAddingAssetCollection:(id)collection toAlbum:(id)album error:(id)error;	// 0x339f41e9
- (void)MSASPublisher:(id)publisher didFinishAddingComment:(id)comment toAssetCollection:(id)assetCollection inAlbum:(id)album error:(id)error;	// 0x339f4799
- (void)MSASPublisher:(id)publisher didFinishAddingSharingRelationship:(id)relationship toOwnedAlbum:(id)ownedAlbum error:(id)error;	// 0x339f44e9
- (void)MSASPublisher:(id)publisher didFinishCreatingAlbum:(id)album error:(id)error;	// 0x339f37ad
- (void)MSASPublisher:(id)publisher didFinishRemovingSharingRelationship:(id)relationship fromOwnedAlbum:(id)ownedAlbum error:(id)error;	// 0x339f4641
- (void)MSASPublisher:(id)publisher didFinishUpdatingAlbum:(id)album error:(id)error;	// 0x339f39c9
- (void)MSASPublisher:(id)publisher didRequestAssetsForAddingAssetCollections:(id)addingAssetCollections inAlbum:(id)album;	// 0x339f3b1d
- (void)MSASSubscriber:(id)subscriber didFindAccessControlChangesForAlbumGUIDS:(id)albumGUIDS;	// 0x339f14c5
- (void)MSASSubscriber:(id)subscriber didFindAlbumChanges:(id)changes;	// 0x339f0b71
- (void)MSASSubscriber:(id)subscriber didFindAlbumSyncedState:(id)state forAlbum:(id)album;	// 0x339f3081
- (void)MSASSubscriber:(id)subscriber didFindAssetCollectionChanges:(id)changes forAlbum:(id)album;	// 0x339f1c81
- (void)MSASSubscriber:(id)subscriber didFindAssetCollectionSyncedState:(id)state forAssetCollectionGUID:(id)assetCollectionGUID inAlbum:(id)album assetCollectionStateCtag:(id)ctag;	// 0x339f2f31
- (void)MSASSubscriber:(id)subscriber didFindCommentChanges:(id)changes inAssetCollection:(id)assetCollection inAlbum:(id)album;	// 0x339f2a81
- (void)MSASSubscriber:(id)subscriber didFindResetSyncForAlbum:(id)album;	// 0x339f1a49
- (void)MSASSubscriber:(id)subscriber didFindSharingRelationshipChanges:(id)changes;	// 0x339f1ec9
- (void)MSASSubscriber:(id)subscriber didFindSyncedKeyValueChangesForAlbumGUIDS:(id)albumGUIDS;	// 0x339f15d1
- (void)MSASSubscriber:(id)subscriber didFinishCheckingForAlbumSyncedStateChangesInAlbum:(id)album error:(id)error newAlbumStateCtag:(id)ctag;	// 0x339f31dd
- (void)MSASSubscriber:(id)subscriber didFinishCheckingForChangesError:(id)changesError;	// 0x339f16dd
- (void)MSASSubscriber:(id)subscriber didFinishCheckingForCommentChangesInAssetCollection:(id)assetCollection inAlbum:(id)album largestCommentID:(int)anId error:(id)error;	// 0x339f2e89
- (void)MSASSubscriber:(id)subscriber didFinishCheckingForUpdatesInAlbum:(id)album error:(id)error;	// 0x339f1f8d
- (void)MSASSubscriber:(id)subscriber didFinishGettingAccessControls:(id)controls forAlbum:(id)album error:(id)error;	// 0x339f16e1
- (void)MSASSubscriber:(id)subscriber didFinishRetrievingAsset:(id)asset inAlbum:(id)album error:(id)error;	// 0x339f28f5
- (void)MSASSubscriber:(id)subscriber didFinishSettingSyncedStateForAlbum:(id)album error:(id)error newAlbumStateCtag:(id)ctag;	// 0x339f3255
- (void)MSASSubscriber:(id)subscriber didFinishSettingSyncedStateForAssetCollection:(id)assetCollection inAlbum:(id)album assetStateCtag:(id)ctag error:(id)error;	// 0x339f32cd
- (void)MSASSubscriber:(id)subscriber didFinishSubscribingToAlbum:(id)album error:(id)error;	// 0x339f21b1
- (void)MSASSubscriber:(id)subscriber didFinishUnsubscribingFromAlbum:(id)album error:(id)error;	// 0x339f2565
- (void)MSASSubscriber:(id)subscriber didFinishUpdatingAssetCollection:(id)collection inAlbum:(id)album error:(id)error;	// 0x339f1fad
- (void)MSASSubscriber:(id)subscriber willCheckForAlbumSyncedStateChangesInAlbum:(id)album;	// 0x339f2f2d
- (void)MSASSubscriber:(id)subscriber willCheckForCommentChangesInAssetCollection:(id)assetCollection inAlbum:(id)album;	// 0x339f2a7d
- (void)MSASSubscriber:(id)subscriber willCheckForUpdatesInAlbum:(id)album;	// 0x339f1a45
- (void)MSASSubscriber:(id)subscriber willUpdateAssetCollections:(id)collections inAlbum:(id)album;	// 0x339f1fa9
- (void)MSASSubscriberDidFindGlobalResetSync:(id)msassubscriber;	// 0x339f0a9d
- (void)MSASSubscriberWillCheckForChanges:(id)msassubscriber;	// 0x339f0a99
- (BOOL)_accessControlWithGUID:(id)guid outObject:(id *)object outAlbumGUID:(id *)guid3 outEmail:(id *)email outUserInfoData:(id *)data;	// 0x339eca61
- (BOOL)_albumMetadataWithAlbumGUID:(id)albumGUID key:(id)key outValue:(id *)value;	// 0x339eefd1
- (BOOL)_albumWithGUID:(id)guid outObject:(id *)object outName:(id *)name outCtag:(id *)ctag outForeignCtag:(id *)ctag5 outUserInfoData:(id *)data;	// 0x339ec1f1
- (BOOL)_assetCollectionMetadataWithAssetCollectionGUID:(id)assetCollectionGUID key:(id)key outValue:(id *)value;	// 0x339ef229
- (BOOL)_assetCollectionWithGUID:(id)guid outObject:(id *)object outCtag:(id *)ctag outAlbumGUID:(id *)guid4 outBatchDate:(id *)date outPhotoDate:(id *)date6 outPhotoNumber:(long long *)number outUserInfoData:(id *)data;	// 0x339ed99d
- (BOOL)_checkToClearUnviewedStateOnAlbumWithGUID:(id)guid;	// 0x339efbf5
- (BOOL)_checkToClearUnviewedStateOnAssetCollectionWithGUID:(id)guid;	// 0x339efb1d
- (BOOL)_commentWithGUID:(id)guid outObject:(id *)object outID:(unsigned *)anId outTimestamp:(id *)timestamp outAssetCollectionGUID:(id *)guid5 outIsCaption:(BOOL *)caption outUserInfoData:(id *)data;	// 0x339ee3d5
- (BOOL)_commentWithID:(int)anId assetCollectionGUID:(id)guid outObject:(id *)object outGUID:(id *)guid4 outTimestamp:(id *)timestamp outIsCaption:(BOOL *)caption outUserInfoData:(id *)data;	// 0x339ee4f1
- (void)_deleteAccessControlWithGUID:(id)guid;	// 0x339ed01d
- (void)_deleteAlbumMetadataAlbumGUID:(id)guid key:(id)key;	// 0x339ef141
- (void)_deleteAlbumWithGUID:(id)guid;	// 0x339ec6dd
- (void)_deleteAllAlbumMetadataForAlbumWithGUID:(id)guid;	// 0x339ef1c9
- (void)_deleteAllAssetCollectionMetadataForAssetCollectionWithGUID:(id)guid;	// 0x339ef645
- (void)_deleteAssetCollectionMetadataAssetCollectionGUID:(id)guid key:(id)key;	// 0x339ef5bd
- (void)_deleteAssetCollectionWithGUID:(id)guid;	// 0x339ee055
- (void)_deleteCommentWithGUID:(id)guid;	// 0x339eec21
- (void)_deleteInvitationForAlbumWithGUID:(id)guid;	// 0x339ed955
- (void)_deleteInvitationWithGUID:(id)guid;	// 0x339ed7a9
- (id)_invalidAccessControlGUIDErrorwithGUID:(id)guid;	// 0x339f078d
- (id)_invalidAssetCollectionGUIDErrorwithGUID:(id)guid;	// 0x339f08bd
- (id)_invalidInvitationGUIDErrorWithGUID:(id)guid;	// 0x339f0661
- (BOOL)_invitationWithAlbumGUID:(id)albumGUID outObject:(id *)object outInvitationGUID:(id *)guid outEmail:(id *)email outUserInfoData:(id *)data;	// 0x339ed31d
- (BOOL)_invitationWithGUID:(id)guid outObject:(id *)object outAlbumGUID:(id *)guid3 outEmail:(id *)email outUserInfoData:(id *)data;	// 0x339ed1fd
- (id)_lookupOrCreateAlbumWithGUID:(id)guid;	// 0x339f0381
- (id)_lookupOrCreateAssetCollectionWithGUID:(id)guid outAlbum:(id *)album;	// 0x339f0421
- (id)_lookupOrCreateCommentWithGUID:(id)guid outAssetCollection:(id *)collection outAlbum:(id *)album;	// 0x339f0509
- (id)_maximumCommentIDForAssetCollectionWithGUID:(id)guid;	// 0x339eeeb1
- (id)_maximumPhotoNumberForAlbumWithGUID:(id)guid;	// 0x339ef6a5
- (void)_notifyObserversOfUpdatedUnviewedCountInAlbumWithGUID:(id)guid;	// 0x339efd01
- (void)_performBlockOnObservers:(id)observers;	// 0x339f02a9
- (id)_protocolErrorForUnderlyingError:(id)underlyingError;	// 0x339f09ed
- (void)_setAccessControl:(id)control;	// 0x339ecb65
- (void)_setAlbum:(id)album;	// 0x339ec305
- (void)_setAlbumMetadataAlbumGUID:(id)guid key:(id)key value:(id)value;	// 0x339ef09d
- (void)_setAssetCollection:(id)collection inAlbumWithGUID:(id)guid;	// 0x339edae1
- (void)_setAssetCollectionMetadataAssetCollectionGUID:(id)guid key:(id)key value:(id)value;	// 0x339ef2f5
- (void)_setComment:(id)comment forAssetCollectionWithGUID:(id)guid;	// 0x339ee60d
- (void)_setInvitation:(id)invitation;	// 0x339ed435
- (void)_setUnviewedState:(BOOL)state onAlbumWithGUID:(id)guid;	// 0x339ef991
- (void)_setUnviewedState:(BOOL)state onAssetCollectionWithGUID:(id)guid;	// 0x339ef771
- (void)acceptInvitationWithGUID:(id)guid;	// 0x339ea2cd
- (void)acceptInvitationWithToken:(id)token completionBlock:(id)block;	// 0x339ead49
- (id)accessControlGUIDsForAlbumWithGUID:(id)guid;	// 0x339e9141
- (id)accessControlWithGUID:(id)guid;	// 0x339e91f9
- (id)accessControlsForAlbumWithGUID:(id)guid;	// 0x339e9089
- (void)addAccessControlEntries:(id)entries toAlbumWithGUID:(id)guid;	// 0x339ea8e9
- (void)addAlbum:(id)album;	// 0x339e9be5
- (void)addAssetCollections:(id)collections toAlbumWithGUID:(id)guid;	// 0x339eb0d5
- (void)addComments:(id)comments toAssetCollectionWithGUID:(id)guid;	// 0x339eba7d
- (void)addObserver:(id)observer;	// 0x339e8d05
- (id)albumGUIDs;	// 0x339e8fd5
- (id)albumWithGUID:(id)guid;	// 0x339e9055
- (id)albums;	// 0x339e8f7d
- (id)assetCollectionGUIDsInAlbumWithGUID:(id)guid;	// 0x339e9401
- (id)assetCollectionWithGUID:(id)guid;	// 0x339e94b9
- (id)assetCollectionsInAlbumWithGUID:(id)guid;	// 0x339e9349
- (int)assetsInDownloadQueueCount;	// 0x339ec0f5
- (void)cancel;	// 0x339e8c75
- (id)captionForAssetCollectionWithGUID:(id)guid;	// 0x339e95e1
- (id)commentWithGUID:(id)guid;	// 0x339e95a9
- (id)commentsForAssetCollectionWithGUID:(id)guid;	// 0x339e94f1
// declared property getter: - (id)daemon;	// 0x339f49cd
- (void)dealloc;	// 0x339f4959
- (void)deleteAlbumWithGUID:(id)guid;	// 0x339e9d31
- (void)deleteAssetCollectionWithGUID:(id)guid;	// 0x339eb401
- (void)deleteCommentWithGUID:(id)guid;	// 0x339ebe3d
- (id)earliestUnviewedAssetCollectionGUIDInAlbumWithGUID:(id)guid;	// 0x339f0179
- (void)forgetEverything;	// 0x339ebf35
- (id)invitationForAlbumWithGUID:(id)guid;	// 0x339e92dd
- (id)invitationGUIDs;	// 0x339e9285
- (id)invitationWithGUID:(id)guid;	// 0x339e9311
- (id)invitations;	// 0x339e922d
- (BOOL)isAlbumWithGUIDMarkedAsUnviewed:(id)guidmarkedAsUnviewed;	// 0x339efe69
- (BOOL)isAssetCollectionWithGUIDMarkedAsUnviewed:(id)guidmarkedAsUnviewed;	// 0x339eff29
- (id)isPublicAccessEnabledForAlbumWithGUID:(id)guid;	// 0x339e9345
- (id)lastViewedCommentDateForAssetCollectionWithGUID:(id)guid;	// 0x339f00b9
- (void)markAlbumGUIDAsViewed:(id)viewed;	// 0x339e9e41
- (void)markCommentsForAssetCollectionWithGUID:(id)guid asViewedWithLastViewedDate:(id)lastViewedDate;	// 0x339eb695
- (void)modifyAlbumMetadata:(id)metadata;	// 0x339e9c49
// declared property getter: - (id)observers;	// 0x339e8cad
- (void)prioritizeAssetCollectionWithGUID:(id)guid inAlbumWithGUID:(id)guid2;	// 0x339ec1ed
- (void)refreshAccessControlListForAlbumWithGUID:(id)guid;	// 0x339e8f1d
- (void)refreshCommentsForAssetCollectionWithGUID:(id)guid resetSync:(BOOL)sync;	// 0x339e8e65
- (void)refreshContentOfAlbumWithGUID:(id)guid resetSync:(BOOL)sync;	// 0x339e8de1
- (void)refreshResetSync:(BOOL)sync;	// 0x339e8da5
- (void)rejectInvitationWithGUID:(id)guid;	// 0x339ea5d9
- (void)removeAccessControlEntryWithGUID:(id)guid;	// 0x339eaaa9
- (void)removeObserver:(id)observer;	// 0x339e8d55
- (void)retrieveAssets:(id)assets inAlbumWithGUID:(id)guid;	// 0x339ec065
- (id)serverSideConfiguration;	// 0x339ec131
// declared property setter: - (void)setDaemon:(id)daemon;	// 0x339f49ed
- (void)setFocusAlbumGUID:(id)guid;	// 0x339ec179
// declared property setter: - (void)setMSASCounterpartInstance:(id)instance;	// 0x339f49b9
// declared property setter: - (void)setObservers:(id)observers;	// 0x339f4a01
- (void)setPublicAccessEnabled:(BOOL)enabled forAlbumWithGUID:(id)guid completionBlock:(id)block;	// 0x339eaec9
- (void)setUserInfo:(id)info forAccessControlWithGUID:(id)guid;	// 0x339e98b1
- (void)setUserInfo:(id)info forAlbumWithGUID:(id)guid;	// 0x339e9685
- (void)setUserInfo:(id)info forAssetCollectionWithGUID:(id)guid;	// 0x339e9799
- (void)setUserInfo:(id)info forCommentWithGUID:(id)guid;	// 0x339e9ad1
- (void)setUserInfo:(id)info forInvitationWithGUID:(id)guid;	// 0x339e99c1
- (void)start;	// 0x339e8c05
// declared property getter: - (id)stateMachine;	// 0x339e83a5
- (void)stop;	// 0x339e8c3d
- (void)subscribeToAlbumWithGUID:(id)guid;	// 0x339ea1b9
- (void)unsubscribeFromAlbumWithGUID:(id)guid;	// 0x339ea22d
- (int)unviewedAlbumCount;	// 0x339efebd
- (int)unviewedAssetCollectionCountForAlbumWithGUID:(id)guid;	// 0x339eff7d
- (id)userInfoForAccessControlWithGUID:(id)guid;	// 0x339e9965
- (id)userInfoForAlbumWithGUID:(id)guid;	// 0x339e9739
- (id)userInfoForAssetCollectionWithGUID:(id)guid;	// 0x339e984d
- (id)userInfoForCommentWithGUID:(id)guid;	// 0x339e9b85
- (id)userInfoForInvitationWithGUID:(id)guid;	// 0x339e9a75
@end

