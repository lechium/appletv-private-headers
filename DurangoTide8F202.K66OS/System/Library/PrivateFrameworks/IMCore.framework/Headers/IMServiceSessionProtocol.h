/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */



@protocol IMServiceSessionProtocol
- (void)acceptSubscriptionRequest:(BOOL)request from:(id)from;
- (void)addAlias:(id)alias;
- (oneway void)autoLogin;
- (oneway void)autoReconnect;
- (void)cancelVCRequestWithPerson:(id)person properties:(id)properties conference:(id)conference;
- (void)changeGroup:(id)group changes:(id)changes;
- (void)changeGroups:(id)groups;
- (void)declineInvitationToChat:(id)chat style:(unsigned char)style;
- (void)disableCertificatesForPerson:(id)person;
- (void)enableSecureIM:(BOOL)im;
- (void)holdBuddyUpdates;
- (void)invitePerson:(id)person withMessage:(id)message toChat:(id)chat style:(unsigned char)style;
- (void)joinChat:(id)chat style:(unsigned char)style joinProperties:(id)properties;
- (void)leaveChat:(id)chat style:(unsigned char)style;
- (oneway void)login;
- (oneway void)logout;
- (void)passwordUpdated;
- (void)registerAccount;
- (void)relay:(id)relay sendCancel:(id)cancel toPerson:(id)person;
- (void)relay:(id)relay sendInitateRequest:(id)request toPerson:(id)person;
- (void)relay:(id)relay sendUpdate:(id)update toPerson:(id)person;
- (void)removeAlias:(id)alias;
- (void)renameGroup:(id)group to:(id)to;
- (void)requestGroups;
- (void)requestProperty:(id)property ofPerson:(id)person;
- (void)requestSubscriptionTo:(id)to;
- (void)requestVCWithPerson:(id)person properties:(id)properties conference:(id)conference;
- (void)respondToVCInvitationWithPerson:(id)person properties:(id)properties conference:(id)conference;
- (void)resumeBuddyUpdates;
- (void)sendAVMessageToPerson:(id)person sessionID:(unsigned)anId type:(unsigned)type userInfo:(id)info conference:(id)conference;
- (void)sendCounterProposalToPerson:(id)person properties:(id)properties conference:(id)conference;
- (void)sendFileTransfer:(id)transfer toPerson:(id)person;
- (void)sendMessage:(id)message toChat:(id)chat style:(unsigned char)style;
- (void)sendVCUpdate:(id)update toPerson:(id)person conference:(id)conference;
- (void)serviceCertificatesChanged;
- (void)setAllowList:(id)list;
- (void)setBlockIdleStatus:(BOOL)status;
- (void)setBlockList:(id)list;
- (void)setBlockingMode:(unsigned)mode;
- (void)setProperties:(id)properties ofParticipant:(id)participant inChat:(id)chat style:(unsigned char)style;
- (void)setValue:(id)value ofProperty:(id)property ofPerson:(id)person;
- (void)startWatchingBuddy:(id)buddy;
- (void)stopWatchingBuddy:(id)buddy;
- (void)unregisterAccount;
- (void)updateAuthorization;
- (void)validateAlias:(id)alias;
- (void)validateProfile;
@end

