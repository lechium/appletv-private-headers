/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRFocusContainer.h"
#import <NSObject.h> // Unknown library
#import "BRResponder.h"

@class NSMutableArray, CALayer;
@protocol BREventDelegate;

@interface BRControl : NSObject <BRFocusContainer, BRResponder> {
@private
	CALayer *_backing;	// 4 = 0x4
	BRControl *_defaultFocus;	// 8 = 0x8
	BRControl *_focusedControl;	// 12 = 0xc
	BRControl *_previousFocus;	// 16 = 0x10
	BRControl *_keyEventTargetControl;	// 20 = 0x14
	unsigned _autoresizing;	// 24 = 0x18
	NSMutableArray *_subControls;	// 28 = 0x1c
	BOOL _dontAutoresizeSubviews;	// 32 = 0x20
	BOOL _acceptsFocus;	// 33 = 0x21
	BOOL _focused;	// 34 = 0x22
	BOOL _controlActive;	// 35 = 0x23
	BOOL _inhibitsFocusForChildren;	// 36 = 0x24
	BOOL _inhibitsScrollFocusForChildren;	// 37 = 0x25
	NSObject<BREventDelegate> *_brEventDelegate;	// 40 = 0x28
	BOOL _focusByDirectionEnabled;	// 44 = 0x2c
	BOOL _ignoreDirectionalInfoForFocus;	// 45 = 0x2d
}
@property(assign) BOOL acceptsFocus;	// G=0x3301bc95; S=0x3301bc55; converted property
@property(assign, nonatomic) BOOL accessibilityOutputsRangeForChildren;	// G=0x3301fec9; S=0x3301ff1d; 
@property(retain) id actions;	// G=0x3301bf15; S=0x3301bef5; converted property
@property(assign) CGAffineTransform affineTransform;	// G=0x3301aae9; S=0x3301aaa5; converted property
@property(assign) CGPoint anchorPoint;	// G=0x3301aa75; S=0x3301aa55; converted property
@property(assign) unsigned autoresizingMask;	// G=0x3301ad31; S=0x3301ad21; converted property
@property(assign) BOOL avoidsCursor;	// G=0x3301bd6d; S=0x3301bd29; converted property
@property(assign) CGColorRef backgroundColor;	// G=0x3301b5a1; S=0x3301b581; converted property
@property(assign) CGColorRef borderColor;	// G=0x3301b939; S=0x3301b919; converted property
@property(assign) float borderWidth;	// G=0x3301b979; S=0x3301b959; converted property
@property(assign) CGRect bounds;	// G=0x3301aa21; S=0x3301a959; converted property
@property(assign) int contentMode;	// G=0x3301b739; S=0x3301b645; converted property
@property(retain) id controls;	// G=0x3301b425; S=0x3301b2d1; converted property
@property(retain) BRControl *defaultFocus;	// G=0x3301bbf5; S=0x3301bb61; converted property
@property(retain) NSObject<BREventDelegate> *eventDelegate;	// G=0x3301a7b5; S=0x3301a7c9; @synthesize=_brEventDelegate
@property(readonly, assign, getter=isFocused) BOOL focused;	// G=0x3301bd19; converted property
@property(retain) BRControl *focusedControl;	// G=0x3301bb51; S=0x3301ba71; converted property
@property(assign) CGRect frame;	// G=0x3301a8d5; S=0x3301a80d; converted property
@property(assign, getter=isHidden) BOOL hidden;	// G=0x3301b621; S=0x3301b601; converted property
@property(retain) id identifier;	// G=0x3301a2a1; S=0x3301a279; converted property
@property(assign, nonatomic) BOOL ignoreDirectionalInfoForFocus;	// G=0x3301a7ed; S=0x3301a7fd; @synthesize=_ignoreDirectionalInfoForFocus
@property(assign) BOOL inhibitsFocusForChildren;	// G=0x3301bcd9; S=0x3301bca5; converted property
@property(readonly, assign) BOOL inhibitsScrollFocusForChildren;	// G=0x3301bd01; converted property
@property(retain) BRControl *keyEventTargetControl;	// G=0x3301a7a5; S=0x3301a70d; converted property
@property(assign) BOOL masksToBounds;	// G=0x3301b55d; S=0x3301b53d; converted property
@property(retain) id name;	// G=0x3301b129; S=0x3301b109; converted property
@property(retain) id object;	// G=0x3301a251; S=0x3301a229; converted property
@property(assign) float opacity;	// G=0x3301b5e1; S=0x3301b5c1; converted property
@property(assign) CGPoint position;	// G=0x3301a929; S=0x3301a909; converted property
@property(retain) id selectionHandler;	// G=0x3301bddd; S=0x3301bdc1; converted property
+ (id)control;	// 0x33019f2d
+ (id)controlWithScaledFrame:(CGRect)scaledFrame;	// 0x330ed3c9
+ (Class)layerClass;	// 0x33019f75
- (id)init;	// 0x33019f91
- (void)_axPrintSubviews:(int)subviews string:(id)string;	// 0x3301fff5
- (id)_axSubviews;	// 0x33020151
- (id)_axSuperviews;	// 0x3301ff59
- (BOOL)_changeFocusTo:(id)to;	// 0x3301c821
- (void)_dumpControlTree;	// 0x3301ce41
- (void)_dumpFocusTree;	// 0x3301cc35
- (BOOL)_focusControlTreeForEvent:(id)event nearPoint:(CGPoint)point;	// 0x3301c729
- (BOOL)_focusControlTreeWithDefaults;	// 0x3301c6c1
- (id)_focusedLeafControl;	// 0x3301ca59
- (CGPoint)_focusedPointForEvent:(id)event;	// 0x3301c5b1
- (id)_initialFocus;	// 0x3301cacd
- (void)_insertSingleControl:(id)control atIndex:(long)index;	// 0x3301bf35
- (void)_layoutSublayersOfLayer:(id)layer;	// 0x3301a6d9
- (id)_parentScrollControl;	// 0x3309b585
- (void)_reevaluateFocusTree;	// 0x3301ca79
- (void)_removeAllControls;	// 0x3301c22d
- (void)_removeControl:(id)control;	// 0x3301c105
- (void)_resizeSubviewsWithOldSize:(CGSize)oldSize;	// 0x3301c29d
- (void)_resizeWithOldSuperviewSize:(CGSize)oldSuperviewSize;	// 0x3301c365
- (void)_scrollPoint:(CGPoint)point fromControl:(id)control;	// 0x3309b609
- (void)_scrollRect:(CGRect)rect fromControl:(id)control;	// 0x3309b639
- (void)_scrollingCompleted;	// 0x3309b459
- (void)_scrollingInitiated;	// 0x3309b4a5
- (void)_setControlFocused:(BOOL)focused;	// 0x3301ca11
- (void)_setFocus:(id)focus;	// 0x3301c8bd
- (CGRect)_visibleRectOfControl:(id)control;	// 0x3309b5ad
- (void)_visibleScrollRectChanged;	// 0x3309b679
// converted property getter: - (BOOL)acceptsFocus;	// 0x3301bc95
- (id)accessibilityAncestor:(Class)ancestor;	// 0x3301fe45
- (id)accessibilityControls;	// 0x3301fde9
- (BOOL)accessibilityElementIsHidden;	// 0x3301be05
- (BOOL)accessibilityElementIsHidden;	// 0x3301fe8d
- (BOOL)accessibilityIsDescendant:(id)descendant;	// 0x3301fdf9
// declared property getter: - (BOOL)accessibilityOutputsRangeForChildren;	// 0x3301fec9
- (id)actionForKey:(id)key;	// 0x3301bed5
- (id)actionForLayer:(id)layer forKey:(id)key;	// 0x3301a6c5
// converted property getter: - (id)actions;	// 0x3301bf15
- (BOOL)active;	// 0x3301b071
- (void)addAnimation:(id)animation forKey:(id)key;	// 0x3301be55
- (void)addControl:(id)control;	// 0x3301b181
// converted property getter: - (CGAffineTransform)affineTransform;	// 0x3301aae9
// converted property getter: - (CGPoint)anchorPoint;	// 0x3301aa75
- (id)animationForKey:(id)key;	// 0x3301be75
// converted property getter: - (unsigned)autoresizingMask;	// 0x3301ad31
// converted property getter: - (BOOL)avoidsCursor;	// 0x3301bd6d
// converted property getter: - (CGColorRef)backgroundColor;	// 0x3301b5a1
- (id)badge;	// 0x33065249
// converted property getter: - (CGColorRef)borderColor;	// 0x3301b939
// converted property getter: - (float)borderWidth;	// 0x3301b979
// converted property getter: - (CGRect)bounds;	// 0x3301aa21
- (CGSize)boundsForFocusCandidate:(id)focusCandidate;	// 0x3301cb65
- (BOOL)brEventAction:(id)action;	// 0x3301a2c9
- (BOOL)brKeyEvent:(id)event;	// 0x3301a525
// converted property getter: - (int)contentMode;	// 0x3301b739
- (CGAffineTransform)contentModeTransformForSize:(CGSize)size;	// 0x3301ab19
- (long)controlCount;	// 0x3301b451
- (void)controlDidDisplayAsModalDialog;	// 0x331021c5
- (id)controlForPoint:(CGPoint)point;	// 0x3301be01
- (void)controlWasActivated;	// 0x3301b081
- (void)controlWasDeactivated;	// 0x3301b0c5
- (void)controlWasFocused;	// 0x3301bd11
- (void)controlWasUnfocused;	// 0x3301bd15
// converted property getter: - (id)controls;	// 0x3301b425
- (CGPoint)convertPoint:(CGPoint)point fromControl:(id)control;	// 0x3301ae75
- (CGPoint)convertPoint:(CGPoint)point toControl:(id)control;	// 0x3301aed1
- (CGRect)convertRect:(CGRect)rect fromControl:(id)control;	// 0x3301af2d
- (CGRect)convertRect:(CGRect)rect toControl:(id)control;	// 0x3301af91
- (void)dealloc;	// 0x3301a021
- (id)debugDescriptionForFocusCandidate:(id)focusCandidate;	// 0x3301cc31
// converted property getter: - (id)defaultFocus;	// 0x3301bbf5
- (void)drawInContext:(CGContextRef)context;	// 0x3301b539
- (void)drawLayer:(id)layer inContext:(CGContextRef)context;	// 0x3301a6b1
- (BOOL)eligibilityForFocusCandidate:(id)focusCandidate;	// 0x3301cbb1
// declared property getter: - (id)eventDelegate;	// 0x3301a7b5
- (id)firstControlNamed:(id)named;	// 0x3301b149
- (id)focusCandidates;	// 0x3301cb21
- (CGRect)focusCursorFrame;	// 0x3301bd9d
- (id)focusObjectForCandidate:(id)candidate;	// 0x3301cb9d
// converted property getter: - (id)focusedControl;	// 0x3301bb51
- (id)focusedControlForEvent:(id)event focusPoint:(CGPoint *)point;	// 0x3301bc05
// converted property getter: - (CGRect)frame;	// 0x3301a8d5
- (BOOL)handlePlayButton:(id)button;	// 0x32f6c7b5
// converted property getter: - (id)identifier;	// 0x3301a2a1
// declared property getter: - (BOOL)ignoreDirectionalInfoForFocus;	// 0x3301a7ed
- (id)inheritedValueForKey:(id)key;	// 0x3301a595
// converted property getter: - (BOOL)inhibitsFocusForChildren;	// 0x3301bcd9
// converted property getter: - (BOOL)inhibitsScrollFocusForChildren;	// 0x3301bd01
- (id)initialFocus;	// 0x3301b999
- (void)insertControl:(id)control above:(id)above;	// 0x3301b205
- (void)insertControl:(id)control atIndex:(long)index;	// 0x3301b1c5
- (void)insertControl:(id)control below:(id)below;	// 0x3301b279
// converted property getter: - (BOOL)isFocused;	// 0x3301bd19
// converted property getter: - (BOOL)isHidden;	// 0x3301b621
// converted property getter: - (id)keyEventTargetControl;	// 0x3301a7a5
- (id)layer;	// 0x3301a219
- (id)layerForBacking;	// 0x3301a1c1
- (void)layoutSubcontrols;	// 0x3301b4d9
- (void)mapDataObject:(id)object withMappings:(id)mappings;	// 0x32f5af79
// converted property getter: - (BOOL)masksToBounds;	// 0x3301b55d
// converted property getter: - (id)name;	// 0x3301b129
// converted property getter: - (id)object;	// 0x3301a251
// converted property getter: - (float)opacity;	// 0x3301b5e1
- (id)parent;	// 0x3301b039
- (id)parentScrollControl;	// 0x3309b56d
// converted property getter: - (CGPoint)position;	// 0x3301a929
- (CGPoint)positionForFocusCandidate:(id)focusCandidate;	// 0x3301cb41
- (id)preferredActionForKey:(id)key;	// 0x3301be51
- (float)preferredCursorRadius;	// 0x33065245
- (void)removeAllAnimations;	// 0x3301beb5
- (void)removeAnimationForKey:(id)key;	// 0x3301be95
- (void)removeFromParent;	// 0x3301b489
- (id)root;	// 0x3301aff5
- (void)scrollPoint:(CGPoint)point;	// 0x3309b4f1
- (void)scrollRectToVisible:(CGRect)visible;	// 0x3309b50d
- (void)scrollingCompleted;	// 0x3309b57d
- (void)scrollingInitiated;	// 0x3309b581
// converted property getter: - (id)selectionHandler;	// 0x3301bddd
// converted property setter: - (void)setAcceptsFocus:(BOOL)focus;	// 0x3301bc55
// declared property setter: - (void)setAccessibilityOutputsRangeForChildren:(BOOL)children;	// 0x3301ff1d
// converted property setter: - (void)setActions:(id)actions;	// 0x3301bef5
// converted property setter: - (void)setAffineTransform:(CGAffineTransform)transform;	// 0x3301aaa5
// converted property setter: - (void)setAnchorPoint:(CGPoint)point;	// 0x3301aa55
// converted property setter: - (void)setAutoresizingMask:(unsigned)mask;	// 0x3301ad21
// converted property setter: - (void)setAvoidsCursor:(BOOL)cursor;	// 0x3301bd29
// converted property setter: - (void)setBackgroundColor:(CGColorRef)color;	// 0x3301b581
// converted property setter: - (void)setBorderColor:(CGColorRef)color;	// 0x3301b919
// converted property setter: - (void)setBorderWidth:(float)width;	// 0x3301b959
// converted property setter: - (void)setBounds:(CGRect)bounds;	// 0x3301a959
// converted property setter: - (void)setContentMode:(int)mode;	// 0x3301b645
// converted property setter: - (void)setControls:(id)controls;	// 0x3301b2d1
// converted property setter: - (void)setDefaultFocus:(id)focus;	// 0x3301bb61
- (void)setDefaultFocusWithPoint:(CGPoint)point;	// 0x3301bdfd
// declared property setter: - (void)setEventDelegate:(id)delegate;	// 0x3301a7c9
- (BOOL)setFocusToGlyphNamed:(id)glyphNamed;	// 0x3316a381
// converted property setter: - (void)setFocusedControl:(id)control;	// 0x3301ba71
// converted property setter: - (void)setFrame:(CGRect)frame;	// 0x3301a80d
// converted property setter: - (void)setHidden:(BOOL)hidden;	// 0x3301b601
// converted property setter: - (void)setIdentifier:(id)identifier;	// 0x3301a279
// declared property setter: - (void)setIgnoreDirectionalInfoForFocus:(BOOL)focus;	// 0x3301a7fd
// converted property setter: - (void)setInhibitsFocusForChildren:(BOOL)children;	// 0x3301bca5
- (void)setInhibitsScrollFocusForChildren:(bool)children;	// 0x3301bce9
// converted property setter: - (void)setKeyEventTargetControl:(id)control;	// 0x3301a70d
// converted property setter: - (void)setMasksToBounds:(BOOL)bounds;	// 0x3301b53d
// converted property setter: - (void)setName:(id)name;	// 0x3301b109
- (void)setNeedsDisplay;	// 0x3301b4dd
- (void)setNeedsDisplayInRect:(CGRect)rect;	// 0x3301b4fd
- (void)setNeedsLayout;	// 0x3301b4b9
// converted property setter: - (void)setObject:(id)object;	// 0x3301a229
// converted property setter: - (void)setOpacity:(float)opacity;	// 0x3301b5c1
// converted property setter: - (void)setPosition:(CGPoint)position;	// 0x3301a909
// converted property setter: - (void)setSelectionHandler:(id)handler;	// 0x3301bdc1
- (void)setValue:(id)value forKey:(id)key cascade:(BOOL)cascade;	// 0x3301a5dd
- (void)setValue:(id)value forUndefinedKey:(id)undefinedKey;	// 0x3301a575
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3301ad41
- (void)sizeToFit;	// 0x3301ad79
- (int)touchSensitivity;	// 0x3301bdf9
- (id)valueForUndefinedKey:(id)undefinedKey;	// 0x3301a555
- (CGRect)visibleScrollRect;	// 0x3309b545
- (void)visibleScrollRectChanged;	// 0x3309b535
@end

