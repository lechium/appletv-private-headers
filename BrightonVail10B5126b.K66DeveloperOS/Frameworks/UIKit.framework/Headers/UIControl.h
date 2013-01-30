/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSMutableArray;

@interface UIControl : UIView {
	NSMutableArray *_targetActions;	// 84 = 0x54
	CGPoint _previousPoint;	// 88 = 0x58
	double _downTime;	// 96 = 0x60
	struct {
		unsigned disabled : 1;
		unsigned tracking : 1;
		unsigned touchInside : 1;
		unsigned touchDragged : 1;
		unsigned requiresDisplayOnTracking : 1;
		unsigned highlighted : 1;
		unsigned dontHighlightOnTouchDown : 1;
		unsigned delayActions : 1;
		unsigned allowActionsToQueue : 1;
		unsigned pendingUnhighlight : 1;
		unsigned selected : 1;
		unsigned verticalAlignment : 2;
		unsigned horizontalAlignment : 2;
	} _controlFlags;	// 104 = 0x68
}
@property(assign, nonatomic) int contentHorizontalAlignment;	// G=0x32b08a45; S=0x32b80761; @dynamic
@property(assign, nonatomic) int contentVerticalAlignment;	// G=0x32b295b5; S=0x32b09809; @dynamic
@property(assign, nonatomic, getter=isEnabled) BOOL enabled;	// G=0x32b08465; S=0x32b0ae41; @dynamic
@property(assign, nonatomic, getter=isHighlighted) BOOL highlighted;	// G=0x32b0847d; S=0x32b71a79; @dynamic
@property(assign) BOOL requiresDisplayOnTracking;	// G=0x32bcc709; S=0x32b83e8d; converted property
@property(assign, nonatomic, getter=isSelected) BOOL selected;	// G=0x32b08491; S=0x32bb9b39; @dynamic
@property(readonly, assign, nonatomic) unsigned state;	// G=0x32b08401; @dynamic
@property(readonly, assign, nonatomic, getter=isTouchInside) BOOL touchInside;	// G=0x32bccfd9; @dynamic
@property(readonly, assign, nonatomic, getter=isTracking) BOOL tracking;	// G=0x32b10ddd; @dynamic
- (id)initWithCoder:(id)coder;	// 0x32c81fb1
- (id)initWithFrame:(CGRect)frame;	// 0x32b07639
- (void)_cancelDelayedActions;	// 0x32b34ce1
- (void)_connectInterfaceBuilderEventConnection:(id)connection;	// 0x32c860cd
- (void)_delayActions;	// 0x32ce3085
- (void)_didMoveFromWindow:(id)window toWindow:(id)window2;	// 0x32b10d75
- (BOOL)_hasActionForEventMask:(int)eventMask;	// 0x32ce300d
- (void)_sendActionsForEventMask:(int)eventMask withEvent:(GSEventRef)event;	// 0x32bd22d5
- (void)_sendActionsForEvents:(int)events withEvent:(id)event;	// 0x32bcc71d
- (void)_sendDelayedActions;	// 0x32ce309d
- (void)_sendDelayedActions:(BOOL)actions;	// 0x32bcc93d
- (void)_setHighlightOnMouseDown:(BOOL)down;	// 0x32b94a49
- (void)_unhighlight;	// 0x32c1bab9
- (id)actionsForTarget:(id)target forControlEvent:(unsigned)controlEvent;	// 0x32ce2ec1
- (void)addTarget:(id)target action:(SEL)action forControlEvents:(unsigned)controlEvents;	// 0x32b0b631
- (void)addTarget:(id)target action:(SEL)action forEvents:(int)events;	// 0x32b5237d
- (unsigned)allControlEvents;	// 0x32ce2df9
- (id)allTargets;	// 0x32bc530d
- (BOOL)beginTrackingAt:(CGPoint)at withEvent:(GSEventRef)event;	// 0x32ce3195
- (BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x32bcc651
- (BOOL)cancelMouseTracking;	// 0x32c5d49d
- (BOOL)cancelTouchTracking;	// 0x32c443d1
- (void)cancelTrackingWithEvent:(id)event;	// 0x32c44409
// declared property getter: - (int)contentHorizontalAlignment;	// 0x32b08a45
// declared property getter: - (int)contentVerticalAlignment;	// 0x32b295b5
- (BOOL)continueTrackingAt:(CGPoint)at previous:(CGPoint)previous withEvent:(GSEventRef)event;	// 0x32ce3199
- (BOOL)continueTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x32c2e08d
- (void)dealloc;	// 0x32b10f2d
- (void)encodeWithCoder:(id)coder;	// 0x32ce25d1
- (void)endTrackingAt:(CGPoint)at previous:(CGPoint)previous withEvent:(GSEventRef)event;	// 0x32ce319d
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x32bccff1
- (BOOL)hasOneOrMoreTargets;	// 0x32ce314d
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x32ce26cd
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x32bc5f95
// declared property getter: - (BOOL)isEnabled;	// 0x32b08465
// declared property getter: - (BOOL)isHighlighted;	// 0x32b0847d
// declared property getter: - (BOOL)isSelected;	// 0x32b08491
// declared property getter: - (BOOL)isTouchInside;	// 0x32bccfd9
// declared property getter: - (BOOL)isTracking;	// 0x32b10ddd
- (void)mouseDown:(GSEventRef)down;	// 0x32ce2725
- (void)mouseDragged:(GSEventRef)dragged;	// 0x32ce2885
- (BOOL)mouseInside;	// 0x32ce3179
- (void)mouseUp:(GSEventRef)up;	// 0x32ce2a69
- (BOOL)pointMostlyInside:(CGPoint)inside forEvent:(GSEventRef)event;	// 0x32ce30b1
- (BOOL)pointMostlyInside:(CGPoint)inside withEvent:(id)event;	// 0x32bccf51
- (void)removeTarget:(id)target action:(SEL)action forControlEvents:(unsigned)controlEvents;	// 0x32b34be1
- (void)removeTarget:(id)target forEvents:(int)events;	// 0x32bed995
// converted property getter: - (BOOL)requiresDisplayOnTracking;	// 0x32bcc709
- (void)sendAction:(SEL)action to:(id)to forEvent:(id)event;	// 0x32bcd031
- (void)sendAction:(SEL)action toTarget:(id)target forEvent:(GSEventRef)event;	// 0x32c409a9
- (void)sendActionsForControlEvents:(unsigned)controlEvents;	// 0x32c1b6c9
// declared property setter: - (void)setContentHorizontalAlignment:(int)alignment;	// 0x32b80761
// declared property setter: - (void)setContentVerticalAlignment:(int)alignment;	// 0x32b09809
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x32b0ae41
// declared property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x32b71a79
// converted property setter: - (void)setRequiresDisplayOnTracking:(BOOL)tracking;	// 0x32b83e8d
// declared property setter: - (void)setSelected:(BOOL)selected;	// 0x32bb9b39
- (void)setTracking:(BOOL)tracking;	// 0x32bcc655
- (BOOL)shouldTrack;	// 0x32bcc611
// declared property getter: - (unsigned)state;	// 0x32b08401
- (BOOL)touchDragged;	// 0x32ce3139
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x32bcc4b1
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x32ce2db9
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x32bccc21
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x32c2debd
@end
