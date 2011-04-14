/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKBKeyView.h"

@class UIKBKeyboard;
@protocol UIKBHandwritingDelegateProtocol;

__attribute__((visibility("hidden")))
@interface UIKBHandwritingView : UIKBKeyView {
@private
	KBStrokeList *_strokes;	// 68 = 0x44
	id<UIKBHandwritingDelegateProtocol> _delegate;	// 72 = 0x48
	CGColorRef _inkColor;	// 76 = 0x4c
	CGImageRef _inkMask;	// 80 = 0x50
	UIKBKeyboard *_keyboard;	// 84 = 0x54
	CGPoint _last;	// 88 = 0x58
	int _down;	// 96 = 0x60
	BOOL _stroked;	// 100 = 0x64
	BOOL _captureEnabled;	// 101 = 0x65
	BOOL _inGesture;	// 102 = 0x66
}
- (id)initWithFrame:(CGRect)frame keyboard:(id)keyboard key:(id)key state:(int)state;	// 0x3080ef39
- (BOOL)cancelTouchTracking;	// 0x3080f771
- (BOOL)clear;	// 0x3080fbc9
- (void)dealloc;	// 0x3080f485
- (void)drawRect:(CGRect)rect;	// 0x3080fc01
- (void)send;	// 0x3080eea1
- (void)setDelegate:(id)delegate;	// 0x3080ee7d
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x3080f559
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x3080ee8d
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x3080f7fd
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x3080f639
- (void)updateKeyboard:(id)keyboard key:(id)key;	// 0x3080fdfd
@end

