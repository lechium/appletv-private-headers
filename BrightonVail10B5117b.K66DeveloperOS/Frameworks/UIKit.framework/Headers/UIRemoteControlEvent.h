/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIInternalEvent.h"


__attribute__((visibility("hidden")))
@interface UIRemoteControlEvent : UIInternalEvent {
	int _subtype;	// 16 = 0x10
}
@property(readonly, assign) int subtype;	// G=0x32ee2bdd; converted property
- (id)_init;	// 0x32cdd0e1
- (void)_setSubtype:(int)subtype;	// 0x32ee2bed
- (void)_simpleRemoteActionNotification:(id)notification;	// 0x32ee2bfd
- (void)dealloc;	// 0x32ee2b5d
// converted property getter: - (int)subtype;	// 0x32ee2bdd
- (int)type;	// 0x32ee2bd9
@end

