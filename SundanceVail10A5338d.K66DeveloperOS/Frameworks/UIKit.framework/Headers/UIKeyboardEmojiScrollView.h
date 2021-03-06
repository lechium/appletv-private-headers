/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIScrollViewDelegate.h"
#import "UIKit-Structs.h"
#import "UIKBKeyView.h"
#import "UIKeyboardEmojiInput.h"

@class UIScrollView, UIKeyboardEmojiCategory, NSMutableArray, UIKeyboardEmojiInputController, UIPageControl, UILabel;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiScrollView : UIKBKeyView <UIScrollViewDelegate, UIKeyboardEmojiInput> {
	UIKeyboardEmojiInputController *_inputController;	// 112 = 0x70
	UIKeyboardEmojiCategory *_category;	// 116 = 0x74
	UIPageControl *_pageControl;	// 120 = 0x78
	UIScrollView *_scrollView;	// 124 = 0x7c
	UILabel *_categoryLabel;	// 128 = 0x80
	UILabel *_optionalDescription;	// 132 = 0x84
	NSMutableArray *_pages;	// 136 = 0x88
	int _currentPage;	// 140 = 0x8c
}
@property(readonly, assign) int currentPage;	// G=0x30e842b1; converted property
- (id)initWithFrame:(CGRect)frame keyboard:(id)keyboard key:(id)key state:(int)state;	// 0x30e82941
- (void)clearPages;	// 0x30e83c05
// converted property getter: - (int)currentPage;	// 0x30e842b1
- (void)dealloc;	// 0x30e82e65
- (void)delayLayout;	// 0x30e8370d
- (void)doLayout;	// 0x30e82f41
- (int)emojiCountPerPageForRotation;	// 0x30e83d19
- (void)ensureSurrounded;	// 0x30e841f9
- (void)forceLayout;	// 0x30e82f31
- (void)goToFirstPage;	// 0x30e842e1
- (void)interruptScrolling;	// 0x30e83b99
- (void)layoutPages;	// 0x30e83749
- (void)layoutRecents;	// 0x30e830c5
- (void)pageChanged;	// 0x30e83ff5
- (void)reloadForCategory:(id)category;	// 0x30e83d9d
- (void)saveFirstVisibleEmojiIndex;	// 0x30e83f49
- (void)scrollViewDidEndDecelerating:(id)scrollView;	// 0x30e841d9
- (void)scrollViewDidEndScrollingAnimation:(id)scrollView;	// 0x30e840cd
- (void)scrollViewWillBeginDecelerating:(id)scrollView;	// 0x30e840ed
- (void)scrollViewWillBeginDragging:(id)scrollView;	// 0x30e83b55
- (void)setScrollDelay:(double)delay;	// 0x30e842c1
- (BOOL)shouldCache;	// 0x30e82f2d
@end

