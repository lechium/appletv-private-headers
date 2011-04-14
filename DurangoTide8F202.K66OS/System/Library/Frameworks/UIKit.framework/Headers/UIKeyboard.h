/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"
#import "UIKeyboardImplGeometryDelegate.h"

@class UIImage, UITextInputTraits;

@interface UIKeyboard : UIView <UIKeyboardImplGeometryDelegate> {
	UIImage *m_snapshot;	// 44 = 0x2c
	UITextInputTraits *m_defaultTraits;	// 48 = 0x30
	BOOL m_typingDisabled;	// 52 = 0x34
	BOOL m_minimized;	// 53 = 0x35
	BOOL m_respondingToImplGeometryChange;	// 54 = 0x36
	int m_orientation;	// 56 = 0x38
}
@property(retain) id defaultTextInputTraits;	// G=0x3074d7c5; S=0x3074d745; converted property
@property(assign, nonatomic, getter=isMinimized) BOOL minimized;	// G=0x3067236d; S=0x3074d595; 
@property(readonly, assign) int orientation;	// G=0x3066be09; converted property
@property(assign) BOOL returnKeyEnabled;	// G=0x3074d85d; S=0x3074d81d; converted property
@property(assign, nonatomic) BOOL typingEnabled;	// G=0x3074ceb1; S=0x30672ff1; 
+ (void)initImplementationNow;	// 0x3074d9ed
+ (void)_clearActiveKeyboard;	// 0x3074ce91
+ (id)activeKeyboard;	// 0x306197a1
+ (CGRect)defaultFrameForInterfaceOrientation:(int)interfaceOrientation;	// 0x3068261d
+ (CGSize)defaultSize;	// 0x306ba175
+ (CGSize)defaultSizeForInterfaceOrientation:(int)interfaceOrientation;	// 0x3066b545
+ (CGSize)defaultSizeForOrientation:(int)orientation;	// 0x3074e001
+ (CGSize)keyboardSizeForInterfaceOrientation:(int)interfaceOrientation;	// 0x3074dfb9
+ (void)removeAllDynamicDictionaries;	// 0x3074d9cd
+ (CGSize)sizeForInterfaceOrientation:(int)interfaceOrientation;	// 0x3074dfdd
- (id)initWithDefaultSize;	// 0x3074e025
- (id)initWithFrame:(CGRect)frame;	// 0x3066b641
- (void)_acceptCurrentCandidate;	// 0x3074cfa5
- (id)_baseKeyForRepresentedString:(id)representedString;	// 0x3074d16d
- (void)_changeToKeyplane:(id)keyplane;	// 0x3074d0ed
- (void)_clearCurrentInputManager;	// 0x3074e145
- (void)_disableDynamicDictionary:(BOOL)dictionary;	// 0x3074cee9
- (id)_getAutocorrection;	// 0x3074cfd1
- (id)_getCurrentKeyboardName;	// 0x3074d209
- (id)_getCurrentKeyplaneName;	// 0x3074d235
- (id)_getLocalizedInputMode;	// 0x3074d1dd
- (BOOL)_hasCandidates;	// 0x3074cf49
- (BOOL)_isAutomaticKeyboard;	// 0x30832245
- (id)_keyplaneForKey:(id)key;	// 0x3074d12d
- (int)_positionInCandidateList:(id)candidateList;	// 0x3074cf19
- (void)_setAutocorrects:(BOOL)autocorrects;	// 0x3074cffd
- (void)_setInputMode:(id)mode;	// 0x3074d02d
- (id)_typeCharacter:(id)character withError:(CGPoint)error shouldTypeVariants:(BOOL)variants baseKeyForVariants:(BOOL)variants4;	// 0x3074d05d
- (void)acceptAutocorrection;	// 0x3074d919
- (void)activate;	// 0x30672a59
- (void)autoAdjustOrientation;	// 0x3066de59
- (void)autoAdjustOrientationForSize:(CGSize)size;	// 0x3066dc89
- (BOOL)canDismiss;	// 0x3074cee5
- (void)clearSnapshot;	// 0x3074d6e1
- (void)deactivate;	// 0x3074d5fd
- (void)dealloc;	// 0x3074da0d
// converted property getter: - (id)defaultTextInputTraits;	// 0x3074d7c5
- (id)delegate;	// 0x3074d709
- (void)displayLayer:(id)layer;	// 0x306731c1
- (void)geometryChangeDone:(BOOL)done;	// 0x30674109
- (UIPeripheralAnimationGeometry)geometryForImplHeightDelta:(float)implHeightDelta;	// 0x3074e1b9
- (UIPeripheralAnimationGeometry)geometryForMinimize:(BOOL)minimize;	// 0x3074e2e1
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x30674b4d
- (void)implBoundsHeightChangeDone:(float)done suppressNotification:(BOOL)notification;	// 0x3074daa1
- (int)interfaceOrientation;	// 0x3074cea1
- (BOOL)isActive;	// 0x30672a45
// declared property getter: - (BOOL)isMinimized;	// 0x3067236d
- (void)keyboardMinMaximized:(id)maximized finished:(id)finished context:(id)context;	// 0x3074dc2d
- (void)manualKeyboardWasOrderedIn;	// 0x3074d2c1
- (void)manualKeyboardWasOrderedOut;	// 0x3074d261
- (void)manualKeyboardWillBeOrderedIn;	// 0x3074d2f1
- (void)manualKeyboardWillBeOrderedOut;	// 0x3074d291
- (void)maximize;	// 0x3074dce1
- (void)minimize;	// 0x3074de4d
- (void)movedFromSuperview:(id)superview;	// 0x306728ed
// converted property getter: - (int)orientation;	// 0x3066be09
- (BOOL)pointInside:(CGPoint)inside forEvent:(GSEventRef)event;	// 0x30674869
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x30674825
- (void)prepareForGeometryChange;	// 0x30672d21
- (void)prepareForImplBoundsHeightChange:(float)implBoundsHeightChange suppressNotification:(BOOL)notification;	// 0x3074dba1
- (void)removeAutocorrectPrompt;	// 0x3074d955
- (void)removeFromSuperview;	// 0x30685439
// converted property getter: - (BOOL)returnKeyEnabled;	// 0x3074d85d
- (void)setCaretBlinks:(BOOL)blinks;	// 0x3074d8d9
- (void)setCaretVisible:(BOOL)visible;	// 0x3074d899
// converted property setter: - (void)setDefaultTextInputTraits:(id)traits;	// 0x3074d745
- (void)setFrame:(CGRect)frame;	// 0x3066b745
// declared property setter: - (void)setMinimized:(BOOL)minimized;	// 0x3074d595
- (void)setNeedsDisplay;	// 0x3066b885
// converted property setter: - (void)setReturnKeyEnabled:(BOOL)enabled;	// 0x3074d81d
// declared property setter: - (void)setTypingEnabled:(BOOL)enabled;	// 0x30672ff1
- (void)syncMinimizedStateToHardwareKeyboardAttachedState;	// 0x30672331
- (void)takeSnapshot;	// 0x3074e089
- (int)textEffectsVisibilityLevel;	// 0x3074cec9
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x3074ced9
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x306b2cc1
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x3074cee1
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x3074cedd
// declared property getter: - (BOOL)typingEnabled;	// 0x3074ceb1
- (void)updateLayout;	// 0x3074d991
@end

