/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIViewController.h"

@protocol UIWebFormControl;

__attribute__((visibility("hidden")))
@interface UIWebDateTimePopoverViewController : UIViewController {
@private
	id<UIWebFormControl> _innerWebDateTimeControl;	// 156 = 0x9c
}
@property(retain, nonatomic) id<UIWebFormControl> _innerWebDateTimeControl;	// G=0x3588f5a9; S=0x3588f5b9; @synthesize
- (id)initWithDOMHTMLInputElement:(id)domhtmlinputElement datePickerMode:(int)mode;	// 0x3588f49d
// declared property getter: - (id)_innerWebDateTimeControl;	// 0x3588f5a9
- (void)dealloc;	// 0x3588f529
- (void)loadView;	// 0x3588f56d
// declared property setter: - (void)set_innerWebDateTimeControl:(id)control;	// 0x3588f5b9
@end

