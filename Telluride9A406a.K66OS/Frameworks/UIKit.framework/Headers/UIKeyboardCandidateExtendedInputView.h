/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIKeyboardCandidateExtendedInputTextField, UIKeyboardCandidateArrowButton;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateExtendedInputView : UIView {
@private
	UIKeyboardCandidateExtendedInputTextField *_textField;	// 48 = 0x30
	UIKeyboardCandidateArrowButton *_arrowButton;	// 52 = 0x34
}
@property(retain, nonatomic) UIKeyboardCandidateArrowButton *arrowButton;	// G=0x35a15ead; S=0x35a15ebd; @synthesize=_arrowButton
@property(retain, nonatomic) UIKeyboardCandidateExtendedInputTextField *textField;	// G=0x35a15e79; S=0x35a15e89; @synthesize=_textField
- (id)initWithFrame:(CGRect)frame;	// 0x35a15b29
// declared property getter: - (id)arrowButton;	// 0x35a15ead
- (void)dealloc;	// 0x35a15bfd
- (void)drawRect:(CGRect)rect;	// 0x35a15c75
- (void)layoutArrowButton;	// 0x35a15d31
// declared property setter: - (void)setArrowButton:(id)button;	// 0x35a15ebd
- (void)setFrame:(CGRect)frame;	// 0x35a15e31
// declared property setter: - (void)setTextField:(id)field;	// 0x35a15e89
// declared property getter: - (id)textField;	// 0x35a15e79
@end

