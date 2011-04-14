/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RUIYTDocumentLoaderDelegate.h"
#import "RUIYTCommonSubMenuController.h"

@class NSArray, RUIYTDocumentLoader;

@interface RUIYTOptionsMenuController : RUIYTCommonSubMenuController <RUIYTDocumentLoaderDelegate> {
	RUIYTDocumentLoader *_documentLoader;	// 156 = 0x9c
	NSArray *_menuItems;	// 160 = 0xa0
	BOOL _rated;	// 164 = 0xa4
	BOOL _faved;	// 165 = 0xa5
	BOOL _flagged;	// 166 = 0xa6
	BOOL _faving;	// 167 = 0xa7
}
- (id)initWithOriginalAsset:(id)originalAsset;	// 0xd331
- (void)_favingDoneBySaving:(BOOL)saving error:(id)error;	// 0xc519
- (void)_flag;	// 0xc43d
- (void)_handleRated;	// 0xc8c9
- (id)_menuItems;	// 0xcbc5
- (void)_playNoopSound;	// 0xcb5d
- (void)_pushLoginRequiredFlavor:(int)flavor;	// 0xca85
- (void)_rate;	// 0xc8ed
- (void)_reloadMenuItems;	// 0xcb7d
- (void)_removeFromFavorites;	// 0xc699
- (void)_saveToFavorites;	// 0xc7a9
- (void)dealloc;	// 0xd299
- (void)documentLoader:(id)loader didLoadDocument:(id)document;	// 0xcf55
- (float)heightForRow:(long)row;	// 0xc435
- (BOOL)isNetworkDependent;	// 0xc431
- (long)itemCount;	// 0xd081
- (id)itemForRow:(long)row;	// 0xd0a5
- (void)itemSelected:(long)selected;	// 0xd10d
- (BOOL)rowSelectable:(long)selectable;	// 0xc439
- (id)titleForRow:(long)row;	// 0xd009
- (void)wasExhumed;	// 0xd25d
- (void)wasPopped;	// 0xd1e9
@end

