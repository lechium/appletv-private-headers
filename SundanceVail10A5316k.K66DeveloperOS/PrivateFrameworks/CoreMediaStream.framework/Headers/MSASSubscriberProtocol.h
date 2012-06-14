/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "MSASProtocolBase.h"


@interface MSASSubscriberProtocol : MSASProtocolBase {
}
- (id)_albumStateURL;	// 0x339d41f9
- (id)_albumSummaryURLWithBaseURL:(id)baseURL;	// 0x339d4099
- (id)_couldNotReauthorizeError;	// 0x339d7741
- (id)_getAssetsURLWithBaseURL:(id)baseURL;	// 0x339d40b5
- (id)_getChangesURL;	// 0x339d402d
- (id)_getCommentsURLWithBaseURL:(id)baseURL;	// 0x339d418d
- (id)_getTokensURLWithBaseURL:(id)baseURL;	// 0x339d40d1
- (id)_setAlbumStateURL;	// 0x339d4299
- (id)_setAssetStateURL;	// 0x339d4249
- (id)_setCommentPositionURL;	// 0x339d41a9
- (id)_sharingInfoURLWithBaseURL:(id)baseURL;	// 0x339d407d
- (id)_subscribeURL;	// 0x339d40ed
- (id)_unsubscribeURL;	// 0x339d413d
- (void)acceptInvitationWithToken:(id)token completionBlock:(id)block;	// 0x339d8621
- (void)albumSummaryAlbum:(id)album resetSync:(BOOL)sync resetSyncedBlock:(id)block assetCollectionChangeBlock:(id)block4 completionBlock:(id)block5;	// 0x339d5c85
- (void)getAlbumSyncedStateForAlbum:(id)album assetCollectionStateBlock:(id)block completionBlock:(id)block3;	// 0x339d91ed
- (void)getAssetCollections:(id)collections inAlbum:(id)album completionBlock:(id)block;	// 0x339d6979
- (void)getChangesRootCtag:(id)ctag completionBlock:(id)block;	// 0x339d42e9
- (void)getCommentsFromAssetCollection:(id)assetCollection inAlbum:(id)album fromPosition:(int)position completionBlock:(id)block;	// 0x339d87f1
- (void)getSharingInfoForAlbum:(id)album completionBlock:(id)block;	// 0x339d5605
- (void)getTokensForAssets:(id)assets inAlbum:(id)album completionBlock:(id)block;	// 0x339d780d
- (void)setAlbumSyncedState:(id)state forAlbum:(id)album albumStateCtag:(id)ctag completionBlock:(id)block;	// 0x339d9bd5
- (void)setAssetCollectionSyncedState:(id)state forAssetCollection:(id)assetCollection inAlbum:(id)album assetCollectionStateCtag:(id)ctag completionBlock:(id)block;	// 0x339d984d
- (void)subscribeToAlbum:(id)album completionBlock:(id)block;	// 0x339d8131
- (void)unsubscribeFromAlbum:(id)album completionBlock:(id)block;	// 0x339d83a9
@end
