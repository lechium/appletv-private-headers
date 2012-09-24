/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "ABStyleProviding.h"
#import <UITableViewCell.h> // Unknown library

@class UITextField, NSString;
@protocol ABPropertyEditingTableViewCellDelegate;

@interface ABPropertyEditingTableViewCell : UITableViewCell <ABStyleProviding> {
	int _property;	// 300 = 0x12c
	UITextField *_textField;	// 304 = 0x130
	NSString *_placeholder;	// 308 = 0x134
	id<ABPropertyEditingTableViewCellDelegate> _delegate;	// 312 = 0x138
}
@property(assign, nonatomic) id<ABPropertyEditingTableViewCellDelegate> delegate;	// G=0x3148be91; S=0x3148bea1; @synthesize=_delegate
@property(copy, nonatomic) NSString *placeholder;	// G=0x3148bb05; S=0x3148bb4d; @synthesize=_placeholder
@property(assign, nonatomic) int property;	// G=0x3148b8ed; S=0x3148b8fd; @dynamic
@property(assign, nonatomic) BOOL usesLargeFont;	// G=0x3148ba25; S=0x3148ba79; @dynamic
@property(copy, nonatomic) NSString *value;	// G=0x3148bc2d; S=0x3148bc4d; @dynamic
- (id)initWithReuseIdentifier:(id)reuseIdentifier;	// 0x3148b83d
- (id)initWithReuseIdentifier:(id)reuseIdentifier property:(int)property delegate:(id)delegate;	// 0x3148b5f1
- (void)_resizeAndCenterTextField;	// 0x3148bc6d
- (BOOL)becomeFirstResponder;	// 0x3148be01
- (BOOL)canBecomeFirstResponder;	// 0x3148bddd
- (BOOL)canResignFirstResponder;	// 0x3148be25
- (void)dealloc;	// 0x3148b861
// declared property getter: - (id)delegate;	// 0x3148be91
- (BOOL)isFirstResponder;	// 0x3148be6d
- (void)layoutSubviews;	// 0x3148bd7d
// declared property getter: - (id)placeholder;	// 0x3148bb05
// declared property getter: - (int)property;	// 0x3148b8ed
- (BOOL)resignFirstResponder;	// 0x3148be49
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3148bea1
// declared property setter: - (void)setPlaceholder:(id)placeholder;	// 0x3148bb4d
// declared property setter: - (void)setProperty:(int)property;	// 0x3148b8fd
// declared property setter: - (void)setUsesLargeFont:(BOOL)font;	// 0x3148ba79
// declared property setter: - (void)setValue:(id)value;	// 0x3148bc4d
- (id)styleProvider;	// 0x3148bdbd
- (void)textFieldValueDidChange:(id)textFieldValue;	// 0x3148bbcd
// declared property getter: - (BOOL)usesLargeFont;	// 0x3148ba25
// declared property getter: - (id)value;	// 0x3148bc2d
@end
