/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASAccount.h"

@class NSMutableSet;

@interface ASClientAccount : ASAccount {
	NSMutableSet *_daemonMonitoredFolders;	// 96 = 0x60
	NSMutableSet *_foldersToRetryForMonitoring;	// 100 = 0x64
	NSMutableSet *_folderIDsOnRemoteHold;	// 104 = 0x68
}
- (id)initWithProperties:(id)properties;	// 0x31dd0e09
- (void)_addFoldersToDaemonMonitoring:(id)daemonMonitoring;	// 0x31dd14f1
- (id)_copySetFlagsActionForRequest:(id)request;	// 0x31dd26e5
- (void)_daemonDied;	// 0x31dd13a1
- (void)_folderHierarchyChanged;	// 0x31dd0f71
- (void)_foldersThatExternalClientsCareAboutChanged;	// 0x31dd1011
- (void)_foldersUpdated:(id)updated;	// 0x31dd119d
- (void)_logStatus:(id)status;	// 0x31dd1495
- (id)_newPolicyManager;	// 0x31dd0dd1
- (void)_removeFoldersFromDaemonMonitoring:(id)daemonMonitoring;	// 0x31dd1555
- (void)_reportFolderItemSyncSuccess:(BOOL)success forFolderWithID:(id)anId;	// 0x31dd2e01
- (void)_retryMonitoring;	// 0x31dd15fd
- (void)_sync:(id)sync withConsumer:(id)consumer;	// 0x31dd1c69
- (void)applyNewAccountProperties:(id)properties forceSave:(BOOL)save;	// 0x31dd1969
- (void)clearFolderHierarchyCache;	// 0x31dd0f49
- (void)dealloc;	// 0x31dd0e89
- (id)mailboxes;	// 0x31dd2cf9
- (void)monitorFoldersForUpdates:(id)updates;	// 0x31dd16dd
- (int)performFetchAttachmentRequest:(id)request consumer:(id)consumer;	// 0x31dd2071
- (int)performFetchMessageSearchResultRequests:(id)requests consumer:(id)consumer;	// 0x31dd224d
- (void)performFolderChange:(id)change;	// 0x31dd2681
- (int)performMailboxRequest:(id)request mailbox:(id)mailbox previousTag:(id)tag consumer:(id)consumer;	// 0x31dd2c81
- (int)performMailboxRequests:(id)requests mailbox:(id)mailbox previousTag:(id)tag consumer:(id)consumer;	// 0x31dd278d
- (int)performMoveRequests:(id)requests consumer:(id)consumer;	// 0x31dd1d71
- (int)performResolveRecipientsRequest:(id)request consumer:(id)consumer;	// 0x31dd25b1
- (BOOL)reattemptInvitationLinkageForMetaData:(id)metaData inFolderWithId:(id)anId;	// 0x31dd18ad
- (void)resolveRecipientsTask:(id)task completedWithStatus:(int)status error:(id)error queriedEmailAddressToRecpient:(id)recpient;	// 0x31dd2561
- (void)resumeMonitoringFoldersWithIDs:(id)ids;	// 0x31dd10b1
- (void)sendMailTask:(id)task completedWithStatus:(int)status error:(id)error;	// 0x31dd1d09
- (BOOL)setFolderIdsThatExternalClientsCareAboutAdded:(id)added deleted:(id)deleted foldersTag:(id)tag;	// 0x31dd1b55
- (void)stopMonitoringAllFolders;	// 0x31dd1859
- (void)stopMonitoringFoldersForUpdates:(id)updates;	// 0x31dd17f1
- (void)suspendMonitoringFoldersWithIDs:(id)ids;	// 0x31dd1bd9
- (void)upgradeWithProtocolVersion:(id)protocolVersion;	// 0x31dd1a65
@end

