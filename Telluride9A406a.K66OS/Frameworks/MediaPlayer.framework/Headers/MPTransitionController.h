/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <NSObject.h> // Unknown library

@class UIViewController, UIView, NSMutableSet, MPViewController;

@interface MPTransitionController : NSObject {
	CFDictionaryRef _observers;	// 4 = 0x4
	float _duration;	// 8 = 0x8
	UIView *_rootView;	// 12 = 0xc
	NSMutableSet *_persistentViewsToFadeOut;	// 16 = 0x10
	NSMutableSet *_viewsToFadeOut;	// 20 = 0x14
	NSMutableSet *_persistentViewsToFadeIn;	// 24 = 0x18
	NSMutableSet *_viewsToFadeIn;	// 28 = 0x1c
	MPViewController *_fromViewController;	// 32 = 0x20
	int _fromInterfaceOrientation;	// 36 = 0x24
	MPViewController *_toViewController;	// 40 = 0x28
	int _toInterfaceOrientation;	// 44 = 0x2c
@private
	UIViewController *_toContainerViewController;	// 48 = 0x30
}
@property(assign, nonatomic) float duration;	// G=0x319d7ea5; S=0x319d7eb5; @synthesize=_duration
@property(assign, nonatomic) int fromInterfaceOrientation;	// G=0x319d7ec5; S=0x319d7ed5; @synthesize=_fromInterfaceOrientation
@property(retain, nonatomic) MPViewController *fromViewController;	// G=0x319d7ee5; S=0x319d7ef5; @synthesize=_fromViewController
@property(retain, nonatomic) UIView *rootView;	// G=0x319d7f19; S=0x319d7f29; @synthesize=_rootView
@property(retain, nonatomic) UIViewController *toContainerViewController;	// G=0x319d7fa1; S=0x319d7fb1; @synthesize=_toContainerViewController
@property(assign, nonatomic) int toInterfaceOrientation;	// G=0x319d7f4d; S=0x319d7f5d; @synthesize=_toInterfaceOrientation
@property(retain, nonatomic) MPViewController *toViewController;	// G=0x319d7f6d; S=0x319d7f7d; @synthesize=_toViewController
- (id)init;	// 0x319d7139
- (void)addObserver:(id)observer didEndSelector:(SEL)selector;	// 0x319d72c9
- (void)addViewToFadeIn:(id)anIn restoreOnPop:(BOOL)pop;	// 0x319d7339
- (void)addViewToFadeOut:(id)fadeOut restoreOnPop:(BOOL)pop;	// 0x319d73f5
- (void)dealloc;	// 0x319d71b1
- (void)didFinishTransition:(BOOL)transition;	// 0x319d784d
// declared property getter: - (float)duration;	// 0x319d7ea5
- (void)fadeViewsForRestore:(BOOL)restore;	// 0x319d74b1
// declared property getter: - (int)fromInterfaceOrientation;	// 0x319d7ec5
// declared property getter: - (id)fromViewController;	// 0x319d7ee5
- (void)messageObserversWithSuccess:(BOOL)success;	// 0x319d7d79
- (void)performTransition:(unsigned)transition;	// 0x319d7839
- (void)removeObserver:(id)observer;	// 0x319d7735
// declared property getter: - (id)rootView;	// 0x319d7f19
// declared property setter: - (void)setDuration:(float)duration;	// 0x319d7eb5
// declared property setter: - (void)setFromInterfaceOrientation:(int)interfaceOrientation;	// 0x319d7ed5
// declared property setter: - (void)setFromViewController:(id)viewController;	// 0x319d7ef5
// declared property setter: - (void)setRootView:(id)view;	// 0x319d7f29
// declared property setter: - (void)setToContainerViewController:(id)containerViewController;	// 0x319d7fb1
// declared property setter: - (void)setToInterfaceOrientation:(int)interfaceOrientation;	// 0x319d7f5d
// declared property setter: - (void)setToViewController:(id)viewController;	// 0x319d7f7d
// declared property getter: - (id)toContainerViewController;	// 0x319d7fa1
// declared property getter: - (int)toInterfaceOrientation;	// 0x319d7f4d
// declared property getter: - (id)toViewController;	// 0x319d7f6d
- (void)transition:(unsigned)transition;	// 0x319d7d45
- (void)willBeginTransition:(unsigned)transition;	// 0x319d7755
@end

