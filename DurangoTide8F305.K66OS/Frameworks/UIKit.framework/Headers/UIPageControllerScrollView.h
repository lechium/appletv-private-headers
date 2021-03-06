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
	UIPageController *_pageController;	// 388 = 0x184
}
@property(assign, nonatomic) UIPageController *pageController;	// G=0x32204e15; S=0x32204e25; @synthesize=_pageController
- (void)_scrollViewAnimationEnded;	// 0x322061e5
- (void)_scrollViewDidEndDecelerating;	// 0x32206241
- (void)_scrollViewDidEndDraggingWithDeceleration:(BOOL)_scrollView;	// 0x3220629d
- (void)_scrollViewWillBeginDragging;	// 0x32206301
- (void)layoutSubviews;	// 0x32206349
// declared property getter: - (id)pageController;	// 0x32204e15
- (void)setBounds:(CGRect)bounds;	// 0x32206bfd
- (void)setFrame:(CGRect)frame;	// 0x322063b1
// declared property setter: - (void)setPageController:(id)controller;	// 0x32204e25
@end

