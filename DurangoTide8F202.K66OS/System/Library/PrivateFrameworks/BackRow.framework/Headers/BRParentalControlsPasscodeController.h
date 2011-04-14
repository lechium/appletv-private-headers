/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRController.h"
#import "BRTextFieldDelegate.h"

@class BRTextControl, NSString, NSDictionary, BRPasscodeEntryControl, BRHeaderControl;

@interface BRParentalControlsPasscodeController : BRController <BRTextFieldDelegate> {
@private
	BRController *_guardedController;	// 60 = 0x3c
	BRPasscodeEntryControl *_editor;	// 64 = 0x40
	BRHeaderControl *_header;	// 68 = 0x44
	BRTextControl *_prompt;	// 72 = 0x48
	NSString *_passcodeToConfirm;	// 76 = 0x4c
	int _mode;	// 80 = 0x50
	NSDictionary *_userInfo;	// 84 = 0x54
}
@property(retain) NSDictionary *userInfo;	// G=0x32922225; S=0x329227bd; converted property
+ (id)passcodeEntryControllerGuarding:(id)guarding hideDigits:(BOOL)digits;	// 0x32922ae9
- (id)initWithTitle:(id)title prompt:(id)prompt mode:(int)mode guarding:(id)guarding hideDigits:(BOOL)digits;	// 0x32922921
- (void)_passcodeEnteredForConfirm:(id)confirm;	// 0x32922239
- (void)_passcodeEnteredForEntry:(id)entry;	// 0x329225b1
- (void)_passcodeEnteredForSet:(id)set;	// 0x32922465
- (id)accessibilityLabel;	// 0x32922dc5
- (void)dealloc;	// 0x3292287d
- (void)setFrame:(CGRect)frame;	// 0x32922b89
- (void)setIcon:(id)icon horizontalOffset:(float)offset kerningFactor:(float)factor;	// 0x32922815
- (void)setIconScaleFactor:(float)factor;	// 0x329227f5
- (void)setPasscodeToConfirm:(id)confirm;	// 0x32922845
// converted property setter: - (void)setUserInfo:(id)info;	// 0x329227bd
- (void)textDidChange:(id)text;	// 0x32922235
- (void)textDidEndEditing:(id)text;	// 0x32922775
// converted property getter: - (id)userInfo;	// 0x32922225
@end

