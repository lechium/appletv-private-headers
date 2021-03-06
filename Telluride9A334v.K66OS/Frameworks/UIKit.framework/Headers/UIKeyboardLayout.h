/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKeyboardLayoutProtocol.h"
#import "UIView.h"

@class NSMutableArray, UITouch;

@interface UIKeyboardLayout : UIView <UIKeyboardLayoutProtocol> {
	NSMutableArray *_uncommittedTouches;	// 48 = 0x30
	UITouch *_activeTouch;	// 52 = 0x34
	UITouch *_shiftKeyTouch;	// 56 = 0x38
	UITouch *_swipeTouch;	// 60 = 0x3c
	int _orientation;	// 64 = 0x40
@private
	int m_orientation;	// 68 = 0x44
}
@property(retain, nonatomic) UITouch *activeTouch;	// G=0x30145581; S=0x3013a4d9; @synthesize=_activeTouch
@property(assign) int orientation;	// G=0x30121cf5; S=0x30117ad5; @synthesize=m_orientation
@property(retain, nonatomic) UITouch *shiftKeyTouch;	// G=0x3025092d; S=0x30121a25; @synthesize=_shiftKeyTouch
@property(retain, nonatomic) UITouch *swipeTouch;	// G=0x3025093d; S=0x3025094d; @synthesize=_swipeTouch
- (id)initWithFrame:(CGRect)frame;	// 0x301175b5
- (id)activationIndicatorView;	// 0x302506f5
// declared property getter: - (id)activeTouch;	// 0x30145581
- (void)addSwipeRecognizer;	// 0x3025041d
- (void)addWipeRecognizer;	// 0x30250545
- (id)baseKeyForString:(id)string;	// 0x30250905
- (BOOL)canProduceString:(id)string;	// 0x302506fd
- (id)candidateList;	// 0x302506c9
- (void)changeToKeyplane:(id)keyplane;	// 0x30250911
- (void)clearAllKeyDelegates;	// 0x302506f1
- (void)clearUnusedObjects;	// 0x30250695
- (void)commitTouchesBeforeTouch:(id)touch;	// 0x301384e9
- (void)deactivateActiveKeys;	// 0x30250699
- (void)dealloc;	// 0x302505d9
- (void)didClearInput;	// 0x30136d05
- (BOOL)doesKeyCharging;	// 0x302506bd
- (float)flickDistance;	// 0x30250895
- (CGRect)frameForKeylayoutName:(id)keylayoutName;	// 0x302508dd
- (SEL)handlerForNotification:(id)notification;	// 0x30250901
- (BOOL)hasCandidateKeys;	// 0x302506cd
- (float)hitBuffer;	// 0x30250891
- (BOOL)ignoresShiftState;	// 0x302506a9
- (BOOL)isShiftKeyBeingHeld;	// 0x302506b5
- (BOOL)isShiftKeyPlaneChooser;	// 0x302506b9
- (id)keyplaneForKey:(id)key;	// 0x30250909
- (id)keyplaneNamed:(id)named;	// 0x3025090d
- (void)longPressAction;	// 0x302506c1
// declared property getter: - (int)orientation;	// 0x30121cf5
- (BOOL)performReturnAction;	// 0x302506c5
- (void)phraseBoundaryDidChange;	// 0x3025088d
- (void)restoreDefaultsForAllKeys;	// 0x302506e5
- (void)restoreDefaultsForKey:(id)key;	// 0x302506e1
- (void)setAction:(SEL)action forKey:(id)key;	// 0x302506d9
// declared property setter: - (void)setActiveTouch:(id)touch;	// 0x3013a4d9
- (void)setAutoshift:(BOOL)autoshift;	// 0x302506b1
- (void)setDelegate:(id)delegate forKey:(id)key;	// 0x302506e9
- (void)setLabel:(id)label forKey:(id)key;	// 0x302506d1
- (void)setLongPressAction:(SEL)action forKey:(id)key;	// 0x302506dd
// declared property setter: - (void)setOrientation:(int)orientation;	// 0x30117ad5
- (void)setShift:(BOOL)shift;	// 0x302506ad
// declared property setter: - (void)setShiftKeyTouch:(id)touch;	// 0x30121a25
// declared property setter: - (void)setSwipeTouch:(id)touch;	// 0x3025094d
- (void)setTarget:(id)target forKey:(id)key;	// 0x302506d5
- (BOOL)shiftKeyRequiresImmediateUpdate;	// 0x301ca029
// declared property getter: - (id)shiftKeyTouch;	// 0x3025092d
- (BOOL)shouldShowIndicator;	// 0x302506f9
- (void)showKeyboardType:(int)type withAppearance:(int)appearance;	// 0x30250691
- (id)simulateTouch:(CGPoint)touch;	// 0x30250915
- (id)simulateTouchForCharacter:(id)character errorVector:(CGPoint)vector shouldTypeVariants:(BOOL)variants baseKeyForVariants:(BOOL)variants4;	// 0x30250921
- (void)swipeGestureRecognized:(id)recognized;	// 0x30250419
// declared property getter: - (id)swipeTouch;	// 0x3025093d
- (void)touchCancelled:(id)cancelled;	// 0x3025070d
- (void)touchDown:(id)down;	// 0x30250701
- (void)touchDragged:(id)dragged;	// 0x30250705
- (void)touchUp:(id)up;	// 0x30250709
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x30138379
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x30250711
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x30140679
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x3018a05d
- (BOOL)updateKeysWithDelegates;	// 0x302506ed
- (void)updateLocalizedKeys:(BOOL)keys;	// 0x302506a1
- (void)updateReturnKey;	// 0x3025069d
- (BOOL)usesAutoShift;	// 0x302506a5
- (void)wipeGestureRecognized:(id)recognized;	// 0x302504f5
@end

