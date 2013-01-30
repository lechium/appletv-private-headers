/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIInternalEvent.h"
#import "UIKit-Structs.h"

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface UITouchesEvent : UIInternalEvent {
	NSMutableSet *_touches;	// 16 = 0x10
	CFDictionaryRef _keyedTouches;	// 20 = 0x14
	CFDictionaryRef _keyedTouchesByWindow;	// 24 = 0x18
	CFDictionaryRef _gestureRecognizersByWindow;	// 28 = 0x1c
}
- (BOOL)_addGestureRecognizersForView:(id)view toTouch:(id)touch currentTouchMap:(CFDictionaryRef)map newTouchMap:(CFDictionaryRef)map4;	// 0x32c9a905
- (void)_addTouch:(id)touch forDelayedDelivery:(BOOL)delayedDelivery;	// 0x32c9a621
- (id)_allTouches;	// 0x32ee2a4d
- (void)_clearTouches;	// 0x32c99745
- (void)_clearViewForTouch:(id)touch;	// 0x32c9c475
- (id)_cloneEvent;	// 0x32da48f9
- (void)_dismissSharedCalloutBarIfNeeded;	// 0x32c9ad55
- (id)_firstTouchForView:(id)view;	// 0x32d6e4b1
- (id)_gestureRecognizersForWindow:(id)window;	// 0x32c9b581
- (id)_init;	// 0x32cdce5d
- (id)_initWithEvent:(GSEventRef)event touches:(id)touches;	// 0x32d6be11
- (void)_invalidateGestureRecognizerForWindowCache;	// 0x32cb7955
- (void)_moveTouchesFromView:(id)view toView:(id)view2;	// 0x32ee2a71
- (void)_removeTouch:(id)touch;	// 0x32c9c279
- (void)_removeTouch:(id)touch fromGestureRecognizer:(id)gestureRecognizer;	// 0x32d6ebf5
- (void)_removeTouchesForKey:(id)key;	// 0x32c9c525
- (void)_removeTouchesForWindow:(id)window;	// 0x32c9c6a9
- (id)_touchesForGesture:(id)gesture withPhase:(int)phase;	// 0x32d6e349
- (void)_touchesForGesture:(id)gesture withPhase:(int)phase intoSet:(id)set;	// 0x32d6cd49
- (id)_touchesForGestureRecognizer:(id)gestureRecognizer;	// 0x32ee2a5d
- (id)_touchesForKey:(id)key;	// 0x32c9a87d
- (id)_touchesForView:(id)view withPhase:(int)phase;	// 0x32c9bae9
- (id)_touchesForWindow:(id)window;	// 0x32c9acf9
- (id)_viewsForWindow:(id)window;	// 0x32c9b9e5
- (id)_windows;	// 0x32c9afa1
- (id)allTouches;	// 0x32c9b0a5
- (void)dealloc;	// 0x32d6c021
- (id)description;	// 0x32ee2ad9
- (id)touchesForGestureRecognizer:(id)gestureRecognizer;	// 0x32d6ce29
- (id)touchesForView:(id)view;	// 0x32c9bc39
- (id)touchesForWindow:(id)window;	// 0x32c9b6e5
- (int)type;	// 0x32dff549
@end
