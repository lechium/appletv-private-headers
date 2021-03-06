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
@property(readonly, assign) int currentLabelIndex;	// G=0x3697e199; converted property
@property(assign) float fontSize;	// G=0x3697e455; S=0x3697e445; converted property
@property(readonly, assign) float knobTrackInsetLeft;	// G=0x3697eb11; converted property
@property(readonly, retain) TPLockTextView *labelView;	// G=0x3697ed31; converted property
@property(retain) NSArray *labels;	// G=0x3697e435; S=0x3697e38d; converted property
@property(retain) id representedObject;	// G=0x3697eac5; S=0x3697ea81; converted property
@property(readonly, retain) TPWell *well;	// G=0x3697eb61; converted property
+ (float)defaultLabelFontSize;	// 0x3697d24d
+ (CGSize)defaultSize;	// 0x3697d1d5
- (id)initForIncomingCallWithFrame:(CGRect)frame;	// 0x3697d835
- (id)initWithFrame:(CGRect)frame knobColor:(int)color;	// 0x3697d6ed
- (id)initWithFrame:(CGRect)frame knobImage:(id)image;	// 0x3697d2f9
- (void)_adjustKnobOrigin;	// 0x3697dc1d
- (void)_adjustLabelOrigin;	// 0x3697dc71
- (float)_calcKnobYOffset;	// 0x3697db71
- (BOOL)_canDrawContent;	// 0x3697ed41
- (id)_knobImageForColor:(int)color;	// 0x3697d6a5
- (void)_setLabel:(id)label;	// 0x3697de09
- (BOOL)_shouldStopLabelAnimationForGrab;	// 0x3697d2f5
- (BOOL)allowsTouchTrackingBeyondVerticalThreshold;	// 0x3697d2ed
// converted property getter: - (int)currentLabelIndex;	// 0x3697e199
- (void)cycleToLabelAtIndex:(int)index;	// 0x3697e2c1
- (void)cycleToNextLabel;	// 0x3697e141
- (void)dealloc;	// 0x3697d861
- (float)defaultWellWidth;	// 0x3697d299
- (void)downInKnob;	// 0x3697da29
- (void)drawRect:(CGRect)rect;	// 0x3697d295
- (void)finishedCyclingLabelOut;	// 0x3697e1a9
// converted property getter: - (float)fontSize;	// 0x3697e455
- (void)freezeKnobInUnlockedPosition;	// 0x3697e945
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x3697ed7d
- (BOOL)isAnimating;	// 0x3697da05
- (id)knob;	// 0x3697d959
- (void)knobDragged:(float)dragged;	// 0x3697e469
// converted property getter: - (float)knobTrackInsetLeft;	// 0x3697eb11
- (float)knobTrackInsetRight;	// 0x3697eb19
// converted property getter: - (id)labelView;	// 0x3697ed31
// converted property getter: - (id)labels;	// 0x3697e435
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x3697ead5
- (void)relock;	// 0x3697e8a9
// converted property getter: - (id)representedObject;	// 0x3697eac5
- (void)setDelegate:(id)delegate;	// 0x3697ea71
// converted property setter: - (void)setFontSize:(float)size;	// 0x3697e445
- (void)setKnobColor:(int)color;	// 0x3697d731
- (void)setKnobImage:(id)image;	// 0x3697d761
- (void)setKnobWellWidth:(float)width;	// 0x3697eb71
- (void)setKnobWellWidthToDefault;	// 0x3697ec65
- (void)setLabel:(id)label;	// 0x3697db3d
// converted property setter: - (void)setLabels:(id)labels;	// 0x3697e38d
// converted property setter: - (void)setRepresentedObject:(id)object;	// 0x3697ea81
- (void)setSuppressDrawingBackground:(BOOL)background;	// 0x3697ef05
- (void)setTextAlpha:(float)alpha;	// 0x3697ef6d
- (void)setWellAlpha:(float)alpha;	// 0x3697ef8d
- (void)slideBack:(BOOL)back;	// 0x3697e5c1
- (void)startAnimating;	// 0x3697d969
- (void)startCyclingLabels;	// 0x3697e061
- (void)stopAnimating;	// 0x3697d9c9
- (void)stopCyclingLabels;	// 0x3697e105
- (void)unlock;	// 0x3697ea29
- (void)upInKnob;	// 0x3697dabd
- (BOOL)usesBackgroundImage;	// 0x3697d2f1
// converted property getter: - (id)well;	// 0x3697eb61
- (id)wellImageName;	// 0x3697d2e1
@end

