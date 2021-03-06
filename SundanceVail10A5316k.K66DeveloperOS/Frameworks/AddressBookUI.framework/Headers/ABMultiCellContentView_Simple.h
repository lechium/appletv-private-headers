/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "AddressBookUI-Structs.h"
#import "ABMultiCellContentView.h"
#import "UITextFieldDelegate.h"

@class NSString, ABHighlightingTextField;

@interface ABMultiCellContentView_Simple : ABMultiCellContentView <UITextFieldDelegate> {
	ABHighlightingTextField *_textField;	// 180 = 0xb4
	NSString *_previousValue;	// 184 = 0xb8
}
@property(readonly, assign, nonatomic) NSString *text;	// G=0x34cc165d; 
+ (CGSize)layoutSubviewsForView:(id)view usingSize:(CGSize)size propertyGroup:(id)group info:(id)info styleProvider:(id)provider whenEditing:(BOOL)editing;	// 0x34c6f169
- (BOOL)canHandleProperty:(int)property;	// 0x34c7213d
- (void)dealloc;	// 0x34c811a5
- (id)hitTestForTouches:(id)touches withEvent:(id)event;	// 0x34c8762d
- (BOOL)isValidValue:(id)value;	// 0x34cc16c1
- (id)pickerView;	// 0x34c721a5
- (void)reload;	// 0x34c7234d
- (void)reloadFromModel;	// 0x34c73681
- (void)setAbCellStyle:(int)style;	// 0x34c74a61
- (void)setPropertyGroup:(id)group andInfo:(id)info;	// 0x34c72041
- (BOOL)shouldSendTouchesToSuperviewForHitView:(id)hitView;	// 0x34c87729
- (XXStruct_HeigOC)suggestionsForString:(id)string inputIndex:(unsigned)index;	// 0x34cc18ed
- (BOOL)tabToNextResponder:(BOOL)nextResponder fromView:(id)view;	// 0x34cc167d
// declared property getter: - (id)text;	// 0x34cc165d
- (BOOL)textField:(id)field shouldChangeCharactersInRange:(NSRange)range replacementString:(id)string;	// 0x34cc174d
- (void)textFieldDidBeginEditing:(id)textField;	// 0x34cc1895
- (void)textFieldDidEndEditing:(id)textField;	// 0x34cc1885
- (BOOL)textFieldShouldBeginEditing:(id)textField;	// 0x34cc1855
- (BOOL)textFieldShouldClear:(id)textField;	// 0x34cc18c1
- (BOOL)textFieldShouldEndEditing:(id)textField;	// 0x34cc186d
- (BOOL)textFieldShouldReturn:(id)textField;	// 0x34cc18a5
- (void)textFieldTextDidChange:(id)textFieldText;	// 0x34cc1809
- (void)updateSubviewsForNewStateAnimated:(BOOL)newStateAnimated;	// 0x34c732f9
- (id)viewForFirstResponder;	// 0x34c7d061
- (BOOL)wantsLabelDivider;	// 0x34c73299
@end

