/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"
#import "UIKit-Structs.h"

@class NSMutableArray, NSMutableSet, NSArray;
@protocol UITapRecognizerDelegate;

__attribute__((visibility("hidden")))
@interface UITapRecognizer : NSObject <NSCoding> {
@private
	unsigned _numberOfTouchesRequired;	// 4 = 0x4
	unsigned _numberOfTapsRequired;	// 8 = 0x8
	NSMutableSet *_activeTouches;	// 12 = 0xc
	int _currentNumberOfTouches;	// 16 = 0x10
	int _currentNumberOfTaps;	// 20 = 0x14
	CGPoint _location;	// 24 = 0x18
	CGPoint _startPoint;	// 32 = 0x20
	float _allowableMovement;	// 40 = 0x28
	double _maximumSingleTapDuration;	// 44 = 0x2c
	double _maximumIntervalBetweenSuccessiveTaps;	// 52 = 0x34
	NSMutableArray *_touches;	// 60 = 0x3c
	id _delegate;	// 64 = 0x40
	unsigned _timerOn : 1;	// 68 = 0x44
	unsigned _noNewTouches : 1;	// 68 = 0x44
}
@property(assign, nonatomic) float allowableMovement;	// G=0x32f3adb9; S=0x32cc1eb1; 
@property(assign, nonatomic) id<UITapRecognizerDelegate> delegate;	// G=0x32f3adf1; S=0x32ca0445; @synthesize=_delegate
@property(assign, nonatomic) double maximumIntervalBetweenSuccessiveTaps;	// G=0x32decea1; S=0x32cc1e7d; 
@property(assign, nonatomic) double maximumSingleTapDuration;	// G=0x32f3adc9; S=0x32cc1e49; 
@property(assign, nonatomic) unsigned numberOfTapsRequired;	// G=0x32d77dfd; S=0x32cc1ee1; @synthesize=_numberOfTapsRequired
@property(assign, nonatomic) unsigned numberOfTouchesRequired;	// G=0x32d77c29; S=0x32cc1f11; @synthesize=_numberOfTouchesRequired
@property(readonly, assign, nonatomic) NSArray *touches;	// G=0x32f3ade1; @synthesize=_touches
- (id)init;	// 0x32cc1d05
- (id)initWithCoder:(id)coder;	// 0x32f3aa89
- (CGPoint)_locationOnScreen;	// 0x32d747ad
- (void)_reset;	// 0x32d7deb5
// declared property getter: - (float)allowableMovement;	// 0x32f3adb9
- (void)clearTapTimer;	// 0x32ca04c9
- (void)dealloc;	// 0x32ca0455
// declared property getter: - (id)delegate;	// 0x32f3adf1
- (void)encodeWithCoder:(id)coder;	// 0x32f3ac35
- (CGPoint)locationInView:(id)view;	// 0x32d76d15
// declared property getter: - (double)maximumIntervalBetweenSuccessiveTaps;	// 0x32decea1
// declared property getter: - (double)maximumSingleTapDuration;	// 0x32f3adc9
// declared property getter: - (unsigned)numberOfTapsRequired;	// 0x32d77dfd
// declared property getter: - (unsigned)numberOfTouchesRequired;	// 0x32d77c29
// declared property setter: - (void)setAllowableMovement:(float)movement;	// 0x32cc1eb1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x32ca0445
// declared property setter: - (void)setMaximumIntervalBetweenSuccessiveTaps:(double)taps;	// 0x32cc1e7d
// declared property setter: - (void)setMaximumSingleTapDuration:(double)duration;	// 0x32cc1e49
// declared property setter: - (void)setNumberOfTapsRequired:(unsigned)tapsRequired;	// 0x32cc1ee1
// declared property setter: - (void)setNumberOfTouchesRequired:(unsigned)touchesRequired;	// 0x32cc1f11
- (void)startTapTimer:(double)timer;	// 0x32d74751
- (void)tooSlow:(id)slow;	// 0x32d7e5ed
// declared property getter: - (id)touches;	// 0x32f3ade1
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x32d74401
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x32f3ad71
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x32d76b81
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x32da7bf9
@end
