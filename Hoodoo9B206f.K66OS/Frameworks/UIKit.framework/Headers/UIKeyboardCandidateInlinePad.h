/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKeyboardCandidateInline.h"

@class UIKeyboardCandidateInlineFloatingView;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateInlinePad : UIKeyboardCandidateInline {
@private
	UIKeyboardCandidateInlineFloatingView *_inlineView;	// 44 = 0x2c
}
@property(retain, nonatomic) UIKeyboardCandidateInlineFloatingView *inlineView;	// G=0x3557ce11; S=0x3557cf59; @synthesize=_inlineView
- (void)dealloc;	// 0x3557cc1d
- (BOOL)handleNumberKey:(unsigned)key;	// 0x3557cf01
- (BOOL)handleTabKeyWithShift:(BOOL)shift;	// 0x3557cf2d
- (void)hideInlineView;	// 0x3557cdd1
- (void)inlineShowCandidateAtIndex:(unsigned)index;	// 0x3557ce85
- (void)inlineShowNextCandidate;	// 0x3557ceb1
- (void)inlineShowPreviousCandidate;	// 0x3557ced9
// declared property getter: - (id)inlineView;	// 0x3557ce11
// declared property setter: - (void)setInlineView:(id)view;	// 0x3557cf59
- (void)showInlineView;	// 0x3557cc69
@end
