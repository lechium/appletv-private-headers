/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BROptionDialog.h"


@interface BRModalOptionDialog : BROptionDialog {
@private
	long _cancelIdx;	// 148 = 0x94
	BOOL _allowMenuButton;	// 152 = 0x98
}
- (id)init;	// 0x3305a871
- (id)initAllowingMenuButton:(BOOL)button;	// 0x3305a885
- (void)_done:(id)done;	// 0x3305aa25
- (BOOL)brEventAction:(id)action;	// 0x3305a995
- (long)runModal;	// 0x3305a8d5
- (void)setCancelIndex:(long)index;	// 0x3305a985
@end

