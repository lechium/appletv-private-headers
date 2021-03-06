/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRSingleton.h"

@class BRControllerStack, BRWindow;

@interface BRApplicationStackManager : BRSingleton {
@private
	BRControllerStack *_stack;	// 4 = 0x4
	BRWindow *_window;	// 8 = 0x8
}
@property(readonly, retain) BRControllerStack *stack;	// G=0x329126bd; converted property
@property(readonly, retain) BRWindow *window;	// G=0x329b3de9; converted property
+ (void)setSingleton:(id)singleton;	// 0x329126b1
+ (id)singleton;	// 0x3291225d
- (id)init;	// 0x32912269
- (void)show;	// 0x329126cd
// converted property getter: - (id)stack;	// 0x329126bd
// converted property getter: - (id)window;	// 0x329b3de9
@end

