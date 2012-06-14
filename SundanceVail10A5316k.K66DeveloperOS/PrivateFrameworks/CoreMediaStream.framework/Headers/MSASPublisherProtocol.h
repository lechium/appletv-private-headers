/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "MSASProtocolBase.h"


@interface MSASPublisherProtocol : MSASProtocolBase {
}
- (id)_addCommentURLWithBaseURL:(id)baseURL;	// 0x339cfbdd
- (id)_createAlbumURL;	// 0x339cf9fd
- (id)_enablePublicAccessURL;	// 0x339cfbf9
- (id)_putAssetsURL;	// 0x339cfa9d
- (id)_shareURL;	// 0x339cfb3d
- (id)_unshareURL;	// 0x339cfb8d
- (id)_updateAlbumURL;	// 0x339cfa4d
- (id)_uploadCompleteURL;	// 0x339cfaed
- (void)addComment:(id)comment toAssetCollection:(id)assetCollection inAlbum:(id)album completionBlock:(id)block;	// 0x339d2e41
- (void)addSharingRelationships:(id)relationships toAlbum:(id)album completionBlock:(id)block;	// 0x339d2759
- (void)createAlbum:(id)album completionBlock:(id)block;	// 0x339cfc49
- (void)putAssetCollections:(id)collections intoAlbum:(id)album completionBlock:(id)block;	// 0x339d065d
- (void)removeSharingRelationships:(id)relationships fromAlbum:(id)album completionBlock:(id)block;	// 0x339d2b15
- (void)sendUploadCompleteSuccessfulAssetCollections:(id)collections failedAssetCollections:(id)collections2 album:(id)album completionBlock:(id)block;	// 0x339d16f1
- (void)setPublicAccessEnabled:(BOOL)enabled forAlbum:(id)album completionBlock:(id)block;	// 0x339d3385
- (void)updateAlbum:(id)album completionBlock:(id)block;	// 0x339d024d
@end

