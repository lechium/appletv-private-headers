/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKeyboardCandidateListDelegate.h"
#import "UIKeyboardCandidateList.h"
#import "UIView.h"

@class UIScrollView, NSArray, UIKeyboardCandidateExtended, UIKeyboardCandidateBarBackgroundView, NSString, NSMutableArray;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateBar : UIView <UIKeyboardCandidateList, UIKeyboardCandidateListDelegate> {
@private
	id<UIKeyboardCandidateListDelegate> m_delegate;	// 48 = 0x30
	UIKeyboardCandidateBarBackgroundView *m_cellsContainerView;	// 52 = 0x34
	NSArray *m_candidates;	// 56 = 0x38
	NSArray *m_allCandidates;	// 60 = 0x3c
	NSString *m_inlineText;	// 64 = 0x40
	NSMutableArray *m_cells;	// 68 = 0x44
	unsigned m_currentCandidateIndex;	// 72 = 0x48
	CGRect m_inlineRect;	// 76 = 0x4c
	float m_maxX;	// 92 = 0x5c
	BOOL m_largeUIShowing;	// 96 = 0x60
	UIKeyboardCandidateExtended *m_extendedCandidatesView;	// 100 = 0x64
	UIScrollView *m_scrollView;	// 104 = 0x68
	UIView *m_extendedButton;	// 108 = 0x6c
	UIView *m_shadowView;	// 112 = 0x70
	BOOL m_minimized;	// 116 = 0x74
	BOOL m_animating;	// 117 = 0x75
}
@property(assign, nonatomic, getter=isAnimating) BOOL animating;	// G=0x331e7e4d; S=0x331e7e5d; @synthesize=m_animating
@property(retain, nonatomic) UIKeyboardCandidateBarBackgroundView *cellsContainerView;	// G=0x331e7dd5; S=0x331e7de5; @synthesize=m_cellsContainerView
@property(retain, nonatomic) UIKeyboardCandidateExtended *extendedCandidatesView;	// G=0x331e66b9; S=0x331e7e09; @synthesize=m_extendedCandidatesView
@property(assign, nonatomic, getter=isMinimized) BOOL minimized;	// G=0x331e7e2d; S=0x331e7e3d; @synthesize=m_minimized
+ (id)activeInstance;	// 0x32f3918d
+ (float)candidateBarHeight;	// 0x331e4ef5
+ (id)sharedInstance;	// 0x331e4d51
- (id)initWithFrame:(CGRect)frame;	// 0x331e4f89
- (id).cxx_construct;	// 0x331e7e6d
- (BOOL)_addCells:(int)cells;	// 0x331e6c25
- (void)_bgAddCells:(id)cells;	// 0x331e6b99
- (void)_cellSelected:(id)selected;	// 0x331e68d9
- (void)_clearAll;	// 0x331e6849
- (void)_clearCells;	// 0x331e6755
- (void)_forceLayoutTo:(unsigned)to;	// 0x331e74a1
- (void)_hideExtendedCandidatesViewWithAnimation:(BOOL)animation;	// 0x331e7951
- (void)_setCurrentCandidateIndex:(unsigned)index;	// 0x331e5acd
- (void)_showExtendedCandidatesView;	// 0x331e7559
- (void)candidateAcceptedAtIndex:(unsigned)index;	// 0x331e63e1
- (id)candidateAtIndex:(unsigned)index;	// 0x331e6375
- (void)candidateListAcceptCandidate:(id)candidate;	// 0x331e6625
- (void)candidateListSelectionDidChange:(id)candidateListSelection;	// 0x331e6645
- (void)candidateListShouldBeDismissed:(id)candidateList;	// 0x331e6665
// declared property getter: - (id)cellsContainerView;	// 0x331e7dd5
- (void)configureKeyboard:(id)keyboard;	// 0x331e6505
- (unsigned)count;	// 0x331e64e5
- (id)currentCandidate;	// 0x331e6295
- (unsigned)currentIndex;	// 0x331e6309
- (void)dealloc;	// 0x331e52f1
// declared property getter: - (id)extendedCandidatesView;	// 0x331e66b9
// declared property getter: - (BOOL)isAnimating;	// 0x331e7e4d
// declared property getter: - (BOOL)isMinimized;	// 0x331e7e2d
- (void)layout;	// 0x331e56c1
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x331e5269
- (CGSize)screenSpaceBetweenStatusBarAndKeyboard;	// 0x331e6a49
// declared property setter: - (void)setAnimating:(BOOL)animating;	// 0x331e7e5d
- (void)setCandidates:(id)candidates inlineText:(id)text inlineRect:(CGRect)rect maxX:(float)x layout:(BOOL)layout;	// 0x331e53a1
// declared property setter: - (void)setCellsContainerView:(id)view;	// 0x331e7de5
// declared property setter: - (void)setExtendedCandidatesView:(id)view;	// 0x331e7e09
// declared property setter: - (void)setMinimized:(BOOL)minimized;	// 0x331e7e3d
- (void)setUIKeyboardCandidateListDelegate:(id)delegate;	// 0x331e5a0d
- (void)showCandidateAtIndex:(unsigned)index;	// 0x331e5bf9
- (void)showNextCandidate;	// 0x331e5d11
- (void)showNextPage;	// 0x331e621d
- (void)showPageAtIndex:(unsigned)index;	// 0x331e61dd
- (void)showPreviousCandidate;	// 0x331e5f6d
- (void)showPreviousPage;	// 0x331e6259
@end

