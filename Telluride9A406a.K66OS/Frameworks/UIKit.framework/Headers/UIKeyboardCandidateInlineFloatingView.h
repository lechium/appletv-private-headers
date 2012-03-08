/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKeyboardCandidateListDelegate.h"
#import "UIKeyboardCandidateList.h"
#import "UIKeyboardCandidateScrollViewControllerDelegate.h"
#import "UIView.h"

@class UIKeyboardCandidateSortSelectionBar, UIKeyboardCandidateInlinePadBottomShadowView, NSString, UIKeyboardCandidateScrollViewController, NSArray;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateInlineFloatingView : UIView <UIKeyboardCandidateList, UIKeyboardCandidateListDelegate, UIKeyboardCandidateScrollViewControllerDelegate> {
@private
	NSArray *_candidates;	// 48 = 0x30
	NSString *_inlineText;	// 52 = 0x34
	CGRect _inlineRect;	// 56 = 0x38
	float _maxX;	// 72 = 0x48
	BOOL _expanded;	// 76 = 0x4c
	UIKeyboardCandidateScrollViewController *_scrollViewController;	// 80 = 0x50
	id<UIKeyboardCandidateListDelegate> _candidateListDelegate;	// 84 = 0x54
	UIKeyboardCandidateInlinePadBottomShadowView *_shadowView;	// 88 = 0x58
	UIKeyboardCandidateSortSelectionBar *_sortSelectionBar;	// 92 = 0x5c
	int _position;	// 96 = 0x60
	BOOL _reducedWidth;	// 100 = 0x64
	CGRect _previousCollapsedFrame;	// 104 = 0x68
}
@property(assign, nonatomic) id<UIKeyboardCandidateListDelegate> candidateListDelegate;	// G=0x358e58bd; S=0x358e58cd; @synthesize=_candidateListDelegate
@property(retain, nonatomic) NSArray *candidates;	// G=0x358e57d5; S=0x358e57e5; @synthesize=_candidates
@property(readonly, assign, nonatomic) CGSize collapsedSize;	// G=0x358e38cd; 
@property(assign, nonatomic) BOOL expanded;	// G=0x358e589d; S=0x358e58ad; @synthesize=_expanded
@property(readonly, assign, nonatomic) CGSize expandedSize;	// G=0x358e3905; 
@property(assign, nonatomic) CGRect inlineRect;	// G=0x358e583d; S=0x358e5861; @synthesize=_inlineRect
@property(copy, nonatomic) NSString *inlineText;	// G=0x358e5809; S=0x358e5819; @synthesize=_inlineText
@property(assign, nonatomic) float maxX;	// G=0x358e587d; S=0x358e588d; @synthesize=_maxX
@property(assign, nonatomic) int position;	// G=0x358e5911; S=0x358e5921; @synthesize=_position
@property(assign, nonatomic) CGRect previousCollapsedFrame;	// G=0x358e5951; S=0x358e5975; @synthesize=_previousCollapsedFrame
@property(assign, nonatomic) BOOL reducedWidth;	// G=0x358e5931; S=0x358e5941; @synthesize=_reducedWidth
@property(readonly, assign, nonatomic) UIKeyboardCandidateScrollViewController *scrollViewController;	// G=0x358e5661; @synthesize=_scrollViewController
@property(retain, nonatomic) UIKeyboardCandidateInlinePadBottomShadowView *shadowView;	// G=0x358e58dd; S=0x358e58ed; @synthesize=_shadowView
@property(readonly, assign, nonatomic) UIKeyboardCandidateSortSelectionBar *sortSelectionBar;	// G=0x358e56dd; @synthesize=_sortSelectionBar
- (id)initWithFrame:(CGRect)frame;	// 0x358e3585
- (void)adjustFrameForInlineText:(id)inlineText inlineRect:(CGRect)rect maxX:(float)x;	// 0x358e4711
- (CGRect)adjustedFrameFromDesiredFrame:(CGRect)desiredFrame textHeight:(float)height;	// 0x358e4339
- (CGRect)adjustedInlineRectFromInlineText:(id)inlineText inlineRect:(CGRect)rect;	// 0x358e3f19
- (void)candidateAcceptedAtIndex:(unsigned)index;	// 0x358e52d1
- (id)candidateAtIndex:(unsigned)index;	// 0x358e52a5
- (void)candidateListAcceptCandidate:(id)candidate;	// 0x358e5419
// declared property getter: - (id)candidateListDelegate;	// 0x358e58bd
- (void)candidateListSelectionDidChange:(id)candidateListSelection;	// 0x358e5465
- (void)candidateListShouldBeDismissed:(id)candidateList;	// 0x358e54b1
// declared property getter: - (id)candidates;	// 0x358e57d5
- (void)collapse;	// 0x358e3da1
// declared property getter: - (CGSize)collapsedSize;	// 0x358e38cd
- (void)configureKeyboard:(id)keyboard;	// 0x358e5325
- (unsigned)count;	// 0x358e52fd
- (id)currentCandidate;	// 0x358e5255
- (unsigned)currentIndex;	// 0x358e527d
- (void)dealloc;	// 0x358e37a5
- (void)expand;	// 0x358e393d
// declared property getter: - (BOOL)expanded;	// 0x358e589d
// declared property getter: - (CGSize)expandedSize;	// 0x358e3905
- (BOOL)handleNumberKey:(unsigned)key;	// 0x358e5351
- (BOOL)handleTabKeyWithShift:(BOOL)shift;	// 0x358e537d
// declared property getter: - (CGRect)inlineRect;	// 0x358e583d
// declared property getter: - (id)inlineText;	// 0x358e5809
- (BOOL)isAcceptableFrame:(CGRect)frame afterScrollBy:(float)by;	// 0x358e4231
- (void)layout;	// 0x358e4d71
- (void)layoutShadow;	// 0x358e4bed
// declared property getter: - (float)maxX;	// 0x358e587d
- (void)padInlineFloatingViewExpand:(id)expand;	// 0x358e5515
- (BOOL)padInlineFloatingViewIsExpanded:(id)expanded;	// 0x358e54fd
// declared property getter: - (int)position;	// 0x358e5911
// declared property getter: - (CGRect)previousCollapsedFrame;	// 0x358e5951
// declared property getter: - (BOOL)reducedWidth;	// 0x358e5931
// declared property getter: - (id)scrollViewController;	// 0x358e5661
// declared property setter: - (void)setCandidateListDelegate:(id)delegate;	// 0x358e58cd
// declared property setter: - (void)setCandidates:(id)candidates;	// 0x358e57e5
- (void)setCandidates:(id)candidates inlineText:(id)text inlineRect:(CGRect)rect maxX:(float)x layout:(BOOL)layout;	// 0x358e4ba9
- (void)setCandidates:(id)candidates type:(int)type inlineText:(id)text inlineRect:(CGRect)rect maxX:(float)x layout:(BOOL)layout;	// 0x358e4a91
// declared property setter: - (void)setExpanded:(BOOL)expanded;	// 0x358e58ad
- (void)setFrame:(CGRect)frame;	// 0x358e3885
// declared property setter: - (void)setInlineRect:(CGRect)rect;	// 0x358e5861
// declared property setter: - (void)setInlineText:(id)text;	// 0x358e5819
// declared property setter: - (void)setMaxX:(float)x;	// 0x358e588d
// declared property setter: - (void)setPosition:(int)position;	// 0x358e5921
// declared property setter: - (void)setPreviousCollapsedFrame:(CGRect)frame;	// 0x358e5975
// declared property setter: - (void)setReducedWidth:(BOOL)width;	// 0x358e5941
// declared property setter: - (void)setShadowView:(id)view;	// 0x358e58ed
- (void)setUIKeyboardCandidateListDelegate:(id)delegate;	// 0x358e5125
// declared property getter: - (id)shadowView;	// 0x358e58dd
- (void)showCandidateAtIndex:(unsigned)index;	// 0x358e515d
- (void)showNextCandidate;	// 0x358e5189
- (void)showNextPage;	// 0x358e5205
- (void)showPageAtIndex:(unsigned)index;	// 0x358e51d9
- (void)showPreviousCandidate;	// 0x358e51b1
- (void)showPreviousPage;	// 0x358e522d
// declared property getter: - (id)sortSelectionBar;	// 0x358e56dd
- (void)sortSelectionBarAction;	// 0x358e5525
@end

