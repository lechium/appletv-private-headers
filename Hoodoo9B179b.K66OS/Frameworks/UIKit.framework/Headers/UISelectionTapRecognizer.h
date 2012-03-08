/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UITextTapRecognizer.h"

@class UIView;
@protocol UITextSelectingContainer;

__attribute__((visibility("hidden")))
@interface UISelectionTapRecognizer : UITextTapRecognizer {
@private
	UIView<UITextSelectingContainer> *_textView;	// 72 = 0x48
}
@property(assign) UIView<UITextSelectingContainer> *textView;	// G=0x3319aba5; S=0x3319abb5; @synthesize=_textView
- (BOOL)isCloseToSelection;	// 0x3319a7e9
- (void)setState:(int)state;	// 0x3319ab39
// declared property setter: - (void)setTextView:(id)view;	// 0x3319abb5
// declared property getter: - (id)textView;	// 0x3319aba5
@end

