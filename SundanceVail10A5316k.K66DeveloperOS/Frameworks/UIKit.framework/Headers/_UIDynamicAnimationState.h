/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSTimer, UIScreen, CADisplayLink, NSMutableArray;

__attribute__((visibility("hidden")))
@interface _UIDynamicAnimationState : NSObject {
@private
	UIScreen *_screen;	// 4 = 0x4
	CADisplayLink *_displayLink;	// 8 = 0x8
	NSTimer *_timer;	// 12 = 0xc
	NSMutableArray *_activeAnimations;	// 16 = 0x10
	double _lastUpdateTime;	// 20 = 0x14
	BOOL _shouldSchedYield;	// 28 = 0x1c
}
@end

