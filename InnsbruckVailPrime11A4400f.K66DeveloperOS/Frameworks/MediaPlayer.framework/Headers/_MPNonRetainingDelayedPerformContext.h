/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import </libobjc.A.h>

@class NSArray, NSRunLoop;

@interface _MPNonRetainingDelayedPerformContext : NSObject {
	id target;	// 4 = 0x4
	SEL selector;	// 8 = 0x8
	id argument;	// 12 = 0xc
	NSRunLoop *rl;	// 16 = 0x10
	NSArray *modes;	// 20 = 0x14
	CFRunLoopTimerRef dperf;	// 24 = 0x18
	CFArrayRef dperfs;	// 28 = 0x1c
}
@end

