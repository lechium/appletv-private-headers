/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "AddressBookUI-Structs.h"
#import "ABMultiCellContentView.h"
#import "UITextFieldDelegate.h"

@class NSMutableArray;

@interface ABMultiCellContentView_Rows : ABMultiCellContentView <UITextFieldDelegate> {
	NSMutableArray *_entryFields;	// 180 = 0xb4
	NSMutableArray *_horizontalDividers;	// 184 = 0xb8
	BOOL _isAttemptingFirstResponder;	// 188 = 0xbc
}
+ (CGSize)layoutSubviewsForView:(id)view usingSize:(CGSize)size propertyGroup:(id)group info:(id)info styleProvider:(id)provider whenEditing:(BOOL)editing;	// 0x3716ac75
+ (CGSize)layoutSubviewsForView:(id)view usingSize:(CGSize)size propertyGroup:(id)group info:(id)info styleProvider:(id)provider whenEditing:(BOOL)editing includeRows:(BOOL)rows;	// 0x37161ee5
+ (unsigned)rowsForPropertyGroup:(id)propertyGroup info:(id)info;	// 0x371b7a7d
+ (CGRect)zerothHorizontalDividerFrameForValueViewRect:(CGRect)valueViewRect;	// 0x371590bd
- (CGRect)backgroundRectForView:(id)view;	// 0x371b7d51
- (void)dealloc;	// 0x3716d419
- (void)entryFieldBeginAttemptBecomeFirstResponder:(id)responder;	// 0x371b81b5
- (void)entryFieldDidEndEditing:(id)entryField;	// 0x371b7ab5
- (void)entryFieldEndAttemptBecomeFirstResponder:(id)responder;	// 0x371b81c9
- (id)entryFieldForRow:(unsigned)row;	// 0x371b7a81
- (id)hitTestForTouches:(id)touches withEvent:(id)event;	// 0x371b7f25
- (id)keyboardSettingsForKey:(id)key;	// 0x371682a1
- (CGRect)rectForView:(id)view;	// 0x371b7c49
- (void)reload;	// 0x37158981
- (void)reloadFromModel;	// 0x371b7aa1
- (void)reloadFromModelIncludingRows:(BOOL)modelIncludingRows;	// 0x3715aa65
- (void)reloadIncludingRows:(BOOL)rows;	// 0x37158995
- (void)setAbCellStyle:(int)style;	// 0x371569f1
- (BOOL)tabToNextResponder:(BOOL)nextResponder fromView:(id)view;	// 0x371b7b0d
- (void)textFieldDidBeginEditing:(id)textField;	// 0x371b82a5
- (void)textFieldDidEndEditing:(id)textField;	// 0x371b8295
- (BOOL)textFieldShouldBeginEditing:(id)textField;	// 0x371b8265
- (BOOL)textFieldShouldEndEditing:(id)textField;	// 0x371b827d
- (BOOL)textFieldShouldReturn:(id)textField;	// 0x371b82b5
- (void)textFieldTextDidChange:(id)textFieldText;	// 0x371b81dd
- (void)updateSubviewsForNewStateAnimated:(BOOL)newStateAnimated;	// 0x3715a2dd
- (id)viewForFirstResponder;	// 0x3716b7e5
@end

