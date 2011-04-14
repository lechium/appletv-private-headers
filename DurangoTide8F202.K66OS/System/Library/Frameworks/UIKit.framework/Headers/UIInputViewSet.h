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
@property(readonly, assign, nonatomic, getter=isEmpty) BOOL empty;	// G=0x3061acdd; 
@property(retain, nonatomic) UIView *inputAccessoryView;	// G=0x30594cc1; S=0x30594d9d; @synthesize=_inputAccessoryView
@property(retain, nonatomic) UIView *inputView;	// G=0x30594cd1; S=0x30594dc5; @synthesize=_inputView
@property(readonly, assign, nonatomic) UIKeyboard *keyboard;	// G=0x3061acad; 
+ (id)emptyInputSet;	// 0x305e6379
+ (id)inputSetWithInputView:(id)inputView accessoryView:(id)view;	// 0x30594ce1
+ (id)inputSetWithKeyboardAndAccessoryView:(id)keyboardAndAccessoryView;	// 0x3066b2e1
- (id)initWithInputView:(id)inputView accessoryView:(id)view isKeyboard:(BOOL)keyboard;	// 0x30594d2d
- (BOOL)containsResponder:(id)responder;	// 0x305a2719
- (void)dealloc;	// 0x305a2f05
- (id)description;	// 0x308339c9
- (BOOL)inSyncWithOrientation:(int)orientation forKeyboard:(id)keyboard;	// 0x308379f9
// declared property getter: - (id)inputAccessoryView;	// 0x30594cc1
// declared property getter: - (id)inputView;	// 0x30594cd1
// declared property getter: - (BOOL)isEmpty;	// 0x3061acdd
- (BOOL)isEqual:(id)equal;	// 0x305a2a99
- (BOOL)isStrictSupersetOfViewSet:(id)viewSet;	// 0x306ac811
// declared property getter: - (id)keyboard;	// 0x3061acad
- (int)keyboardOrientation:(id)orientation;	// 0x3083265d
// declared property setter: - (void)setInputAccessoryView:(id)view;	// 0x30594d9d
// declared property setter: - (void)setInputView:(id)view;	// 0x30594dc5
- (BOOL)usesKeyClicks;	// 0x308326b5
- (BOOL)visible;	// 0x3061bd49
@end

