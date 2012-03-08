/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRController.h"
#import "BRTextFieldDelegate.h"

@class NSString, BRHeaderControl, BRPasscodeEntryControl, BRTextControl, NSDictionary;

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
@property(retain) NSDictionary *userInfo;	// G=0x302f0f55; S=0x302f0f15; converted property
+ (id)passcodeEntryControllerGuarding:(id)guarding hideDigits:(BOOL)digits;	// 0x302f08fd
- (id)initWithTitle:(id)title prompt:(id)prompt mode:(int)mode guarding:(id)guarding hideDigits:(BOOL)digits;	// 0x302f09a5
- (void)_passcodeEnteredForConfirm:(id)confirm;	// 0x302f1311
- (void)_passcodeEnteredForEntry:(id)entry;	// 0x302f0fc5
- (void)_passcodeEnteredForSet:(id)set;	// 0x302f11ad
- (id)accessibilityLabel;	// 0x302f1569
- (void)dealloc;	// 0x302f0b91
- (void)setFrame:(CGRect)frame;	// 0x302f0c59
- (void)setIcon:(id)icon horizontalOffset:(float)offset kerningFactor:(float)factor;	// 0x302f0ed5
- (void)setIconScaleFactor:(float)factor;	// 0x302f0ef5
- (void)setPasscodeToConfirm:(id)confirm;	// 0x302f0e95
// converted property setter: - (void)setUserInfo:(id)info;	// 0x302f0f15
- (void)textDidChange:(id)text;	// 0x302f0f65
- (void)textDidEndEditing:(id)text;	// 0x302f0f69
// converted property getter: - (id)userInfo;	// 0x302f0f55
@end

