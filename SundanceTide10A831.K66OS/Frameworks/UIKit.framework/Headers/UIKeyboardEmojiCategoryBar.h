/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKeyboardEmojiCategoryControl.h"
#import "UIKBKeyView.h"

@class UIImage, NSMutableArray, UIKeyboardEmojiCategoryController;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiCategoryBar : UIKBKeyView <UIKeyboardEmojiCategoryControl> {
	UIKeyboardEmojiCategoryController *_categoryController;	// 112 = 0x70
	int _selected;	// 116 = 0x74
	int _total;	// 120 = 0x78
	int _dividerTotal;	// 124 = 0x7c
	UIImage *_darkDivider;	// 128 = 0x80
	UIImage *_plainDivider;	// 132 = 0x84
	UIImage *_selectedDivider;	// 136 = 0x88
	NSMutableArray *_segmentViews;	// 140 = 0x8c
	NSMutableArray *_dividerViews;	// 144 = 0x90
}
@property(assign) int selectedIndex;	// G=0x31e77d9d; S=0x31e77dad; @dynamic
- (id)initWithFrame:(CGRect)frame;	// 0x31e77c81
- (void)dealloc;	// 0x31e77d39
- (CGRect)frameForDivider:(int)divider;	// 0x31e77ead
- (void)releaseImagesAndViews;	// 0x31e77d99
// declared property getter: - (int)selectedIndex;	// 0x31e77d9d
- (void)sendActionsForControlEvents:(unsigned)controlEvents;	// 0x31e77e25
- (void)setCategory:(id)category;	// 0x31e77df5
// declared property setter: - (void)setSelectedIndex:(int)index;	// 0x31e77dad
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x31e77f81
@end

