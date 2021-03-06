/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIAlertView.h"


__attribute__((visibility("hidden")))
@interface _UIUserNotificationAlertView : UIAlertView {
	CFUserNotificationRef _userNotification;	// 192 = 0xc0
	CFRunLoopSourceRef _userNotificationRunLoopSource;	// 196 = 0xc4
	BOOL _runsModal;	// 200 = 0xc8
	BOOL _runningModal;	// 201 = 0xc9
}
@property(assign) BOOL runsModal;	// G=0x330d4699; S=0x330d46a9; converted property
+ (void)initialize;	// 0x330d4635
- (void)_cancelUserNotification;	// 0x330d5231
- (int)addButtonWithTitle:(id)title;	// 0x330d4fb1
- (void)cancelAlertView;	// 0x330d51a1
- (void)dealloc;	// 0x330d5399
- (void)dismissWithClickedButtonIndex:(int)clickedButtonIndex animated:(BOOL)animated;	// 0x330d52e9
- (BOOL)isVisible;	// 0x330d4f4d
// converted property getter: - (BOOL)runsModal;	// 0x330d4699
- (void)setHostedWindow:(id)window;	// 0x330d502d
- (void)setRemoteViewController:(id)controller;	// 0x330d50e9
// converted property setter: - (void)setRunsModal:(BOOL)modal;	// 0x330d46a9
- (void)show;	// 0x330d46b9
- (id)textFieldAtIndex:(int)index;	// 0x330d4f65
@end

