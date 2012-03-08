/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSUndoManager, UIView;

@interface UIResponder : NSObject {
}
@property(readonly, assign, nonatomic) UIResponder *_editingDelegate;	// G=0x32fc62f5; 
@property(readonly, assign, nonatomic) UIResponder *_responderForEditing;	// G=0x32fc62d1; 
@property(readonly, assign) UIView *inputAccessoryView;	// G=0x32ebf661; 
@property(readonly, assign) UIView *inputView;	// G=0x32ebf5d1; 
@property(readonly, assign, nonatomic) NSUndoManager *undoManager;	// G=0x330ac6f9; 
- (void)_becomeFirstResponder;	// 0x32ebedc5
- (void)_becomeFirstResponderAndMakeVisible;	// 0x330ac87d
- (BOOL)_becomeFirstResponderWhenPossible;	// 0x32f2f4e5
- (void)_beginPinningInputViews;	// 0x32ff3e99
- (void)_clearBecomeFirstResponderWhenCapable;	// 0x32f5a019
- (void)_completeForwardingTouches:(id)touches phase:(int)phase event:(id)event;	// 0x32ed516d
- (void)_completeForwardingTouches:(id)touches phase:(int)phase event:(id)event index:(unsigned)index;	// 0x32ed5191
- (BOOL)_containedInAbsoluteResponderChain;	// 0x32f185ed
- (BOOL)_containsResponder:(id)responder;	// 0x32edcd59
- (void)_controlMouseDown:(GSEventRef)down;	// 0x330ac811
- (void)_controlMouseDragged:(GSEventRef)dragged;	// 0x330ac819
- (void)_controlMouseUp:(GSEventRef)up;	// 0x330ac815
- (void)_controlTouchBegan:(id)began withEvent:(id)event;	// 0x32ed6119
- (void)_controlTouchEnded:(id)ended withEvent:(id)event;	// 0x32ed7451
- (void)_controlTouchMoved:(id)moved withEvent:(id)event;	// 0x32fff7d5
- (id)_deepestDefaultFirstResponder;	// 0x32ee5545
- (id)_deepestDefaultFirstResponderMatching:(id)matching;	// 0x330ac88d
// declared property getter: - (id)_editingDelegate;	// 0x32fc62f5
- (void)_endPinningInputViews;	// 0x32f97225
- (void)_finishResignFirstResponder;	// 0x32edce79
- (id)_firstResponder;	// 0x32edd8a5
- (void)_handleKeyEvent:(GSEventRef)event;	// 0x32fd336d
- (BOOL)_isPinningInputViews;	// 0x32f971c9
- (BOOL)_isRootForKeyResponderCycle;	// 0x330ac6f5
- (BOOL)_isSettingFirstResponder;	// 0x32ebebe9
- (BOOL)_isTransitioningFromView:(id)view;	// 0x32fd7e25
- (id)_keyboardResponder;	// 0x32ebf735
- (id)_nextFirstResponderIfAllowed;	// 0x32edcd99
- (id)_nextKeyResponder;	// 0x330ac6ed
- (id)_previousKeyResponder;	// 0x330ac6f1
- (BOOL)_promoteDeepestDefaultFirstResponder;	// 0x32ee53ed
- (BOOL)_requiresKeyboardResetOnReload;	// 0x32ebf425
- (BOOL)_requiresKeyboardWhenFirstResponder;	// 0x32ebf6b5
- (void)_resignFirstResponder;	// 0x32edd7e9
- (id)_responderForBecomeFirstResponder;	// 0x32edcd55
// declared property getter: - (id)_responderForEditing;	// 0x32fc62d1
- (void)_setFirstResponder:(id)responder;	// 0x32ebedd9
- (void)_setIsSettingFirstResponder:(BOOL)responder;	// 0x32ebed09
- (BOOL)_shouldUseDefaultFirstResponder;	// 0x32ee55dd
- (BOOL)_shouldUseKeyWindowStack;	// 0x32edd8cd
- (BOOL)_shouldUseNextFirstResponder;	// 0x32edcde1
- (id)_targetForAction:(SEL)action withSender:(id)sender;	// 0x330ac81d
- (id)_window;	// 0x32f3aca9
- (void)_windowBecameKey;	// 0x32fd7db9
- (void)_windowResignedKey;	// 0x32fd7db5
- (BOOL)becomeFirstResponder;	// 0x32ebe975
- (BOOL)canBecomeFirstResponder;	// 0x32edd8a1
- (BOOL)canPerformAction:(SEL)action withSender:(id)sender;	// 0x32f97bbd
- (BOOL)canResignFirstResponder;	// 0x32edcd95
- (id)defaultFirstResponder;	// 0x32ee55d9
- (id)firstResponder;	// 0x32ebec7d
- (void)gestureChanged:(GSEventRef)changed;	// 0x330ac6e9
- (void)gestureEnded:(GSEventRef)ended;	// 0x330ac6e5
- (void)gestureStarted:(GSEventRef)started;	// 0x330ac6e1
// declared property getter: - (id)inputAccessoryView;	// 0x32ebf661
// declared property getter: - (id)inputView;	// 0x32ebf5d1
- (BOOL)isFirstResponder;	// 0x32ebf005
- (void)motionBegan:(int)began withEvent:(id)event;	// 0x330ac6cd
- (void)motionCancelled:(int)cancelled withEvent:(id)event;	// 0x330ac6d5
- (void)motionEnded:(int)ended withEvent:(id)event;	// 0x330ac6d1
- (void)mouseDown:(GSEventRef)down;	// 0x330ac679
- (void)mouseDragged:(GSEventRef)dragged;	// 0x330ac6bd
- (void)mouseEntered:(GSEventRef)entered;	// 0x330ac6c1
- (void)mouseExited:(GSEventRef)exited;	// 0x330ac6c5
- (void)mouseMoved:(GSEventRef)moved;	// 0x330ac6c9
- (void)mouseUp:(GSEventRef)up;	// 0x330ac6b9
- (id)nextFirstResponder;	// 0x32edce15
- (id)nextResponder;	// 0x32ebf65d
- (void)reloadInputViews;	// 0x32ebef5d
- (void)reloadInputViewsWithoutReset;	// 0x330ac735
- (void)remoteControlReceivedWithEvent:(id)event;	// 0x330ac6d9
- (BOOL)resignFirstResponder;	// 0x32ebc7bd
- (void)scrollWheel:(GSEventRef)wheel;	// 0x330ac6dd
- (id)textInputView;	// 0x331b18b9
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x32fe32c5
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x32fd916d
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x32fe581d
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x33019281
// declared property getter: - (id)undoManager;	// 0x330ac6f9
@end

