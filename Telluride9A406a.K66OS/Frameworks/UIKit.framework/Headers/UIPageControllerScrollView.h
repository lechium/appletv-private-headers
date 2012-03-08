/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIScrollView.h"

@class UIPageController;

@interface UIPageControllerScrollView : UIScrollView {
	UIPageController *_pageController;	// 404 = 0x194
}
@property(assign, nonatomic) UIPageController *pageController;	// G=0x3597ce71; S=0x357f8bcd; @synthesize=_pageController
- (int)_abuttedPagingEdges;	// 0x3597cc71
- (void)_scrollViewAnimationEnded;	// 0x3597cc0d
- (void)_scrollViewDidEndDecelerating;	// 0x357fce05
- (void)_scrollViewDidEndDraggingWithDeceleration:(BOOL)_scrollView;	// 0x357fc3a9
- (void)_scrollViewWillBeginDragging;	// 0x357fc231
- (void)layoutSubviews;	// 0x357fa8f1
// declared property getter: - (id)pageController;	// 0x3597ce71
- (void)setBounds:(CGRect)bounds;	// 0x357f8d4d
- (void)setFrame:(CGRect)frame;	// 0x357f8add
// declared property setter: - (void)setPageController:(id)controller;	// 0x357f8bcd
@end

