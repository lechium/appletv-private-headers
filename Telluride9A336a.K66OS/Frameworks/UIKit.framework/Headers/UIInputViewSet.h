/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UIKeyboard, UIView;

__attribute__((visibility("hidden")))
@interface UIInputViewSet : NSObject {
@private
	UIView *_inputView;	// 4 = 0x4
	UIView *_inputAccessoryView;	// 8 = 0x8
	BOOL _isKeyboard;	// 12 = 0xc
}
@property(readonly, assign, nonatomic, getter=isEmpty) BOOL empty;	// G=0x350ba9f5; 
@property(retain, nonatomic) UIView *inputAccessoryView;	// G=0x350ba3b5; S=0x350ba499; @synthesize=_inputAccessoryView
@property(retain, nonatomic) UIView *inputView;	// G=0x350ba3c5; S=0x350ba4bd; @synthesize=_inputView
@property(readonly, assign, nonatomic) UIKeyboard *keyboard;	// G=0x35137bc5; 
+ (id)emptyInputSet;	// 0x350baa2d
+ (id)inputSetWithInputView:(id)inputView accessoryView:(id)view;	// 0x350ba3d5
+ (id)inputSetWithKeyboardAndAccessoryView:(id)keyboardAndAccessoryView;	// 0x3519f3d9
- (id)initWithInputView:(id)inputView accessoryView:(id)view isKeyboard:(BOOL)keyboard;	// 0x350ba429
- (BOOL)containsResponder:(id)responder;	// 0x350ba58d
- (void)dealloc;	// 0x350bad49
- (id)description;	// 0x353d0fa9
- (BOOL)inSyncWithOrientation:(int)orientation forKeyboard:(id)keyboard;	// 0x353d11c9
// declared property getter: - (id)inputAccessoryView;	// 0x350ba3b5
// declared property getter: - (id)inputView;	// 0x350ba3c5
// declared property getter: - (BOOL)isEmpty;	// 0x350ba9f5
- (BOOL)isEqual:(id)equal;	// 0x350baa8d
- (BOOL)isStrictSupersetOfViewSet:(id)viewSet;	// 0x351ee441
// declared property getter: - (id)keyboard;	// 0x35137bc5
- (int)keyboardOrientation:(id)orientation;	// 0x353d1165
// declared property setter: - (void)setInputAccessoryView:(id)view;	// 0x350ba499
// declared property setter: - (void)setInputView:(id)view;	// 0x350ba4bd
- (BOOL)usesKeyClicks;	// 0x353d0f09
- (BOOL)visible;	// 0x35138b15
@end
