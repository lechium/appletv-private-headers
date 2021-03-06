/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRController.h"

@class BRMerchant, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreCatalogItemController : BRController {
	NSDictionary *_itemDictionary;	// 100 = 0x64
	BRMerchant *_merchant;	// 104 = 0x68
	BOOL _isDirty;	// 108 = 0x6c
}
@property(retain) NSDictionary *itemDictionary;	// G=0x1f5fe1; S=0x1f5ff1; converted property
@property(readonly, retain) BRMerchant *merchant;	// G=0x1f602d; converted property
- (id)initWithItemDictionary:(id)itemDictionary;	// 0x1f5d3d
- (void)_authenticationStatusChanged:(id)changed;	// 0x1f61f1
- (void)_handleWindowMaxBoundsChanged;	// 0x1f608d
- (void)_markAsDirtyAndRefreshIfActive;	// 0x1f6191
- (void)_purchaseAcquired:(id)acquired;	// 0x1f6255
- (void)_refreshPage;	// 0x1f60dd
- (void)_rentalAcquired:(id)acquired;	// 0x1f6265
- (void)augmentRelatedContentItemsFromPage:(id)page;	// 0x1f65e5
- (void)dealloc;	// 0x1f5f65
- (void)fetchRelatedContent;	// 0x1f62a5
- (void)fetchRelatedContentFromURL:(id)url;	// 0x1f6351
// converted property getter: - (id)itemDictionary;	// 0x1f5fe1
- (void)markAsDirty;	// 0x1f609d
// converted property getter: - (id)merchant;	// 0x1f602d
- (id)refreshURL;	// 0x1f60b1
- (void)relatedContentLoaded:(id)loaded;	// 0x1f6275
// converted property setter: - (void)setItemDictionary:(id)dictionary;	// 0x1f5ff1
- (void)wasExhumed;	// 0x1f603d
@end

