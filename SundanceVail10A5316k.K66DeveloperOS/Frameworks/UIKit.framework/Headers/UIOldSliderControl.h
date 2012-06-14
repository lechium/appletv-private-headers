/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIControl.h"

@class UIImage;

@interface UIOldSliderControl : UIControl {
	UIImage *_sliderLeftFillCap;	// 108 = 0x6c
	XXUnion_a01swB _sliderLeftFill;	// 112 = 0x70
	XXUnion_a01swB _sliderRightFill;	// 116 = 0x74
@private
	UIImage *_minValueImage;	// 120 = 0x78
	UIImage *_maxValueImage;	// 124 = 0x7c
	int _numberOfTickMarks;	// 128 = 0x80
	float _hitOffset;	// 132 = 0x84
@protected
	UIImage *_sliderRightCap;	// 136 = 0x88
	UIImage *_sliderRightFullCap;	// 140 = 0x8c
	UIImage *_sliderLeftCap;	// 144 = 0x90
	struct {
		unsigned allowsOnlyTickMarks : 1;
		unsigned animating : 1;
		unsigned showValue : 1;
		unsigned layeredFill : 1;
		unsigned continuous : 1;
		unsigned sendActionDuringAnimation : 1;
		unsigned alternateColors : 1;
		unsigned shouldFlipValue : 1;
		unsigned needsNonOpaqueFills : 1;
		unsigned reserved : 24;
	} _sliderFlags;	// 148 = 0x94
	float _value;	// 156 = 0x9c
	float _animationEndValue;	// 160 = 0xa0
	float _minValue;	// 164 = 0xa4
	float _maxValue;	// 168 = 0xa8
	UIView *_knob;	// 172 = 0xac
	double _lastTrackingTime;	// 176 = 0xb0
	double _idleTrackingTime;	// 184 = 0xb8
	CGPoint _lastTrackingPoint;	// 192 = 0xc0
	CGPoint _idleTrackingPoint;	// 200 = 0xc8
}
@property(assign) float value;	// G=0x302ced5d; S=0x302ce721; converted property
- (id)init;	// 0x302cd4e1
- (id)initWithFrame:(CGRect)frame;	// 0x302cd515
- (id)initWithFrame:(CGRect)frame layeredFill:(BOOL)fill;	// 0x302cd541
- (void)_controlMouseDown:(GSEventRef)down;	// 0x302cfd61
- (void)_controlMouseDragged:(GSEventRef)dragged;	// 0x302cfd69
- (void)_controlMouseUp:(GSEventRef)up;	// 0x302cfd65
- (void)_controlTouchBegan:(id)began withEvent:(id)event;	// 0x302d02b9
- (void)_controlTouchEnded:(id)ended withEvent:(id)event;	// 0x302d02c1
- (void)_controlTouchMoved:(id)moved withEvent:(id)event;	// 0x302d02bd
- (void)_resetFillFrames;	// 0x302cd829
- (id)_scriptingInfo;	// 0x302d0361
- (void)_sendDelayedActions;	// 0x302ce6bd
- (void)_setValue:(float)value andSendAction:(BOOL)action;	// 0x302ce735
- (void)_sliderBounds:(CGRect)bounds getLeftCapRect:(CGRect *)rect rightCapRect:(CGRect *)rect3 left:(CGRect *)left right:(CGRect *)right;	// 0x302ce105
- (float)_validatedValue:(float)value;	// 0x302cf741
- (float)_validatedValueForPoint:(CGPoint)point includeTickMarks:(BOOL)marks;	// 0x302cf78d
- (void)animator:(id)animator stopAnimation:(id)animation;	// 0x302ce679
- (BOOL)beginTrackingAt:(CGPoint)at withEvent:(GSEventRef)event;	// 0x302cf9a1
- (BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x302cfd71
- (BOOL)cancelMouseTracking;	// 0x302cfcd9
- (BOOL)cancelTouchTracking;	// 0x302d02c5
- (BOOL)continueTrackingAt:(CGPoint)at previous:(CGPoint)previous withEvent:(GSEventRef)event;	// 0x302cfac9
- (BOOL)continueTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x302cfef1
- (id)createSliderKnobView;	// 0x302cd791
- (void)dealloc;	// 0x302cde89
- (void)drawRect:(CGRect)rect;	// 0x302cf1d9
- (void)drawSliderInRect:(CGRect)rect;	// 0x302ce649
- (void)drawSliderInRect:(CGRect)rect dirtyRect:(CGRect)rect2;	// 0x302ce3bd
- (void)drawSliderPiece:(int)piece inRect:(CGRect)rect;	// 0x302cdff5
- (void)endTrackingAt:(CGPoint)at previous:(CGPoint)previous withEvent:(GSEventRef)event;	// 0x302cfb31
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x302d00c1
- (CGRect)fillBounds;	// 0x302cd8e9
- (id)imageForSliderPiece:(int)sliderPiece;	// 0x302cdf89
- (BOOL)isAnimatingValueChange;	// 0x302cead5
- (CGRect)maxValueImageBounds;	// 0x302cef51
- (CGRect)minValueImageBounds;	// 0x302cee91
- (void)refreshImages;	// 0x302cda81
- (void)setAllowsTickMarkValuesOnly:(BOOL)only;	// 0x302cf4f1
- (void)setContinuous:(BOOL)continuous;	// 0x302d0331
- (void)setEnabled:(BOOL)enabled;	// 0x302cf699
- (void)setHighlighted:(BOOL)highlighted;	// 0x302cf931
- (void)setMaxValue:(float)value;	// 0x302cf171
- (void)setMaxValueImage:(id)image;	// 0x302cf60d
- (void)setMinValue:(float)value;	// 0x302cf109
- (void)setMinValueImage:(id)image;	// 0x302cf581
- (void)setNumberOfTickMarks:(int)tickMarks;	// 0x302cf4e1
- (void)setSendActionDuringAnimation:(BOOL)animation;	// 0x302d0349
- (void)setShowValue:(BOOL)value;	// 0x302cf509
// converted property setter: - (void)setValue:(float)value;	// 0x302ce721
- (void)setValue:(float)value animated:(BOOL)animated;	// 0x302ced39
- (void)setValue:(float)value animated:(BOOL)animated animationCurve:(int)curve;	// 0x302ceae9
- (CGRect)sliderBounds;	// 0x302ced6d
- (void)sliderBoundsChanged;	// 0x302cda3d
// converted property getter: - (float)value;	// 0x302ced5d
- (CGRect)valueTextBounds;	// 0x302cf065
@end

