/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class UIView;

__attribute__((visibility("hidden")))
@interface UIViewTapInfo : NSObject {
	id _delegate;	// 4 = 0x4
	UIView *_view;	// 8 = 0x8
	int _tapDownCount;	// 12 = 0xc
	int _fingerCount;	// 16 = 0x10
	float _multiTapDelay;	// 20 = 0x14
	float _rejectAsTapThrehold;	// 24 = 0x18
	float _viewTouchPauseThreshold;	// 28 = 0x1c
	CGPoint _startPosition;	// 32 = 0x20
	double _startTime;	// 40 = 0x28
	struct {
		unsigned shouldSendTouchPauseUp : 1;
		unsigned delegateViewHandleTapWithCountEvent : 1;
		unsigned delegateViewHandleTapWithCountEventFingerCount : 1;
		unsigned delegateViewHandleTouchPauseIsDown : 1;
		unsigned reserved : 28;
	} _tapInfoFlags;	// 48 = 0x30
}
- (id)initWithDelegate:(id)delegate view:(id)view;	// 0x32ccafa5
- (BOOL)_eventLocationConsideredMovement:(GSEventRef)movement;	// 0x32ccb711
- (void)_handleTapWithCount:(int)count event:(GSEventRef)event;	// 0x32ccb259
- (void)_sendTouchPauseDownIfNecessary;	// 0x32ccb4a1
- (void)_sendTouchPauseUpIfNecessary;	// 0x32ccb535
- (BOOL)cancelMouseTracking;	// 0x32ccb9b9
- (void)clearTapState;	// 0x32ccb055
- (void)handleDoubleTapEvent:(GSEventRef)event;	// 0x32ccb365
- (void)handleSingleTapEvent:(GSEventRef)event;	// 0x32ccb351
- (void)mouseDown:(GSEventRef)down;	// 0x32ccb5b1
- (void)mouseDragged:(GSEventRef)dragged;	// 0x32ccb7a1
- (void)mouseUp:(GSEventRef)up;	// 0x32ccb829
- (void)releaseAndClearWeakRefs;	// 0x32ccaffd
- (void)scheduleSingleTapHandlerForEvent:(GSEventRef)event;	// 0x32ccb379
- (void)setDelegate:(id)delegate;	// 0x32ccb0b5
@end

