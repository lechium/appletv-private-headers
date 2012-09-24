/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRSelectionHandler.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVCatalogHandler : XXUnknownSuperclass <BRSelectionHandler> {
	NSDictionary *_item;	// 4 = 0x4
}
- (void)_confirmAction:(int)action withObject:(id)object;	// 0x1cc699
- (void)_confirmActionResponse:(id)response;	// 0x1cd2ad
- (void)_downloadItem:(id)item;	// 0x1cd335
- (BOOL)_handleFavoriteListItemSelection:(id)selection listItem:(id)item;	// 0x1cc41d
- (void)_parentalControlPasscodeSuccessful:(id)successful;	// 0x1cd52d
- (void)_playOrPauseAsset:(id)asset;	// 0x1cc241
- (void)_podcastItemSelected:(id)selected;	// 0x1cc375
- (void)_previewItemSelected:(id)selected;	// 0x1cc2c9
- (void)_transactionConfirmedForItem:(id)item;	// 0x1ccf4d
- (void)_warningForAction:(int)action withObject:(id)object;	// 0x1cc529
- (void)_warningForActionResponse:(id)actionResponse;	// 0x1cc5bd
- (void)dealloc;	// 0x1cb81d
- (BOOL)handlePlayForControl:(id)control;	// 0x1cbc85
- (BOOL)handleSelectionForControl:(id)control;	// 0x1cb899
- (BOOL)handleStoreOfferItemSelection:(id)selection;	// 0x1cbe79
@end
