/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRButtonControl.h"

@class ATVFavorite, ATVMerchant;

__attribute__((visibility("hidden")))
@interface ATVAddToFavoritesButtonControl : BRButtonControl {
	ATVMerchant *_merchant;	// 132 = 0x84
	ATVFavorite *_favorite;	// 136 = 0x88
}
@property(retain, nonatomic) ATVFavorite *favorite;	// G=0x135721; S=0x135731; @synthesize=_favorite
@property(retain, nonatomic) ATVMerchant *merchant;	// G=0x135701; S=0x135711; @synthesize=_merchant
- (id)init;	// 0x13554d
- (void)_toggle;	// 0x135851
- (void)_update;	// 0x135741
- (BOOL)brEventAction:(id)action;	// 0x1356a1
- (void)controlWasActivated;	// 0x135661
- (void)dealloc;	// 0x1355fd
// declared property getter: - (id)favorite;	// 0x135721
// declared property getter: - (id)merchant;	// 0x135701
// declared property setter: - (void)setFavorite:(id)favorite;	// 0x135731
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x135711
@end

