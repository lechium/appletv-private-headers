/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"


__attribute__((visibility("hidden")))
@interface BRPopupKeyboardVariableWidthKeyRowPlane : BRControl {
	BRControl *_baseKeyControl;	// 84 = 0x54
}
- (id)initWithBaseKeyControl:(id)baseKeyControl;	// 0x31b56d
- (void)dealloc;	// 0x31b5c5
- (void)layoutSubcontrols;	// 0x31b635
- (CGSize)performActionWithSubcontrols:(int)subcontrols;	// 0x31b661
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x31b611
@end
