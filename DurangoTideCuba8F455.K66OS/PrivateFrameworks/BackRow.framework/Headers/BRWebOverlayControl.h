/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRPanelControl.h"
#import "BackRow-Structs.h"


__attribute__((visibility("hidden")))
@interface BRWebOverlayControl : BRPanelControl {
@private
	BOOL _currentlyShowing;	// 72 = 0x48
}
- (id)init;	// 0x32fe5b05
- (BOOL)brEventAction:(id)action;	// 0x32fe5aa5
- (void)hideControl;	// 0x32fe5e09
- (BOOL)isShowing;	// 0x32fe5a69
- (void)showControl;	// 0x32fe5c79
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x32fe5c1d
- (void)toggleShownHidden;	// 0x32fe5a79
@end

