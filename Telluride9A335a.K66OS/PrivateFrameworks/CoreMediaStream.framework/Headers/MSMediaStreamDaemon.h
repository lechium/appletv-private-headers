/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <NSObject.h> // Unknown library

@protocol MSMediaStreamDaemonDelegate;

@interface MSMediaStreamDaemon : NSObject {
@private
	id<MSMediaStreamDaemonDelegate> _delegate;	// 4 = 0x4
	int _busyCount;	// 8 = 0x8
	int _UIBusyCount;	// 12 = 0xc
}
@property(assign, nonatomic) id<MSMediaStreamDaemonDelegate> delegate;	// G=0x322b7429; S=0x322b7439; @synthesize=_delegate
- (id)_boundPublisherForPersonID:(id)personID;	// 0x322b57c5
- (id)_boundServerSideConfigManagerForPersonID:(id)personID;	// 0x322b5a29
- (id)_boundSharingManagerForPersonID:(id)personID;	// 0x322b5951
- (id)_boundSubscriberForPersonID:(id)personID;	// 0x322b5879
- (id)_findShareWithPersonID:(id)personID inArray:(id)array;	// 0x322b6701
- (void)_removeShareWithPersonID:(id)personID inArray:(id)array;	// 0x322b67b9
- (void)_setShares:(id)shares forPersonID:(id)personID;	// 0x322b618d
- (void)abortAllActivityForPersonID:(id)personID;	// 0x322b5c35
- (void)computeHashForAsset:(id)asset personID:(id)anId;	// 0x322b60e5
// declared property getter: - (id)delegate;	// 0x322b7429
- (void)didExceedPublishQuotaForPersonID:(id)personID retryDate:(id)date;	// 0x322b73fd
- (void)didReceiveAuthenticationFailureForPersonID:(id)personID;	// 0x322b73ad
- (void)didReceiveAuthenticationSuccessForPersonID:(id)personID;	// 0x322b73d5
- (void)didReceiveNewServerSideConfigurationForPersonID:(id)personID;	// 0x322b6ec1
- (void)didReceiveNewShareState:(id)state oldShareState:(id)state2 forPersonID:(id)personID;	// 0x322b73a5
- (void)didReceiveServerSideConfigurationVersion:(id)version forPersonID:(id)personID;	// 0x322b6de1
- (BOOL)enqueueAssetCollection:(id)collection personID:(id)anId outError:(id *)error;	// 0x322b5e8d
- (void)forgetPersonID:(id)anId;	// 0x322b5d59
- (BOOL)hasOutstandingActivity;	// 0x322b5721
- (id)invitationFromPushNotificationUserInfo:(id)pushNotificationUserInfo outSourcePersonID:(id *)anId outTargetPersonID:(id *)anId3;	// 0x322b61bd
- (id)invitationStringsFromInvitation:(id)invitation targetPersonID:(id)anId;	// 0x322b61ed
- (BOOL)isBusy;	// 0x322b5575
- (BOOL)isInRetryState;	// 0x322b5779
- (void)modifyShare:(id)share forPersonID:(id)personID;	// 0x322b6649
- (id)nextActivityDate;	// 0x322b56c5
- (id)notificationStringsForShareStateTransitionOldShares:(id)shareStateTransitionOldShares newShares:(id)shares;	// 0x322b683d
- (id)ownSubscribedStreamForPersonID:(id)personID;	// 0x322b613d
- (BOOL)personIDHasOutstandingPublications:(id)publications;	// 0x322b5741
- (BOOL)personIDIsAcceptingInvitations:(id)invitations;	// 0x322b66a9
- (void)pollForSubscriptionUpdatesForPersonID:(id)personID;	// 0x322b5f19
- (void)pollForSubscriptionUpdatesTriggeredByPushNotification;	// 0x322b5f85
- (void)refreshServerSideConfigurationForPersonID:(id)personID;	// 0x322b6e99
- (void)refreshShareStatesForPersonID:(id)personID;	// 0x322b66d9
- (void)releaseBusy;	// 0x322b54c5
- (void)releasePowerAssertion;	// 0x322b73a1
- (void)releaseUIBusy;	// 0x322b5629
- (void)removeShare:(id)share forPersonID:(id)personID;	// 0x322b6679
- (void)resetSubscriberSyncForPersonID:(id)personID;	// 0x322b60bd
- (void)respondToInvitation:(id)invitation forPersonID:(id)personID accept:(BOOL)accept;	// 0x322b6619
- (void)retainBusy;	// 0x322b5419
- (void)retainPowerAssertion;	// 0x322b739d
- (void)retainUIBusy;	// 0x322b558d
- (void)retryOutstandingActivities;	// 0x322b5a65
- (void)sendInvitations:(id)invitations forPersonID:(id)personID;	// 0x322b65e9
- (id)serverSideConfigurationForPersonID:(id)personID;	// 0x322b6db9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x322b7439
- (id)sharesForPersonID:(id)personID;	// 0x322b6165
- (void)showInvitationFailureAlertForPersonID:(id)personID failures:(id)failures;	// 0x322b73a9
- (void)start;	// 0x322b6f55
- (void)stop;	// 0x322b6fb5
- (void)stopAllActivities;	// 0x322b5cf5
- (id)subscribedStreamsForPersonID:(id)personID;	// 0x322b6115
@end

