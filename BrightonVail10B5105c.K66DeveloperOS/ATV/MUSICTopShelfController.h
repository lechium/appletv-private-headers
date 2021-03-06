/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRTopShelfController.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class BRTopShelfView, PlayHandler, ATVDataClient, NSArray, MUSICDataClientTopShelfHelper;
@protocol BRProvider, BRControlFactory;

__attribute__((visibility("hidden")))
@interface MUSICTopShelfController : XXUnknownSuperclass <BRTopShelfController> {
	id<BRProvider> _nowPlayingProvider;	// 4 = 0x4
	MUSICDataClientTopShelfHelper *_topShelfHelper;	// 8 = 0x8
	ATVDataClient *_cloudDataClient;	// 12 = 0xc
	NSArray *_mediaItems;	// 16 = 0x10
	BRTopShelfView *_topShelf;	// 20 = 0x14
	id<BRControlFactory> _homeShareFactory;	// 24 = 0x18
	PlayHandler *_playHandler;	// 28 = 0x1c
}
- (id)init;	// 0x767b5
- (void).cxx_destruct;	// 0x778ed
- (void)_dataClientDataUpdated:(id)updated;	// 0x77e35
- (void)_dataClientStatusChanged:(id)changed;	// 0x77d5d
- (void)_nowPlayingProviderUpdated:(id)updated;	// 0x77e45
- (void)_validateTopShelf;	// 0x77985
- (float)coverflowMarginForMediaShelf:(id)mediaShelf;	// 0x778e1
- (void)dealloc;	// 0x76b51
- (float)horizontalGapForMediaShelf:(id)mediaShelf;	// 0x778d5
- (id)mainMenuShelfView;	// 0x76bbd
- (void)mediaShelf:(id)shelf didFocusItemAtIndexPath:(id)indexPath;	// 0x77309
- (void)mediaShelf:(id)shelf didPlayItemAtIndexPath:(id)indexPath;	// 0x77571
- (void)mediaShelf:(id)shelf didSelectItemAtIndexPath:(id)indexPath;	// 0x7730d
- (id)mediaShelf:(id)shelf itemAtIndexPath:(id)indexPath;	// 0x76e39
- (long)mediaShelf:(id)shelf numberOfColumnsInSection:(long)section;	// 0x76fe1
- (id)mediaShelf:(id)shelf sectionHeaderForSection:(long)section;	// 0x77041
- (id)mediaShelf:(id)shelf titleForSectionAtIndex:(long)index;	// 0x770d9
- (long)numberOfFlatColumnsInMediaShelf:(id)mediaShelf;	// 0x76fd9
- (long)numberOfSectionsInMediaShelf:(id)mediaShelf;	// 0x76fdd
- (void)refresh;	// 0x76ce1
- (void)selectCategoryWithIdentifier:(id)identifier;	// 0x76e21
- (void)willBeHidden;	// 0x76e35
- (void)willBeShown;	// 0x76e25
@end

