/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "MSASStateMachineBase.h"


@protocol MSASPublisher <MSASStateMachineBase>
- (BOOL)addAssetCollectionIsPendingGUID:(id)guid;
- (void)addAssetCollections:(id)collections toAlbum:(id)album;
- (void)addComments:(id)comments toAssetCollection:(id)assetCollection inAlbum:(id)album;
- (void)addSharingRelationships:(id)relationships toOwnedAlbum:(id)ownedAlbum;
- (void)continueAddingAssetCollections:(id)collections skipAssetCollections:(id)collections2 toAlbum:(id)album;
- (void)createAlbum:(id)album;
- (void)removeSharingRelationships:(id)relationships fromOwnedAlbum:(id)ownedAlbum;
- (void)setPublicAccessEnabled:(BOOL)enabled forAlbum:(id)album completionBlock:(id)block;
- (void)updateAlbum:(id)album updateAlbumFlags:(int)flags;
- (BOOL)updateAlbumIsPendingGUID:(id)guid;
@end

