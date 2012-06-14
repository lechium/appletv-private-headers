/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIView.h"
#import "UIKit-Structs.h"

@class UILabel, NSString;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateGridHeader : UIView {
@private
	UILabel *_inlineTextLabel;	// 84 = 0x54
	float _inlineTextRightMargin;	// 88 = 0x58
}
@property(copy, nonatomic) NSString *inlineText;	// G=0x3041b8d5; S=0x3041b8fd; 
@property(retain, nonatomic) UILabel *inlineTextLabel;	// G=0x3041b941; S=0x3041b951; @synthesize=_inlineTextLabel
@property(assign, nonatomic) float inlineTextRightMargin;	// G=0x3041b961; S=0x3041b971; @synthesize=_inlineTextRightMargin
- (id)initWithFrame:(CGRect)frame;	// 0x3041b591
- (void)dealloc;	// 0x3041b701
// declared property getter: - (id)inlineText;	// 0x3041b8d5
// declared property getter: - (id)inlineTextLabel;	// 0x3041b941
// declared property getter: - (float)inlineTextRightMargin;	// 0x3041b961
- (void)layoutSubviews;	// 0x3041b74d
// declared property setter: - (void)setInlineText:(id)text;	// 0x3041b8fd
// declared property setter: - (void)setInlineTextLabel:(id)label;	// 0x3041b951
// declared property setter: - (void)setInlineTextRightMargin:(float)margin;	// 0x3041b971
@end

