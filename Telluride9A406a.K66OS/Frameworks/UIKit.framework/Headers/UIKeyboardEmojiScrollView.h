/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIScrollViewDelegate.h"
#import "UIView.h"

@class UIScrollView, UIPageControl, UIKeyboardEmojiCategory, NSMutableArray, UILabel;
@protocol UIKeyboardEmojiController;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiScrollView : UIView <UIScrollViewDelegate> {
@private
	UIKeyboardEmojiCategory *_category;	// 48 = 0x30
	UIPageControl *_pageControl;	// 52 = 0x34
	UIScrollView *_scrollView;	// 56 = 0x38
	UILabel *_categoryLabel;	// 60 = 0x3c
	NSMutableArray *_pages;	// 64 = 0x40
	int _currentPage;	// 68 = 0x44
	id<UIKeyboardEmojiController> _controller;	// 72 = 0x48
	BOOL _emojiInteractionEnabled;	// 76 = 0x4c
}
@property(assign) id<UIKeyboardEmojiController> controller;	// G=0x3590858d; S=0x3590859d; @synthesize=_controller
@property(readonly, assign) int currentPage;	// G=0x35908449; converted property
@property(assign, nonatomic) BOOL emojiInteractionEnabled;	// G=0x359085ad; S=0x35907f59; @synthesize=_emojiInteractionEnabled
- (id)initWithFrame:(CGRect)frame;	// 0x35906e69
- (void)clearPages;	// 0x35907de9
// declared property getter: - (id)controller;	// 0x3590858d
// converted property getter: - (int)currentPage;	// 0x35908449
- (void)dealloc;	// 0x35907259
- (void)delayedLayout:(id)layout;	// 0x359078a9
- (void)doLayout;	// 0x359073cd
// declared property getter: - (BOOL)emojiInteractionEnabled;	// 0x359085ad
- (void)ensureSurrounded:(int)surrounded;	// 0x35908371
- (void)forceLayout;	// 0x359073bd
- (void)goToFirstPage;	// 0x35908479
- (void)interruptScrolling;	// 0x35907d79
- (void)layoutPages;	// 0x359078c9
- (void)layoutRecents;	// 0x3590758d
- (void)pageChanged;	// 0x359080dd
- (void)scrollViewDidEndScrollingAnimation:(id)scrollView;	// 0x359081e5
- (void)scrollViewWillBeginDecelerating:(id)scrollView;	// 0x3590822d
- (void)setCategory:(id)category;	// 0x35908005
// declared property setter: - (void)setController:(id)controller;	// 0x3590859d
// declared property setter: - (void)setEmojiInteractionEnabled:(BOOL)enabled;	// 0x35907f59
- (void)setFrame:(CGRect)frame;	// 0x359072f5
- (void)setScrollDelay:(double)delay;	// 0x35908459
@end

