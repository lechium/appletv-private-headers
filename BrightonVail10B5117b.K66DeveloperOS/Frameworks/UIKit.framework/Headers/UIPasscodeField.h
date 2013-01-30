/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITextFieldDelegate.h"
#import "UIView.h"

@class UIButton, NSMutableString, NSMutableArray;

@interface UIPasscodeField : UIView <UITextFieldDelegate> {
	NSMutableString *_value;	// 84 = 0x54
	NSMutableArray *_entryFields;	// 88 = 0x58
	NSMutableArray *_entryBackgrounds;	// 92 = 0x5c
	UIButton *_okButton;	// 96 = 0x60
	BOOL _opaqueBackground;	// 100 = 0x64
	BOOL _centerHorizontally;	// 101 = 0x65
	int _keyboardType;	// 104 = 0x68
	int _keyboardAppearance;	// 108 = 0x6c
	int _emptyContentReturnKeyType;	// 112 = 0x70
	id _delegate;	// 116 = 0x74
}
@property(assign) int numberOfEntryFields;	// G=0x32edd4d1; S=0x32eddc49; converted property
@property(assign) BOOL showsOKButton;	// G=0x32edcded; S=0x32edce09; converted property
@property(retain) id stringValue;	// G=0x32c9e7fd; S=0x32c9e04d; converted property
+ (float)defaultHeight;	// 0x32edcba1
+ (Class)textFieldClass;	// 0x32edcbe5
- (id)initWithFrame:(CGRect)frame;	// 0x32edcc01
- (void)_textDidChange;	// 0x32eddd65
- (void)_updateFields;	// 0x32c9e109
- (void)appendString:(id)string;	// 0x32edd3b9
- (BOOL)becomeFirstResponder;	// 0x32eddc89
- (BOOL)canBecomeFirstResponder;	// 0x32eddc5d
- (void)dealloc;	// 0x32edcd31
- (void)deleteLastCharacter;	// 0x32edd479
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x32eddf49
- (BOOL)isFirstResponder;	// 0x32eddcdd
// converted property getter: - (int)numberOfEntryFields;	// 0x32edd4d1
- (void)okButtonClicked:(id)clicked;	// 0x32eddf01
- (void)setDelegate:(id)delegate;	// 0x32eddd55
- (void)setKeyboardType:(int)type;	// 0x32edccc9
- (void)setKeyboardType:(int)type appearance:(int)appearance;	// 0x32edccdd
- (void)setKeyboardType:(int)type appearance:(int)appearance emptyContentReturnKeyType:(int)type3;	// 0x32edcd01
// converted property setter: - (void)setNumberOfEntryFields:(int)entryFields;	// 0x32eddc49
- (void)setNumberOfEntryFields:(int)entryFields opaqueBackground:(BOOL)background;	// 0x32edd4f1
// converted property setter: - (void)setShowsOKButton:(BOOL)button;	// 0x32edce09
// converted property setter: - (void)setStringValue:(id)value;	// 0x32c9e04d
- (void)setTextCentersHorizontally:(BOOL)horizontally;	// 0x32edd351
// converted property getter: - (BOOL)showsOKButton;	// 0x32edcded
// converted property getter: - (id)stringValue;	// 0x32c9e7fd
- (BOOL)textField:(id)field shouldInsertText:(id)text replacingRange:(NSRange)range;	// 0x32edde69
- (void)textFieldDidResignFirstResponder:(id)textField;	// 0x32eddec1
- (BOOL)textFieldShouldStartEditing:(id)textField;	// 0x32eddebd
@end
