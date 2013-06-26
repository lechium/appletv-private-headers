/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRMenuItem.h"

@class ATVMerchant, ATVFavorite;

__attribute__((visibility("hidden")))
@interface ATVAddToFavoritesMenuItem : BRMenuItem {
	ATVMerchant *_merchant;	// 188 = 0xbc
	ATVFavorite *_favorite;	// 192 = 0xc0
}
@property(retain, nonatomic) ATVFavorite *favorite;	// G=0xce079; S=0xce089; @synthesize=_favorite
@property(retain, nonatomic) ATVMerchant *merchant;	// G=0xce059; S=0xce069; @synthesize=_merchant
- (void)_toggle;	// 0xce0f5
- (void)_update;	// 0xce099
- (BOOL)brEventAction:(id)action;	// 0xcdff9
- (void)controlWasActivated;	// 0xcdfb9
- (void)dealloc;	// 0xcdf55
// declared property getter: - (id)favorite;	// 0xce079
// declared property getter: - (id)merchant;	// 0xce059
// declared property setter: - (void)setFavorite:(id)favorite;	// 0xce089
// declared property setter: - (void)setMerchant:(id)merchant;	// 0xce069
@end
