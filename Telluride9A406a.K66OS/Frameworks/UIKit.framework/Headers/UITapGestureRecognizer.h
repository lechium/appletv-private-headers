/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIGestureRecognizer.h"

@class NSArray;

@interface UITapGestureRecognizer : UIGestureRecognizer {
@private
	CGPoint _locationInView;	// 56 = 0x38
	id _imp;	// 64 = 0x40
	unsigned _delaysRecognitionForGreaterTapCounts;	// 68 = 0x44
}
@property(assign) float allowableMovement;	// G=0x35938f25; S=0x356bfe91; converted property
@property(readonly, assign, nonatomic) CGPoint centroid;	// G=0x357f7a1d; 
@property(readonly, assign, nonatomic) CGPoint location;	// G=0x35776cad; 
@property(assign) double maximumIntervalBetweenSuccessiveTaps;	// G=0x357eae81; S=0x356bfe5d; converted property
@property(assign) double maximumSingleTapDuration;	// G=0x35938f45; S=0x356bfe29; converted property
@property(assign, nonatomic) unsigned numberOfTapsRequired;	// G=0x35775ddd; S=0x356bfec1; 
@property(assign, nonatomic) unsigned numberOfTouchesRequired;	// G=0x35775c09; S=0x356bfef1; 
@property(readonly, assign, nonatomic) NSArray *touches;	// G=0x35938f05; 
- (id)initWithCoder:(id)coder;	// 0x35938e5d
- (id)initWithTarget:(id)target action:(SEL)action;	// 0x356bfc81
- (void)_appendSubclassDescription:(id)description;	// 0x35938f85
- (BOOL)_delaysRecognitionForGreaterTapCounts;	// 0x35938f65
- (void)_resetGestureRecognizer;	// 0x3577be69
- (void)_setDelaysRecognitionForGreaterTapCounts:(BOOL)greaterTapCounts;	// 0x35938f75
- (BOOL)_shouldRequireFailureOfGestureRecognizer:(id)gestureRecognizer;	// 0x357743b1
// converted property getter: - (float)allowableMovement;	// 0x35938f25
- (BOOL)canPreventGestureRecognizer:(id)recognizer;	// 0x35775ab9
// declared property getter: - (CGPoint)centroid;	// 0x357f7a1d
- (void)dealloc;	// 0x3569e3e1
- (void)encodeWithCoder:(id)coder;	// 0x35938e01
// declared property getter: - (CGPoint)location;	// 0x35776cad
- (CGPoint)locationInView:(id)view;	// 0x357750a1
- (CGPoint)locationOfTouch:(unsigned)touch inView:(id)view;	// 0x35939061
// converted property getter: - (double)maximumIntervalBetweenSuccessiveTaps;	// 0x357eae81
// converted property getter: - (double)maximumSingleTapDuration;	// 0x35938f45
// declared property getter: - (unsigned)numberOfTapsRequired;	// 0x35775ddd
- (unsigned)numberOfTouches;	// 0x35939029
// declared property getter: - (unsigned)numberOfTouchesRequired;	// 0x35775c09
// converted property setter: - (void)setAllowableMovement:(float)movement;	// 0x356bfe91
// converted property setter: - (void)setMaximumIntervalBetweenSuccessiveTaps:(double)taps;	// 0x356bfe5d
// converted property setter: - (void)setMaximumSingleTapDuration:(double)duration;	// 0x356bfe29
// declared property setter: - (void)setNumberOfTapsRequired:(unsigned)tapsRequired;	// 0x356bfec1
// declared property setter: - (void)setNumberOfTouchesRequired:(unsigned)touchesRequired;	// 0x356bfef1
- (BOOL)tapIsPossibleForTapRecognizer:(id)tapRecognizer;	// 0x35772731
- (void)tapRecognizerFailedToRecognizeTap:(id)recognizeTap;	// 0x35775181
- (void)tapRecognizerRecognizedTap:(id)tap;	// 0x35774cb1
// declared property getter: - (id)touches;	// 0x35938f05
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x357723e1
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x35938ee5
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x35774b61
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x357a5bd9
@end

