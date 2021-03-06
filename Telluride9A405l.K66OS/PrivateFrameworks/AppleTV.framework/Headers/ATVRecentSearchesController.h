/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRMediaMenuController.h"
#import "BRMenuListItemProvider.h"

@class NSArray, ATVSearchAgent;

__attribute__((visibility("hidden")))
@interface ATVRecentSearchesController : BRMediaMenuController <BRMenuListItemProvider> {
@private
	NSArray *_recentSearches;	// 156 = 0x9c
	ATVSearchAgent *_searchAgent;	// 160 = 0xa0
}
- (id)initWithSearchAgent:(id)searchAgent;	// 0x35d18859
- (void)_populateRecentSearchesList;	// 0x35d18b69
- (void)dealloc;	// 0x35d18901
- (float)heightForRow:(long)row;	// 0x35d18b09
- (long)itemCount;	// 0x35d18a91
- (id)itemForRow:(long)row;	// 0x35d18a39
- (void)itemSelected:(long)selected;	// 0x35d18961
- (id)previewControlForItem:(long)item;	// 0x35d18b65
- (BOOL)rowSelectable:(long)selectable;	// 0x35d18b61
- (id)titleForRow:(long)row;	// 0x35d18ab1
@end

