/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "UIGestureRecognizerDelegate.h"
#import <UIView.h> // Unknown library

@class MPSwipeGestureRecognizer, MPTapGestureRecognizer, UIPinchGestureRecognizer, MPActivityGestureRecognizer;
@protocol MPSwipableViewDelegate;

@interface MPSwipableView : UIView <UIGestureRecognizerDelegate> {
	int _enabledGestureTypes;	// 48 = 0x30
	int _simultaneousGestureTypes;	// 52 = 0x34
	id<MPSwipableViewDelegate> _swipeDelegate;	// 56 = 0x38
	MPTapGestureRecognizer *_tapGestureRecognizer;	// 60 = 0x3c
	MPSwipeGestureRecognizer *_swipeGestureRecognizer;	// 64 = 0x40
	MPActivityGestureRecognizer *_activityGestureRecognizer;	// 68 = 0x44
	UIPinchGestureRecognizer *_pinchGestureRecognizer;	// 72 = 0x48
}
@property(assign, nonatomic) int enabledGestureTypes;	// G=0x31a02169; S=0x31a01d41; @synthesize=_enabledGestureTypes
@property(assign, nonatomic) int simultaneousGestureTypes;	// G=0x31a02179; S=0x31a02189; @synthesize=_simultaneousGestureTypes
@property(assign, nonatomic) id<MPSwipableViewDelegate> swipeDelegate;	// G=0x31a02149; S=0x31a02159; @synthesize=_swipeDelegate
- (id)initWithFrame:(CGRect)frame;	// 0x31a017f5
- (void)_activityGestureRecognized:(id)recognized;	// 0x31a01c4d
- (void)_pinchGestureRecognized:(id)recognized;	// 0x31a01c95
- (void)_swipeGestureRecognized:(id)recognized;	// 0x31a01af1
- (void)_tapGestureRecognized:(id)recognized;	// 0x31a01b71
- (void)_updateGestureRecognizersForEnabledTypes;	// 0x31a01de1
- (void)addGestureRecognizer:(id)recognizer;	// 0x31a01a6d
- (void)dealloc;	// 0x31a01861
// declared property getter: - (int)enabledGestureTypes;	// 0x31a02169
- (BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)gestureRecognizer;	// 0x31a01d6d
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x31a019dd
- (void)removeGestureRecognizer:(id)recognizer;	// 0x31a01ab5
// declared property setter: - (void)setEnabledGestureTypes:(int)types;	// 0x31a01d41
// declared property setter: - (void)setSimultaneousGestureTypes:(int)types;	// 0x31a02189
// declared property setter: - (void)setSwipeDelegate:(id)delegate;	// 0x31a02159
// declared property getter: - (int)simultaneousGestureTypes;	// 0x31a02179
// declared property getter: - (id)swipeDelegate;	// 0x31a02149
@end

