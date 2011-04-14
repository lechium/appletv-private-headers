/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRMenuListItemProvider.h"
#import "BRMenuController.h"


__attribute__((visibility("hidden")))
@interface BRParentalControlsPasscodeChangedController : BRMenuController <BRMenuListItemProvider> {
@private
	BRController *_guardedController;	// 104 = 0x68
	NSString **_menuItemNameKeys;	// 108 = 0x6c
	BOOL _passcodeMatched;	// 112 = 0x70
}
- (id)initWithMatch:(BOOL)match guarding:(id)guarding;	// 0x32922169
- (void)dealloc;	// 0x32922121
- (float)heightForRow:(long)row;	// 0x32921ed5
- (long)itemCount;	// 0x32921ebd
- (id)itemForRow:(long)row;	// 0x32921f11
- (void)itemSelected:(long)selected;	// 0x32921f71
- (BOOL)rowSelectable:(long)selectable;	// 0x32921ed9
- (id)titleForRow:(long)row;	// 0x32921edd
@end

