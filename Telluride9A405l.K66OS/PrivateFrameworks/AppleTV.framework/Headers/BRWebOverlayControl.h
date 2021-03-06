/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRPanelControl.h"


__attribute__((visibility("hidden")))
@interface BRWebOverlayControl : BRPanelControl {
@private
	BOOL _currentlyShowing;	// 76 = 0x4c
}
- (id)init;	// 0x35e47671
- (BOOL)brEventAction:(id)action;	// 0x35e47825
- (void)hideControl;	// 0x35e47a55
- (BOOL)isShowing;	// 0x35e47c01
- (void)showControl;	// 0x35e47885
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x35e4779d
- (void)toggleShownHidden;	// 0x35e47bcd
@end

