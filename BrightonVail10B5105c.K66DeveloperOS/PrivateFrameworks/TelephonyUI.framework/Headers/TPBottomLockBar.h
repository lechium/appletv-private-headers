/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import "TelephonyUI-Structs.h"
#import "TPBottomBar.h"

@class TPWell, NSArray, TPLockTextView, TPLockKnobView, UIImageView, NSTimer;

@interface TPBottomLockBar : TPBottomBar {
	NSArray *_labels;	// 100 = 0x64
	int _currentLabelIndex;	// 104 = 0x68
	NSTimer *_cycleLabelTimer;	// 108 = 0x6c
	id _delegate;	// 112 = 0x70
	id _representedObject;	// 116 = 0x74
	TPLockKnobView *_knobView;	// 120 = 0x78
	UIView *_trackArrow;	// 124 = 0x7c
	TPLockTextView *_labelView;	// 128 = 0x80
	TPWell *_well;	// 132 = 0x84
	float _knobTrackInsetLeft;	// 136 = 0x88
	float _fontSize;	// 140 = 0x8c
	float _deltaFromDefaultLabelWidth;	// 144 = 0x90
	UIImageView *_backgroundView;	// 148 = 0x94
}
@property(readonly, assign) int currentLabelIndex;	// G=0x36614199; converted property
@property(assign) float fontSize;	// G=0x36614455; S=0x36614445; converted property
@property(readonly, assign) float knobTrackInsetLeft;	// G=0x36614b11; converted property
@property(readonly, retain) TPLockTextView *labelView;	// G=0x36614d31; converted property
@property(retain) NSArray *labels;	// G=0x36614435; S=0x3661438d; converted property
@property(retain) id representedObject;	// G=0x36614ac5; S=0x36614a81; converted property
@property(readonly, retain) TPWell *well;	// G=0x36614b61; converted property
+ (float)defaultLabelFontSize;	// 0x3661324d
+ (CGSize)defaultSize;	// 0x366131d5
- (id)initForIncomingCallWithFrame:(CGRect)frame;	// 0x36613835
- (id)initWithFrame:(CGRect)frame knobColor:(int)color;	// 0x366136ed
- (id)initWithFrame:(CGRect)frame knobImage:(id)image;	// 0x366132f9
- (void)_adjustKnobOrigin;	// 0x36613c1d
- (void)_adjustLabelOrigin;	// 0x36613c71
- (float)_calcKnobYOffset;	// 0x36613b71
- (BOOL)_canDrawContent;	// 0x36614d41
- (id)_knobImageForColor:(int)color;	// 0x366136a5
- (void)_setLabel:(id)label;	// 0x36613e09
- (BOOL)_shouldStopLabelAnimationForGrab;	// 0x366132f5
- (BOOL)allowsTouchTrackingBeyondVerticalThreshold;	// 0x366132ed
// converted property getter: - (int)currentLabelIndex;	// 0x36614199
- (void)cycleToLabelAtIndex:(int)index;	// 0x366142c1
- (void)cycleToNextLabel;	// 0x36614141
- (void)dealloc;	// 0x36613861
- (float)defaultWellWidth;	// 0x36613299
- (void)downInKnob;	// 0x36613a29
- (void)drawRect:(CGRect)rect;	// 0x36613295
- (void)finishedCyclingLabelOut;	// 0x366141a9
// converted property getter: - (float)fontSize;	// 0x36614455
- (void)freezeKnobInUnlockedPosition;	// 0x36614945
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x36614d7d
- (BOOL)isAnimating;	// 0x36613a05
- (id)knob;	// 0x36613959
- (void)knobDragged:(float)dragged;	// 0x36614469
// converted property getter: - (float)knobTrackInsetLeft;	// 0x36614b11
- (float)knobTrackInsetRight;	// 0x36614b19
// converted property getter: - (id)labelView;	// 0x36614d31
// converted property getter: - (id)labels;	// 0x36614435
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x36614ad5
- (void)relock;	// 0x366148a9
// converted property getter: - (id)representedObject;	// 0x36614ac5
- (void)setDelegate:(id)delegate;	// 0x36614a71
// converted property setter: - (void)setFontSize:(float)size;	// 0x36614445
- (void)setKnobColor:(int)color;	// 0x36613731
- (void)setKnobImage:(id)image;	// 0x36613761
- (void)setKnobWellWidth:(float)width;	// 0x36614b71
- (void)setKnobWellWidthToDefault;	// 0x36614c65
- (void)setLabel:(id)label;	// 0x36613b3d
// converted property setter: - (void)setLabels:(id)labels;	// 0x3661438d
// converted property setter: - (void)setRepresentedObject:(id)object;	// 0x36614a81
- (void)setSuppressDrawingBackground:(BOOL)background;	// 0x36614f05
- (void)setTextAlpha:(float)alpha;	// 0x36614f6d
- (void)setWellAlpha:(float)alpha;	// 0x36614f8d
- (void)slideBack:(BOOL)back;	// 0x366145c1
- (void)startAnimating;	// 0x36613969
- (void)startCyclingLabels;	// 0x36614061
- (void)stopAnimating;	// 0x366139c9
- (void)stopCyclingLabels;	// 0x36614105
- (void)unlock;	// 0x36614a29
- (void)upInKnob;	// 0x36613abd
- (BOOL)usesBackgroundImage;	// 0x366132f1
// converted property getter: - (id)well;	// 0x36614b61
- (id)wellImageName;	// 0x366132e1
@end
