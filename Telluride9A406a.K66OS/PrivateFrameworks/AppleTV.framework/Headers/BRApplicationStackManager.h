/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSingleton.h"

@class BRControllerStack, BRWindow;

@interface BRApplicationStackManager : BRSingleton {
@private
	BRControllerStack *_stack;	// 4 = 0x4
	BRWindow *_window;	// 8 = 0x8
}
@property(readonly, retain) BRControllerStack *stack;	// G=0x330ff921; converted property
@property(readonly, retain) BRWindow *window;	// G=0x330ff911; converted property
+ (void)setSingleton:(id)singleton;	// 0x330ff7fd
+ (id)singleton;	// 0x330ff7ed
- (id)init;	// 0x330ff80d
- (void)show;	// 0x330ff8f1
// converted property getter: - (id)stack;	// 0x330ff921
// converted property getter: - (id)window;	// 0x330ff911
@end

