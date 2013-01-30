/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIInputView.h"

@class UIKeyboardCandidateGrid, UIImageView, UIKeyboardCandidateBar, UIKeyboardCandidateSortControl, UIKeyboardCandidateUnsplitKeyboardToggleButton, UIKeyboardCandidateSplitKeyboardToggleButton;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateView : UIInputView {
	UIKeyboardCandidateBar *_bar;	// 144 = 0x90
	UIKeyboardCandidateSortControl *_sortControl;	// 148 = 0x94
	UIKeyboardCandidateGrid *_extendedView;	// 152 = 0x98
	UIImageView *_leftBackground;	// 156 = 0x9c
	UIImageView *_rightBackground;	// 160 = 0xa0
	UIKeyboardCandidateUnsplitKeyboardToggleButton *_leftButton;	// 164 = 0xa4
	UIKeyboardCandidateSplitKeyboardToggleButton *_rightButton;	// 168 = 0xa8
	struct {
		unsigned isExtended;
		unsigned didMinimizeKeyboard;
		unsigned isSplit;
	} _candidateBarFlags;	// 172 = 0xac
}
+ (id)activeCandidateList;	// 0x32f3acad
+ (id)activeCandidateView;	// 0x32beb08d
+ (float)defaultExtendedControlHeight;	// 0x32f3acd5
+ (void)setActiveCandidateView:(id)view;	// 0x32f3ac9d
+ (id)sharedInstance;	// 0x32f3aba1
- (id)initWithFrame:(CGRect)frame;	// 0x32f3acf5
- (unsigned)_numberOfColumns:(BOOL)columns;	// 0x32f3b8dd
- (void)_toggleExtendedCandidateView:(id)view;	// 0x32f3b495
- (id)activeCandidateList;	// 0x32f3b30d
- (void)candidatesDidChange;	// 0x32f3b339
- (void)dealloc;	// 0x32f3b081
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x32f3b8a5
- (void)layoutSubviews;	// 0x32f3b579
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x32f3b78d
- (void)setCandidateBarCanExtend:(BOOL)extend;	// 0x32f3b139
- (void)setCandidateBarExtended:(BOOL)extended;	// 0x32f3b3d1
- (void)setFrame:(CGRect)frame;	// 0x32f3b4c1
- (void)updatePageControlStatus;	// 0x32f3b135
- (void)willMoveToSuperview:(id)superview;	// 0x32f3b761
@end
