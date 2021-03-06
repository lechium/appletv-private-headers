/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSString, UILabel, NSTimer;
@protocol UIKeyboardCandidateExtendedInputTextFieldDelegate;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateExtendedInputTextField : UIView {
@private
	BOOL _caretBlinking;	// 46 = 0x2e
	id<UIKeyboardCandidateExtendedInputTextFieldDelegate> _delegate;	// 48 = 0x30
	UILabel *_label;	// 52 = 0x34
	UIView *_caretView;	// 56 = 0x38
	NSTimer *_caretTimer;	// 60 = 0x3c
}
@property(assign, nonatomic) BOOL caretBlinking;	// G=0x33018945; S=0x330185b9; @synthesize=_caretBlinking
@property(retain, nonatomic) NSTimer *caretTimer;	// G=0x330189bd; S=0x330189cd; @synthesize=_caretTimer
@property(retain, nonatomic) UIView *caretView;	// G=0x33018849; S=0x33018999; @synthesize=_caretView
@property(assign, nonatomic) id<UIKeyboardCandidateExtendedInputTextFieldDelegate> delegate;	// G=0x33018955; S=0x33018965; @synthesize=_delegate
@property(retain, nonatomic) UILabel *label;	// G=0x330186c1; S=0x33018975; @synthesize=_label
@property(copy, nonatomic) NSString *text;	// G=0x3301854d; S=0x33018575; 
+ (id)font;	// 0x33017fe9
- (id)initWithFrame:(CGRect)frame;	// 0x33017ee1
// declared property getter: - (BOOL)caretBlinking;	// 0x33018945
// declared property getter: - (id)caretTimer;	// 0x330189bd
- (void)caretTimerFired:(id)fired;	// 0x330184a9
// declared property getter: - (id)caretView;	// 0x33018849
- (void)dealloc;	// 0x33017f4d
// declared property getter: - (id)delegate;	// 0x33018955
- (void)hideCaret;	// 0x330183fd
// declared property getter: - (id)label;	// 0x330186c1
- (void)layout;	// 0x33018099
// declared property setter: - (void)setCaretBlinking:(BOOL)blinking;	// 0x330185b9
// declared property setter: - (void)setCaretTimer:(id)timer;	// 0x330189cd
// declared property setter: - (void)setCaretView:(id)view;	// 0x33018999
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x33018965
- (void)setFrame:(CGRect)frame;	// 0x33018505
// declared property setter: - (void)setLabel:(id)label;	// 0x33018975
// declared property setter: - (void)setText:(id)text;	// 0x33018575
- (void)showCaret;	// 0x33018345
// declared property getter: - (id)text;	// 0x3301854d
- (int)textEffectsVisibilityLevel;	// 0x33017fd5
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x3301800d
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x33018095
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x33018015
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x33018011
@end

