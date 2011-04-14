/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKBKeyView.h"
#import "UIKeyboardCandidateList.h"

@class UIColor, NSMutableArray, NSObject, NSArray;

__attribute__((visibility("hidden")))
@interface UIKBCandidateView : UIKBKeyView <UIKeyboardCandidateList> {
@private
	NSArray *m_candidates;	// 68 = 0x44
	NSMutableArray *m_buttons;	// 72 = 0x48
	NSObject *m_delegate;	// 76 = 0x4c
	int m_columns;	// 80 = 0x50
	int m_candidatesPerColumn;	// 84 = 0x54
	int m_candidatesPerPage;	// 88 = 0x58
	int m_current;	// 92 = 0x5c
	int m_firstShown;	// 96 = 0x60
	int m_firstComposition;	// 100 = 0x64
	int m_candidateCount;	// 104 = 0x68
	CGRect m_symbolRect;	// 108 = 0x6c
	UIColor *m_textColor;	// 124 = 0x7c
	CGColorRef m_highlightColor;	// 128 = 0x80
	BOOL m_respondsToSelect;	// 132 = 0x84
	BOOL m_respondsToAccept;	// 133 = 0x85
}
- (id)initWithFrame:(CGRect)frame keyboard:(id)keyboard key:(id)key state:(int)state;	// 0x30810d29
- (void)candidateAcceptedAtIndex:(unsigned)index;	// 0x3080fe85
- (id)candidateAtIndex:(unsigned)index;	// 0x30810035
- (id)candidateList;	// 0x3080fe65
- (void)configureKeyboard:(id)keyboard;	// 0x3080ff75
- (unsigned)count;	// 0x3080fe89
- (id)currentCandidate;	// 0x30810079
- (unsigned)currentIndex;	// 0x3080fe75
- (void)dealloc;	// 0x3081040d
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x3080fea5
- (void)jumpToCompositions;	// 0x3080fedd
- (void)layout;	// 0x30810525
- (void)nextCandidatesAction;	// 0x3081029d
- (void)selectCandidate:(id)candidate;	// 0x3080fefd
- (void)setCandidates:(id)candidates inlineText:(id)text inlineRect:(CGRect)rect maxX:(float)x layout:(BOOL)layout;	// 0x308102b1
- (void)setUIKeyboardCandidateListDelegate:(id)delegate;	// 0x308101ed
- (void)showCandidateAtIndex:(unsigned)index;	// 0x3080fe69
- (void)showNextCandidate;	// 0x3080fe6d
- (void)showNextPage;	// 0x30810135
- (void)showPageAtIndex:(unsigned)index;	// 0x30810181
- (void)showPreviousCandidate;	// 0x3080fe71
- (void)showPreviousPage;	// 0x308100c1
- (void)updateKeyboard:(id)keyboard key:(id)key;	// 0x30810be5
@end

