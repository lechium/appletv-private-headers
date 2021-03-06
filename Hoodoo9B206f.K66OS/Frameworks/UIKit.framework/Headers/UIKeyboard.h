/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKeyboardImplGeometryDelegate.h"
#import "UIView.h"

@class UITextInputTraits, UIImage;

@interface UIKeyboard : UIView <UIKeyboardImplGeometryDelegate> {
	UIImage *m_snapshot;	// 48 = 0x30
	UITextInputTraits *m_defaultTraits;	// 52 = 0x34
	BOOL m_typingDisabled;	// 56 = 0x38
	BOOL m_minimized;	// 57 = 0x39
	BOOL m_respondingToImplGeometryChange;	// 58 = 0x3a
	int m_orientation;	// 60 = 0x3c
}
@property(retain) id defaultTextInputTraits;	// G=0x3552c6f1; S=0x3552c755; converted property
@property(assign, nonatomic, getter=isMinimized) BOOL minimized;	// G=0x353f7961; S=0x3552cf85; 
@property(readonly, assign) int orientation;	// G=0x353fea4d; converted property
@property(assign) BOOL returnKeyEnabled;	// G=0x3552c665; S=0x3552c6a9; converted property
@property(assign, nonatomic) BOOL typingEnabled;	// G=0x3552c931; S=0x3552c949; 
+ (void)initImplementationNow;	// 0x3552c1b9
+ (void)_clearActiveKeyboard;	// 0x3552c1a9
+ (id)activeKeyboard;	// 0x3537ad6d
+ (CGRect)defaultFrameForInterfaceOrientation:(int)interfaceOrientation;	// 0x3552c1f1
+ (CGSize)defaultSize;	// 0x3546d881
+ (CGSize)defaultSizeForInterfaceOrientation:(int)interfaceOrientation;	// 0x353f0ba1
+ (CGSize)defaultSizeForOrientation:(int)orientation;	// 0x3552c5b5
+ (BOOL)isOnScreen;	// 0x35400fed
+ (CGSize)keyboardSizeForInterfaceOrientation:(int)interfaceOrientation;	// 0x3552c5e1
+ (CGRect)onscreenFrameForTextInputTraits:(id)textInputTraits;	// 0x3552c311
+ (void)removeAllDynamicDictionaries;	// 0x3552c1d5
+ (BOOL)respondsToProxGesture;	// 0x3552c56d
+ (CGSize)sizeForInterfaceOrientation:(int)interfaceOrientation;	// 0x353862b9
- (id)initWithDefaultSize;	// 0x3552c08d
- (id)initWithFrame:(CGRect)frame;	// 0x353f0c95
- (void)_acceptCurrentCandidate;	// 0x3552dafd
- (id)_baseKeyForRepresentedString:(id)representedString;	// 0x354a5849
- (void)_changeToKeyplane:(id)keyplane;	// 0x3552d9a1
- (void)_clearCurrentInputManager;	// 0x3552db31
- (id)_getAutocorrection;	// 0x3552dac9
- (id)_getCurrentKeyboardName;	// 0x3552d8f1
- (id)_getCurrentKeyplaneName;	// 0x354a6039
- (id)_getLocalizedInputMode;	// 0x3552d925
- (BOOL)_hasCandidates;	// 0x3552dba1
- (BOOL)_isAutomaticKeyboard;	// 0x3562884d
- (id)_keyplaneForKey:(id)key;	// 0x354a5e51
- (id)_keyplaneNamed:(id)named;	// 0x3552d959
- (int)_positionInCandidateList:(id)candidateList;	// 0x3552dbfd
- (void)_setAutocorrects:(BOOL)autocorrects;	// 0x3552da91
- (void)_setInputMode:(id)mode;	// 0x3552da59
- (id)_touchPoint:(CGPoint)point;	// 0x3552d9e9
- (id)_typeCharacter:(id)character withError:(CGPoint)error shouldTypeVariants:(BOOL)variants baseKeyForVariants:(BOOL)variants4;	// 0x354a60d5
- (void)acceptAutocorrection;	// 0x35427509
- (void)activate;	// 0x353fe7ad
- (void)autoAdjustOrientation;	// 0x353f123d
- (void)autoAdjustOrientationForSize:(CGSize)size;	// 0x353f0fa5
- (BOOL)canDismiss;	// 0x3552d4e9
- (void)clearSnapshot;	// 0x3552c82d
- (void)deactivate;	// 0x3552c965
- (void)dealloc;	// 0x3552c105
// converted property getter: - (id)defaultTextInputTraits;	// 0x3552c6f1
- (id)delegate;	// 0x3552c7e9
- (void)displayLayer:(id)layer;	// 0x354001c1
- (void)geometryChangeDone:(BOOL)done;	// 0x35401c25
- (UIPeripheralAnimationGeometry)geometryForImplHeightDelta:(float)implHeightDelta;	// 0x3552d101
- (UIPeripheralAnimationGeometry)geometryForMinimize:(BOOL)minimize;	// 0x3552ca81
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x3541445d
- (void)implBoundsHeightChangeDone:(float)done suppressNotification:(BOOL)notification;	// 0x3552d385
- (int)interfaceOrientation;	// 0x3552c60d
- (BOOL)isActive;	// 0x353fde6d
// declared property getter: - (BOOL)isMinimized;	// 0x353f7961
- (void)keyboardMinMaximized:(id)maximized finished:(id)finished context:(id)context;	// 0x3552d001
- (void)manualKeyboardWasOrderedIn;	// 0x3552d849
- (void)manualKeyboardWasOrderedOut;	// 0x3552d8b9
- (void)manualKeyboardWillBeOrderedIn;	// 0x3552d811
- (void)manualKeyboardWillBeOrderedOut;	// 0x3552d881
- (void)maximize;	// 0x3552cdc9
- (void)minimize;	// 0x3552cc0d
- (void)movedFromSuperview:(id)superview;	// 0x353fe6b5
// converted property getter: - (int)orientation;	// 0x353fea4d
- (BOOL)pointInside:(CGPoint)inside forEvent:(GSEventRef)event;	// 0x35403599
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x3540355d
- (void)prepareForGeometryChange;	// 0x353feb51
- (void)prepareForImplBoundsHeightChange:(float)implBoundsHeightChange suppressNotification:(BOOL)notification;	// 0x3552d2b5
- (void)removeAutocorrectPrompt;	// 0x354274c5
- (void)removeFromSuperview;	// 0x35447e65
- (void)resizeForKeyplaneSize:(CGSize)keyplaneSize;	// 0x35423969
// converted property getter: - (BOOL)returnKeyEnabled;	// 0x3552c665
- (void)setCaretBlinks:(BOOL)blinks;	// 0x3552c61d
- (void)setCaretVisible:(BOOL)visible;	// 0x3545ef6d
// converted property setter: - (void)setDefaultTextInputTraits:(id)traits;	// 0x3552c755
- (void)setFrame:(CGRect)frame;	// 0x353f0dc1
// declared property setter: - (void)setMinimized:(BOOL)minimized;	// 0x3552cf85
- (void)setNeedsDisplay;	// 0x353f0f25
// converted property setter: - (void)setReturnKeyEnabled:(BOOL)enabled;	// 0x3552c6a9
// declared property setter: - (void)setTypingEnabled:(BOOL)enabled;	// 0x3552c949
- (void)syncMinimizedStateToHardwareKeyboardAttachedState;	// 0x353fe541
- (void)takeSnapshot;	// 0x3552c859
- (int)textEffectsVisibilityLevel;	// 0x3552ca61
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x3552ca71
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x3552ca7d
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x3552ca79
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x3552ca75
// declared property getter: - (BOOL)typingEnabled;	// 0x3552c931
- (void)updateLayout;	// 0x35427739
@end

