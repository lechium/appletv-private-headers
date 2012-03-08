/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIPinchGestureRecognizer.h"
#import "UIKit-Structs.h"

@class UIScrollView;

__attribute__((visibility("hidden")))
@interface UIScrollViewPinchGestureRecognizer : UIPinchGestureRecognizer {
@private
	UIScrollView *_scrollView;	// 136 = 0x88
	SEL _scrollViewAction;	// 140 = 0x8c
	unsigned _hasParentScrollView : 1;	// 144 = 0x90
}
@property(assign, nonatomic) UIScrollView *scrollView;	// G=0x32f64df5; S=0x32f64d51; @synthesize=_scrollView
- (id)initWithTarget:(id)target action:(SEL)action;	// 0x32f64b55
- (float)_hysteresis;	// 0x33037085
- (void)removeTarget:(id)target action:(SEL)action;	// 0x331cce99
// declared property getter: - (id)scrollView;	// 0x32f64df5
- (void)setDelegate:(id)delegate;	// 0x32f64d61
// declared property setter: - (void)setScrollView:(id)view;	// 0x32f64d51
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x3300e079
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x33036739
@end

