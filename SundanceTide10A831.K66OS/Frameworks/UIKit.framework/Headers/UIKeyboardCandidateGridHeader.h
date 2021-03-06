/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIButton, UILabel, NSString;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateGridHeader : UIView {
	UILabel *_inlineTextLabel;	// 84 = 0x54
	float _inlineTextRightMargin;	// 88 = 0x58
	UIButton *_toggleButton;	// 92 = 0x5c
}
@property(copy, nonatomic) NSString *inlineText;	// G=0x31f8be11; S=0x31f8be39; 
@property(retain, nonatomic) UILabel *inlineTextLabel;	// G=0x31f8be7d; S=0x31f8be8d; @synthesize=_inlineTextLabel
@property(assign, nonatomic) float inlineTextRightMargin;	// G=0x31f8be9d; S=0x31f8bead; @synthesize=_inlineTextRightMargin
@property(retain, nonatomic) UIButton *toggleButton;	// G=0x31f8bebd; S=0x31f8becd; @synthesize=_toggleButton
- (id)initWithFrame:(CGRect)frame;	// 0x31f8b8f1
- (void)dealloc;	// 0x31f8bba5
// declared property getter: - (id)inlineText;	// 0x31f8be11
// declared property getter: - (id)inlineTextLabel;	// 0x31f8be7d
// declared property getter: - (float)inlineTextRightMargin;	// 0x31f8be9d
- (void)layoutSubviews;	// 0x31f8bc09
// declared property setter: - (void)setInlineText:(id)text;	// 0x31f8be39
// declared property setter: - (void)setInlineTextLabel:(id)label;	// 0x31f8be8d
// declared property setter: - (void)setInlineTextRightMargin:(float)margin;	// 0x31f8bead
// declared property setter: - (void)setToggleButton:(id)button;	// 0x31f8becd
// declared property getter: - (id)toggleButton;	// 0x31f8bebd
@end

