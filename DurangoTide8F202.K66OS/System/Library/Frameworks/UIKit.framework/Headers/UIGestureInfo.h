/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

@class UIScrollAnimation, UIGestureAnimation;

__attribute__((visibility("hidden")))
@interface UIGestureInfo : NSObject {
@private
	id delegate;	// 4 = 0x4
	int enabledGestures;	// 8 = 0x8
	int rotationState;	// 12 = 0xc
	int zoomState;	// 16 = 0x10
	int panState;	// 20 = 0x14
	CGPoint startGestureInner;	// 24 = 0x18
	CGPoint startGestureOuter;	// 32 = 0x20
	CGPoint startScrollPoint;	// 40 = 0x28
	CGPoint endScrollPoint;	// 48 = 0x30
	CGSize visibleSize;	// 56 = 0x38
	CGRect centerRect;	// 64 = 0x40
	UIGestureAnimation *rotationAnimation;	// 80 = 0x50
	float rotationDegrees;	// 84 = 0x54
	float recentRotationDegrees;	// 88 = 0x58
	float minDegrees;	// 92 = 0x5c
	float maxDegrees;	// 96 = 0x60
	float startDegrees;	// 100 = 0x64
	float endDegrees;	// 104 = 0x68
	UIGestureAnimation *zoomAnimation;	// 108 = 0x6c
	int zoomRubberBandHysteresisCount;	// 112 = 0x70
	float zoomScale;	// 116 = 0x74
	float startScale;	// 120 = 0x78
	float endScale;	// 124 = 0x7c
	float unadjustedScale;	// 128 = 0x80
	float zoomMultiplier;	// 132 = 0x84
	float minScale;	// 136 = 0x88
	float maxScale;	// 140 = 0x8c
	CGPoint zoomFailureWindowPoint;	// 144 = 0x90
	float zoomFailureDuration;	// 152 = 0x98
	float zoomFailureStartScale;	// 156 = 0x9c
	float zoomAnimationProgress;	// 160 = 0xa0
	UIScrollAnimation *scrollAnimation;	// 164 = 0xa4
	struct {
		unsigned pushedRunLoop : 1;
		unsigned isRotatingRight : 1;
		unsigned isZoomRubberBandEnabled : 1;
		unsigned zoomsFromCurrentToMinOrMax : 1;
		unsigned updatesScroller : 1;
		unsigned isAnimatingZoomFailure : 1;
	} flags;	// 168 = 0xa8
}
- (id)init;	// 0x3060f79d
- (void)dealloc;	// 0x3072f50d
@end

