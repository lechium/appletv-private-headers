/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIGestureRecognizer.h"
#import "UIKit-Structs.h"

@class NSMutableArray;

@interface UISwipeGestureRecognizer : UIGestureRecognizer {
@private
	double _maximumDuration;	// 56 = 0x38
	float _minimumPrimaryMovement;	// 64 = 0x40
	float _maximumPrimaryMovement;	// 68 = 0x44
	float _minimumSecondaryMovement;	// 72 = 0x48
	float _maximumSecondaryMovement;	// 76 = 0x4c
	float _rateOfMinimumMovementDecay;	// 80 = 0x50
	float _rateOfMaximumMovementDecay;	// 84 = 0x54
	unsigned _numberOfTouchesRequired;	// 88 = 0x58
	NSMutableArray *_touches;	// 92 = 0x5c
	unsigned _direction;	// 96 = 0x60
	CGPoint _startLocation;	// 100 = 0x64
	CGPoint *_startLocations;	// 108 = 0x6c
	double _startTime;	// 112 = 0x70
	unsigned _failed : 1;	// 120 = 0x78
}
@property(assign, nonatomic) unsigned direction;	// G=0x303538b5; S=0x300d0e05; @synthesize=_direction
@property(assign, nonatomic) double maximumDuration;	// G=0x303537c9; S=0x300d0e19; @synthesize=_maximumDuration
@property(assign, nonatomic) float maximumPrimaryMovement;	// G=0x30353805; S=0x30353815; @synthesize=_maximumPrimaryMovement
@property(assign, nonatomic) float maximumSecondaryMovement;	// G=0x30353845; S=0x30353855; @synthesize=_maximumSecondaryMovement
@property(assign, nonatomic) float minimumPrimaryMovement;	// G=0x303537e5; S=0x303537f5; @synthesize=_minimumPrimaryMovement
@property(assign, nonatomic) float minimumSecondaryMovement;	// G=0x30353825; S=0x30353835; @synthesize=_minimumSecondaryMovement
@property(assign, nonatomic) unsigned numberOfTouchesRequired;	// G=0x303538a5; S=0x300d0dc1; @synthesize=_numberOfTouchesRequired
@property(assign, nonatomic) float rateOfMaximumMovementDecay;	// G=0x30353885; S=0x30353895; @synthesize=_rateOfMaximumMovementDecay
@property(assign, nonatomic) float rateOfMinimumMovementDecay;	// G=0x30353865; S=0x30353875; @synthesize=_rateOfMinimumMovementDecay
@property(readonly, assign, nonatomic) CGPoint startPoint;	// G=0x301fdb8d; 
- (id)initWithCoder:(id)coder;	// 0x303533e5
- (id)initWithTarget:(id)target action:(SEL)action;	// 0x300d0c89
- (void)_appendSubclassDescription:(id)description;	// 0x30353689
- (BOOL)_checkForSwipeWithDelta:(CGPoint)delta time:(double)time;	// 0x3019e7b9
- (void)_resetGestureRecognizer;	// 0x3019fb39
- (void)dealloc;	// 0x300b2e19
// declared property getter: - (unsigned)direction;	// 0x303538b5
- (void)encodeWithCoder:(id)coder;	// 0x303534b5
- (CGPoint)locationInView:(id)view;	// 0x30353541
- (CGPoint)locationOfTouch:(unsigned)touch inView:(id)view;	// 0x303535f1
// declared property getter: - (double)maximumDuration;	// 0x303537c9
// declared property getter: - (float)maximumPrimaryMovement;	// 0x30353805
// declared property getter: - (float)maximumSecondaryMovement;	// 0x30353845
// declared property getter: - (float)minimumPrimaryMovement;	// 0x303537e5
// declared property getter: - (float)minimumSecondaryMovement;	// 0x30353825
- (unsigned)numberOfTouches;	// 0x303535d1
// declared property getter: - (unsigned)numberOfTouchesRequired;	// 0x303538a5
// declared property getter: - (float)rateOfMaximumMovementDecay;	// 0x30353885
// declared property getter: - (float)rateOfMinimumMovementDecay;	// 0x30353865
// declared property setter: - (void)setDirection:(unsigned)direction;	// 0x300d0e05
// declared property setter: - (void)setMaximumDuration:(double)duration;	// 0x300d0e19
// declared property setter: - (void)setMaximumPrimaryMovement:(float)movement;	// 0x30353815
// declared property setter: - (void)setMaximumSecondaryMovement:(float)movement;	// 0x30353855
// declared property setter: - (void)setMinimumPrimaryMovement:(float)movement;	// 0x303537f5
// declared property setter: - (void)setMinimumSecondaryMovement:(float)movement;	// 0x30353835
// declared property setter: - (void)setNumberOfTouchesRequired:(unsigned)touchesRequired;	// 0x300d0dc1
// declared property setter: - (void)setRateOfMaximumMovementDecay:(float)maximumMovementDecay;	// 0x30353895
// declared property setter: - (void)setRateOfMinimumMovementDecay:(float)minimumMovementDecay;	// 0x30353875
// declared property getter: - (CGPoint)startPoint;	// 0x301fdb8d
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x3019bfe5
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x301d6d35
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x301a22a9
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x3019e435
@end

