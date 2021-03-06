/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIGestureRecognizer.h"

@class NSMutableSet, NSArray;

@interface UILongPressGestureRecognizer : UIGestureRecognizer {
	NSArray *_touches;	// 56 = 0x38
	NSMutableSet *_activeTouches;	// 60 = 0x3c
	unsigned _numberOfTouchesRequired;	// 64 = 0x40
	double _minimumPressDuration;	// 68 = 0x44
	float _allowableMovement;	// 76 = 0x4c
	CGPoint _startPointScreen;	// 80 = 0x50
	id _enoughTimeElapsed;	// 88 = 0x58
	id _tooMuchTimeElapsed;	// 92 = 0x5c
	id _imp;	// 96 = 0x60
	unsigned _gotTouchEnd : 1;	// 100 = 0x64
	unsigned _gotTooMany : 1;	// 100 = 0x64
	unsigned _gotEnoughTaps : 1;	// 100 = 0x64
	unsigned _cancelPastAllowableMovement : 1;	// 100 = 0x64
}
@property(assign, nonatomic) float allowableMovement;	// G=0x30eba3e1; S=0x30c56c41; @synthesize=_allowableMovement
@property(assign, nonatomic) BOOL cancelPastAllowableMovement;	// G=0x30eba129; S=0x30eba13d; 
@property(readonly, assign, nonatomic) CGPoint centroid;	// G=0x30cfe155; 
@property(assign, nonatomic) double delay;	// G=0x30cfe555; S=0x30c91169; @synthesize=_minimumPressDuration
@property(assign, nonatomic) double minimumPressDuration;	// G=0x30eba111; S=0x30c6a98d; 
@property(assign, nonatomic) unsigned numberOfTapsRequired;	// G=0x30d00cf5; S=0x30eba0c1; 
@property(assign, nonatomic) unsigned numberOfTouchesRequired;	// G=0x30d00ce5; S=0x30c56c09; @synthesize=_numberOfTouchesRequired
@property(readonly, assign, nonatomic) CGPoint startPoint;	// G=0x30d50941; 
@property(readonly, assign, nonatomic) NSArray *touches;	// G=0x30cfe2f1; @synthesize=_touches
- (id)initWithCoder:(id)coder;	// 0x30eb9e45
- (id)initWithTarget:(id)target action:(SEL)action;	// 0x30c56ad9
- (void)_resetGestureRecognizer;	// 0x30d0534d
- (void)_startTapFinishedTimer;	// 0x30eba169
// declared property getter: - (float)allowableMovement;	// 0x30eba3e1
- (BOOL)canPreventGestureRecognizer:(id)recognizer;	// 0x30d50201
// declared property getter: - (BOOL)cancelPastAllowableMovement;	// 0x30eba129
// declared property getter: - (CGPoint)centroid;	// 0x30cfe155
- (CGPoint)centroidScreen;	// 0x30cfe0ed
- (void)clearTimer;	// 0x30c35b75
- (void)dealloc;	// 0x30c35ad9
// declared property getter: - (double)delay;	// 0x30cfe555
- (void)encodeWithCoder:(id)coder;	// 0x30eb9fb5
- (void)enoughTimeElapsed:(id)elapsed;	// 0x30d4f645
- (void)invalidate;	// 0x30d8de49
- (CGPoint)locationInView:(id)view;	// 0x30d4f7a9
- (CGPoint)locationOfTouch:(unsigned)touch inView:(id)view;	// 0x30eba2b5
// declared property getter: - (double)minimumPressDuration;	// 0x30eba111
// declared property getter: - (unsigned)numberOfTapsRequired;	// 0x30d00cf5
- (unsigned)numberOfTouches;	// 0x30eba295
// declared property getter: - (unsigned)numberOfTouchesRequired;	// 0x30d00ce5
// declared property setter: - (void)setAllowableMovement:(float)movement;	// 0x30c56c41
// declared property setter: - (void)setCancelPastAllowableMovement:(BOOL)movement;	// 0x30eba13d
// declared property setter: - (void)setDelay:(double)delay;	// 0x30c91169
// declared property setter: - (void)setMinimumPressDuration:(double)duration;	// 0x30c6a98d
// declared property setter: - (void)setNumberOfTapsRequired:(unsigned)tapsRequired;	// 0x30eba0c1
// declared property setter: - (void)setNumberOfTouchesRequired:(unsigned)touchesRequired;	// 0x30c56c09
- (void)setTouches:(id)touches;	// 0x30c35bed
- (void)setView:(id)view;	// 0x30c56c51
// declared property getter: - (CGPoint)startPoint;	// 0x30d50941
- (void)startTimer;	// 0x30cfe4b9
- (BOOL)tapIsPossibleForTapRecognizer:(id)tapRecognizer;	// 0x30eba211
- (void)tapRecognizerFailedToRecognizeTap:(id)recognizeTap;	// 0x30eba281
- (void)tapRecognizerRecognizedTap:(id)tap;	// 0x30eba231
- (void)tooMuchElapsed:(id)elapsed;	// 0x30eba155
// declared property getter: - (id)touches;	// 0x30cfe2f1
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x30cfddd5
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x30d52c15
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x30d004ad
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x30d2e315
@end

