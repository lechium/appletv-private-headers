/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIView.h"
#import "UIKit-Structs.h"
#import "UITextFieldDelegate.h"

@class NSMutableString, NSMutableArray, UIButton;

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
@property(assign) int numberOfEntryFields;	// G=0x302aad21; S=0x302ab499; converted property
@property(assign) BOOL showsOKButton;	// G=0x302aa6fd; S=0x302aa719; converted property
@property(retain) id stringValue;	// G=0x300a550d; S=0x300b084d; converted property
+ (float)defaultHeight;	// 0x302aa4b1
+ (Class)textFieldClass;	// 0x302aa4f5
- (id)initWithFrame:(CGRect)frame;	// 0x302aa511
- (void)_textDidChange;	// 0x302ab5b5
- (void)_updateFields;	// 0x300a5609
- (void)appendString:(id)string;	// 0x300a5549
- (BOOL)becomeFirstResponder;	// 0x302ab4d9
- (BOOL)canBecomeFirstResponder;	// 0x302ab4ad
- (void)dealloc;	// 0x302aa641
- (void)deleteLastCharacter;	// 0x302aacc9
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x302ab799
- (BOOL)isFirstResponder;	// 0x302ab52d
// converted property getter: - (int)numberOfEntryFields;	// 0x302aad21
- (void)okButtonClicked:(id)clicked;	// 0x302ab751
- (void)setDelegate:(id)delegate;	// 0x302ab5a5
- (void)setKeyboardType:(int)type;	// 0x302aa5d9
- (void)setKeyboardType:(int)type appearance:(int)appearance;	// 0x302aa5ed
- (void)setKeyboardType:(int)type appearance:(int)appearance emptyContentReturnKeyType:(int)type3;	// 0x302aa611
// converted property setter: - (void)setNumberOfEntryFields:(int)entryFields;	// 0x302ab499
- (void)setNumberOfEntryFields:(int)entryFields opaqueBackground:(BOOL)background;	// 0x302aad41
// converted property setter: - (void)setShowsOKButton:(BOOL)button;	// 0x302aa719
// converted property setter: - (void)setStringValue:(id)value;	// 0x300b084d
- (void)setTextCentersHorizontally:(BOOL)horizontally;	// 0x302aac61
// converted property getter: - (BOOL)showsOKButton;	// 0x302aa6fd
// converted property getter: - (id)stringValue;	// 0x300a550d
- (BOOL)textField:(id)field shouldInsertText:(id)text replacingRange:(NSRange)range;	// 0x302ab6b9
- (void)textFieldDidResignFirstResponder:(id)textField;	// 0x302ab711
- (BOOL)textFieldShouldStartEditing:(id)textField;	// 0x302ab70d
@end

