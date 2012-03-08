/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "MSSubscriber.h"
#import "MSSubscribeStreamsProtocolDelegate.h"
#import "MSSubscribeStorageProtocolDelegate.h"
#import "MSReauthorizationProtocolDelegate.h"
#import "MSCupidStateMachine.h"

@class NSMutableArray, NSMutableDictionary, MSMediaStreamDaemon, MSReauthorizationProtocol, MSSubscribeStreamsProtocol, MSObjectQueue;
@protocol MSSubscribeStorageProtocol, MSSubscriberDelegate;

@protocol MSSubscriber
@property(assign, nonatomic) id<MSSubscriberDelegate> delegate;
- (void)abort;
- (void)checkForNewAssetCollections;
- (void)checkForOutstandingActivities;
// declared property getter: - (id)delegate;
- (id)ownSubscribedStream;
- (void)resetSync;
- (void)retrieveAssets:(id)assets;
// declared property setter: - (void)setDelegate:(id)delegate;
- (void)stop;
- (id)subscribedStreams;
@end

@interface MSSubscriber : MSCupidStateMachine <MSSubscriber, MSSubscribeStreamsProtocolDelegate, MSSubscribeStorageProtocolDelegate, MSReauthorizationProtocolDelegate> {
@private
	id<MSSubscriberDelegate> _delegate;	// 24 = 0x18
	MSMediaStreamDaemon *_daemon;	// 28 = 0x1c
	BOOL _checkOneMoreTime;	// 32 = 0x20
	int _state;	// 36 = 0x24
	MSSubscribeStreamsProtocol *_protocol;	// 40 = 0x28
	NSMutableDictionary *_newSubscriptionsByStreamID;	// 44 = 0x2c
	int _retrievalState;	// 48 = 0x30
	id<MSSubscribeStorageProtocol> _storageProtocol;	// 52 = 0x34
	MSReauthorizationProtocol *_reauthProtocol;	// 56 = 0x38
	MSObjectQueue *_retrievalQueue;	// 60 = 0x3c
	NSMutableArray *_assetsBeingRetrieved;	// 64 = 0x40
	long long _targetRetrievalByteCount;	// 68 = 0x44
	int _retrievalBatchSize;	// 76 = 0x4c
	int _maxErrorCount;	// 80 = 0x50
}
@property(assign, nonatomic) MSMediaStreamDaemon *daemon;	// G=0x3388e7ad; S=0x3388e7bd; @synthesize=_daemon
@property(assign, nonatomic) id<MSSubscriberDelegate> delegate;	// G=0x3388e78d; S=0x3388e79d; @synthesize=_delegate
@property(assign, nonatomic) int retrievalBatchSize;	// G=0x3388e7f9; S=0x3388e809; @synthesize=_retrievalBatchSize
@property(assign, nonatomic) long long targetRetrievalByteCount;	// G=0x3388e7cd; S=0x3388e7e5; @synthesize=_targetRetrievalByteCount
+ (id)_clearInstantiatedSubscribersByPersonID;	// 0x3388affd
+ (void)_setMasterNextActivityDate:(id)date forPersonID:(id)personID;	// 0x3388b075
+ (id)existingSubscriberForPersonID:(id)personID;	// 0x3388afe1
+ (void)forgetPersonID:(id)anId;	// 0x3388b025
+ (BOOL)isInRetryState;	// 0x3388b499
+ (id)nextActivityDate;	// 0x3388b2c9
+ (id)nextActivityDateForPersonID:(id)personID;	// 0x3388b3b5
+ (id)personIDsWithOutstandingActivities;	// 0x3388b3d5
+ (void)stopAllActivities;	// 0x3388b3f1
+ (id)subscriberForPersonID:(id)personID;	// 0x3388af09
- (id)initWithPersonID:(id)personID baseURL:(id)url;	// 0x3388b699
- (void)_abort;	// 0x3388d5ad
- (void)_checkForNewAssetCollections;	// 0x3388c0d5
- (void)_didFinishRetrievingSubscriptionUpdate;	// 0x3388c279
- (void)_didReceiveAuthenticationError:(id)error;	// 0x3388ca6d
- (void)_finishedRetrievingAsset:(id)asset;	// 0x3388d945
- (void)_forget;	// 0x3388d8a5
- (BOOL)_hasOutstandingPoll;	// 0x3388bcd9
- (BOOL)_isAllowedToDownload;	// 0x3388bf25
- (BOOL)_isInRetryState;	// 0x3388d911
- (void)_reauthorizeAssets;	// 0x3388d345
- (void)_refreshServerSideConfigurationParameters;	// 0x3388ba05
- (void)_retrieveAssets;	// 0x3388d03d
- (void)_retrieveNextAssets;	// 0x3388d185
- (void)_serverSideConfigurationDidChange:(id)_serverSideConfiguration;	// 0x3388baf5
- (void)_setHasOutstandingPoll:(BOOL)poll;	// 0x3388bd19
- (void)_setSubscriptionsByStreamID:(id)anId;	// 0x3388be69
- (void)_stopOutSubscriberState:(int *)state outRetrievalState:(int *)state2;	// 0x3388d43d
- (id)_subscriptionsByStreamID;	// 0x3388bddd
- (void)_updateMasterManifest;	// 0x3388bc15
- (void)abort;	// 0x3388d895
- (void)checkForNewAssetCollections;	// 0x3388bfe5
- (void)checkForOutstandingActivities;	// 0x3388cfc1
// declared property getter: - (id)daemon;	// 0x3388e7ad
- (void)deactivate;	// 0x3388b885
- (void)dealloc;	// 0x3388b9c5
// declared property getter: - (id)delegate;	// 0x3388e78d
- (id)ownSubscribedStream;	// 0x3388b655
- (void)reauthorizationProtocol:(id)protocol didReceiveAuthenticationError:(id)error;	// 0x3388e32d
- (void)reauthorizationProtocol:(id)protocol reauthorizedAssets:(id)assets rejectedAssets:(id)assets3 error:(id)error;	// 0x3388e341
- (void)resetSync;	// 0x3388beb5
// declared property getter: - (int)retrievalBatchSize;	// 0x3388e7f9
- (void)retrieveAssets:(id)assets;	// 0x3388cc11
// declared property setter: - (void)setDaemon:(id)daemon;	// 0x3388e7bd
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3388e79d
// declared property setter: - (void)setRetrievalBatchSize:(int)size;	// 0x3388e809
// declared property setter: - (void)setTargetRetrievalByteCount:(long long)count;	// 0x3388e7e5
- (void)stop;	// 0x3388d599
- (void)subscribeStorageProtocol:(id)protocol didFinishRetrievingAsset:(id)asset error:(id)error;	// 0x3388da59
- (void)subscribeStorageProtocolDidFinishRetrievingAllAssets:(id)subscribeStorageProtocol;	// 0x3388db75
- (void)subscribeStreamsProtocol:(id)protocol didFindDisappearedSubscriptionForPersonID:(id)personID;	// 0x3388c7d1
- (void)subscribeStreamsProtocol:(id)protocol didFindShareState:(id)state;	// 0x3388cbad
- (void)subscribeStreamsProtocol:(id)protocol didFinishError:(id)error;	// 0x3388c88d
- (void)subscribeStreamsProtocol:(id)protocol didFinishReceivingUpdatesForPersonID:(id)personID ctag:(id)ctag;	// 0x3388c619
- (void)subscribeStreamsProtocol:(id)protocol didReceiveAssetCollections:(id)collections forPersonID:(id)personID;	// 0x3388c565
- (void)subscribeStreamsProtocol:(id)protocol didReceiveAuthenticationError:(id)error;	// 0x3388cb39
- (void)subscribeStreamsProtocol:(id)protocol difFindTemporarilyUnavailableSubscriptionForPersonID:(id)personID;	// 0x3388cb4d
- (void)subscribeStreamsProtocol:(id)protocol willReceiveUpdatesForPersonID:(id)personID wasReset:(BOOL)reset metadata:(id)metadata;	// 0x3388c391
- (id)subscribedStreams;	// 0x3388b559
// declared property getter: - (long long)targetRetrievalByteCount;	// 0x3388e7cd
@end

