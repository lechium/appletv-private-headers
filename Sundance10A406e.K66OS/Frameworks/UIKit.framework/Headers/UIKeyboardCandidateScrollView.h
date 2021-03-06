/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIScrollView.h"

@class NSArray, UITableViewIndex, UIKeyboardCandidateScrollViewController;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateScrollView : UIScrollView {
	float _indexMaximumHeight;	// 464 = 0x1d0
	UIKeyboardCandidateScrollViewController *_parentViewController;	// 468 = 0x1d4
	UIView *_headerView;	// 472 = 0x1d8
	float _previousGroupBarStartingY;	// 476 = 0x1dc
	UITableViewIndex *_index;	// 480 = 0x1e0
	NSArray *_indexTitles;	// 484 = 0x1e4
}
@property(retain, nonatomic) UIView *headerView;	// G=0x30c7a27d; S=0x30c79f61; @synthesize=_headerView
@property(readonly, assign, nonatomic) UITableViewIndex *index;	// G=0x30c7a2ad; @synthesize=_index
@property(retain, nonatomic) NSArray *indexTitles;	// G=0x30c7a2bd; S=0x30c7a12d; @synthesize=_indexTitles
@property(assign, nonatomic) UIKeyboardCandidateScrollViewController *parentViewController;	// G=0x30c7a25d; S=0x30c7a26d; @synthesize=_parentViewController
@property(assign, nonatomic) float previousGroupBarStartingY;	// G=0x30c7a28d; S=0x30c7a29d; @synthesize=_previousGroupBarStartingY
- (id)initWithFrame:(CGRect)frame;	// 0x30c78e59
- (void)addSubview:(id)subview;	// 0x30c79ed5
- (void)dealloc;	// 0x30c78f79
- (void)delayUpdateIndex;	// 0x30c79971
- (void)drawRect:(CGRect)rect;	// 0x30c791b9
- (float)groupBarStartingY;	// 0x30c7977d
// declared property getter: - (id)headerView;	// 0x30c7a27d
// declared property getter: - (id)index;	// 0x30c7a2ad
// declared property getter: - (id)indexTitles;	// 0x30c7a2bd
- (BOOL)isCellVisible:(id)visible;	// 0x30c7911d
- (void)keyboardDidHideNotification:(id)keyboard;	// 0x30c79f39
- (void)keyboardWillShowNotification:(id)keyboard;	// 0x30c79f4d
// declared property getter: - (id)parentViewController;	// 0x30c7a25d
// declared property getter: - (float)previousGroupBarStartingY;	// 0x30c7a28d
- (void)scrollToBottomWithAnimation:(BOOL)animation;	// 0x30c7909d
- (void)scrollToOffsetFromTop:(float)top withAnimation:(BOOL)animation;	// 0x30c7901d
- (void)scrollToTopWithAnimation:(BOOL)animation;	// 0x30c79009
- (void)setContentOffset:(CGPoint)offset;	// 0x30c79b89
// declared property setter: - (void)setHeaderView:(id)view;	// 0x30c79f61
// declared property setter: - (void)setIndexTitles:(id)titles;	// 0x30c7a12d
// declared property setter: - (void)setParentViewController:(id)controller;	// 0x30c7a26d
// declared property setter: - (void)setPreviousGroupBarStartingY:(float)y;	// 0x30c7a29d
- (BOOL)shouldShowIndex;	// 0x30c79b39
- (void)showIndex:(BOOL)index;	// 0x30c799c9
- (void)updateIndex;	// 0x30c79941
- (void)updateIndex:(BOOL)index;	// 0x30c7981d
@end

