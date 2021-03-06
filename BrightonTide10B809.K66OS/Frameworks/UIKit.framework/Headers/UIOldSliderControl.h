/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIControl.h"
#import "UIKit-Structs.h"

@class UIImage;

@interface UIOldSliderControl : UIControl {
	UIImage *_sliderLeftFillCap;	// 108 = 0x6c
	XXUnion_a01swB _sliderLeftFill;	// 112 = 0x70
	XXUnion_a01swB _sliderRightFill;	// 116 = 0x74
	UIImage *_minValueImage;	// 120 = 0x78
	UIImage *_maxValueImage;	// 124 = 0x7c
	int _numberOfTickMarks;	// 128 = 0x80
	float _hitOffset;	// 132 = 0x84
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
@property(assign) float value;	// G=0x32d5e0f5; S=0x32d5dab9; converted property
- (id)init;	// 0x32d5c879
- (id)initWithFrame:(CGRect)frame;	// 0x32d5c8ad
- (id)initWithFrame:(CGRect)frame layeredFill:(BOOL)fill;	// 0x32d5c8d9
- (void)_controlMouseDown:(GSEventRef)down;	// 0x32d5f0f9
- (void)_controlMouseDragged:(GSEventRef)dragged;	// 0x32d5f101
- (void)_controlMouseUp:(GSEventRef)up;	// 0x32d5f0fd
- (void)_controlTouchBegan:(id)began withEvent:(id)event;	// 0x32d5f651
- (void)_controlTouchEnded:(id)ended withEvent:(id)event;	// 0x32d5f659
- (void)_controlTouchMoved:(id)moved withEvent:(id)event;	// 0x32d5f655
- (void)_resetFillFrames;	// 0x32d5cbc1
- (id)_scriptingInfo;	// 0x32d5f6f9
- (void)_sendDelayedActions;	// 0x32d5da55
- (void)_setValue:(float)value andSendAction:(BOOL)action;	// 0x32d5dacd
- (void)_sliderBounds:(CGRect)bounds getLeftCapRect:(CGRect *)rect rightCapRect:(CGRect *)rect3 left:(CGRect *)left right:(CGRect *)right;	// 0x32d5d49d
- (float)_validatedValue:(float)value;	// 0x32d5ead9
- (float)_validatedValueForPoint:(CGPoint)point includeTickMarks:(BOOL)marks;	// 0x32d5eb25
- (void)animator:(id)animator stopAnimation:(id)animation;	// 0x32d5da11
- (BOOL)beginTrackingAt:(CGPoint)at withEvent:(GSEventRef)event;	// 0x32d5ed39
- (BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x32d5f109
- (BOOL)cancelMouseTracking;	// 0x32d5f071
- (BOOL)cancelTouchTracking;	// 0x32d5f65d
- (BOOL)continueTrackingAt:(CGPoint)at previous:(CGPoint)previous withEvent:(GSEventRef)event;	// 0x32d5ee61
- (BOOL)continueTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x32d5f289
- (id)createSliderKnobView;	// 0x32d5cb29
- (void)dealloc;	// 0x32d5d221
- (void)drawRect:(CGRect)rect;	// 0x32d5e571
- (void)drawSliderInRect:(CGRect)rect;	// 0x32d5d9e1
- (void)drawSliderInRect:(CGRect)rect dirtyRect:(CGRect)rect2;	// 0x32d5d755
- (void)drawSliderPiece:(int)piece inRect:(CGRect)rect;	// 0x32d5d38d
- (void)endTrackingAt:(CGPoint)at previous:(CGPoint)previous withEvent:(GSEventRef)event;	// 0x32d5eec9
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x32d5f459
- (CGRect)fillBounds;	// 0x32d5cc81
- (id)imageForSliderPiece:(int)sliderPiece;	// 0x32d5d321
- (BOOL)isAnimatingValueChange;	// 0x32d5de6d
- (CGRect)maxValueImageBounds;	// 0x32d5e2e9
- (CGRect)minValueImageBounds;	// 0x32d5e229
- (void)refreshImages;	// 0x32d5ce19
- (void)setAllowsTickMarkValuesOnly:(BOOL)only;	// 0x32d5e889
- (void)setContinuous:(BOOL)continuous;	// 0x32d5f6c9
- (void)setEnabled:(BOOL)enabled;	// 0x32d5ea31
- (void)setHighlighted:(BOOL)highlighted;	// 0x32d5ecc9
- (void)setMaxValue:(float)value;	// 0x32d5e509
- (void)setMaxValueImage:(id)image;	// 0x32d5e9a5
- (void)setMinValue:(float)value;	// 0x32d5e4a1
- (void)setMinValueImage:(id)image;	// 0x32d5e919
- (void)setNumberOfTickMarks:(int)tickMarks;	// 0x32d5e879
- (void)setSendActionDuringAnimation:(BOOL)animation;	// 0x32d5f6e1
- (void)setShowValue:(BOOL)value;	// 0x32d5e8a1
// converted property setter: - (void)setValue:(float)value;	// 0x32d5dab9
- (void)setValue:(float)value animated:(BOOL)animated;	// 0x32d5e0d1
- (void)setValue:(float)value animated:(BOOL)animated animationCurve:(int)curve;	// 0x32d5de81
- (CGRect)sliderBounds;	// 0x32d5e105
- (void)sliderBoundsChanged;	// 0x32d5cdd5
// converted property getter: - (float)value;	// 0x32d5e0f5
- (CGRect)valueTextBounds;	// 0x32d5e3fd
@end

