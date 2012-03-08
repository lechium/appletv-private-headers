/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRTopShelfController.h"
#import "AppleTVAPPBinary-Structs.h"
#import "ATVUpdatable.h"
#import "INTERNETTopShelfController.h"

@class ATVMusicStorePresentsProvider, NSString, NSMutableArray, NSDictionary, ATVFeedDocument, ATVFeedTopShelfElement, ATVPeriodicItemUpdateTask, NSNumber, BRTopShelfView;
@protocol BRProvider;

__attribute__((visibility("hidden")))
@interface INTERNETTopShelfController : XXUnknownSuperclass <BRTopShelfController, ATVUpdatable> {
	NSString *_lastVisitedCategoryIdentifier;	// 4 = 0x4
	NSNumber *_topShelfRefreshInterval;	// 8 = 0x8
	NSMutableArray *_topShelfPostersBySection;	// 12 = 0xc
	NSDictionary *_topShelfPlist;	// 16 = 0x10
	ATVFeedDocument *_topShelfDocument;	// 20 = 0x14
	ATVFeedTopShelfElement *_topShelfElement;	// 24 = 0x18
	ATVPeriodicItemUpdateTask *_topShelfRefreshTask;	// 28 = 0x1c
	id<BRProvider> _nowPlayingProvider;	// 32 = 0x20
	id<BRProvider> _youTubeProvider;	// 36 = 0x24
	ATVMusicStorePresentsProvider *_topPodcastsProvider;	// 40 = 0x28
	id<BRProvider> _mobileMeProvider;	// 44 = 0x2c
	ATVDataClientRef _cupidDataClient;	// 48 = 0x30
	ATVMediaQueryRef _cupidQuery;	// 52 = 0x34
	id<BRProvider> _cupidProvider;	// 56 = 0x38
	BRTopShelfView *_topShelf;	// 60 = 0x3c
}
- (id)init;	// 0x96791
- (void).cxx_destruct;	// 0x97af1
- (float)coverflowMarginForMediaShelf:(id)mediaShelf;	// 0x97a9d
- (void)dealloc;	// 0x969bd
- (float)horizontalGapForMediaShelf:(id)mediaShelf;	// 0x97a91
- (id)mainMenuShelfView;	// 0x96d05
- (void)mediaShelf:(id)shelf didFocusItemAtIndexPath:(id)indexPath;	// 0x97a8d
- (void)mediaShelf:(id)shelf didPlayItemAtIndexPath:(id)indexPath;	// 0x97acd
- (void)mediaShelf:(id)shelf didSelectItemAtIndexPath:(id)indexPath;	// 0x97aa9
- (id)mediaShelf:(id)shelf itemAtIndexPath:(id)indexPath;	// 0x96e45
- (long)mediaShelf:(id)shelf numberOfColumnsInSection:(long)section;	// 0x97439
- (id)mediaShelf:(id)shelf sectionHeaderForSection:(long)section;	// 0x975b1
- (id)mediaShelf:(id)shelf titleForSectionAtIndex:(long)index;	// 0x97651
- (long)numberOfFlatColumnsInMediaShelf:(id)mediaShelf;	// 0x972a1
- (long)numberOfSectionsInMediaShelf:(id)mediaShelf;	// 0x973f1
- (void)refresh;	// 0x96d15
- (void)selectCategoryWithIdentifier:(id)identifier;	// 0x96d85
- (id)topShelfView;	// 0x96c21
- (void)updateWithFeedElement:(id)feedElement;	// 0x96b55
- (void)updateWithPropertyList:(id)propertyList;	// 0x96a89
- (void)willBeHidden;	// 0x96e35
- (void)willBeShown;	// 0x96e01
@end

@interface INTERNETTopShelfController (TopShelfFeed)
- (void)_cancelTopShelfRefreshTask;	// 0x99eed
- (BOOL)_doesCategoryUseGenericTopShelfFeed:(id)feed;	// 0x99f45
- (BOOL)_isUsingGenericTopShelfFeed;	// 0x9a019
- (void)_loadTopShelfItemsFromDocument:(id)document;	// 0x996b5
- (id)_merchantForCurrentCategory;	// 0x99fb5
- (void)_refreshGenericTopShelfFeed;	// 0x9954d
- (void)_startTopShelfRefreshTaskWithInternal:(double)internal;	// 0x99d81
- (void)_topShelfFeedLoaded:(id)loaded;	// 0x99cbd
- (void)_topShelfFeedUpdated:(id)updated;	// 0x99d4d
- (void)_updateWithTopShelfElement:(id)topShelfElement;	// 0x97c01
- (void)_updateWithTopShelfPropertyList:(id)topShelfPropertyList;	// 0x98779
@end

@interface INTERNETTopShelfController (Private)
- (void)_cupidQueryComplete;	// 0x9a0d1
- (id)_defaultCategoryIdentifier;	// 0x9aa1d
- (void)_handleAction:(int)action forMediaShelf:(id)mediaShelf atIndexPath:(id)indexPath;	// 0x9ae15
- (void)_queryCupidClient;	// 0x9a03d
- (BOOL)_setLastVisitedCategory:(id)category;	// 0x9a2a1
- (void)_validateTopShelf;	// 0x9accd
@end

@interface INTERNETTopShelfController (Notifications)
- (void)_cupidDataClientDataUpdated:(id)updated;	// 0x9b2bd
- (void)_mainMenuIsVisible:(id)visible;	// 0x9b349
- (void)_mobileMeUpdated:(id)updated;	// 0x9b261
- (void)_networkStateChanged:(id)changed;	// 0x9b2cd
- (void)_nowPlayingProviderUpdated:(id)updated;	// 0x9b14d
- (void)_parentalControlPasscodeSuccessful:(id)successful;	// 0x9b481
- (void)_storeRootCollectionUpdated:(id)updated;	// 0x9b2dd
- (void)_topPodcastsUpdated:(id)updated;	// 0x9b1a9
- (void)_youTubeUpdated:(id)updated;	// 0x9b205
@end

