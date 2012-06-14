/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "MSASDelegateBase.h"

@protocol MSASSubscriber;

@protocol MSASSubscriberDelegate <MSASDelegateBase>
@property(assign, nonatomic) id<MSASSubscriber> MSASCounterpartInstance;
// declared property getter: - (id)MSASCounterpartInstance;
- (void)MSASSubscriber:(id)subscriber didFindAccessControlChangesForAlbumGUIDS:(id)albumGUIDS;
- (void)MSASSubscriber:(id)subscriber didFindAlbumChanges:(id)changes;
- (void)MSASSubscriber:(id)subscriber didFindAlbumSyncedState:(id)state forAlbum:(id)album;
- (void)MSASSubscriber:(id)subscriber didFindAssetCollectionChanges:(id)changes forAlbum:(id)album;
- (void)MSASSubscriber:(id)subscriber didFindAssetCollectionSyncedState:(id)state forAssetCollectionGUID:(id)assetCollectionGUID inAlbum:(id)album assetCollectionStateCtag:(id)ctag;
- (void)MSASSubscriber:(id)subscriber didFindCommentChanges:(id)changes inAssetCollection:(id)assetCollection inAlbum:(id)album;
- (void)MSASSubscriber:(id)subscriber didFindResetSyncForAlbum:(id)album;
- (void)MSASSubscriber:(id)subscriber didFindSharingRelationshipChanges:(id)changes;
- (void)MSASSubscriber:(id)subscriber didFindSyncedKeyValueChangesForAlbumGUIDS:(id)albumGUIDS;
- (void)MSASSubscriber:(id)subscriber didFinishCheckingForAlbumSyncedStateChangesInAlbum:(id)album error:(id)error newAlbumStateCtag:(id)ctag;
- (void)MSASSubscriber:(id)subscriber didFinishCheckingForChangesError:(id)changesError;
- (void)MSASSubscriber:(id)subscriber didFinishCheckingForCommentChangesInAssetCollection:(id)assetCollection inAlbum:(id)album largestCommentID:(int)anId error:(id)error;
- (void)MSASSubscriber:(id)subscriber didFinishCheckingForUpdatesInAlbum:(id)album error:(id)error;
- (void)MSASSubscriber:(id)subscriber didFinishGettingAccessControls:(id)controls forAlbum:(id)album error:(id)error;
- (void)MSASSubscriber:(id)subscriber didFinishRetrievingAsset:(id)asset inAlbum:(id)album error:(id)error;
- (void)MSASSubscriber:(id)subscriber didFinishSettingSyncedStateForAlbum:(id)album error:(id)error newAlbumStateCtag:(id)ctag;
- (void)MSASSubscriber:(id)subscriber didFinishSettingSyncedStateForAssetCollection:(id)assetCollection inAlbum:(id)album assetStateCtag:(id)ctag error:(id)error;
- (void)MSASSubscriber:(id)subscriber didFinishSubscribingToAlbum:(id)album error:(id)error;
- (void)MSASSubscriber:(id)subscriber didFinishUnsubscribingFromAlbum:(id)album error:(id)error;
- (void)MSASSubscriber:(id)subscriber didFinishUpdatingAssetCollection:(id)collection inAlbum:(id)album error:(id)error;
- (void)MSASSubscriber:(id)subscriber willCheckForAlbumSyncedStateChangesInAlbum:(id)album;
- (void)MSASSubscriber:(id)subscriber willCheckForCommentChangesInAssetCollection:(id)assetCollection inAlbum:(id)album;
- (void)MSASSubscriber:(id)subscriber willCheckForUpdatesInAlbum:(id)album;
- (void)MSASSubscriber:(id)subscriber willUpdateAssetCollections:(id)collections inAlbum:(id)album;
- (void)MSASSubscriberDidFindGlobalResetSync:(id)msassubscriber;
- (void)MSASSubscriberWillCheckForChanges:(id)msassubscriber;
// declared property setter: - (void)setMSASCounterpartInstance:(id)instance;
@end

