/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRMediaMenuController.h"
#import "BRMenuListItemProvider.h"

@class NSArray, ATVSearchAgent;

__attribute__((visibility("hidden")))
@interface ATVRecentSearchesController : BRMediaMenuController <BRMenuListItemProvider> {
	NSArray *_recentSearches;	// 176 = 0xb0
	ATVSearchAgent *_searchAgent;	// 180 = 0xb4
}
- (id)initWithSearchAgent:(id)searchAgent;	// 0x2348e9
- (void)_populateRecentSearchesList;	// 0x234c01
- (void)dealloc;	// 0x234991
- (float)heightForRow:(long)row;	// 0x234ba1
- (long)itemCount;	// 0x234b29
- (id)itemForRow:(long)row;	// 0x234ad1
- (void)itemSelected:(long)selected;	// 0x2349f5
- (id)previewControlForItem:(long)item;	// 0x234bfd
- (BOOL)rowSelectable:(long)selectable;	// 0x234bf9
- (id)titleForRow:(long)row;	// 0x234b49
@end

