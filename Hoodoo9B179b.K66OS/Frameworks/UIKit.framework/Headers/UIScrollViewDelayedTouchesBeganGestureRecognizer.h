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
@private
	UIDelayedAction *_touchDelay;	// 56 = 0x38
	CGPoint _startScreenLocation;	// 60 = 0x3c
}
- (void)_resetGestureRecognizer;	// 0x32fc2911
- (void)clearTimer;	// 0x32ee4509
- (void)dealloc;	// 0x32ee44c9
- (void)sendDelayedTouches;	// 0x32ffcfe9
- (void)sendTouchesShouldBeginForDelayedTouches:(id)sendTouches;	// 0x32fbbab9
- (void)sendTouchesShouldBeginForTouches:(id)sendTouches withEvent:(id)event;	// 0x3300e445
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x32fb92f5
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x3301a45d
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x32fbba49
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x32fdcb59
@end

