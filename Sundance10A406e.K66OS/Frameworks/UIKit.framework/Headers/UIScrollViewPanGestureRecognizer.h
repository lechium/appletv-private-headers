/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIPanGestureRecognizer.h"

@class UIScrollView;

__attribute__((visibility("hidden")))
@interface UIScrollViewPanGestureRecognizer : UIPanGestureRecognizer {
	UIScrollView *_scrollView;	// 124 = 0x7c
	SEL _scrollViewAction;	// 128 = 0x80
	CGPoint _reconsideredLockingLocation;	// 132 = 0x84
	unsigned _lastLockingAxis : 2;	// 140 = 0x8c
	unsigned _lockingAxis : 2;	// 140 = 0x8c
	unsigned _hasChildScrollView : 1;	// 140 = 0x8c
	unsigned _hasParentScrollView : 1;	// 140 = 0x8c
	unsigned _caughtDeceleratingScrollView : 1;	// 140 = 0x8c
	unsigned _directionalLockEnabled : 1;	// 140 = 0x8c
	unsigned _waitingForParentScrollView : 1;	// 141 = 0x8d
}
@property(readonly, assign, nonatomic, getter=_caughtDeceleratingScrollView) BOOL caughtDeceleratingScrollView;	// G=0x309e9301; 
@property(assign, nonatomic, getter=isDirectionalLockEnabled) BOOL directionalLockEnabled;	// G=0x30bd428d; S=0x30917211; 
@property(assign, nonatomic) UIScrollView *scrollView;	// G=0x309171dd; S=0x30917135; @synthesize=_scrollView
- (id)initWithTarget:(id)target action:(SEL)action;	// 0x30916f21
- (CGPoint)_adjustScreenLocation:(CGPoint)location;	// 0x309e6cc9
// declared property getter: - (BOOL)_caughtDeceleratingScrollView;	// 0x309e9301
- (void)_centroidMovedTo:(CGPoint)to atTime:(double)time;	// 0x309e6779
- (float)_hysteresis;	// 0x309e7ab5
- (void)_resetGestureRecognizer;	// 0x309cfa49
- (void)_scrollViewDidEndZooming;	// 0x30a3f4e5
- (BOOL)_shouldTryToBeginWithEvent:(id)event;	// 0x309e6e41
- (BOOL)canBePreventedByGestureRecognizer:(id)recognizer;	// 0x309c9b8d
// declared property getter: - (BOOL)isDirectionalLockEnabled;	// 0x30bd428d
- (void)removeTarget:(id)target action:(SEL)action;	// 0x309f3231
// declared property getter: - (id)scrollView;	// 0x309171dd
- (void)setDelegate:(id)delegate;	// 0x30917145
// declared property setter: - (void)setDirectionalLockEnabled:(BOOL)enabled;	// 0x30917211
// declared property setter: - (void)setScrollView:(id)view;	// 0x30917135
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x309c6851
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x30a55ad9
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x309e6461
- (CGPoint)translationInView:(id)view;	// 0x309e7891
- (CGPoint)velocityInView:(id)view;	// 0x30983329
@end
