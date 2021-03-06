/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RUIYTDocumentLoaderDelegate.h"
#import "RUIYTCollectionMenuController.h"
#import "RUIYTAccountFeaturesController.h"

@class NSArray, RUIYTDocumentLoader;

@interface RUIYTAccountFeaturesController : RUIYTCollectionMenuController <RUIYTDocumentLoaderDelegate> {
	RUIYTDocumentLoader *_documentLoader;	// 160 = 0xa0
	NSArray *_collectionItems;	// 164 = 0xa4
}
@property(readonly, retain) NSArray *collectionItems;	// G=0x1ce51; converted property
- (id)init;	// 0x1d1e1
- (void)collectionItemSelected:(id)selected;	// 0x1cb11
// converted property getter: - (id)collectionItems;	// 0x1ce51
- (void)dealloc;	// 0x1d149
- (void)documentLoader:(id)loader didLoadDocument:(id)document;	// 0x1c9cd
- (BOOL)loadResultsForCollectionItem:(id)collectionItem;	// 0x1ccd9
- (BOOL)shouldWaitForLoadingResultsForCollectionItem:(id)collectionItem;	// 0x1cc29
@end

@interface RUIYTAccountFeaturesController (Private)
- (id)_favoritesIdentifier;	// 0x1c97d
- (void)_invalidateFavoritesNotification:(id)notification;	// 0x1d385
- (void)_logOut:(id)anOut;	// 0x1c5f5
- (id)_myVideosIdentifier;	// 0x1c9a5
- (void)_pushSubscriptions:(id)subscriptions;	// 0x1c7ad
- (void)_pushVideosCollectionItem:(id)item notResultsFoundKey:(id)key;	// 0x1c871
- (void)_showErrorWithText:(id)text;	// 0x1c70d
- (id)_subscriptionsIdentifier;	// 0x1c5e9
@end

