/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIWebRotatingPopover.h"
#import "UIWebFormControl.h"

@class UIWebDateTimePopoverViewController;

__attribute__((visibility("hidden")))
@interface UIWebDefaultDateTimePopover : UIWebRotatingPopover <UIWebFormControl> {
@private
	UIWebDateTimePopoverViewController *_webDateTimeViewController;	// 16 = 0x10
}
@property(retain, nonatomic) UIWebDateTimePopoverViewController *_webDateTimeViewController;	// G=0x3588f921; S=0x3588f931; @synthesize
- (id)initWithDOMHTMLInputElement:(id)domhtmlinputElement datePickerMode:(int)mode;	// 0x3588f609
// declared property getter: - (id)_webDateTimeViewController;	// 0x3588f921
- (void)clear:(id)clear;	// 0x3588f5dd
- (void)controlBeginEditing;	// 0x3588f8d5
- (id)controlView;	// 0x3588f8d1
- (void)dealloc;	// 0x3588f88d
// declared property setter: - (void)set_webDateTimeViewController:(id)controller;	// 0x3588f931
@end

