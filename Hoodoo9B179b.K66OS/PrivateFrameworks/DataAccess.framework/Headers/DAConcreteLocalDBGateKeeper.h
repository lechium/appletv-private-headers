/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "DALocalDBGateKeeper.h"

@class NSString, NSMutableDictionary;

@interface DAConcreteLocalDBGateKeeper : DALocalDBGateKeeper {
	NSString *_buildVersion;	// 68 = 0x44
	NSMutableDictionary *_refreshingWaiters;	// 72 = 0x48
	NSMutableDictionary *_failedWaiters;	// 76 = 0x4c
	NSMutableDictionary *_restrictedWaiters;	// 80 = 0x50
}
- (id)init;	// 0x311a90c1
- (void)_abortWaiterForWrappers:(id)wrappers;	// 0x311aa119
- (BOOL)_canWakenWaiter:(id)waiter;	// 0x311a9cad
- (void)_decrementRefreshCountForWaiterID:(id)waiterID didFinish:(BOOL)finish;	// 0x311a9f51
- (void)_notifyWaitersForDataclasses:(id)dataclasses;	// 0x311aa6e5
- (void)_reloadBabysitterProperties;	// 0x311a88dd
- (void)_removeRestrictedWaitersFromAllQueues;	// 0x311aa3f1
- (void)_sendAllClearNotifications;	// 0x311ab0f9
- (BOOL)babysitterEnabled;	// 0x311a9091
- (void)claimedOwnershipOfDataclasses:(int)dataclasses;	// 0x311ac04d
- (void)dealloc;	// 0x311a9279
- (void)giveAccountWithIDAnotherChance:(id)idanotherChance;	// 0x311a9821
- (void)registerWaiter:(id)waiter forDataclassLocks:(int)dataclassLocks completionHandler:(id)handler;	// 0x311aad61
- (void)relinquishLocksForWaiter:(id)waiter dataclasses:(int)dataclasses moreComing:(BOOL)coming;	// 0x311ab981
- (void)setBookmarksLockHolder:(id)holder;	// 0x311a9bed
- (void)setContactsLockHolder:(id)holder;	// 0x311a99ad
- (void)setEventsLockHolder:(id)holder;	// 0x311a9a6d
- (void)setNotesLockHolder:(id)holder;	// 0x311a9b2d
- (id)stateString;	// 0x311ac0ed
- (void)unregisterWaiterForDataclassLocks:(id)dataclassLocks;	// 0x311ab5cd
@end

