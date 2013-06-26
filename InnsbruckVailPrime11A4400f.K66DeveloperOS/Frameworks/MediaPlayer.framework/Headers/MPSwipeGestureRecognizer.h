/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UIKit/UIGestureRecognizer.h>

@class UITouch;

@interface MPSwipeGestureRecognizer : UIGestureRecognizer {
	CGPoint _startLocation;	// 60 = 0x3c
	double _startTime;	// 68 = 0x44
	UITouch *_trackingTouch;	// 76 = 0x4c
	int _swipeDirection;	// 80 = 0x50
}
@property(readonly, assign, nonatomic) int swipeDirection;	// G=0x2e29f689; @synthesize=_swipeDirection
- (id)initWithTarget:(id)target action:(SEL)action;	// 0x2e29f251
- (void).cxx_destruct;	// 0x2e29f699
- (void)dealloc;	// 0x2e29f645
- (void)reset;	// 0x2e29f5f1
// declared property getter: - (int)swipeDirection;	// 0x2e29f689
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x2e29f2ad
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x2e29f58d
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x2e29f529
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x2e29f3a1
@end
