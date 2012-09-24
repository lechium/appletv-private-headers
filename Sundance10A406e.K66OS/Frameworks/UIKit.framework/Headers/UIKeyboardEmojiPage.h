/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSArray, UIKeyboardEmojiView, UITouch, UIKeyboardEmojiInputController;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiPage : UIView {
	NSArray *_emoji;	// 84 = 0x54
	int _numRows;	// 88 = 0x58
	int _numCols;	// 92 = 0x5c
	int _numPages;	// 96 = 0x60
	CGPoint _emojiPadding;	// 100 = 0x64
	CGPoint _margin;	// 108 = 0x6c
	CGSize _emojiSize;	// 116 = 0x74
	CGRect _keyActivationRect;	// 124 = 0x7c
	UITouch *_activeTouch;	// 140 = 0x8c
	BOOL _needsLayout;	// 144 = 0x90
	BOOL _needsEmojiRendering;	// 145 = 0x91
	UIKeyboardEmojiView *_touched;	// 148 = 0x94
	UIKeyboardEmojiView *_pendingDisplay;	// 152 = 0x98
	UIKeyboardEmojiView *_onDisplay;	// 156 = 0x9c
	UIKeyboardEmojiInputController *_inputController;	// 160 = 0xa0
}
@property(retain) UITouch *activeTouch;	// G=0x30b4f1bd; S=0x30b4f1d1; @synthesize=_activeTouch
@property(retain) NSArray *emoji;	// G=0x30b4f199; S=0x30b4f1ad; @synthesize=_emoji
@property(readonly, assign, nonatomic) int emojiCountPerPage;	// G=0x30b4dfa1; 
@property(assign) UIKeyboardEmojiInputController *inputController;	// G=0x30b4f285; S=0x30b4f299; @synthesize=_inputController
@property(assign) CGRect keyActivationRect;	// G=0x30b4f229; S=0x30b4f24d; @synthesize=_keyActivationRect
@property(assign) BOOL needsLayout;	// G=0x30b4f2b1; S=0x30b4f2c9; @synthesize=_needsLayout
@property(retain) UIKeyboardEmojiView *onDisplay;	// G=0x30b4f205; S=0x30b4f219; @synthesize=_onDisplay
@property(retain) UIKeyboardEmojiView *pendingDisplay;	// G=0x30b4f1e1; S=0x30b4f1f5; @synthesize=_pendingDisplay
@property(retain) UIKeyboardEmojiView *touched;	// G=0x30b4f175; S=0x30b4f189; @synthesize=_touched
- (id)initWithFrame:(CGRect)frame;	// 0x30b4db21
// declared property getter: - (id)activeTouch;	// 0x30b4f1bd
- (void)cancelPendingPopupChanges;	// 0x30b4e705
- (void)checkForStalePopup:(id)stalePopup;	// 0x30b4e80d
- (id)closestForPoint:(CGPoint)point;	// 0x30b4e619
- (void)deactivatePopUps;	// 0x30b4e3b1
- (void)dealloc;	// 0x30b4dbe5
- (void)drawRect:(CGRect)rect;	// 0x30b4e04d
// declared property getter: - (id)emoji;	// 0x30b4f199
// declared property getter: - (int)emojiCountPerPage;	// 0x30b4dfa1
- (CGRect)emojiRectForPoint:(CGPoint)point index:(unsigned *)index;	// 0x30b4e4a1
- (void)generateSubviews;	// 0x30b4e36d
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x30b4e471
// declared property getter: - (id)inputController;	// 0x30b4f285
// declared property getter: - (CGRect)keyActivationRect;	// 0x30b4f229
// declared property getter: - (BOOL)needsLayout;	// 0x30b4f2b1
// declared property getter: - (id)onDisplay;	// 0x30b4f205
// declared property getter: - (id)pendingDisplay;	// 0x30b4f1e1
- (CGRect)rectForRow:(int)row Col:(int)col;	// 0x30b4df1d
- (void)removeDisplayedPopup:(id)popup;	// 0x30b4e7bd
- (void)removeFromSuperview;	// 0x30b4dcb9
// declared property setter: - (void)setActiveTouch:(id)touch;	// 0x30b4f1d1
// declared property setter: - (void)setEmoji:(id)emoji;	// 0x30b4f1ad
- (void)setFrame:(CGRect)frame;	// 0x30b4de79
// declared property setter: - (void)setInputController:(id)controller;	// 0x30b4f299
// declared property setter: - (void)setKeyActivationRect:(CGRect)rect;	// 0x30b4f24d
// declared property setter: - (void)setNeedsLayout:(BOOL)layout;	// 0x30b4f2c9
// declared property setter: - (void)setOnDisplay:(id)display;	// 0x30b4f219
// declared property setter: - (void)setPendingDisplay:(id)display;	// 0x30b4f1f5
// declared property setter: - (void)setTouched:(id)touched;	// 0x30b4f189
- (void)showPendingPopup:(id)popup;	// 0x30b4e725
- (int)takeEmoji:(id)emoji fromIndex:(int)index;	// 0x30b4dfc1
- (void)touchBegan:(id)began;	// 0x30b4e8cd
- (void)touchCancelled:(id)cancelled;	// 0x30b4edcd
- (void)touchEnded:(id)ended;	// 0x30b4ec15
- (void)touchMoved:(id)moved;	// 0x30b4ea7d
// declared property getter: - (id)touched;	// 0x30b4f175
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x30b4ee95
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x30b4f0bd
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x30b4f005
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x30b4ef4d
- (void)updateLayoutConstants;	// 0x30b4dd0d
@end
