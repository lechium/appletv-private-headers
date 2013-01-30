/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface RUIYTHistoryManager : XXUnknownSuperclass {
	NSMutableDictionary *_accountHistory;	// 4 = 0x4
}
+ (id)historyCacheDirectory;	// 0x26a921
+ (int)historySize;	// 0x26a99d
- (id)init;	// 0x26a77d
- (void).cxx_destruct;	// 0x26af7d
- (void)_accountWasRemoved:(id)removed;	// 0x26af39
- (void)_archiveHistoryToDisk;	// 0x26b1d5
- (id)_assetArchivesForCurrentAccount;	// 0x26afdd
- (id)_assetArchivesOfAccount:(id)account;	// 0x26b029
- (void)_assetWasPlayedNotification:(id)notification;	// 0x26ac75
- (id)_currentAccountName;	// 0x26af91
- (id)_loadHistoryOfAccount:(id)account;	// 0x26b121
- (id)_pathForHistoryOfAccount:(id)account;	// 0x26b08d
- (void)_removeHistoryFromDiskForAccount:(id)account;	// 0x26b3cd
- (void)clearAssetHistoryForCurrentAccount;	// 0x26aa69
- (void)dealloc;	// 0x26a8a1
- (id)historyForCurrentAccount;	// 0x26a9f5
- (void)removeAssetsFromHistoryForCurrentAccoutWithIDs:(id)ids;	// 0x26ab39
@end
