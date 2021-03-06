/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "NSURLConnectionDelegate.h"
#import </libobjc.A.h>

@class MSASPConnectionGate, NSString, NSURL;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface MSASProtocol : NSObject <NSURLConnectionDelegate> {
	BOOL _isShuttingDown;	// 4 = 0x4
	MSASPConnectionGate *_gate;	// 8 = 0x8
	NSObject<OS_dispatch_queue> *_pendingConnectionsQueue;	// 12 = 0xc
	NSObject<OS_dispatch_group> *_pendingConnectionsGroup;	// 16 = 0x10
	NSString *_personID;	// 20 = 0x14
	NSURL *_baseURL;	// 24 = 0x18
	NSString *_serverSideConfigVersion;	// 28 = 0x1c
	NSString *_headerVersion;	// 32 = 0x20
	NSObject<OS_dispatch_queue> *_workQueue;	// 36 = 0x24
	NSObject<OS_dispatch_queue> *_memberQueue;	// 40 = 0x28
}
@property(retain, nonatomic) NSURL *baseURL;	// G=0x3058ea89; S=0x3058ea99; @synthesize=_baseURL
@property(retain, nonatomic) MSASPConnectionGate *gate;	// G=0x3058e9d1; S=0x3058e9e1; @synthesize=_gate
@property(readonly, assign, nonatomic) NSString *headerVersion;	// G=0x3058eb19; @synthesize=_headerVersion
@property(assign, nonatomic) BOOL isShuttingDown;	// G=0x3058eaf9; S=0x3058eb09; @synthesize=_isShuttingDown
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue;	// G=0x3058eb61; S=0x3058eb71; @synthesize=_memberQueue
@property(retain, nonatomic) NSObject<OS_dispatch_group> *pendingConnectionsGroup;	// G=0x3058ea41; S=0x3058ea51; @synthesize=_pendingConnectionsGroup
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *pendingConnectionsQueue;	// G=0x3058ea09; S=0x3058ea19; @synthesize=_pendingConnectionsQueue
@property(readonly, assign, nonatomic) NSString *personID;	// G=0x3058ea79; @synthesize=_personID
@property(retain, nonatomic) NSString *serverSideConfigVersion;	// G=0x3058eac1; S=0x3058ead1; @synthesize=_serverSideConfigVersion
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;	// G=0x3058eb29; S=0x3058eb39; @synthesize=_workQueue
- (id)initWithPersonID:(id)personID;	// 0x3057d249
- (void).cxx_destruct;	// 0x3058eb99
- (id)HTTPErrorWithStatusCode:(int)statusCode;	// 0x3057f7c9
- (id)_addCommentURLWithBaseURL:(id)baseURL;	// 0x30580499
- (id)_albumStateURL;	// 0x30580739
- (id)_albumSummaryURLWithBaseURL:(id)baseURL;	// 0x305805c9
- (id)_couldNotReauthorizeError;	// 0x3058bb61
- (id)_createAlbumURL;	// 0x30580309
- (id)_deleteAssetsURLWithBaseURL:(id)baseURL;	// 0x30580519
- (id)_deleteCommentURLWithBaseURL:(id)baseURL;	// 0x30580539
- (id)_deleteURLWithBaseURL:(id)baseURL;	// 0x305804f9
- (id)_enableMultipleContributorsURLWithBaseURL:(id)baseURL;	// 0x305804d9
- (id)_enablePublicAccessURLWithBaseURL:(id)baseURL;	// 0x305804b9
- (id)_getAlbumURL;	// 0x30580879
- (id)_getAssetsURLWithBaseURL:(id)baseURL;	// 0x305805e9
- (id)_getChangesURL;	// 0x30580559
- (id)_getCommentsURLWithBaseURL:(id)baseURL;	// 0x305806c9
- (id)_getTokensURLWithBaseURL:(id)baseURL;	// 0x30580609
- (id)_getUploadTokensURLWithBaseURL:(id)baseURL;	// 0x30580399
- (id)_getVideoURLWithBaseURL:(id)baseURL;	// 0x305803b9
- (id)_putAssetsURLWithBaseURL:(id)baseURL;	// 0x30580379
- (id)_serverSideConfigURL;	// 0x30580829
- (id)_setAlbumStateURL;	// 0x305807d9
- (id)_setAssetStateURL;	// 0x30580789
- (id)_setCommentPositionURL;	// 0x305806e9
- (id)_shareURL;	// 0x305803f9
- (id)_sharingInfoURLWithBaseURL:(id)baseURL;	// 0x305805a9
- (id)_subscribeURL;	// 0x30580629
- (id)_unshareURL;	// 0x30580449
- (id)_unsubscribeURL;	// 0x30580679
- (id)_updateAlbumURLWithBaseURL:(id)baseURL;	// 0x30580359
- (id)_uploadCompleteURLWithBaseURL:(id)baseURL;	// 0x305803d9
- (void)acceptInvitationWithToken:(id)token completionBlock:(id)block;	// 0x3058cb75
- (void)addComment:(id)comment toAssetCollection:(id)assetCollection inAlbum:(id)album albumURLString:(id)string completionBlock:(id)block;	// 0x30586dbd
- (void)addSharingRelationships:(id)relationships toAlbum:(id)album completionBlock:(id)block;	// 0x30585b85
- (void)albumSummaryAlbum:(id)album albumURLString:(id)string resetSync:(BOOL)sync resetSyncedBlock:(id)block assetCollectionChangeBlock:(id)block5 albumSharingInfoChangeBlock:(id)block6 completionBlock:(id)block7;	// 0x3058a035
// declared property getter: - (id)baseURL;	// 0x3058ea89
- (void)createAlbum:(id)album completionBlock:(id)block;	// 0x305808c9
- (void)dealloc;	// 0x3057d935
- (void)deleteAlbum:(id)album completionBlock:(id)block;	// 0x30587b11
- (void)deleteAssetCollections:(id)collections inAlbum:(id)album completionBlock:(id)block;	// 0x30587e2d
- (void)deleteComment:(id)comment fromAssetCollection:(id)assetCollection inAlbum:(id)album albumURLString:(id)string completionBlock:(id)block;	// 0x30588235
- (id)errorFromStandardProcessingOnResponse:(id)standardProcessingOnResponse responseObject:(id)object checkServerSideConfigVersion:(BOOL)version error:(id)error body:(id)body;	// 0x3057f891
// declared property getter: - (id)gate;	// 0x3058e9d1
- (void)getAlbumSyncedStateForAlbum:(id)album assetCollectionStateBlock:(id)block completionBlock:(id)block3;	// 0x3058d75d
- (void)getAlbumURLForAlbumWithGUID:(id)guid completionBlock:(id)block;	// 0x3058e6e5
- (void)getAssetCollections:(id)collections inAlbum:(id)album albumURLString:(id)string completionBlock:(id)block;	// 0x3058add5
- (void)getChangesRootCtag:(id)ctag completionBlock:(id)block;	// 0x30588679
- (void)getCommentsFromAssetCollection:(id)assetCollection inAlbum:(id)album albumURLString:(id)string fromPosition:(int)position completionBlock:(id)block;	// 0x3058cd61
- (void)getServerSideConfigCompletionBlock:(id)block;	// 0x3058e4e9
- (void)getSharingInfoForAlbum:(id)album albumURLString:(id)string completionBlock:(id)block;	// 0x305899fd
- (void)getTokensForAssets:(id)assets inAlbum:(id)album albumURLString:(id)string completionBlock:(id)block;	// 0x3058bc01
- (void)getUploadTokens:(id)tokens forAssetCollectionWithGUID:(id)guid inAlbumWithGUID:(id)guid3 albumURLString:(id)string completionBlock:(id)block;	// 0x30582861
- (void)getVideoURL:(id)url forAssetCollectionWithGUID:(id)guid inAlbumWithGUID:(id)guid3 albumURLString:(id)string completionBlock:(id)block;	// 0x305832ad
// declared property getter: - (id)headerVersion;	// 0x3058eb19
// declared property getter: - (BOOL)isShuttingDown;	// 0x3058eaf9
// declared property getter: - (id)memberQueue;	// 0x3058eb61
// declared property getter: - (id)pendingConnectionsGroup;	// 0x3058ea41
// declared property getter: - (id)pendingConnectionsQueue;	// 0x3058ea09
// declared property getter: - (id)personID;	// 0x3058ea79
- (void)putAssetCollections:(id)collections intoAlbum:(id)album albumURLString:(id)string completionBlock:(id)block;	// 0x305814b9
- (void)removeSharingRelationships:(id)relationships fromAlbum:(id)album completionBlock:(id)block;	// 0x30586a6d
- (BOOL)responseDict:(id)dict containsLimitErrorCode:(id)code outMaxAllowed:(id *)allowed;	// 0x305845dd
- (void)sendURLRequest:(id)request bodyObj:(id)obj completionBlock:(id)block;	// 0x3057dac9
- (void)sendURLRequest:(id)request method:(id)method bodyObj:(id)obj checkServerSideConfigVersion:(BOOL)version completionBlock:(id)block;	// 0x3057db1d
- (void)sendUploadCompleteSuccessfulAssetCollections:(id)collections failedAssetCollections:(id)collections2 album:(id)album completionBlock:(id)block;	// 0x30584789
// declared property getter: - (id)serverSideConfigVersion;	// 0x3058eac1
- (void)setAlbumSyncedState:(id)state forAlbum:(id)album albumStateCtag:(id)ctag completionBlock:(id)block;	// 0x3058e141
- (void)setAssetCollectionSyncedState:(id)state forAssetCollection:(id)assetCollection inAlbum:(id)album assetCollectionStateCtag:(id)ctag completionBlock:(id)block;	// 0x3058ddb1
// declared property setter: - (void)setBaseURL:(id)url;	// 0x3058ea99
// declared property setter: - (void)setGate:(id)gate;	// 0x3058e9e1
// declared property setter: - (void)setIsShuttingDown:(BOOL)down;	// 0x3058eb09
// declared property setter: - (void)setMemberQueue:(id)queue;	// 0x3058eb71
- (void)setMultipleContributorsEnabled:(BOOL)enabled forAlbum:(id)album completionBlock:(id)block;	// 0x305878b5
// declared property setter: - (void)setPendingConnectionsGroup:(id)group;	// 0x3058ea51
// declared property setter: - (void)setPendingConnectionsQueue:(id)queue;	// 0x3058ea19
- (void)setPublicAccessEnabled:(BOOL)enabled forAlbum:(id)album completionBlock:(id)block;	// 0x30587659
// declared property setter: - (void)setServerSideConfigVersion:(id)version;	// 0x3058ead1
// declared property setter: - (void)setWorkQueue:(id)queue;	// 0x3058eb39
- (void)shutDownCompletionBlock:(id)block;	// 0x3057d551
- (id)shutDownError;	// 0x3057d411
- (void)stopCompletionBlock:(id)block;	// 0x3057d739
- (id)stopHandlerBlock;	// 0x3057d961
- (id)stoppingError;	// 0x3057d4b1
- (void)subscribeToAlbum:(id)album completionBlock:(id)block;	// 0x3058c4e9
- (void)unsubscribeFromAlbum:(id)album completionBlock:(id)block;	// 0x3058c8e5
- (void)updateAlbum:(id)album albumURLString:(id)string completionBlock:(id)block;	// 0x30581049
// declared property getter: - (id)workQueue;	// 0x3058eb29
@end

