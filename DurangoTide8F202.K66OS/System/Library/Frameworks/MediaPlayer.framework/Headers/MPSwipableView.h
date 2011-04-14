/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "UIGestureRecognizerDelegate.h"
#import <UIView.h> // Unknown library

@class MPActivityGestureRecognizer, MPTapGestureRecognizer, UIPinchGestureRecognizer, MPSwipeGestureRecognizer;
@protocol MPSwipableViewDelegate;

@interface MPSwipableView : UIView <UIGestureRecognizerDelegate> {
	int _enabledGestureTypes;	// 44 = 0x2c
	int _simultaneousGestureTypes;	// 48 = 0x30
	id<MPSwipableViewDelegate> _swipeDelegate;	// 52 = 0x34
	MPTapGestureRecognizer *_tapGestureRecognizer;	// 56 = 0x38
	MPSwipeGestureRecognizer *_swipeGestureRecognizer;	// 60 = 0x3c
	MPActivityGestureRecognizer *_activityGestureRecognizer;	// 64 = 0x40
	UIPinchGestureRecognizer *_pinchGestureRecognizer;	// 68 = 0x44
}
@property(assign, nonatomic) int enabledGestureTypes;	// G=0x31dac6cd; S=0x31dacd35; @synthesize=_enabledGestureTypes
@property(assign, nonatomic) int simultaneousGestureTypes;	// G=0x31dac6ad; S=0x31dac6bd; @synthesize=_simultaneousGestureTypes
@property(assign, nonatomic) id<MPSwipableViewDelegate> swipeDelegate;	// G=0x31dac6dd; S=0x31dac6ed; @synthesize=_swipeDelegate
- (id)initWithFrame:(CGRect)frame;	// 0x31dacf71
- (void)_activityGestureRecognized:(id)recognized;	// 0x31dacded
- (void)_pinchGestureRecognized:(id)recognized;	// 0x31dacd5d
- (void)_swipeGestureRecognized:(id)recognized;	// 0x31dace2d
- (void)_tapGestureRecognized:(id)recognized;	// 0x31dad6d9
- (void)_updateGestureRecognizersForEnabledTypes;	// 0x31dad031
- (void)addGestureRecognizer:(id)recognizer;	// 0x31dacea1
- (void)dealloc;	// 0x31dad3c9
// declared property getter: - (int)enabledGestureTypes;	// 0x31dac6cd
- (BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)gestureRecognizer;	// 0x31daccc9
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x31dacee5
- (void)removeGestureRecognizer:(id)recognizer;	// 0x31dad391
// declared property setter: - (void)setEnabledGestureTypes:(int)types;	// 0x31dacd35
// declared property setter: - (void)setSimultaneousGestureTypes:(int)types;	// 0x31dac6bd
// declared property setter: - (void)setSwipeDelegate:(id)delegate;	// 0x31dac6ed
// declared property getter: - (int)simultaneousGestureTypes;	// 0x31dac6ad
// declared property getter: - (id)swipeDelegate;	// 0x31dac6dd
@end

