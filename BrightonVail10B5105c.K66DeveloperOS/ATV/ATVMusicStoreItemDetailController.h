/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVMusicStoreCatalogItemController.h"

@class BRDetailedMediaControl, NSTimer, BRScrollControl, ATVDataQuery, ATVDataItem;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreItemDetailController : ATVMusicStoreCatalogItemController {
	BRScrollControl *_scrollControl;	// 112 = 0x70
	BRDetailedMediaControl *_detailedControl;	// 116 = 0x74
	ATVDataQuery *_rentalQuery;	// 120 = 0x78
	ATVDataItem *_rentalItem;	// 124 = 0x7c
	NSTimer *_expiryInfoTimer;	// 128 = 0x80
	BOOL _isPurchased;	// 132 = 0x84
}
@property(readonly, retain) BRDetailedMediaControl *detailedControl;	// G=0x1f43e5; converted property
@property(retain) id itemDictionary;	// G=0x1f42d9; S=0x1f43f5; converted property
- (id)init;	// 0x1f4089
- (id)initWithItemDictionary:(id)itemDictionary;	// 0x1f40cd
- (void)_cacheManagerStateChanged:(id)changed;	// 0x1f5359
- (void)_checkIfAlreadyRented;	// 0x1f5369
- (BOOL)_checkIfPurchased;	// 0x1f5095
- (id)_displayableItemAdjacentTo:(id)to forward:(BOOL)forward;	// 0x1f4ed1
- (id)_displayableItemAfter:(id)after;	// 0x1f4ea9
- (id)_displayableItemBefore:(id)before;	// 0x1f4ebd
- (void)_expiryInfoTimerFired:(id)fired;	// 0x1f5a09
- (id)_filterPreferredItemsFromDictionary:(id)dictionary;	// 0x1f49f1
- (void)_layoutControls;	// 0x1f4bd1
- (void)_nextItemSelected;	// 0x1f44b5
- (void)_nextItemSelected:(id)selected;	// 0x1f4e89
- (void)_previousItemSelected;	// 0x1f4501
- (void)_previousItemSelected:(id)selected;	// 0x1f4e99
- (void)_relatedContentControlCreated:(id)created;	// 0x1f47b1
- (void)_rentalQueryComplete;	// 0x1f5591
- (void)_setCopyrightText;	// 0x1f46d1
- (void)_setupDetailedControl;	// 0x1f454d
- (void)_startExpiryInfoTimer;	// 0x1f592d
- (void)_stopExpiryInfoTimer;	// 0x1f59dd
- (void)_updateExpiryInfo;	// 0x1f56ed
- (void)_updateFocus;	// 0x1f4dc5
- (void)_updatePurchasedLoadingText;	// 0x1f510d
- (void)controlWasActivated;	// 0x1f431d
- (void)controlWasDeactivated;	// 0x1f43a5
- (void)dealloc;	// 0x1f420d
// converted property getter: - (id)detailedControl;	// 0x1f43e5
// converted property getter: - (id)itemDictionary;	// 0x1f42d9
- (void)relatedContentLoaded:(id)loaded;	// 0x1f472d
// converted property setter: - (void)setItemDictionary:(id)dictionary;	// 0x1f43f5
@end

