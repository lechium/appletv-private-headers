/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import "UITextFieldDelegate.h"
#import <UITableViewCell.h> // Unknown library
#import "ToneLibrary-Structs.h"

@class UITextField, NSString;
@protocol TLVibrationPickerTableViewCellDelegate;

@interface TLVibrationPickerTableViewCell : UITableViewCell <UITextFieldDelegate> {
	id<TLVibrationPickerTableViewCellDelegate> _delegate;	// 300 = 0x12c
	BOOL _editable;	// 304 = 0x130
	UITextField *_removableTextField;	// 308 = 0x134
}
@property(readonly, assign, nonatomic, getter=_isDisplayingRemovableTextField) BOOL _displayingRemovableTextField;	// G=0x32a8fd95; 
@property(assign, nonatomic, getter=isChecked) BOOL checked;	// G=0x32a8fcb5; S=0x32a8fcd5; 
@property(assign, nonatomic) id<TLVibrationPickerTableViewCellDelegate> delegate;	// G=0x32a902f5; S=0x32a90305; @synthesize=_delegate
@property(assign, nonatomic, getter=isEditable) BOOL editable;	// G=0x32a90315; S=0x32a8fb7d; @synthesize=_editable
@property(retain, nonatomic) NSString *placeholder;	// G=0x32a8fc75; S=0x32a8fc95; 
@property(retain, nonatomic) NSString *text;	// G=0x32a8fbb1; S=0x32a8fc11; 
- (id)initWithReuseIdentifier:(id)reuseIdentifier;	// 0x32a8fa41
// declared property getter: - (BOOL)_isDisplayingRemovableTextField;	// 0x32a8fd95
- (void)_layoutRemovableTextField;	// 0x32a8fe01
- (void)_makeRemovableTextFieldEditable:(BOOL)editable;	// 0x32a900b5
- (void)dealloc;	// 0x32a8fb31
// declared property getter: - (id)delegate;	// 0x32a902f5
- (void)didTransitionToState:(unsigned)state;	// 0x32a9000d
// declared property getter: - (BOOL)isChecked;	// 0x32a8fcb5
// declared property getter: - (BOOL)isEditable;	// 0x32a90315
- (void)layoutSubviews;	// 0x32a8ffcd
- (void)makeTextFieldResignFirstResponderIfNeeded;	// 0x32a8fdc1
// declared property getter: - (id)placeholder;	// 0x32a8fc75
// declared property setter: - (void)setChecked:(BOOL)checked;	// 0x32a8fcd5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x32a90305
// declared property setter: - (void)setEditable:(BOOL)editable;	// 0x32a8fb7d
// declared property setter: - (void)setPlaceholder:(id)placeholder;	// 0x32a8fc95
// declared property setter: - (void)setText:(id)text;	// 0x32a8fc11
// declared property getter: - (id)text;	// 0x32a8fbb1
- (BOOL)textField:(id)field shouldChangeCharactersInRange:(NSRange)range replacementString:(id)string;	// 0x32a90205
- (void)textFieldDidBeginEditing:(id)textField;	// 0x32a90251
- (void)textFieldDidEndEditing:(id)textField;	// 0x32a90275
- (BOOL)textFieldShouldReturn:(id)textField;	// 0x32a90235
- (void)willTransitionToState:(unsigned)state;	// 0x32a90069
@end

