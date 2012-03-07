/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVCatalogAgent.h"
#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library


@interface ATVMusicStoreCatalogAgent : NSObject <ATVCatalogAgent> {
}
+ (void)_augmentStoreOffers:(id)offers purchaseOfferParams:(id)params;	// 0x330eae9d
+ (id)_backgroundGradientImageForItem:(id)item;	// 0x330ee1dd
+ (id)_backgroundImageForItem:(id)item;	// 0x330ee1bd
+ (id)_backgroundImageForItem:(id)item imageName:(id)name;	// 0x330ee1fd
+ (CGSize)_backgroundImageSizeForItem:(id)item inset:(float *)inset;	// 0x330ee071
+ (void)_catalogControlRequestProcessed:(id)processed;	// 0x330ea1ed
+ (id)_catalogPageControlForItem:(id)item;	// 0x330eb79d
+ (BOOL)_checkForPurchases:(id)purchases metadata:(id)metadata userInfo:(id)info;	// 0x330eac51
+ (void)_checkForPurchasesComplete:(id)purchasesComplete;	// 0x330ead71
+ (id)_collectionControlsForPageItem:(id)pageItem requestedBy:(id)by dividerSeparated:(BOOL)separated;	// 0x330eca15
+ (id)_controlForItem:(id)item;	// 0x330eb2e1
+ (void)_controlForMediaItem:(ATVMediaItemRef)mediaItem;	// 0x330eb6a9
+ (id)_controlForRequestParameters:(id)requestParameters identifier:(id)identifier merchant:(id)merchant;	// 0x330eb0e1
+ (id)_controlForURL:(id)url identifier:(id)identifier merchant:(id)merchant;	// 0x330eb269
+ (id)_createItemTypeMap;	// 0x330e7e09
+ (id)_firstControlOfType:(Class)type inArray:(id)array;	// 0x330edad5
+ (id)_formattedPageContentCountString:(id)string;	// 0x330ed429
+ (id)_headerControlsForPageItem:(id)pageItem;	// 0x330ecf1d
+ (id)_listPageForItem:(id)item;	// 0x330ebc4d
+ (id)_mediaTypeForStoreLink:(id)storeLink;	// 0x330ea635
+ (id)_mediaTypeForStoreMediaCollectionType:(id)storeMediaCollectionType;	// 0x330ea4b5
+ (id)_mediaTypeForStoreMediaType:(id)storeMediaType;	// 0x330ea2f5
+ (id)_moreInfoHeaderControlsForPageItem:(id)pageItem;	// 0x330ed139
+ (void)_playEventMediaAsset:(id)asset swapCatalogApplianceController:(BOOL)controller;	// 0x330ea96d
+ (void)_playVideoClip:(id)clip;	// 0x330ea69d
+ (void)_popToItemController:(id)itemController;	// 0x330ea2a1
+ (id)_roomDescriptionControlsForPageItem:(id)pageItem;	// 0x330edb7d
+ (id)_roomPageContainerForItem:(id)item withScroller:(id)scroller;	// 0x330ec051
+ (id)_roomPageForItem:(id)item;	// 0x330ebded
+ (id)_scrollerControlsFromHeaderControls:(id)headerControls collectionControls:(id)controls;	// 0x330ed399
+ (id)_setupScroller;	// 0x330eba2d
+ (id)_supplementPageForItem:(id)item;	// 0x330ebba5
+ (id)_tabbedPageForItem:(id)item;	// 0x330ec499
+ (void)acquireItem:(id)item;	// 0x330e7321
+ (id)allLeafItemsForItem:(id)item;	// 0x330e8dc1
+ (void)augmentPageDictionaryWithPurchases:(id)purchases purchaseCheckResponse:(id)response;	// 0x330e9925
+ (id)catalogHandler;	// 0x330e7131
+ (void)checkForPurchases;	// 0x330e728d
+ (id)checkForPurchasesRequestForPageDictionary:(id)pageDictionary;	// 0x330e9401
+ (id)configureRelatedControlsFromControl:(id)control style:(int)style;	// 0x330e91d1
+ (id)controlForItem:(id)item;	// 0x330e7df9
+ (void)controlForObject:(id)object;	// 0x330e7a75
+ (id)controlForObject:(id)object merchant:(id)merchant;	// 0x330e7ab5
+ (id)coverArtForItem:(id)item;	// 0x330e891d
+ (id)coverArtURLForItem:(id)item featured:(BOOL)featured thumbnail:(BOOL)thumbnail;	// 0x330e8b0d
+ (long)downloadItem:(id)item;	// 0x330e7599
+ (id)episodeArtURLForItem:(id)item;	// 0x330e8bfd
+ (void)initialize;	// 0x330e6e25
+ (BOOL)isItemFeatured:(id)featured;	// 0x330e8cb1
+ (BOOL)isItemOrdered:(id)ordered;	// 0x330e8cd9
+ (BOOL)isPurchaseAllowedForItem:(id)item;	// 0x330e7215
+ (BOOL)isTemplateParameterSet:(id)set forItem:(id)item;	// 0x330e8d01
+ (long)itemIDForItem:(id)item;	// 0x330e87e1
+ (int)itemType:(id)type;	// 0x330e8089
+ (id)mediaAssetForStoreOffer:(id)storeOffer;	// 0x330e8261
+ (id)mediaTypeForItem:(id)item;	// 0x330e81bd
+ (void)playItem:(id)item;	// 0x330e90d9
+ (void)playStoreItem:(id)item;	// 0x330e8f6d
+ (id)plistFromURLDocument:(id)urldocument;	// 0x330e9145
+ (void)processResponseDocument:(id)document userInfo:(id)info;	// 0x330e9da9
+ (void)registerClass:(Class)aClass withTemplateName:(id)templateName;	// 0x330e76b1
+ (long)repurchaseItem:(id)item context:(void *)context;	// 0x330e7509
+ (void)sendPingForItem:(id)item;	// 0x330e7805
+ (void)setDownloadFunction:(/*function-pointer*/ void *)function;	// 0x330e7301
+ (void)setPurchaseFunction:(/*function-pointer*/ void *)function;	// 0x330e72d1
+ (void)setRentalFunction:(/*function-pointer*/ void *)function;	// 0x330e72e1
+ (void)setRepurchaseFunction:(/*function-pointer*/ void *)function;	// 0x330e7311
+ (void)setSubscribeFunction:(/*function-pointer*/ void *)function;	// 0x330e72f1
+ (BOOL)showAllTitles:(id)titles;	// 0x330e8c61
+ (BOOL)showTitleAndSubtitle:(id)subtitle;	// 0x330e8c89
+ (BOOL)storeVersionIsCompatibileForPageDictionary:(id)pageDictionary redirectURL:(id *)url;	// 0x330e797d
+ (void)subscribeToItem:(id)item;	// 0x330e7579
@end
