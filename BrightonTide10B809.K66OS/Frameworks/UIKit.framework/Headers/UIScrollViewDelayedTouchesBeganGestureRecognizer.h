/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIGestureRecognizer.h"

@class UIDelayedAction;

__attribute__((visibility("hidden")))
@interface UIScrollViewDelayedTouchesBeganGestureRecognizer : UIGestureRecognizer {
	UIDelayedAction *_touchDelay;	// 56 = 0x38
	CGPoint _startScreenLocation;	// 60 = 0x3c
}
- (void)_resetGestureRecognizer;	// 0x32c05c65
- (void)clearTimer;	// 0x32bfdc89
- (void)dealloc;	// 0x32c293ad
- (void)sendDelayedTouches;	// 0x32c8c7d5
- (void)sendTouchesShouldBeginForDelayedTouches:(id)sendTouches;	// 0x32bff64d
- (void)sendTouchesShouldBeginForTouches:(id)sendTouches withEvent:(id)event;	// 0x32c7ce05
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x32bfdb45
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x32c8c30d
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x32bff5c9
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x32c1e2a9
@end
