/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BROptionDialog.h"

@class ATVStoreFavorite;

__attribute__((visibility("hidden")))
@interface ATVFavoriteUnavailableController : BROptionDialog {
@private
	ATVStoreFavorite *_favorite;	// 152 = 0x98
}
- (id)initWithStoreFavorite:(id)storeFavorite;	// 0x36559579
- (void)_optionSelected:(id)selected;	// 0x3655979d
- (id)_textForFavoriteType:(int)favoriteType;	// 0x3655975d
- (void)dealloc;	// 0x36559711
@end
