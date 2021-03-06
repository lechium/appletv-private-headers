/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRController.h"
#import "BRTextFieldDelegate.h"

@class BRTextControl, NSDictionary, NSString, BRHeaderControl, BRPasscodeEntryControl;

@interface BRParentalControlsPasscodeController : BRController <BRTextFieldDelegate> {
@private
	BRController *_guardedController;	// 84 = 0x54
	BRPasscodeEntryControl *_editor;	// 88 = 0x58
	BRHeaderControl *_header;	// 92 = 0x5c
	BRTextControl *_prompt;	// 96 = 0x60
	NSString *_passcodeToConfirm;	// 100 = 0x64
	int _mode;	// 104 = 0x68
	NSDictionary *_userInfo;	// 108 = 0x6c
}
@property(retain) NSDictionary *userInfo;	// G=0x32a33cc9; S=0x32a33c89; converted property
+ (id)passcodeEntryControllerGuarding:(id)guarding hideDigits:(BOOL)digits;	// 0x32a33671
- (id)initWithTitle:(id)title prompt:(id)prompt mode:(int)mode guarding:(id)guarding hideDigits:(BOOL)digits;	// 0x32a33719
- (void)_passcodeEnteredForConfirm:(id)confirm;	// 0x32a34085
- (void)_passcodeEnteredForEntry:(id)entry;	// 0x32a33d39
- (void)_passcodeEnteredForSet:(id)set;	// 0x32a33f21
- (id)accessibilityLabel;	// 0x32a342dd
- (void)dealloc;	// 0x32a33905
- (void)setFrame:(CGRect)frame;	// 0x32a339cd
- (void)setIcon:(id)icon horizontalOffset:(float)offset kerningFactor:(float)factor;	// 0x32a33c49
- (void)setIconScaleFactor:(float)factor;	// 0x32a33c69
- (void)setPasscodeToConfirm:(id)confirm;	// 0x32a33c09
// converted property setter: - (void)setUserInfo:(id)info;	// 0x32a33c89
- (void)textDidChange:(id)text;	// 0x32a33cd9
- (void)textDidEndEditing:(id)text;	// 0x32a33cdd
// converted property getter: - (id)userInfo;	// 0x32a33cc9
@end

