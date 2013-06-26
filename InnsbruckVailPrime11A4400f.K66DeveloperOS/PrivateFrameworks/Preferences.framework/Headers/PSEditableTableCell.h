/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "UITextViewDelegate.h"
#import "Preferences-Structs.h"
#import "UITextFieldDelegate.h"
#import "PSTableCell.h"

@class PSListController, UIColor;

@interface PSEditableTableCell : PSTableCell <UITextViewDelegate, UITextFieldDelegate> {
	UIColor *_textColor;	// 416 = 0x1a0
	id _delegate;	// 420 = 0x1a4
	BOOL _forceFirstResponder;	// 424 = 0x1a8
	BOOL _delaySpecifierRelease;	// 425 = 0x1a9
	SEL _targetSetter;	// 428 = 0x1ac
	id _realTarget;	// 432 = 0x1b0
	BOOL _valueChanged;	// 436 = 0x1b4
	BOOL _isEditing;	// 437 = 0x1b5
	BOOL _returnKeyTapped;	// 438 = 0x1b6
	PSListController *_controllerDelegate;	// 440 = 0x1b8
}
@property(assign, nonatomic) PSListController *controllerDelegate;	// G=0x3249d03d; S=0x3249d04d; @synthesize=_controllerDelegate
@property(readonly, assign, nonatomic) BOOL isEditing;	// G=0x3249ce79; @synthesize=_isEditing
@property(readonly, assign, nonatomic) BOOL returnKeyTapped;	// G=0x3249d02d; @synthesize=_returnKeyTapped
@property(retain) id value;	// G=0x3249cea1; S=0x3249cec9; converted property
+ (int)cellStyle;	// 0x3249bcd1
- (id)initWithStyle:(int)style reuseIdentifier:(id)identifier specifier:(id)specifier;	// 0x3249bcd9
- (void)_saveForExit;	// 0x3249c669
- (void)_setValueChanged;	// 0x3249c5d1
- (BOOL)becomeFirstResponder;	// 0x3249ce29
- (BOOL)canBecomeFirstResponder;	// 0x3249cdb1
- (BOOL)canReload;	// 0x3249c37d
- (BOOL)canResignFirstResponder;	// 0x3249cdd9
- (void)cellRemovedFromView;	// 0x3249c555
- (void)controlChanged:(id)changed;	// 0x3249c3b5
// declared property getter: - (id)controllerDelegate;	// 0x3249d03d
- (void)dealloc;	// 0x3249bd75
- (void)endEditingAndSave;	// 0x3249c435
// declared property getter: - (BOOL)isEditing;	// 0x3249ce79
- (BOOL)isFirstResponder;	// 0x3249ce01
- (void)layoutSubviews;	// 0x3249cc09
- (void)prepareForReuse;	// 0x3249c2d5
- (void)refreshCellContentsWithSpecifier:(id)specifier;	// 0x3249be5d
- (BOOL)resignFirstResponder;	// 0x3249ce51
// declared property getter: - (BOOL)returnKeyTapped;	// 0x3249d02d
- (void)setCellEnabled:(BOOL)enabled;	// 0x3249c9d9
// declared property setter: - (void)setControllerDelegate:(id)delegate;	// 0x3249d04d
- (void)setDelegate:(id)delegate;	// 0x3249cbf9
- (void)setPlaceholderText:(id)text;	// 0x3249d00d
- (void)setTitle:(id)title;	// 0x3249cb51
// converted property setter: - (void)setValue:(id)value;	// 0x3249cec9
- (void)setValueChangedTarget:(id)target action:(SEL)action specifier:(id)specifier;	// 0x3249c97d
- (id)textField;	// 0x3249d01d
- (void)textFieldDidBeginEditing:(id)textField;	// 0x3249c679
- (void)textFieldDidEndEditing:(id)textField;	// 0x3249c87d
- (BOOL)textFieldShouldClear:(id)textField;	// 0x3249c7f9
- (BOOL)textFieldShouldReturn:(id)textField;	// 0x3249c925
// converted property getter: - (id)value;	// 0x3249cea1
@end
