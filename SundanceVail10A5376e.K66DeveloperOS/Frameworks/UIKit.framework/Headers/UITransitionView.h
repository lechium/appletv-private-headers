/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UIView.h"

@class NSMutableArray, UIWindow;

@interface UITransitionView : UIView <NSCoding> {
	UIView *_fromView;	// 84 = 0x54
	UIView *_toView;	// 88 = 0x58
	NSMutableArray *_frozenSubviews;	// 92 = 0x5c
	UIResponder *_firstResponderToRemember;	// 96 = 0x60
	id _delegate;	// 100 = 0x64
	UIWindow *_originalWindow;	// 104 = 0x68
	struct {
		unsigned animationInProgress : 1;
		unsigned ignoresInteractionEvents : 1;
		unsigned shouldNotifyDidCompleteImmediately : 1;
		unsigned useViewControllerAppearanceCallbacks : 1;
		unsigned shouldRestoreFromViewAlpha : 1;
		unsigned shouldRasterize : 1;
		unsigned enableRotationAfterTransition : 1;
		unsigned removeFromView : 1;
	} _transitionViewFlags;	// 108 = 0x6c
	float _curlUpRevealedHeight;	// 112 = 0x70
}
@property(assign) id delegate;	// G=0x3032954d; S=0x302a86fd; converted property
@property(readonly, retain) UIView *fromView;	// G=0x30411fa1; converted property
@property(assign) BOOL ignoresInteractionEvents;	// G=0x30412051; S=0x3038c455; converted property
@property(assign) BOOL rasterizesOnTransition;	// G=0x3031cccd; S=0x3041202d; converted property
@property(assign, nonatomic) BOOL shouldNotifyDidCompleteImmediately;	// G=0x302adc69; S=0x302a870d; 
@property(readonly, retain) UIView *toView;	// G=0x30411fb1; converted property
+ (double)defaultDurationForTransition:(int)transition;	// 0x3028b389
- (id)initWithCoder:(id)coder;	// 0x30411d61
- (id)initWithFrame:(CGRect)frame;	// 0x302a8669
- (float)_curlUpRevealedHeight;	// 0x30329529
- (void)_didCompleteTransition:(BOOL)transition;	// 0x302ad7ed
- (void)_didStartTransition;	// 0x302ad691
- (BOOL)_isTransitioningFromFromView:(id)view;	// 0x30411fc5
- (void)_startTransition:(int)transition withDuration:(float)duration;	// 0x3031cce5
- (void)_transitionDidStop:(id)_transition finished:(id)finished;	// 0x30328e25
- (void)dealloc;	// 0x30329cbd
// converted property getter: - (id)delegate;	// 0x3032954d
- (double)durationForTransition:(int)transition;	// 0x302ad521
- (void)encodeWithCoder:(id)coder;	// 0x30411e8d
// converted property getter: - (id)fromView;	// 0x30411fa1
// converted property getter: - (BOOL)ignoresInteractionEvents;	// 0x30412051
- (BOOL)isTransitioning;	// 0x3035e729
- (void)notifyDidCompleteTransition:(id)notify;	// 0x302adc7d
// converted property getter: - (BOOL)rasterizesOnTransition;	// 0x3031cccd
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x302a86fd
// converted property setter: - (void)setIgnoresInteractionEvents:(BOOL)events;	// 0x3038c455
// converted property setter: - (void)setRasterizesOnTransition:(BOOL)transition;	// 0x3041202d
// declared property setter: - (void)setShouldNotifyDidCompleteImmediately:(BOOL)notifyDidCompleteImmediately;	// 0x302a870d
// declared property getter: - (BOOL)shouldNotifyDidCompleteImmediately;	// 0x302adc69
// converted property getter: - (id)toView;	// 0x30411fb1
- (BOOL)transition:(int)transition fromView:(id)view toView:(id)view3;	// 0x302acbe9
- (BOOL)transition:(int)transition fromView:(id)view toView:(id)view3 removeFromView:(BOOL)view4;	// 0x302acc0d
- (BOOL)transition:(int)transition toView:(id)view;	// 0x302acb75
@end
