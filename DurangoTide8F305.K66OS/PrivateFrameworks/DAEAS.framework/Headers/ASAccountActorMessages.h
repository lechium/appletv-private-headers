/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */



@protocol ASAccountActorMessages
- (oneway void)_accountPasswordChanged;
- (oneway void)_daemonDiedNotification:(id)notification;
- (oneway void)_folderHierarchyChanged;
- (oneway void)_folderUpdatedNotification:(id)notification;
- (oneway void)_foldersThatExternalClientsCareAboutChanged;
- (oneway void)_newASPolicyKeyNotification:(id)notification;
- (oneway void)cancelAllSearchQueries;
- (oneway void)cancelSearchQuery:(id)query;
- (oneway void)cancelTaskWithID:(int)anId;
- (id)deletedItemsFolder;
- (id)folderIDsThatExternalClientsCareAboutForDataclasses:(int)dataclasses withTag:(id *)tag;
- (id)folderIDsThatExternalClientsCareAboutWithTag:(id *)tag;
- (id)inboxFolder;
- (int)mailNumberOfPastDaysToSync;
- (id)mailboxes;
- (oneway void)monitorFoldersForUpdates:(id)updates;
- (int)performFetchAttachmentRequest:(id)request consumer:(id)consumer;
- (int)performFetchMessageSearchResultRequests:(id)requests consumer:(id)consumer;
- (int)performMailboxRequest:(id)request mailbox:(id)mailbox previousTag:(id)tag consumer:(id)consumer;
- (int)performMailboxRequests:(id)requests mailbox:(id)mailbox previousTag:(id)tag consumer:(id)consumer;
- (int)performMoveRequests:(id)requests consumer:(id)consumer;
- (oneway void)performSearchQuery:(id)query consumer:(id)consumer;
- (BOOL)reattemptInvitationLinkageForMetaData:(id)metaData inFolderWithId:(id)anId;
- (BOOL)searchQueriesRunning;
- (int)sendMessageWithRFC822Data:(id)rfc822Data messageID:(id)anId outgoingMessageType:(int)type originalMessageFolderID:(id)anId4 originalMessageItemID:(id)anId5 originalMessageLongID:(id)anId6 originalAccountID:(id)anId7 consumer:(id)consumer context:(void *)context;
- (id)sentItemsFolder;
- (oneway void)setAccount:(id)account;
- (BOOL)setFolderIdsThatExternalClientsCareAboutAdded:(id)added deleted:(id)deleted foldersTag:(id)tag;
- (oneway void)setMailNumberOfPastDaysToSync:(int)sync;
- (oneway void)shutdown;
- (oneway void)startup;
- (oneway void)stopMonitoringAllFolders;
- (oneway void)stopMonitoringFoldersForUpdates:(id)updates;
- (int)supportsMailboxSearch;
@end

