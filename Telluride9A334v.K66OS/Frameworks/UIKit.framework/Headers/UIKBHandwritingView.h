/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKBKeyView.h"

@class UIKBTree;
@protocol UIKBHandwritingDelegateProtocol;

__attribute__((visibility("hidden")))
@interface UIKBHandwritingView : UIKBKeyView {
@private
	KBStrokeList *_strokes;	// 72 = 0x48
	id<UIKBHandwritingDelegateProtocol> _delegate;	// 76 = 0x4c
	CGColorRef _inkColor;	// 80 = 0x50
	CGImageRef _inkMask;	// 84 = 0x54
	UIKBTree *_keyboard;	// 88 = 0x58
	CGPoint _last;	// 92 = 0x5c
	int _down;	// 100 = 0x64
	BOOL _stroked;	// 104 = 0x68
	BOOL _captureEnabled;	// 105 = 0x69
	BOOL _inGesture;	// 106 = 0x6a
}
- (id)initWithFrame:(CGRect)frame keyboard:(id)keyboard key:(id)key state:(int)state;	// 0x30326781
- (id).cxx_construct;	// 0x303277dd
- (BOOL)cancelTouchTracking;	// 0x30327745
- (BOOL)clear;	// 0x30326c99
- (void)dealloc;	// 0x30326b41
- (void)drawRect:(CGRect)rect;	// 0x30326d95
- (void)send;	// 0x30326ce5
- (void)setDelegate:(id)delegate;	// 0x30326cd5
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x30327009
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x303276e9
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x303272a5
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x30327111
- (void)updateForKeyboard:(id)keyboard key:(id)key;	// 0x30326c29
@end
