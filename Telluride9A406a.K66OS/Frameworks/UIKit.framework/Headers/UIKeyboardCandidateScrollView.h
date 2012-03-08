/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIScrollView.h"

@class UIKeyboardCandidateScrollViewController;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateScrollView : UIScrollView {
@private
	UIKeyboardCandidateScrollViewController *_parentViewController;	// 404 = 0x194
}
@property(assign, nonatomic) UIKeyboardCandidateScrollViewController *parentViewController;	// G=0x35a1b9e5; S=0x35a1b9f5; @synthesize=_parentViewController
- (id)initWithFrame:(CGRect)frame;	// 0x35a1afbd
- (void)drawRect:(CGRect)rect;	// 0x35a1b1f5
- (BOOL)isCellVisible:(id)visible;	// 0x35a1b14d
// declared property getter: - (id)parentViewController;	// 0x35a1b9e5
- (void)scrollToBottomWithAnimation:(BOOL)animation;	// 0x35a1b0c5
- (void)scrollToTopWithAnimation:(BOOL)animation;	// 0x35a1b049
- (void)setContentOffset:(CGPoint)offset;	// 0x35a1b74d
// declared property setter: - (void)setParentViewController:(id)controller;	// 0x35a1b9f5
@end

