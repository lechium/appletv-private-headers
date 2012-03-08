/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "BRProvider.h"

@class NSMutableArray, NSArray;
@protocol BRControlFactory;

@interface ATVDotMacRecentAlbumsProvider : NSObject <BRProvider> {
@private
	NSMutableArray *_accountsBeingLoaded;	// 4 = 0x4
	NSArray *_mostRecentAlbums;	// 8 = 0x8
	NSMutableArray *_accountProviders;	// 12 = 0xc
	NSMutableArray *_collectionProviders;	// 16 = 0x10
	NSMutableArray *_collectionsBeingLoaded;	// 20 = 0x14
	id<BRControlFactory> _controlFactory;	// 24 = 0x18
	BOOL _queryInProgress;	// 28 = 0x1c
	double _lastQueryTime;	// 32 = 0x20
}
+ (id)cacheFolderPath;	// 0x301cb70d
+ (id)mainMenuProvider;	// 0x301cb6c1
+ (id)standardProvider;	// 0x301cb675
- (id)initForMainMenu:(BOOL)mainMenu;	// 0x301cb76d
- (void)_accountsInserted:(id)inserted;	// 0x301cbfc5
- (void)_accountsRemoved:(id)removed;	// 0x301cc055
- (void)_aggregateRecentAlbums:(id)albums forAccountName:(id)accountName;	// 0x301cc95d
- (void)_collectionImageUpdated:(id)updated;	// 0x301cbcdd
- (void)_collectionProviderUpdated:(id)updated;	// 0x301cbb01
- (void)_loadAccounts;	// 0x301cbef5
- (void)_loadCollection:(id)collection;	// 0x301ccbb1
- (void)_loadRSSFeedWithAccountName:(id)accountName;	// 0x301cc465
- (void)_loadRecentAlbumsFromCache;	// 0x301cce15
- (void)_networkChanged:(id)changed;	// 0x301cc26d
- (BOOL)_okToFetchNewData;	// 0x301cc321
- (id)_persistentAccountNames;	// 0x301cbe85
- (void)_removeRecentCachedAlbumsFromAccount:(id)account;	// 0x301cd349
- (void)_rssFeedRequestReady:(id)ready;	// 0x301cc5b5
- (void)_saveRecentAlbumsToCache;	// 0x301cd1c9
- (void)_sortCollectionsBeingLoaded;	// 0x301ccc49
- (id)controlFactory;	// 0x301cb75d
- (id)dataAtIndex:(long)index;	// 0x301cba75
- (long)dataCount;	// 0x301cba55
- (void)dealloc;	// 0x301cb975
- (id)hashForDataAtIndex:(long)index;	// 0x301cba95
- (void)reload;	// 0x301cbacd
@end

