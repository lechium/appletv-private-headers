/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRResponder.h"
#import "BRFocusContainer.h"
#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSObject;
@protocol BREventDelegate;

__attribute__((visibility("hidden")))
@interface BRControl : XXUnknownSuperclass <BRFocusContainer, BRResponder> {
	BOOL _useUIViewAnimations;	// 48 = 0x30
	BRControl *_defaultFocus;	// 52 = 0x34
	BRControl *_focusedControl;	// 56 = 0x38
	BRControl *_keyEventTargetControl;	// 60 = 0x3c
	BOOL _acceptsFocus;	// 64 = 0x40
	BOOL _focused;	// 65 = 0x41
	BOOL _controlActive;	// 66 = 0x42
	BOOL _inhibitsFocusForChildren;	// 67 = 0x43
	BOOL _inhibitsScrollFocusForChildren;	// 68 = 0x44
	NSObject<BREventDelegate> *_brEventDelegate;	// 72 = 0x48
	BOOL _focusByDirectionEnabled;	// 76 = 0x4c
	XXStruct_qlg9jA _focusCursorHaloAdjustment;	// 80 = 0x50
	BOOL _ignoreDirectionalInfoForFocus;	// 84 = 0x54
	id _eventHandlerBlock;	// 88 = 0x58
	BRControl *__previousFocus;	// 92 = 0x5c
}
@property(retain, nonatomic) BRControl *_previousFocus;	// G=0x28087d; S=0x28088d; @synthesize=__previousFocus
@property(assign) BOOL acceptsFocus;	// G=0x281639; S=0x2815f5; converted property
@property(assign, nonatomic) BOOL accessibilityOutputsRange;	// G=0x28b6d9; S=0x28b729; 
@property(assign, nonatomic) BOOL accessibilityOutputsRangeForChildren;	// G=0x28b64d; S=0x28b69d; 
@property(retain) id actions;	// G=0x28196d; S=0x281941; converted property
@property(assign) CGPoint anchorPoint;	// G=0x2808cd; S=0x28089d; converted property
@property(assign) BOOL avoidsCursor;	// G=0x281711; S=0x2816cd; converted property
@property(assign) CGColorRef borderColor;	// G=0x2811e1; S=0x2811b5; converted property
@property(assign) float borderWidth;	// G=0x281235; S=0x281209; converted property
@property(retain) BRControl *defaultFocus;	// G=0x281589; S=0x2814f9; converted property
@property(retain) NSObject<BREventDelegate> *eventDelegate;	// G=0x280815; S=0x280829; @synthesize=_brEventDelegate
@property(copy, nonatomic) id eventHandlerBlock;	// G=0x280859; S=0x28086d; @synthesize=_eventHandlerBlock
@property(readonly, assign, getter=isFocused) BOOL focused;	// G=0x2816bd; converted property
@property(retain) BRControl *focusedControl;	// G=0x2814e9; S=0x281425; converted property
@property(retain) id identifier;	// G=0x280229; S=0x2801f1; converted property
@property(assign, nonatomic) BOOL ignoreDirectionalInfoForFocus;	// G=0x280839; S=0x280849; @synthesize=_ignoreDirectionalInfoForFocus
@property(assign) BOOL inhibitsFocusForChildren;	// G=0x28167d; S=0x281649; converted property
@property(readonly, assign) BOOL inhibitsScrollFocusForChildren;	// G=0x2816a5; converted property
@property(retain) BRControl *keyEventTargetControl;	// G=0x2807c9; S=0x280735; converted property
@property(retain) id name;	// G=0x280d4d; S=0x280d21; converted property
@property(retain) id object;	// G=0x2801bd; S=0x280185; converted property
@property(retain) id selectionHandler;	// G=0x2817ad; S=0x281791; converted property
+ (id)control;	// 0x27ffd5
+ (id)controlWithScaledFrame:(CGRect)scaledFrame;	// 0x356aed
+ (Class)layerClass;	// 0x28001d
- (id)init;	// 0x280039
- (id)initWithLayout:(id)layout;	// 0x27fe71
- (void)_addChainedAnimation:(id)animation preemptedAnimation:(id)animation2 timeOffset:(double)offset forKey:(id)key;	// 0x3ffef1
- (void)_addChainedAnimation:(id)animation preemptedDuration:(double)duration forKey:(id)key;	// 0x4001d9
- (void)_axPrintSubviews:(int)subviews string:(id)string;	// 0x28b805
- (id)_axSubviews;	// 0x28b97d
- (id)_axSuperviews;	// 0x28b765
- (BOOL)_changeFocusTo:(id)to;	// 0x281d61
- (void)_didRemoveSubcontrol:(id)subcontrol;	// 0x281995
- (void)_dumpFocusTree;	// 0x2821e5
- (BOOL)_focusControlTreeForEvent:(id)event nearPoint:(CGPoint)point;	// 0x281bc1
- (BOOL)_focusControlTreeWithDefaults;	// 0x281b59
- (id)_focusedLeafControl;	// 0x282001
- (CGPoint)_focusedPointForEvent:(id)event;	// 0x281a49
- (id)_initialFocus;	// 0x282075
- (id)_parentScrollControl;	// 0x300249
// declared property getter: - (id)_previousFocus;	// 0x28087d
- (void)_reevaluateFocusTree;	// 0x282021
- (void)_scrollPoint:(CGPoint)point fromControl:(id)control;	// 0x3002cd
- (void)_scrollRect:(CGRect)rect fromControl:(id)control;	// 0x3002fd
- (void)_scrollingCompleted;	// 0x300111
- (void)_scrollingInitiated;	// 0x30015d
- (void)_setControlFocused:(BOOL)focused;	// 0x281f7d
- (void)_setFocus:(id)focus;	// 0x281dfd
- (double)_timeOffsetForExistingAnimationForKey:(id)key preemptedAnimation:(id *)animation;	// 0x3ffce1
- (CGRect)_visibleRectOfControl:(id)control;	// 0x300271
- (void)_visibleScrollRectChanged;	// 0x30033d
// converted property getter: - (BOOL)acceptsFocus;	// 0x281639
- (id)accessibilityAncestor:(Class)ancestor;	// 0x28b269
- (id)accessibilityControls;	// 0x28b1e1
- (BOOL)accessibilityElementIsHidden;	// 0x28b2b5
- (CGRect)accessibilityFrame;	// 0x28b10d
- (BOOL)accessibilityIgnoresControlReload;	// 0x28b1dd
- (BOOL)accessibilityIsDescendant:(id)descendant;	// 0x28b219
// declared property getter: - (BOOL)accessibilityOutputsRange;	// 0x28b6d9
// declared property getter: - (BOOL)accessibilityOutputsRangeForChildren;	// 0x28b64d
- (unsigned long long)accessibilityTraits;	// 0x28b335
- (id)actionForKey:(id)key;	// 0x281915
- (id)actionForLayer:(id)layer forKey:(id)key;	// 0x2806a9
// converted property getter: - (id)actions;	// 0x28196d
- (BOOL)active;	// 0x280bb1
- (void)addAnimation:(id)animation forKey:(id)key;	// 0x281865
// converted property getter: - (CGPoint)anchorPoint;	// 0x2808cd
- (id)animationForKey:(id)key;	// 0x281895
// converted property getter: - (BOOL)avoidsCursor;	// 0x281711
- (id)badge;	// 0x2cf0a1
// converted property getter: - (CGColorRef)borderColor;	// 0x2811e1
// converted property getter: - (float)borderWidth;	// 0x281235
- (CGSize)boundsForFocusCandidate:(id)focusCandidate;	// 0x282111
- (BOOL)brEventAction:(id)action;	// 0x28025d
- (BOOL)brKeyEvent:(id)event;	// 0x2804e1
- (CGAffineTransform)contentModeTransformForSize:(CGSize)size;	// 0x280909
- (long)controlCount;	// 0x2810c9
- (void)controlDidDisplayAsModalDialog;	// 0x36a361
- (id)controlForPoint:(CGPoint)point;	// 0x2817d1
- (id)controlSearchOrderInProximityToControl:(id)control;	// 0x408b31
- (void)controlWasActivated;	// 0x280bc1
- (void)controlWasDeactivated;	// 0x280c71
- (void)controlWasFocused;	// 0x2816b5
- (void)controlWasUnfocused;	// 0x2816b9
- (void)dealloc;	// 0x2800b5
- (id)debugDescriptionForFocusCandidate:(id)focusCandidate;	// 0x2821e1
// converted property getter: - (id)defaultFocus;	// 0x281589
- (id)description;	// 0x2817d5
- (void)didAddSubview:(id)subview;	// 0x280e11
- (BOOL)eligibilityForFocusCandidate:(id)focusCandidate;	// 0x282161
// declared property getter: - (id)eventDelegate;	// 0x280815
// declared property getter: - (id)eventHandlerBlock;	// 0x280859
- (id)firstControlNamed:(id)named;	// 0x280d75
- (id)focusCandidates;	// 0x2820c5
- (CGRect)focusCursorFrame;	// 0x281741
- (XXStruct_qlg9jA)focusCursorHaloAdjutment;	// 0x281775
- (id)focusObjectForCandidate:(id)candidate;	// 0x28214d
// converted property getter: - (id)focusedControl;	// 0x2814e9
- (id)focusedControlForEvent:(id)event focusPoint:(CGPoint *)point;	// 0x281599
- (BOOL)handlePlayButton:(id)button;	// 0x1f6611
// converted property getter: - (id)identifier;	// 0x280229
// declared property getter: - (BOOL)ignoreDirectionalInfoForFocus;	// 0x280839
- (id)inheritedValueForKey:(id)key;	// 0x28056d
// converted property getter: - (BOOL)inhibitsFocusForChildren;	// 0x28167d
// converted property getter: - (BOOL)inhibitsScrollFocusForChildren;	// 0x2816a5
- (id)initialFocus;	// 0x281339
- (void)insertSubview:(id)subview aboveSubview:(id)subview2;	// 0x280db1
- (void)insertSubview:(id)subview belowSubview:(id)subview2;	// 0x280de1
// converted property getter: - (BOOL)isFocused;	// 0x2816bd
// converted property getter: - (id)keyEventTargetControl;	// 0x2807c9
- (void)layoutSubcontrols;	// 0x2811b1
- (void)layoutSubviews;	// 0x2806fd
- (void)mapDataObject:(id)object withMappings:(id)mappings;	// 0x1e42dd
// converted property getter: - (id)name;	// 0x280d4d
// converted property getter: - (id)object;	// 0x2801bd
- (id)parent;	// 0x280b61
- (id)parentScrollControl;	// 0x300225
- (CGPoint)positionForFocusCandidate:(id)focusCandidate;	// 0x2820ed
- (id)preferredActionForKey:(id)key;	// 0x281861
- (float)preferredCursorRadius;	// 0x2cf09d
- (id)randomNavigationLabel;	// 0x2807d9
- (void)removeAllAnimations;	// 0x2818ed
- (void)removeAnimationForKey:(id)key;	// 0x2818c1
- (void)removeFromSuperview;	// 0x281101
- (id)root;	// 0x280b35
- (CGPoint)scrollControl:(id)control adjustScrollPosition:(CGPoint)position;	// 0x30023d
- (void)scrollPoint:(CGPoint)point;	// 0x3001a9
- (void)scrollRectToVisible:(CGRect)visible;	// 0x3001c5
- (void)scrollingCompleted;	// 0x300235
- (void)scrollingInitiated;	// 0x300239
// converted property getter: - (id)selectionHandler;	// 0x2817ad
// converted property setter: - (void)setAcceptsFocus:(BOOL)focus;	// 0x2815f5
// declared property setter: - (void)setAccessibilityOutputsRange:(BOOL)range;	// 0x28b729
// declared property setter: - (void)setAccessibilityOutputsRangeForChildren:(BOOL)children;	// 0x28b69d
// converted property setter: - (void)setActions:(id)actions;	// 0x281941
// converted property setter: - (void)setAnchorPoint:(CGPoint)point;	// 0x28089d
// converted property setter: - (void)setAvoidsCursor:(BOOL)cursor;	// 0x2816cd
// converted property setter: - (void)setBorderColor:(CGColorRef)color;	// 0x2811b5
// converted property setter: - (void)setBorderWidth:(float)width;	// 0x281209
- (void)setControls:(id)controls;	// 0x280ed5
// converted property setter: - (void)setDefaultFocus:(id)focus;	// 0x2814f9
- (void)setDefaultFocusWithPoint:(CGPoint)point;	// 0x2817cd
// declared property setter: - (void)setEventDelegate:(id)delegate;	// 0x280829
// declared property setter: - (void)setEventHandlerBlock:(id)block;	// 0x28086d
- (void)setFocusCursorHaloAdjustment:(XXStruct_qlg9jA)adjustment;	// 0x281765
- (BOOL)setFocusToGlyphNamed:(id)glyphNamed;	// 0x31a1f1
// converted property setter: - (void)setFocusedControl:(id)control;	// 0x281425
// converted property setter: - (void)setIdentifier:(id)identifier;	// 0x2801f1
// declared property setter: - (void)setIgnoreDirectionalInfoForFocus:(BOOL)focus;	// 0x280849
// converted property setter: - (void)setInhibitsFocusForChildren:(BOOL)children;	// 0x281649
- (void)setInhibitsScrollFocusForChildren:(bool)children;	// 0x28168d
// converted property setter: - (void)setKeyEventTargetControl:(id)control;	// 0x280735
// converted property setter: - (void)setName:(id)name;	// 0x280d21
// converted property setter: - (void)setObject:(id)object;	// 0x280185
// converted property setter: - (void)setSelectionHandler:(id)handler;	// 0x281791
- (void)setValue:(id)value forKey:(id)key cascade:(BOOL)cascade;	// 0x2805b9
- (void)setValue:(id)value forUndefinedKey:(id)undefinedKey;	// 0x28053d
// declared property setter: - (void)set_previousFocus:(id)focus;	// 0x28088d
- (int)touchSensitivity;	// 0x2817c9
- (id)valueForUndefinedKey:(id)undefinedKey;	// 0x280511
- (CGRect)visibleScrollRect;	// 0x3001fd
- (void)visibleScrollRectChanged;	// 0x3001ed
- (void)windowMaxBoundsChanged;	// 0x28125d
@end

