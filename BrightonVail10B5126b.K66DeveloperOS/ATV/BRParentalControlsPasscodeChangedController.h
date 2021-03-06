/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRMenuListItemProvider.h"
#import "AppleTV-Structs.h"
#import "BRMenuController.h"


__attribute__((visibility("hidden")))
@interface BRParentalControlsPasscodeChangedController : BRMenuController <BRMenuListItemProvider> {
	BRController *_guardedController;	// 144 = 0x90
	id *_menuItemNameKeys;	// 148 = 0x94
	BOOL _passcodeMatched;	// 152 = 0x98
}
- (id)initWithMatch:(BOOL)match guarding:(id)guarding;	// 0x334389
- (void)dealloc;	// 0x334455
- (float)heightForRow:(long)row;	// 0x33470d
- (long)itemCount;	// 0x3346c5
- (id)itemForRow:(long)row;	// 0x33465d
- (void)itemSelected:(long)selected;	// 0x3344a1
- (BOOL)rowSelectable:(long)selectable;	// 0x334711
- (id)titleForRow:(long)row;	// 0x3346dd
@end

